module.exports = grammar({
	name: "zit",

	extras: (_$) => [],

	conflicts: ($) => [[$.task, $.headline], [$.description]],
	inline: ($) => [$.empty_line],

	rules: {
		document: ($) =>
			seq(
			repeat(choice($.comment, $.headline, seq($.task, "\n"), $.empty_line)),
				optional($.task),
			),
		headline: (_$) => seq(/[^\/\[\n][^\n]+/, "\n"),
		comment: (_$) => seq("//", /[^\n]*/, "\n"),
		empty_line: (_$) => seq(repeat(" "), "\n"),
		task: ($) =>
			choice(
				$.open_task,
				$.checked_task,
				$.ongoing_task,
				$.obsolete_task,
				$.in_question_task,
				$.blocked_task,
				$.delegated_task,
				$.in_review_task,
			),
		indent: ($) => seq(token(/[ ]{4}/), $.content_line),

		// Zit enhancements
		task_id: (_$) =>
			token(
				prec(1, seq("@", /[a-zA-Z0-9]+/, repeat(seq(".", /[a-zA-Z0-9]+/)))),
			),

		external_issue: (_$) =>
			token(
				prec(
					1,
					choice(
						seq("linear:/", /[a-zA-Z0-9-]+/, "/", /[A-Z]+-\d+/),
						seq("jira:", /[A-Z]+-\d+/),
						seq(
							"gh:",
							/[a-zA-Z0-9-]+/,
							"/",
							/[a-zA-Z0-9\-._]+/,
							"#",
							/[a-fA-F0-9]+/,
						),
					),
				),
			),

		link: (_$) =>
			token(
				prec(
					10,
					seq(
						choice(
							"http://",
							"https://",
							"ssh://",
							"ftp://",
							"sftp://",
							"file://",
							"attach://",
							"mailto://",
							"git://",
							"ws://",
							"wss://",
						),
						/[^\s\n]+/,
					),
				),
			),

		progress: (_$) => token(prec(1, seq(/\d+/, "/", /[1-9]\d*/))),
		time_estimate: (_$) =>
			token(prec(1, seq("~", /\d+(\.\d+)?/, choice("h", "m", "d")))),
		time_spent: (_$) =>
			token(prec(1, seq(":", /\d+(\.\d+)?/, choice("h", "m", "d")))),

		dependency: (_$) =>
			token(
				choice(
					seq("-> blocks:", /[a-zA-Z0-9.]+/, repeat(seq(",", /[a-zA-Z0-9.]+/))),
					seq(
						"-> depends:",
						/[a-zA-Z0-9.]+/,
						repeat(seq(",", /[a-zA-Z0-9.]+/)),
					),
				),
			),

		effort_estimate: (_$) =>
			token(
				prec(
					1,
					choice(
						seq("effort:", choice("XS", "S", "M", "L", "XL", "XXL")),
						seq("points:", /\d+/),
					),
				),
			),
		assignee: (_$) =>
			token(
				seq("-> assigned:", /[a-zA-Z0-9_]+/, repeat(seq(",", /[a-zA-Z0-9_]+/))),
			),

		child_reference: (_$) =>
			token(seq("child:", /[a-zA-Z0-9.]+/, repeat(seq(",", /[a-zA-Z0-9.]+/)))),

		recurrence: (_$) =>
			token(
				choice(
					seq(
						"~every:",
						choice("mon", "tue", "wed", "thu", "fri", "sat", "sun"),
						repeat(
							seq(",", choice("mon", "tue", "wed", "thu", "fri", "sat", "sun")),
						),
					),
					"~daily",
					"~weekly",
					"~monthly",
					"~yearly",
					seq("~monthly:", choice("1st", "2nd", "3rd", /\d+th/, "last")),
					seq("~yearly:", /\d{4}-\d{2}-\d{2}/),
				),
			),

		date_range: (_$) =>
			token(
				seq(
					"->",
					optional(" "),
					choice(
						seq(/\d{4}-\d{2}-\d{2}/, "..", /\d{4}-\d{2}-\d{2}/),
						seq(/\d{4}-\d{2}/, "..", /\d{4}-\d{2}/),
						seq(/\d{4}-W\d{2}/, "..", /\d{4}-W\d{2}/),
						seq(/\d{4}-Q[1-4]/, "..", /\d{4}-Q[1-4]/),
						seq(/\d{4}/, "..", /\d{4}/),
					),
				),
			),

		main_line: ($) =>
			repeat1(
				choice(
					$.task_id,
					$.external_issue,
					$.link,
					$.progress,
					$.time_estimate,
					$.time_spent,
					$.effort_estimate,
					$.tag,
					$.context_tag,
					$.metadata,
					$.dependency,
					$.assignee,
					$.child_reference,
					$.recurrence,
					$.date_range,
					$.due_date,
					$.scheduled_date,
					$.text,
					" ",
				),
			),
		content_line: ($) =>
			repeat1(
				choice(
					$.task_id,
					$.external_issue,
					$.link,
					$.progress,
					$.time_estimate,
					$.time_spent,
					$.effort_estimate,
					$.tag,
					$.context_tag,
					$.metadata,
					$.dependency,
					$.assignee,
					$.child_reference,
					$.recurrence,
					$.date_range,
					$.due_date,
					$.scheduled_date,
					$.text,
					" ",
				),
			),
		text: (_$) => prec(-1, /[^@#+:~\-\d!. \n][^@#+:~\-\n]*/),
		context_tag: (_$) =>
			token(
				prec(
					1,
					choice(
						/\+[a-zA-Z0-9_]+/,
						/\+[a-zA-Z0-9_]+=\w+/,
						/\+[a-zA-Z0-9_]+="[^"]+"/,
						/\+[a-zA-Z0-9_]+='[^']+'/,
					),
				),
			),

		metadata: (_$) =>
			token(
				prec(
					1,
					choice(
						seq("meta:", /[a-zA-Z0-9_]+/, "=", /[a-zA-Z0-9_-]+/),
						seq("meta:", /[a-zA-Z0-9_]+/, "=", '"', /[^"]+/, '"'),
						seq("meta:", /[a-zA-Z0-9_]+/, "=", "'", /[^']+/, "'"),
					),
				),
			),

		tag: (_$) =>
			token(
				choice(
					/#[a-zA-Z0-9_]+/,
					/#[a-zA-Z0-9_]+=\w+/,
					/#[a-zA-Z0-9_]+="[^"]+"/,
					/#[a-zA-Z0-9_]+='[^']+'/,
				),
			),

		due_date: (_$) =>
			token(
				seq(
					"->",
					optional(" "),
					choice(
						/\d{4}-\d{2}-\d{2}/, // YYYY-MM-DD
						/\d{4}\/\d{2}\/\d{2}/, // YYYY/MM/DD
						/\d{4}-\d{2}/, // YYYY-MM
						/\d{4}-W\d{2}/, // YYYY-Www
						/\d{4}-Q[1-4]/, // YYYY-Qq
						/\d{4}/, // YYYY
					),
				),
			),

		scheduled_date: (_$) =>
			token(
				seq(
					"scheduled:",
					choice(
						/\d{4}-\d{2}-\d{2}/, // YYYY-MM-DD
						/\d{4}\/\d{2}\/\d{2}/, // YYYY/MM/DD
						/\d{4}-\d{2}/, // YYYY-MM
						/\d{4}-W\d{2}/, // YYYY-Www
						/\d{4}-Q[1-4]/, // YYYY-Qq
						/\d{4}/, // YYYY
					),
				),
			),

		open_checkbox: (_$) => token(seq("[ ]")),
		open_task: ($) =>
			seq($.open_checkbox, optional(seq(" ", optional($.description)))),
		checked_checkbox: (_$) => token(seq("[x]")),
		checked_task: ($) =>
			seq($.checked_checkbox, optional(seq(" ", optional($.description)))),
		ongoing_checkbox: (_$) => token(seq("[@]")),
		ongoing_task: ($) =>
			seq($.ongoing_checkbox, optional(seq(" ", optional($.description)))),
		obsolete_checkbox: (_$) => token(seq("[~]")),
		obsolete_task: ($) =>
			seq($.obsolete_checkbox, optional(seq(" ", optional($.description)))),
		in_question_checkbox: (_$) => token(seq("[?]")),
		in_question_task: ($) =>
			seq($.in_question_checkbox, optional(seq(" ", optional($.description)))),

		description: ($) =>
			choice(
				seq($.priority, " ", $.main_line),
				seq($.priority, " ", $.main_line, "\n", repeat1(seq($.indent, "\n"))),
				seq(
					$.priority,
					" ",
					$.main_line,
					"\n",
					repeat(seq($.indent, "\n")),
					$.indent,
				),
				$.main_line,
				seq($.main_line, "\n", repeat1(seq($.indent, "\n"))),
				seq($.main_line, "\n", repeat(seq($.indent, "\n")), $.indent),
			),

		priority: (_$) => choice(/!p[1-9]\d*/, /!+/, /!+\.+/, /\.+!+/, /\.\.+/),

		blocked_checkbox: (_$) => token(seq("[!]")),
		blocked_task: ($) =>
			seq($.blocked_checkbox, optional(seq(" ", optional($.description)))),
		delegated_checkbox: (_$) => token(seq("[>]")),
		delegated_task: ($) =>
			seq($.delegated_checkbox, optional(seq(" ", optional($.description)))),
		in_review_checkbox: (_$) => token(seq("[*]")),
		in_review_task: ($) =>
			seq($.in_review_checkbox, optional(seq(" ", optional($.description)))),
	},
});
