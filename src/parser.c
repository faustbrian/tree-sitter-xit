#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_SPACE = 5,
  aux_sym_indent_token1 = 6,
  sym_task_id = 7,
  sym_external_issue = 8,
  sym_link = 9,
  sym_progress = 10,
  sym_time_estimate = 11,
  sym_time_spent = 12,
  sym_dependency = 13,
  sym_effort_estimate = 14,
  sym_assignee = 15,
  sym_child_reference = 16,
  sym_recurrence = 17,
  sym_date_range = 18,
  aux_sym_text_token1 = 19,
  sym_context_tag = 20,
  sym_metadata = 21,
  sym_tag = 22,
  sym_due_date = 23,
  sym_scheduled_date = 24,
  sym_open_checkbox = 25,
  sym_checked_checkbox = 26,
  sym_ongoing_checkbox = 27,
  sym_obsolete_checkbox = 28,
  sym_in_question_checkbox = 29,
  aux_sym_priority_token1 = 30,
  aux_sym_priority_token2 = 31,
  aux_sym_priority_token3 = 32,
  aux_sym_priority_token4 = 33,
  aux_sym_priority_token5 = 34,
  sym_blocked_checkbox = 35,
  sym_delegated_checkbox = 36,
  sym_in_review_checkbox = 37,
  sym_document = 38,
  sym_headline = 39,
  sym_comment = 40,
  sym_task = 41,
  sym_indent = 42,
  sym_main_line = 43,
  sym_content_line = 44,
  sym_text = 45,
  sym_open_task = 46,
  sym_checked_task = 47,
  sym_ongoing_task = 48,
  sym_obsolete_task = 49,
  sym_in_question_task = 50,
  sym_description = 51,
  sym_priority = 52,
  sym_blocked_task = 53,
  sym_delegated_task = 54,
  sym_in_review_task = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_empty_line_repeat1 = 57,
  aux_sym_main_line_repeat1 = 58,
  aux_sym_description_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SPACE] = " ",
  [aux_sym_indent_token1] = "indent_token1",
  [sym_task_id] = "task_id",
  [sym_external_issue] = "external_issue",
  [sym_link] = "link",
  [sym_progress] = "progress",
  [sym_time_estimate] = "time_estimate",
  [sym_time_spent] = "time_spent",
  [sym_dependency] = "dependency",
  [sym_effort_estimate] = "effort_estimate",
  [sym_assignee] = "assignee",
  [sym_child_reference] = "child_reference",
  [sym_recurrence] = "recurrence",
  [sym_date_range] = "date_range",
  [aux_sym_text_token1] = "text_token1",
  [sym_context_tag] = "context_tag",
  [sym_metadata] = "metadata",
  [sym_tag] = "tag",
  [sym_due_date] = "due_date",
  [sym_scheduled_date] = "scheduled_date",
  [sym_open_checkbox] = "open_checkbox",
  [sym_checked_checkbox] = "checked_checkbox",
  [sym_ongoing_checkbox] = "ongoing_checkbox",
  [sym_obsolete_checkbox] = "obsolete_checkbox",
  [sym_in_question_checkbox] = "in_question_checkbox",
  [aux_sym_priority_token1] = "priority_token1",
  [aux_sym_priority_token2] = "priority_token2",
  [aux_sym_priority_token3] = "priority_token3",
  [aux_sym_priority_token4] = "priority_token4",
  [aux_sym_priority_token5] = "priority_token5",
  [sym_blocked_checkbox] = "blocked_checkbox",
  [sym_delegated_checkbox] = "delegated_checkbox",
  [sym_in_review_checkbox] = "in_review_checkbox",
  [sym_document] = "document",
  [sym_headline] = "headline",
  [sym_comment] = "comment",
  [sym_task] = "task",
  [sym_indent] = "indent",
  [sym_main_line] = "main_line",
  [sym_content_line] = "content_line",
  [sym_text] = "text",
  [sym_open_task] = "open_task",
  [sym_checked_task] = "checked_task",
  [sym_ongoing_task] = "ongoing_task",
  [sym_obsolete_task] = "obsolete_task",
  [sym_in_question_task] = "in_question_task",
  [sym_description] = "description",
  [sym_priority] = "priority",
  [sym_blocked_task] = "blocked_task",
  [sym_delegated_task] = "delegated_task",
  [sym_in_review_task] = "in_review_task",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_empty_line_repeat1] = "empty_line_repeat1",
  [aux_sym_main_line_repeat1] = "main_line_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_indent_token1] = aux_sym_indent_token1,
  [sym_task_id] = sym_task_id,
  [sym_external_issue] = sym_external_issue,
  [sym_link] = sym_link,
  [sym_progress] = sym_progress,
  [sym_time_estimate] = sym_time_estimate,
  [sym_time_spent] = sym_time_spent,
  [sym_dependency] = sym_dependency,
  [sym_effort_estimate] = sym_effort_estimate,
  [sym_assignee] = sym_assignee,
  [sym_child_reference] = sym_child_reference,
  [sym_recurrence] = sym_recurrence,
  [sym_date_range] = sym_date_range,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_context_tag] = sym_context_tag,
  [sym_metadata] = sym_metadata,
  [sym_tag] = sym_tag,
  [sym_due_date] = sym_due_date,
  [sym_scheduled_date] = sym_scheduled_date,
  [sym_open_checkbox] = sym_open_checkbox,
  [sym_checked_checkbox] = sym_checked_checkbox,
  [sym_ongoing_checkbox] = sym_ongoing_checkbox,
  [sym_obsolete_checkbox] = sym_obsolete_checkbox,
  [sym_in_question_checkbox] = sym_in_question_checkbox,
  [aux_sym_priority_token1] = aux_sym_priority_token1,
  [aux_sym_priority_token2] = aux_sym_priority_token2,
  [aux_sym_priority_token3] = aux_sym_priority_token3,
  [aux_sym_priority_token4] = aux_sym_priority_token4,
  [aux_sym_priority_token5] = aux_sym_priority_token5,
  [sym_blocked_checkbox] = sym_blocked_checkbox,
  [sym_delegated_checkbox] = sym_delegated_checkbox,
  [sym_in_review_checkbox] = sym_in_review_checkbox,
  [sym_document] = sym_document,
  [sym_headline] = sym_headline,
  [sym_comment] = sym_comment,
  [sym_task] = sym_task,
  [sym_indent] = sym_indent,
  [sym_main_line] = sym_main_line,
  [sym_content_line] = sym_content_line,
  [sym_text] = sym_text,
  [sym_open_task] = sym_open_task,
  [sym_checked_task] = sym_checked_task,
  [sym_ongoing_task] = sym_ongoing_task,
  [sym_obsolete_task] = sym_obsolete_task,
  [sym_in_question_task] = sym_in_question_task,
  [sym_description] = sym_description,
  [sym_priority] = sym_priority,
  [sym_blocked_task] = sym_blocked_task,
  [sym_delegated_task] = sym_delegated_task,
  [sym_in_review_task] = sym_in_review_task,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_empty_line_repeat1] = aux_sym_empty_line_repeat1,
  [aux_sym_main_line_repeat1] = aux_sym_main_line_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_indent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_task_id] = {
    .visible = true,
    .named = true,
  },
  [sym_external_issue] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_progress] = {
    .visible = true,
    .named = true,
  },
  [sym_time_estimate] = {
    .visible = true,
    .named = true,
  },
  [sym_time_spent] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_effort_estimate] = {
    .visible = true,
    .named = true,
  },
  [sym_assignee] = {
    .visible = true,
    .named = true,
  },
  [sym_child_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_recurrence] = {
    .visible = true,
    .named = true,
  },
  [sym_date_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_context_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_due_date] = {
    .visible = true,
    .named = true,
  },
  [sym_scheduled_date] = {
    .visible = true,
    .named = true,
  },
  [sym_open_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_in_question_checkbox] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_priority_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_priority_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_blocked_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_delegated_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_in_review_checkbox] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_main_line] = {
    .visible = true,
    .named = true,
  },
  [sym_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_open_task] = {
    .visible = true,
    .named = true,
  },
  [sym_checked_task] = {
    .visible = true,
    .named = true,
  },
  [sym_ongoing_task] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_task] = {
    .visible = true,
    .named = true,
  },
  [sym_in_question_task] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_blocked_task] = {
    .visible = true,
    .named = true,
  },
  [sym_delegated_task] = {
    .visible = true,
    .named = true,
  },
  [sym_in_review_task] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_empty_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_main_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static TSCharacterRange aux_sym_text_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, 0x1f}, {'"', '"'}, {'$', '*'}, {',', ','}, {'/', '/'}, {';', '?'}, {'A', '}'},
  {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\n', 271,
        ' ', 275,
        '!', 383,
        '#', 254,
        '+', 255,
        '-', 55,
        '.', 6,
        '/', 31,
        ':', 193,
        '@', 249,
        '[', 1,
        'a', 168,
        'c', 113,
        'e', 105,
        'f', 116,
        'g', 109,
        'h', 172,
        'j', 117,
        'l', 118,
        'm', 74,
        'p', 146,
        's', 81,
        'w', 158,
        '~', 84,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 63,
        '!', 64,
        '*', 65,
        '>', 66,
        '?', 67,
        '@', 68,
        'x', 69,
        '~', 70,
      );
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(385);
      if (lookahead == '.') ADVANCE(386);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(359);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(362);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(233);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(239);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(273);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(251);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(214);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(219);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead == '3') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(250);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(248);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(252);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(256);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(257);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(236);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(2);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(286);
      END_STATE();
    case 57:
      if (lookahead == 'Q') ADVANCE(188);
      if (lookahead == 'W') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 58:
      if (lookahead == 'Q') ADVANCE(190);
      if (lookahead == 'W') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'Q') ADVANCE(189);
      END_STATE();
    case 60:
      if (lookahead == 'W') ADVANCE(213);
      END_STATE();
    case 61:
      if (lookahead == 'X') ADVANCE(62);
      if (lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(286);
      END_STATE();
    case 62:
      if (lookahead == 'X') ADVANCE(56);
      if (lookahead == 'L' ||
          lookahead == 'S') ADVANCE(286);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(387);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(389);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(388);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(380);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(379);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 186:
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(370);
      END_STATE();
    case 189:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(294);
      END_STATE();
    case 190:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(373);
      END_STATE();
    case 191:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 192:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 248:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 250:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 251:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 252:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 253:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 258:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(281);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(10);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(14);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(15);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(16);
      END_STATE();
    case 267:
      if (eof) ADVANCE(270);
      ADVANCE_MAP(
        '\n', 271,
        ' ', 275,
        '!', 383,
        '#', 254,
        '+', 255,
        '-', 55,
        '.', 6,
        ':', 193,
        '@', 249,
        'a', 349,
        'c', 323,
        'e', 319,
        'f', 325,
        'g', 321,
        'h', 354,
        'j', 326,
        'l', 327,
        'm', 308,
        'p', 339,
        's', 310,
        'w', 345,
        '~', 84,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 268:
      if (eof) ADVANCE(270);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 269:
      if (eof) ADVANCE(270);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_indent_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_task_id);
      if (lookahead == '.') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_external_issue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_external_issue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_link);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_progress);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_time_estimate);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_time_spent);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_dependency);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_effort_estimate);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_effort_estimate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_assignee);
      if (lookahead == ',') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_child_reference);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_recurrence);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == ',') ADVANCE(107);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_recurrence);
      if (lookahead == ':') ADVANCE(235);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_date_range);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(358);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(311);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(296);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(343);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(356);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(301);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 's') ADVANCE(322);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(322);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(357);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(297);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(304);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(312);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(307);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(314);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(320);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(338);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(352);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(328);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(316);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 't') ADVANCE(341);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(342);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(335);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(332);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(336);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(334);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(315);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(313);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(318);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(353);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(317);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(350);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(344);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(329);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(299);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(306);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(302);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(355);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(299);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(303);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(341);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(305);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(348);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(346);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(340);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(337);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(351);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(298);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(309);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(333);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if ((!eof && set_contains(aux_sym_text_token1_character_set_1, 9, lookahead)) ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_context_tag);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_context_tag);
      if (lookahead == '=') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_context_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_metadata);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_metadata);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '=') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_due_date);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(211);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_due_date);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_scheduled_date);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_scheduled_date);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(229);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_scheduled_date);
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_open_checkbox);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_checked_checkbox);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ongoing_checkbox);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_obsolete_checkbox);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_in_question_checkbox);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_priority_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '!') ADVANCE(382);
      if (lookahead == '.') ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_priority_token2);
      if (lookahead == '!') ADVANCE(382);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_priority_token3);
      if (lookahead == '.') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_priority_token4);
      if (lookahead == '!') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_priority_token5);
      if (lookahead == '!') ADVANCE(385);
      if (lookahead == '.') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_blocked_checkbox);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_delegated_checkbox);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_in_review_checkbox);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 268},
  [2] = {.lex_state = 267},
  [3] = {.lex_state = 267},
  [4] = {.lex_state = 267},
  [5] = {.lex_state = 267},
  [6] = {.lex_state = 267},
  [7] = {.lex_state = 267},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 267},
  [10] = {.lex_state = 268},
  [11] = {.lex_state = 268},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 267},
  [15] = {.lex_state = 267},
  [16] = {.lex_state = 267},
  [17] = {.lex_state = 267},
  [18] = {.lex_state = 268},
  [19] = {.lex_state = 268},
  [20] = {.lex_state = 268},
  [21] = {.lex_state = 269},
  [22] = {.lex_state = 269},
  [23] = {.lex_state = 269},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 269},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 269},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 274},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [sym_task_id] = ACTIONS(1),
    [sym_external_issue] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_progress] = ACTIONS(1),
    [sym_time_estimate] = ACTIONS(1),
    [sym_time_spent] = ACTIONS(1),
    [sym_dependency] = ACTIONS(1),
    [sym_effort_estimate] = ACTIONS(1),
    [sym_assignee] = ACTIONS(1),
    [sym_child_reference] = ACTIONS(1),
    [sym_recurrence] = ACTIONS(1),
    [sym_date_range] = ACTIONS(1),
    [sym_context_tag] = ACTIONS(1),
    [sym_metadata] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_due_date] = ACTIONS(1),
    [sym_scheduled_date] = ACTIONS(1),
    [sym_open_checkbox] = ACTIONS(1),
    [sym_checked_checkbox] = ACTIONS(1),
    [sym_ongoing_checkbox] = ACTIONS(1),
    [sym_obsolete_checkbox] = ACTIONS(1),
    [sym_in_question_checkbox] = ACTIONS(1),
    [aux_sym_priority_token1] = ACTIONS(1),
    [aux_sym_priority_token2] = ACTIONS(1),
    [aux_sym_priority_token3] = ACTIONS(1),
    [aux_sym_priority_token4] = ACTIONS(1),
    [aux_sym_priority_token5] = ACTIONS(1),
    [sym_blocked_checkbox] = ACTIONS(1),
    [sym_delegated_checkbox] = ACTIONS(1),
    [sym_in_review_checkbox] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym_headline] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_task] = STATE(46),
    [sym_open_task] = STATE(47),
    [sym_checked_task] = STATE(47),
    [sym_ongoing_task] = STATE(47),
    [sym_obsolete_task] = STATE(47),
    [sym_in_question_task] = STATE(47),
    [sym_blocked_task] = STATE(47),
    [sym_delegated_task] = STATE(47),
    [sym_in_review_task] = STATE(47),
    [aux_sym_document_repeat1] = STATE(10),
    [aux_sym_empty_line_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_headline_token1] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SPACE] = ACTIONS(11),
    [sym_open_checkbox] = ACTIONS(13),
    [sym_checked_checkbox] = ACTIONS(15),
    [sym_ongoing_checkbox] = ACTIONS(17),
    [sym_obsolete_checkbox] = ACTIONS(19),
    [sym_in_question_checkbox] = ACTIONS(21),
    [sym_blocked_checkbox] = ACTIONS(23),
    [sym_delegated_checkbox] = ACTIONS(25),
    [sym_in_review_checkbox] = ACTIONS(27),
  },
  [2] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(41),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [3] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(51),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [4] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(38),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [5] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(39),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [6] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(40),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [7] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(44),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [8] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(42),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
  [9] = {
    [sym_main_line] = STATE(53),
    [sym_text] = STATE(12),
    [sym_description] = STATE(43),
    [sym_priority] = STATE(61),
    [aux_sym_main_line_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_SPACE] = ACTIONS(31),
    [sym_task_id] = ACTIONS(31),
    [sym_external_issue] = ACTIONS(31),
    [sym_link] = ACTIONS(31),
    [sym_progress] = ACTIONS(31),
    [sym_time_estimate] = ACTIONS(31),
    [sym_time_spent] = ACTIONS(31),
    [sym_dependency] = ACTIONS(31),
    [sym_effort_estimate] = ACTIONS(31),
    [sym_assignee] = ACTIONS(31),
    [sym_child_reference] = ACTIONS(31),
    [sym_recurrence] = ACTIONS(31),
    [sym_date_range] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(33),
    [sym_context_tag] = ACTIONS(31),
    [sym_metadata] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym_due_date] = ACTIONS(35),
    [sym_scheduled_date] = ACTIONS(31),
    [aux_sym_priority_token1] = ACTIONS(37),
    [aux_sym_priority_token2] = ACTIONS(39),
    [aux_sym_priority_token3] = ACTIONS(37),
    [aux_sym_priority_token4] = ACTIONS(37),
    [aux_sym_priority_token5] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(7), 1,
      aux_sym_headline_token1,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SPACE,
    ACTIONS(13), 1,
      sym_open_checkbox,
    ACTIONS(15), 1,
      sym_checked_checkbox,
    ACTIONS(17), 1,
      sym_ongoing_checkbox,
    ACTIONS(19), 1,
      sym_obsolete_checkbox,
    ACTIONS(21), 1,
      sym_in_question_checkbox,
    ACTIONS(23), 1,
      sym_blocked_checkbox,
    ACTIONS(25), 1,
      sym_delegated_checkbox,
    ACTIONS(27), 1,
      sym_in_review_checkbox,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_empty_line_repeat1,
    STATE(45), 1,
      sym_task,
    STATE(11), 3,
      sym_headline,
      sym_comment,
      aux_sym_document_repeat1,
    STATE(47), 8,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
      sym_in_question_task,
      sym_blocked_task,
      sym_delegated_task,
      sym_in_review_task,
  [61] = 17,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(64), 1,
      aux_sym_headline_token1,
    ACTIONS(67), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_SPACE,
    ACTIONS(73), 1,
      sym_open_checkbox,
    ACTIONS(76), 1,
      sym_checked_checkbox,
    ACTIONS(79), 1,
      sym_ongoing_checkbox,
    ACTIONS(82), 1,
      sym_obsolete_checkbox,
    ACTIONS(85), 1,
      sym_in_question_checkbox,
    ACTIONS(88), 1,
      sym_blocked_checkbox,
    ACTIONS(91), 1,
      sym_delegated_checkbox,
    ACTIONS(94), 1,
      sym_in_review_checkbox,
    STATE(24), 1,
      aux_sym_empty_line_repeat1,
    STATE(55), 1,
      sym_task,
    STATE(11), 3,
      sym_headline,
      sym_comment,
      aux_sym_document_repeat1,
    STATE(47), 8,
      sym_open_task,
      sym_checked_task,
      sym_ongoing_task,
      sym_obsolete_task,
      sym_in_question_task,
      sym_blocked_task,
      sym_delegated_task,
      sym_in_review_task,
  [122] = 5,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(101), 1,
      sym_due_date,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(13), 2,
      sym_text,
      aux_sym_main_line_repeat1,
    ACTIONS(99), 17,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [156] = 5,
    ACTIONS(108), 1,
      aux_sym_text_token1,
    ACTIONS(111), 1,
      sym_due_date,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(13), 2,
      sym_text,
      aux_sym_main_line_repeat1,
    ACTIONS(105), 17,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [190] = 5,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(101), 1,
      sym_due_date,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(13), 2,
      sym_text,
      aux_sym_main_line_repeat1,
    ACTIONS(99), 17,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [224] = 5,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(118), 1,
      sym_due_date,
    STATE(37), 1,
      sym_content_line,
    STATE(14), 2,
      sym_text,
      aux_sym_main_line_repeat1,
    ACTIONS(116), 17,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [257] = 5,
    ACTIONS(33), 1,
      aux_sym_text_token1,
    ACTIONS(35), 1,
      sym_due_date,
    STATE(50), 1,
      sym_main_line,
    STATE(12), 2,
      sym_text,
      aux_sym_main_line_repeat1,
    ACTIONS(31), 17,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [290] = 2,
    ACTIONS(122), 2,
      aux_sym_text_token1,
      sym_due_date,
    ACTIONS(120), 19,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SPACE,
      sym_task_id,
      sym_external_issue,
      sym_link,
      sym_progress,
      sym_time_estimate,
      sym_time_spent,
      sym_dependency,
      sym_effort_estimate,
      sym_assignee,
      sym_child_reference,
      sym_recurrence,
      sym_date_range,
      sym_context_tag,
      sym_metadata,
      sym_tag,
      sym_scheduled_date,
  [316] = 2,
    ACTIONS(126), 1,
      anon_sym_SPACE,
    ACTIONS(124), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_SLASH_SLASH,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
      sym_blocked_checkbox,
      sym_delegated_checkbox,
      sym_in_review_checkbox,
  [334] = 2,
    ACTIONS(128), 1,
      anon_sym_SPACE,
    ACTIONS(59), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_SLASH_SLASH,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
      sym_blocked_checkbox,
      sym_delegated_checkbox,
      sym_in_review_checkbox,
  [352] = 2,
    ACTIONS(132), 1,
      anon_sym_SPACE,
    ACTIONS(130), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      anon_sym_SLASH_SLASH,
      sym_open_checkbox,
      sym_checked_checkbox,
      sym_ongoing_checkbox,
      sym_obsolete_checkbox,
      sym_in_question_checkbox,
      sym_blocked_checkbox,
      sym_delegated_checkbox,
      sym_in_review_checkbox,
  [370] = 4,
    ACTIONS(136), 1,
      aux_sym_indent_token1,
    STATE(22), 1,
      aux_sym_description_repeat1,
    STATE(52), 1,
      sym_indent,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [384] = 4,
    ACTIONS(140), 1,
      aux_sym_indent_token1,
    STATE(22), 1,
      aux_sym_description_repeat1,
    STATE(59), 1,
      sym_indent,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [398] = 4,
    ACTIONS(136), 1,
      aux_sym_indent_token1,
    STATE(22), 1,
      aux_sym_description_repeat1,
    STATE(54), 1,
      sym_indent,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [412] = 3,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_SPACE,
    STATE(27), 1,
      aux_sym_empty_line_repeat1,
  [422] = 2,
    ACTIONS(151), 1,
      anon_sym_SPACE,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [430] = 2,
    ACTIONS(155), 1,
      anon_sym_SPACE,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [438] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_SPACE,
    STATE(27), 1,
      aux_sym_empty_line_repeat1,
  [448] = 2,
    ACTIONS(164), 1,
      anon_sym_SPACE,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [456] = 3,
    ACTIONS(136), 1,
      aux_sym_indent_token1,
    STATE(21), 1,
      aux_sym_description_repeat1,
    STATE(48), 1,
      sym_indent,
  [466] = 2,
    ACTIONS(168), 1,
      anon_sym_SPACE,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [474] = 2,
    ACTIONS(172), 1,
      anon_sym_SPACE,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [482] = 2,
    ACTIONS(176), 1,
      anon_sym_SPACE,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [490] = 1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_indent_token1,
  [496] = 2,
    ACTIONS(180), 1,
      anon_sym_SPACE,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [504] = 3,
    ACTIONS(136), 1,
      aux_sym_indent_token1,
    STATE(23), 1,
      aux_sym_description_repeat1,
    STATE(49), 1,
      sym_indent,
  [514] = 2,
    ACTIONS(184), 1,
      anon_sym_SPACE,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [522] = 1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [527] = 1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [532] = 1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [537] = 1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [542] = 1,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [547] = 1,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [552] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [557] = 1,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [562] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [569] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_LF,
  [576] = 1,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [581] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      anon_sym_LF,
  [588] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_LF,
  [595] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LF,
  [602] = 1,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [607] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_LF,
  [614] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      anon_sym_LF,
  [621] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_LF,
  [628] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [632] = 1,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
  [636] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [640] = 1,
    ACTIONS(236), 1,
      anon_sym_SPACE,
  [644] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [648] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [652] = 1,
    ACTIONS(242), 1,
      anon_sym_SPACE,
  [656] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 422,
  [SMALL_STATE(26)] = 430,
  [SMALL_STATE(27)] = 438,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 466,
  [SMALL_STATE(31)] = 474,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 537,
  [SMALL_STATE(41)] = 542,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 552,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 569,
  [SMALL_STATE(47)] = 576,
  [SMALL_STATE(48)] = 581,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 595,
  [SMALL_STATE(51)] = 602,
  [SMALL_STATE(52)] = 607,
  [SMALL_STATE(53)] = 614,
  [SMALL_STATE(54)] = 621,
  [SMALL_STATE(55)] = 628,
  [SMALL_STATE(56)] = 632,
  [SMALL_STATE(57)] = 636,
  [SMALL_STATE(58)] = 640,
  [SMALL_STATE(59)] = 644,
  [SMALL_STATE(60)] = 648,
  [SMALL_STATE(61)] = 652,
  [SMALL_STATE(62)] = 656,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_review_task, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocked_task, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delegated_task, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_line, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_line_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_line_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_line_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_line_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_line, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delegated_task, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_review_task, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_line_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocked_task, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indent, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checked_task, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ongoing_task, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_task, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_question_task, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocked_task, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delegated_task, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_review_task, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3, 0, 0), SHIFT(33),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 5, 0, 0), SHIFT(33),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 3, 0, 0), SHIFT(35),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_task, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 4, 0, 0), SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 1, 0, 0), SHIFT(29),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 6, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_description, 6, 0, 0), SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_zit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
