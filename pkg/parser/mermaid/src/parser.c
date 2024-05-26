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
#define STATE_COUNT 921
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 372
#define ALIAS_COUNT 21
#define TOKEN_COUNT 172
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  aux_sym_directive_token1 = 2,
  aux_sym_diagram_sequence_token1 = 3,
  aux_sym__sequence_participant_type_token1 = 4,
  aux_sym__sequence_participant_type_token2 = 5,
  aux_sym_sequence_stmt_participant_token1 = 6,
  aux_sym_sequence_stmt_actor_token1 = 7,
  anon_sym_COLON = 8,
  aux_sym_sequence_stmt_autonumber_token1 = 9,
  aux_sym_sequence_stmt_activate_token1 = 10,
  aux_sym_sequence_stmt_deactivate_token1 = 11,
  aux_sym_sequence_stmt_note_token1 = 12,
  aux_sym_sequence_stmt_note_token2 = 13,
  anon_sym_COMMA = 14,
  aux_sym_sequence_stmt_links_token1 = 15,
  aux_sym_sequence_stmt_link_token1 = 16,
  aux_sym_sequence_stmt_properties_token1 = 17,
  aux_sym_sequence_stmt_details_token1 = 18,
  aux_sym_sequence_stmt_title_token1 = 19,
  aux_sym_sequence_stmt_loop_token1 = 20,
  aux_sym_sequence_stmt_loop_token2 = 21,
  aux_sym_sequence_stmt_rect_token1 = 22,
  aux_sym_sequence_stmt_opt_token1 = 23,
  aux_sym_sequence_stmt_alt_token1 = 24,
  aux_sym_sequence_stmt_alt_token2 = 25,
  aux_sym_sequence_stmt_par_token1 = 26,
  aux_sym_sequence_stmt_par_token2 = 27,
  aux_sym_diagram_class_token1 = 28,
  aux_sym_diagram_class_token2 = 29,
  anon_sym_TILDE = 30,
  aux_sym_class_generics_token1 = 31,
  anon_sym_class = 32,
  anon_sym_COLON_COLON_COLON = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_POUND = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_STAR = 41,
  anon_sym_DOLLAR = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  aux_sym_diagram_state_token1 = 45,
  aux_sym_diagram_state_token2 = 46,
  aux_sym_state_stmt_simple_token1 = 47,
  aux_sym_diagram_gantt_token1 = 48,
  aux_sym_gantt_stmt_dateformat_token1 = 49,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 50,
  aux_sym_gantt_stmt_topaxis_token1 = 51,
  aux_sym_gantt_stmt_axisformat_token1 = 52,
  aux_sym_gantt_stmt_includes_token1 = 53,
  aux_sym_gantt_stmt_excludes_token1 = 54,
  aux_sym_gantt_stmt_todaymarker_token1 = 55,
  aux_sym_gantt_stmt_section_token1 = 56,
  aux_sym_diagram_pie_token1 = 57,
  aux_sym_diagram_flow_token1 = 58,
  aux_sym_diagram_flow_token2 = 59,
  anon_sym_SEMI = 60,
  aux_sym_flow_stmt_direction_token1 = 61,
  anon_sym_AMP = 62,
  anon_sym_PIPE = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  anon_sym_LPAREN_LPAREN = 66,
  anon_sym_RPAREN_RPAREN = 67,
  anon_sym_LPAREN_DASH = 68,
  anon_sym_DASH_RPAREN = 69,
  anon_sym_LPAREN_LBRACK = 70,
  anon_sym_RBRACK_RPAREN = 71,
  anon_sym_LBRACK_LBRACK = 72,
  anon_sym_RBRACK_RBRACK = 73,
  anon_sym_LBRACK_PIPE = 74,
  anon_sym_PIPE_RBRACK = 75,
  anon_sym_LBRACK_LPAREN = 76,
  anon_sym_RPAREN_RBRACK = 77,
  anon_sym_LBRACE_LBRACE = 78,
  anon_sym_RBRACE_RBRACE = 79,
  anon_sym_GT = 80,
  anon_sym_LBRACK_SLASH = 81,
  anon_sym_BSLASH_RBRACK = 82,
  anon_sym_LBRACK_BSLASH = 83,
  anon_sym_SLASH_RBRACK = 84,
  anon_sym_subgraph = 85,
  anon_sym_end = 86,
  aux_sym_diagram_er_token1 = 87,
  aux_sym_diagram_mindmap_token1 = 88,
  aux_sym_mmap_markdown_token1 = 89,
  aux_sym_mmap_text_token1 = 90,
  aux_sym_mmap_class_token1 = 91,
  aux_sym_mmap_class_token2 = 92,
  aux_sym_mmap_icon_token1 = 93,
  aux_sym_mmap_icon_token2 = 94,
  sym__whitespace = 95,
  sym__newline = 96,
  sym_comment = 97,
  sym__md_start = 98,
  sym__md_end = 99,
  sym_type_directive = 100,
  aux_sym_direction_tb_token1 = 101,
  aux_sym_direction_bt_token1 = 102,
  aux_sym_direction_rl_token1 = 103,
  aux_sym_direction_lr_token1 = 104,
  aux_sym__sequence_rest_text_token1 = 105,
  sym__sequence_actor_word = 106,
  sym_solid_arrow = 107,
  sym_dotted_arrow = 108,
  sym_solid_open_arrow = 109,
  anon_sym_DASH_DASH_GT = 110,
  sym_solid_cross = 111,
  sym_dotted_cross = 112,
  sym_dotted_point = 113,
  aux_sym_note_placement_left_token1 = 114,
  aux_sym_note_placement_right_token1 = 115,
  sym__class_name = 116,
  sym__alpha_num_token = 117,
  sym__bquote_string = 118,
  sym__dquote_string = 119,
  sym_class_reltype_aggregation = 120,
  anon_sym_LT_PIPE = 121,
  anon_sym_PIPE_GT = 122,
  anon_sym_LT = 123,
  anon_sym_DASH_DASH = 124,
  anon_sym_DOT_DOT = 125,
  aux_sym_class_label_token1 = 126,
  anon_sym_LBRACK_STAR_RBRACK = 127,
  aux_sym_state_name_token1 = 128,
  aux_sym_state_hide_empty_description_token1 = 129,
  sym_state_id = 130,
  aux_sym_state_annotation_fork_token1 = 131,
  aux_sym_state_annotation_fork_token2 = 132,
  aux_sym_state_annotation_join_token1 = 133,
  aux_sym_state_annotation_join_token2 = 134,
  aux_sym_state_annotation_choice_token1 = 135,
  aux_sym_state_annotation_choice_token2 = 136,
  aux_sym_gantt_task_text_token1 = 137,
  sym_gantt_task_data = 138,
  aux_sym_pie_showdata_token1 = 139,
  sym_pie_title = 140,
  aux_sym_pie_label_token1 = 141,
  sym_pie_value = 142,
  aux_sym_flowchart_direction_lr_token1 = 143,
  aux_sym_flowchart_direction_lr_token2 = 144,
  aux_sym_flowchart_direction_rl_token1 = 145,
  aux_sym_flowchart_direction_tb_token1 = 146,
  aux_sym_flowchart_direction_tb_token2 = 147,
  anon_sym_v = 148,
  aux_sym_flowchart_direction_bt_token1 = 149,
  anon_sym_CARET = 150,
  aux_sym_flow_text_literal_token1 = 151,
  sym_flow_text_quoted = 152,
  aux_sym_flow_link_arrow_token1 = 153,
  aux_sym_flow_link_arrow_token2 = 154,
  aux_sym_flow_link_arrow_token3 = 155,
  aux_sym_flow_link_arrow_start_token1 = 156,
  aux_sym_flow_link_arrow_start_token2 = 157,
  aux_sym_flow_link_arrow_start_token3 = 158,
  sym__er_alphanum = 159,
  anon_sym_PIPEo = 160,
  anon_sym_o_PIPE = 161,
  anon_sym_RBRACEo = 162,
  anon_sym_o_LBRACE = 163,
  anon_sym_RBRACE_PIPE = 164,
  anon_sym_PIPE_LBRACE = 165,
  sym_er_cardinarity_only_one = 166,
  anon_sym_DOT_DASH = 167,
  anon_sym_DASH_DOT = 168,
  aux_sym_er_attribute_key_type_pk_token1 = 169,
  aux_sym_er_attribute_key_type_fk_token1 = 170,
  sym__mindmap_text = 171,
  sym_source_file = 172,
  sym_directive = 173,
  sym__direction = 174,
  sym_diagram_sequence = 175,
  sym__sequence_stmt = 176,
  sym__sequence_participant_type = 177,
  sym_sequence_stmt_participant = 178,
  sym_sequence_stmt_actor = 179,
  sym_sequence_actor = 180,
  sym_sequence_stmt_signal = 181,
  sym_sequence_signal_type = 182,
  sym_sequence_text = 183,
  sym_sequence_stmt_autonumber = 184,
  sym_sequence_stmt_activate = 185,
  sym_sequence_stmt_deactivate = 186,
  sym_sequence_stmt_note = 187,
  sym_sequence_stmt_links = 188,
  sym_sequence_stmt_link = 189,
  sym_sequence_stmt_properties = 190,
  sym_sequence_stmt_details = 191,
  sym_sequence_note_placement = 192,
  sym_sequence_stmt_title = 193,
  sym_sequence_stmt_loop = 194,
  sym_sequence_stmt_rect = 195,
  sym_sequence_stmt_opt = 196,
  aux_sym__sequence_subdocument = 197,
  sym_sequence_stmt_alt = 198,
  sym_sequence_stmt_par = 199,
  sym_diagram_class = 200,
  sym__class_stmt = 201,
  sym_class_stmt_relation = 202,
  sym_class_name = 203,
  sym_class_name_body = 204,
  sym_class_generics = 205,
  sym_class_relation = 206,
  sym__class_reltype = 207,
  sym__class_linetype = 208,
  sym_class_stmt_class = 209,
  sym_class_method_line = 210,
  sym_class_annotation_line = 211,
  sym_class_stmt_method = 212,
  sym_class_stmt_annotation = 213,
  sym_diagram_state = 214,
  sym__state_stmt = 215,
  sym_state_stmt_simple = 216,
  sym_state_stmt_arrow = 217,
  sym_state_stmt_composite = 218,
  sym_state_composite_body = 219,
  sym_state_stmt_annotation = 220,
  sym_state_alias = 221,
  sym_state_stmt_hide_empty_description = 222,
  sym__state_annotation = 223,
  sym_state_note = 224,
  sym_state_note_placement = 225,
  sym_diagram_gantt = 226,
  sym__gantt_stmt = 227,
  sym_gantt_stmt_dateformat = 228,
  sym_gantt_stmt_inclusiveenddates = 229,
  sym_gantt_stmt_topaxis = 230,
  sym_gantt_stmt_axisformat = 231,
  sym_gantt_stmt_includes = 232,
  sym_gantt_stmt_excludes = 233,
  sym_gantt_stmt_todaymarker = 234,
  sym_gantt_stmt_title = 235,
  sym_gantt_stmt_section = 236,
  sym_gantt_stmt_task = 237,
  sym_diagram_pie = 238,
  sym__pie_stmt = 239,
  sym_pie_stmt_title = 240,
  sym_pie_stmt_element = 241,
  sym_diagram_flow = 242,
  sym__flowchart_direction = 243,
  sym__flow_stmt = 244,
  sym_flow_stmt_direction = 245,
  sym_flow_stmt_vertice = 246,
  sym_flow_node = 247,
  sym__flow_link = 248,
  sym_flow_link_simplelink = 249,
  sym_flow_link_arrowtext = 250,
  sym_flow_link_middletext = 251,
  sym_flow_arrow_text = 252,
  sym_flow_vertex_id = 253,
  sym_flow_vertex = 254,
  sym__flow_vertex_kind = 255,
  sym_flow_vertex_square = 256,
  sym_flow_vertex_circle = 257,
  sym_flow_vertex_ellipse = 258,
  sym_flow_vertex_stadium = 259,
  sym_flow_vertex_subroutine = 260,
  sym_flow_vertex_rect = 261,
  sym_flow_vertex_cylinder = 262,
  sym_flow_vertex_round = 263,
  sym_flow_vertex_diamond = 264,
  sym_flow_vertex_hexagon = 265,
  sym_flow_vertex_odd = 266,
  sym_flow_vertex_trapezoid = 267,
  sym_flow_vertex_inv_trapezoid = 268,
  sym_flow_vertex_leanright = 269,
  sym_flow_vertex_leanleft = 270,
  sym__flow_text = 271,
  sym_flow_stmt_subgraph = 272,
  sym_flow_stmt_subgraph_inner = 273,
  sym_flow_vertex_text = 274,
  sym_diagram_er = 275,
  sym__er_stmt = 276,
  sym_er_stmt_entity = 277,
  sym_er_stmt_entity_relation = 278,
  sym_er_entity_name = 279,
  sym_er_relation = 280,
  sym__er_cardinarity = 281,
  sym__er_reltype = 282,
  sym_er_role = 283,
  sym_er_stmt_entity_block = 284,
  sym_er_stmt_entity_block_inner = 285,
  sym_er_attribute = 286,
  sym_er_attribute_type = 287,
  sym_er_attribute_name = 288,
  sym__er_attribute_key_type = 289,
  sym_er_attribute_comment = 290,
  sym_diagram_mindmap = 291,
  sym_mmap_node = 292,
  sym_mmap_node_id = 293,
  sym_mmap_markdown = 294,
  sym_mmap_text = 295,
  sym_mmap_node_content = 296,
  sym_mmap_node_square = 297,
  sym_mmap_node_rounded = 298,
  sym_mmap_node_circle = 299,
  sym_mmap_node_cloud = 300,
  sym_mmap_node_bang = 301,
  sym_mmap_node_hexagon = 302,
  sym_mmap_class = 303,
  sym_mmap_icon = 304,
  sym_direction_tb = 305,
  sym_direction_bt = 306,
  sym_direction_rl = 307,
  sym_direction_lr = 308,
  sym__sequence_rest_text = 309,
  sym_dotted_open_arrow = 310,
  sym_solid_point = 311,
  sym_sequence_signal_plus_sign = 312,
  sym_sequence_signal_minus_sign = 313,
  sym_note_placement_left = 314,
  sym_note_placement_right = 315,
  sym_class_reltype_extension = 316,
  sym_class_reltype_composition = 317,
  sym_class_reltype_dependency = 318,
  sym_class_linetype_solid = 319,
  sym_class_linetype_dotted = 320,
  sym_class_label = 321,
  sym_state_name = 322,
  sym_state_arrow = 323,
  sym_state_description = 324,
  sym_state_hide_empty_description = 325,
  sym_state_division = 326,
  sym_state_annotation_fork = 327,
  sym_state_annotation_join = 328,
  sym_state_annotation_choice = 329,
  sym_gantt_meta_format = 330,
  sym_gantt_task_text = 331,
  sym_pie_showdata = 332,
  sym_pie_label = 333,
  sym_flowchart_direction_lr = 334,
  sym_flowchart_direction_rl = 335,
  sym_flowchart_direction_tb = 336,
  sym_flowchart_direction_bt = 337,
  sym_flow_text_literal = 338,
  sym_flow_link_arrow = 339,
  sym_flow_link_arrow_start = 340,
  sym__er_word = 341,
  sym_er_cardinarity_zero_or_one = 342,
  sym_er_cardinarity_zero_or_more = 343,
  sym_er_cardinarity_one_or_more = 344,
  sym_er_reltype_non_identifying = 345,
  sym_er_reltype_identifying = 346,
  sym_er_attribute_key_type_pk = 347,
  sym_er_attribute_key_type_fk = 348,
  aux_sym_source_file_repeat1 = 349,
  aux_sym_diagram_sequence_repeat1 = 350,
  aux_sym_sequence_actor_repeat1 = 351,
  aux_sym_sequence_stmt_alt_repeat1 = 352,
  aux_sym_sequence_stmt_par_repeat1 = 353,
  aux_sym_diagram_class_repeat1 = 354,
  aux_sym_class_name_body_repeat1 = 355,
  aux_sym_class_stmt_class_repeat1 = 356,
  aux_sym_class_method_line_repeat1 = 357,
  aux_sym_diagram_state_repeat1 = 358,
  aux_sym_state_composite_body_repeat1 = 359,
  aux_sym_diagram_gantt_repeat1 = 360,
  aux_sym_diagram_pie_repeat1 = 361,
  aux_sym_diagram_flow_repeat1 = 362,
  aux_sym_flow_stmt_vertice_repeat1 = 363,
  aux_sym_flow_node_repeat1 = 364,
  aux_sym_flow_arrow_text_repeat1 = 365,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 366,
  aux_sym_diagram_er_repeat1 = 367,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 368,
  aux_sym_diagram_mindmap_repeat1 = 369,
  aux_sym_gantt_task_text_repeat1 = 370,
  aux_sym_flow_text_literal_repeat1 = 371,
  alias_sym_annotation = 372,
  alias_sym_class_classifier_abstract = 373,
  alias_sym_class_style_name = 374,
  alias_sym_class_visibility_internal = 375,
  alias_sym_class_visibility_private = 376,
  alias_sym_class_visibility_public = 377,
  alias_sym_gantt_axis_format = 378,
  alias_sym_gantt_end_dates = 379,
  alias_sym_gantt_excludes = 380,
  alias_sym_gantt_includes = 381,
  alias_sym_gantt_section = 382,
  alias_sym_gantt_title = 383,
  alias_sym_gantt_today_marker = 384,
  alias_sym_gantt_top_axis = 385,
  alias_sym_note_content = 386,
  alias_sym_sequence_alias = 387,
  alias_sym_sequence_stmt_alt_branch = 388,
  alias_sym_sequence_stmt_loop_inner = 389,
  alias_sym_sequence_stmt_opt_inner = 390,
  alias_sym_sequence_stmt_rect_inner = 391,
  alias_sym_title = 392,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [aux_sym_directive_token1] = "arg_directive",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [anon_sym_COLON] = ":",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [aux_sym_diagram_flow_token2] = "graph",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_DASH_RPAREN] = "-)",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [aux_sym_diagram_er_token1] = "erdiagram",
  [aux_sym_diagram_mindmap_token1] = "diagram_mindmap_token1",
  [aux_sym_mmap_markdown_token1] = "md_text",
  [aux_sym_mmap_text_token1] = "mmap_text_token1",
  [aux_sym_mmap_class_token1] = "mmap_class_token1",
  [aux_sym_mmap_class_token2] = "mmap_class_token2",
  [aux_sym_mmap_icon_token1] = "mmap_icon_token1",
  [aux_sym_mmap_icon_token2] = "mmap_icon_token2",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym__md_start] = "_md_start",
  [sym__md_end] = "_md_end",
  [sym_type_directive] = "type_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__sequence_rest_text_token1] = "_sequence_rest_text_token1",
  [sym__sequence_actor_word] = "_sequence_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [aux_sym_pie_label_token1] = "pie_label_token1",
  [sym_pie_value] = "pie_value",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [sym__mindmap_text] = "_mindmap_text",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym__sequence_participant_type] = "_sequence_participant_type",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_state_note_placement] = "state_note_placement",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_diagram_mindmap] = "diagram_mindmap",
  [sym_mmap_node] = "mmap_node",
  [sym_mmap_node_id] = "mmap_node_id",
  [sym_mmap_markdown] = "mmap_markdown",
  [sym_mmap_text] = "mmap_text",
  [sym_mmap_node_content] = "mmap_node_content",
  [sym_mmap_node_square] = "mmap_node_square",
  [sym_mmap_node_rounded] = "mmap_node_rounded",
  [sym_mmap_node_circle] = "mmap_node_circle",
  [sym_mmap_node_cloud] = "mmap_node_cloud",
  [sym_mmap_node_bang] = "mmap_node_bang",
  [sym_mmap_node_hexagon] = "mmap_node_hexagon",
  [sym_mmap_class] = "mmap_class",
  [sym_mmap_icon] = "mmap_icon",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_pie_label] = "pie_label",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_diagram_mindmap_repeat1] = "diagram_mindmap_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_alias] = "sequence_alias",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [aux_sym_diagram_flow_token2] = aux_sym_diagram_flow_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [aux_sym_diagram_mindmap_token1] = aux_sym_diagram_mindmap_token1,
  [aux_sym_mmap_markdown_token1] = aux_sym_mmap_markdown_token1,
  [aux_sym_mmap_text_token1] = aux_sym_mmap_text_token1,
  [aux_sym_mmap_class_token1] = aux_sym_mmap_class_token1,
  [aux_sym_mmap_class_token2] = aux_sym_mmap_class_token2,
  [aux_sym_mmap_icon_token1] = aux_sym_mmap_icon_token1,
  [aux_sym_mmap_icon_token2] = aux_sym_mmap_icon_token2,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym__md_start] = sym__md_start,
  [sym__md_end] = sym__md_end,
  [sym_type_directive] = sym_type_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__sequence_rest_text_token1] = aux_sym__sequence_rest_text_token1,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [aux_sym_pie_label_token1] = aux_sym_pie_label_token1,
  [sym_pie_value] = sym_pie_value,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [sym__mindmap_text] = sym__mindmap_text,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym__sequence_participant_type] = sym__sequence_participant_type,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_state_note_placement] = sym_state_note_placement,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_diagram_mindmap] = sym_diagram_mindmap,
  [sym_mmap_node] = sym_mmap_node,
  [sym_mmap_node_id] = sym_mmap_node_id,
  [sym_mmap_markdown] = sym_mmap_markdown,
  [sym_mmap_text] = sym_mmap_text,
  [sym_mmap_node_content] = sym_mmap_node_content,
  [sym_mmap_node_square] = sym_mmap_node_square,
  [sym_mmap_node_rounded] = sym_mmap_node_rounded,
  [sym_mmap_node_circle] = sym_mmap_node_circle,
  [sym_mmap_node_cloud] = sym_mmap_node_cloud,
  [sym_mmap_node_bang] = sym_mmap_node_bang,
  [sym_mmap_node_hexagon] = sym_mmap_node_hexagon,
  [sym_mmap_class] = sym_mmap_class,
  [sym_mmap_icon] = sym_mmap_icon,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_pie_label] = sym_pie_label,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_diagram_mindmap_repeat1] = aux_sym_diagram_mindmap_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_er_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_mindmap_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_markdown_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mmap_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__md_start] = {
    .visible = false,
    .named = true,
  },
  [sym__md_end] = {
    .visible = false,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_rest_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sequence_actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__mindmap_text] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__sequence_participant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_text] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_square] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_rounded] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_cloud] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_class] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
  },
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_mindmap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [2] = alias_sym_sequence_stmt_alt_branch,
  },
  [11] = {
    [0] = sym_state_description,
  },
  [12] = {
    [3] = alias_sym_sequence_alias,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [16] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [17] = {
    [3] = alias_sym_class_style_name,
  },
  [18] = {
    [1] = alias_sym_annotation,
  },
  [19] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [20] = {
    [0] = alias_sym_class_visibility_public,
  },
  [21] = {
    [0] = alias_sym_class_visibility_private,
  },
  [22] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [23] = {
    [4] = alias_sym_note_content,
  },
  [24] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [25] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [28] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 2,
  [10] = 6,
  [11] = 5,
  [12] = 5,
  [13] = 5,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 24,
  [31] = 22,
  [32] = 24,
  [33] = 27,
  [34] = 34,
  [35] = 27,
  [36] = 28,
  [37] = 23,
  [38] = 28,
  [39] = 27,
  [40] = 17,
  [41] = 20,
  [42] = 22,
  [43] = 28,
  [44] = 44,
  [45] = 23,
  [46] = 24,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 51,
  [54] = 50,
  [55] = 50,
  [56] = 56,
  [57] = 47,
  [58] = 51,
  [59] = 47,
  [60] = 47,
  [61] = 51,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 86,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 98,
  [110] = 97,
  [111] = 94,
  [112] = 93,
  [113] = 92,
  [114] = 91,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 90,
  [122] = 89,
  [123] = 88,
  [124] = 87,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 85,
  [129] = 106,
  [130] = 116,
  [131] = 125,
  [132] = 107,
  [133] = 108,
  [134] = 95,
  [135] = 96,
  [136] = 115,
  [137] = 117,
  [138] = 118,
  [139] = 120,
  [140] = 99,
  [141] = 100,
  [142] = 127,
  [143] = 101,
  [144] = 102,
  [145] = 119,
  [146] = 126,
  [147] = 103,
  [148] = 104,
  [149] = 92,
  [150] = 104,
  [151] = 91,
  [152] = 93,
  [153] = 94,
  [154] = 120,
  [155] = 97,
  [156] = 98,
  [157] = 98,
  [158] = 127,
  [159] = 97,
  [160] = 126,
  [161] = 94,
  [162] = 93,
  [163] = 92,
  [164] = 95,
  [165] = 89,
  [166] = 88,
  [167] = 87,
  [168] = 125,
  [169] = 126,
  [170] = 127,
  [171] = 120,
  [172] = 119,
  [173] = 118,
  [174] = 125,
  [175] = 87,
  [176] = 117,
  [177] = 88,
  [178] = 115,
  [179] = 91,
  [180] = 116,
  [181] = 108,
  [182] = 107,
  [183] = 89,
  [184] = 95,
  [185] = 96,
  [186] = 90,
  [187] = 119,
  [188] = 118,
  [189] = 106,
  [190] = 117,
  [191] = 115,
  [192] = 99,
  [193] = 108,
  [194] = 107,
  [195] = 85,
  [196] = 106,
  [197] = 100,
  [198] = 85,
  [199] = 86,
  [200] = 96,
  [201] = 99,
  [202] = 100,
  [203] = 104,
  [204] = 86,
  [205] = 101,
  [206] = 101,
  [207] = 102,
  [208] = 90,
  [209] = 103,
  [210] = 102,
  [211] = 103,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 225,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 225,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 301,
  [307] = 301,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 301,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 354,
  [357] = 229,
  [358] = 354,
  [359] = 359,
  [360] = 244,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 354,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 244,
  [371] = 368,
  [372] = 372,
  [373] = 373,
  [374] = 368,
  [375] = 375,
  [376] = 368,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 227,
  [383] = 383,
  [384] = 384,
  [385] = 229,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 367,
  [390] = 251,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 233,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 299,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 387,
  [418] = 418,
  [419] = 419,
  [420] = 315,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 223,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 226,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 448,
  [452] = 452,
  [453] = 285,
  [454] = 448,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 257,
  [459] = 459,
  [460] = 448,
  [461] = 267,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 287,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 483,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 483,
  [490] = 484,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 486,
  [496] = 496,
  [497] = 487,
  [498] = 488,
  [499] = 483,
  [500] = 500,
  [501] = 484,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 486,
  [513] = 487,
  [514] = 488,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 517,
  [526] = 519,
  [527] = 527,
  [528] = 520,
  [529] = 521,
  [530] = 522,
  [531] = 523,
  [532] = 524,
  [533] = 533,
  [534] = 534,
  [535] = 517,
  [536] = 519,
  [537] = 537,
  [538] = 520,
  [539] = 539,
  [540] = 540,
  [541] = 521,
  [542] = 522,
  [543] = 523,
  [544] = 524,
  [545] = 492,
  [546] = 546,
  [547] = 534,
  [548] = 548,
  [549] = 482,
  [550] = 550,
  [551] = 479,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 492,
  [562] = 546,
  [563] = 534,
  [564] = 564,
  [565] = 482,
  [566] = 566,
  [567] = 554,
  [568] = 568,
  [569] = 557,
  [570] = 560,
  [571] = 571,
  [572] = 546,
  [573] = 492,
  [574] = 546,
  [575] = 534,
  [576] = 576,
  [577] = 482,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 560,
  [584] = 484,
  [585] = 479,
  [586] = 554,
  [587] = 557,
  [588] = 588,
  [589] = 560,
  [590] = 579,
  [591] = 588,
  [592] = 557,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 515,
  [598] = 554,
  [599] = 599,
  [600] = 600,
  [601] = 524,
  [602] = 523,
  [603] = 427,
  [604] = 522,
  [605] = 605,
  [606] = 521,
  [607] = 520,
  [608] = 593,
  [609] = 478,
  [610] = 595,
  [611] = 596,
  [612] = 612,
  [613] = 613,
  [614] = 579,
  [615] = 588,
  [616] = 519,
  [617] = 617,
  [618] = 515,
  [619] = 619,
  [620] = 517,
  [621] = 488,
  [622] = 479,
  [623] = 623,
  [624] = 624,
  [625] = 593,
  [626] = 478,
  [627] = 595,
  [628] = 596,
  [629] = 613,
  [630] = 630,
  [631] = 579,
  [632] = 588,
  [633] = 515,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 593,
  [638] = 478,
  [639] = 595,
  [640] = 596,
  [641] = 613,
  [642] = 642,
  [643] = 582,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 487,
  [650] = 581,
  [651] = 613,
  [652] = 486,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 666,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 666,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 680,
  [695] = 695,
  [696] = 696,
  [697] = 660,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 668,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 695,
  [716] = 716,
  [717] = 696,
  [718] = 668,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 695,
  [724] = 696,
  [725] = 668,
  [726] = 680,
  [727] = 464,
  [728] = 728,
  [729] = 660,
  [730] = 696,
  [731] = 731,
  [732] = 666,
  [733] = 680,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 660,
  [741] = 443,
  [742] = 742,
  [743] = 695,
  [744] = 472,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 748,
  [765] = 765,
  [766] = 766,
  [767] = 750,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 755,
  [772] = 772,
  [773] = 761,
  [774] = 757,
  [775] = 775,
  [776] = 776,
  [777] = 755,
  [778] = 760,
  [779] = 761,
  [780] = 763,
  [781] = 748,
  [782] = 765,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 765,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 763,
  [806] = 806,
  [807] = 763,
  [808] = 808,
  [809] = 803,
  [810] = 786,
  [811] = 787,
  [812] = 788,
  [813] = 789,
  [814] = 814,
  [815] = 791,
  [816] = 792,
  [817] = 793,
  [818] = 818,
  [819] = 761,
  [820] = 820,
  [821] = 756,
  [822] = 760,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 757,
  [829] = 829,
  [830] = 830,
  [831] = 786,
  [832] = 787,
  [833] = 788,
  [834] = 789,
  [835] = 766,
  [836] = 791,
  [837] = 792,
  [838] = 793,
  [839] = 839,
  [840] = 755,
  [841] = 841,
  [842] = 842,
  [843] = 750,
  [844] = 844,
  [845] = 845,
  [846] = 766,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 772,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 776,
  [862] = 785,
  [863] = 856,
  [864] = 775,
  [865] = 766,
  [866] = 750,
  [867] = 800,
  [868] = 765,
  [869] = 772,
  [870] = 721,
  [871] = 799,
  [872] = 722,
  [873] = 760,
  [874] = 858,
  [875] = 859,
  [876] = 876,
  [877] = 776,
  [878] = 785,
  [879] = 856,
  [880] = 775,
  [881] = 881,
  [882] = 882,
  [883] = 786,
  [884] = 787,
  [885] = 772,
  [886] = 788,
  [887] = 887,
  [888] = 789,
  [889] = 829,
  [890] = 858,
  [891] = 859,
  [892] = 96,
  [893] = 776,
  [894] = 785,
  [895] = 856,
  [896] = 775,
  [897] = 897,
  [898] = 791,
  [899] = 95,
  [900] = 900,
  [901] = 792,
  [902] = 902,
  [903] = 748,
  [904] = 904,
  [905] = 793,
  [906] = 906,
  [907] = 907,
  [908] = 858,
  [909] = 909,
  [910] = 859,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 757,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 804,
};

static TSCharacterRange aux_sym_flow_text_literal_token1_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '('}, {'*', ','}, {'.', '.'}, {'0', ':'}, {'<', '['}, {'^', '{'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 585,
        '"', 114,
        '#', 495,
        '$', 502,
        '%', 28,
        '&', 523,
        '(', 498,
        ')', 500,
        '*', 501,
        '+', 492,
        ',', 460,
        '-', 494,
        '.', 55,
        '/', 103,
        ':', 454,
        ';', 520,
        '<', 733,
        '=', 81,
        '>', 544,
        'C', 283,
        'E', 285,
        'S', 204,
        '[', 527,
        '\\', 104,
        ']', 529,
        '^', 923,
        '`', 21,
        'c', 98,
        'e', 99,
        'm', 124,
        'o', 729,
        's', 136,
        'v', 921,
        'x', 80,
        '{', 488,
        '|', 525,
        '}', 490,
        '~', 477,
        '\t', 573,
        ' ', 573,
        'A', 176,
        'a', 176,
        'B', 342,
        'b', 342,
        'D', 149,
        'd', 149,
        'F', 278,
        'f', 278,
        'G', 145,
        'g', 145,
        'H', 259,
        'h', 259,
        'I', 314,
        'i', 314,
        'L', 206,
        'l', 206,
        'N', 323,
        'n', 323,
        'P', 147,
        'p', 147,
        'R', 216,
        'r', 216,
        'T', 172,
        't', 172,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(564);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '%') ADVANCE(605);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == ':') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 572,
        '\n', 586,
        ' ', 576,
        '%', 605,
        'A', 615,
        'a', 615,
        'D', 628,
        'd', 628,
        'E', 651,
        'e', 651,
        'L', 638,
        'l', 638,
        'N', 658,
        'n', 658,
        'O', 663,
        'o', 663,
        'P', 607,
        'p', 607,
        'R', 629,
        'r', 629,
        'S', 630,
        's', 630,
        'T', 642,
        't', 642,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 572,
        '\n', 586,
        ' ', 576,
        '%', 605,
        'A', 616,
        'a', 616,
        'D', 628,
        'd', 628,
        'E', 651,
        'e', 651,
        'L', 638,
        'l', 638,
        'N', 658,
        'n', 658,
        'O', 663,
        'o', 663,
        'P', 607,
        'p', 607,
        'R', 629,
        'r', 629,
        'S', 630,
        's', 630,
        'T', 642,
        't', 642,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 572,
        '\n', 586,
        ' ', 576,
        '%', 605,
        'A', 616,
        'a', 616,
        'D', 628,
        'd', 628,
        'E', 647,
        'e', 647,
        'L', 638,
        'l', 638,
        'N', 658,
        'n', 658,
        'O', 663,
        'o', 663,
        'P', 607,
        'p', 607,
        'R', 629,
        'r', 629,
        'S', 630,
        's', 630,
        'T', 642,
        't', 642,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '%') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '%') ADVANCE(605);
      if (lookahead == '+') ADVANCE(492);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 586,
        '#', 495,
        '%', 29,
        '(', 496,
        ')', 499,
        '+', 492,
        '-', 493,
        '<', 78,
        '}', 489,
        '~', 478,
        '\t', 576,
        ' ', 576,
      );
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 586,
        '%', 747,
        '-', 749,
        '[', 748,
        '}', 491,
        '\t', 577,
        ' ', 577,
        'D', 764,
        'd', 764,
        'H', 765,
        'h', 765,
        'N', 775,
        'n', 775,
        'S', 783,
        's', 783,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '%') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(601);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(507);
      if (lookahead == 'D') ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(591);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(913);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 424,
        '%', 29,
        '*', 501,
        '-', 59,
        '.', 66,
        ':', 453,
        '<', 734,
        '>', 544,
        '`', 425,
        'o', 730,
        '|', 84,
        '~', 477,
        '\t', 576,
        ' ', 576,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(424);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '%') ADVANCE(927);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(928);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == ':') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(927);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(928);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '%', 927,
        ')', 499,
        '-', 50,
        '/', 103,
        '\\', 104,
        ']', 529,
        '|', 105,
        '}', 489,
        '\t', 576,
        ' ', 576,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(928);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(560);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(953);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(571);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(447);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(483);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(559);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(902);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(822);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '%', 29,
        '-', 62,
        '.', 57,
        '<', 65,
        '=', 83,
        '\t', 576,
        ' ', 576,
        'o', 707,
        'x', 707,
      );
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(719);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(566);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ']') ADVANCE(541);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(535);
      if (lookahead == ']') ADVANCE(537);
      END_STATE();
    case 49:
      if (lookahead == ')') ADVANCE(699);
      if (lookahead == '>') ADVANCE(696);
      if (lookahead == 'x') ADVANCE(698);
      END_STATE();
    case 50:
      if (lookahead == ')') ADVANCE(533);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '-') ADVANCE(935);
      if (lookahead == '.') ADVANCE(937);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '>') ADVANCE(694);
      if (lookahead == 'x') ADVANCE(697);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '[') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '.') ADVANCE(739);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(935);
      if (lookahead == '.') ADVANCE(937);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(930);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(735);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(735);
      if (lookahead == '.') ADVANCE(947);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(737);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(942);
      if (lookahead == '|') ADVANCE(940);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(739);
      END_STATE();
    case 67:
      if (lookahead == '2') ADVANCE(475);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(506);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(486);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(563);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '<') ADVANCE(503);
      END_STATE();
    case 79:
      if (lookahead == '<') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(936);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(933);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(932);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(732);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(504);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(823);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(825);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(827);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(275);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(276);
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        'N', 193,
        'n', 93,
        'L', 373,
        'l', 373,
        'R', 195,
        'r', 195,
        'X', 177,
        'x', 177,
      );
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(365);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '[') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(548);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(546);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(539);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(939);
      if (lookahead == '{') ADVANCE(944);
      if (lookahead == '|') ADVANCE(945);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(792);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(824);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(826);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(828);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == '`') ADVANCE(590);
      END_STATE();
    case 115:
      if (lookahead == '`') ADVANCE(726);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(551);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == '|') ADVANCE(943);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == '|') ADVANCE(943);
      if (lookahead == '}') ADVANCE(543);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(939);
      if (lookahead == '{') ADVANCE(944);
      if (lookahead == '|') ADVANCE(945);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(554);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(942);
      if (lookahead == '|') ADVANCE(940);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 139:
      if (lookahead == '}') ADVANCE(543);
      END_STATE();
    case 140:
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(903);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 147:
      ADVANCE_MAP(
        'A', 344,
        'a', 344,
        'I', 207,
        'i', 207,
        'K', 948,
        'k', 948,
        'R', 319,
        'r', 319,
      );
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(919);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        'B', 919,
        'b', 919,
        'D', 920,
        'd', 920,
        'I', 387,
        'i', 387,
        'O', 196,
        'o', 196,
      );
      END_STATE();
    case 173:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(594);
      END_STATE();
    case 174:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'B', 384,
        'b', 384,
        'L', 348,
        'l', 348,
        'R', 287,
        'r', 287,
        'T', 173,
        't', 173,
      );
      END_STATE();
    case 176:
      ADVANCE_MAP(
        'C', 376,
        'c', 376,
        'L', 377,
        'l', 377,
        'N', 194,
        'n', 194,
        'S', 451,
        's', 451,
        'U', 390,
        'u', 390,
        'X', 257,
        'x', 257,
      );
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(330);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(328);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(407);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(329);
      END_STATE();
    case 192:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 206:
      ADVANCE_MAP(
        'E', 241,
        'e', 241,
        'I', 301,
        'i', 301,
        'O', 317,
        'o', 317,
        'R', 916,
        'r', 916,
      );
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(700);
      END_STATE();
    case 239:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(701);
      END_STATE();
    case 240:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 241:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      END_STATE();
    case 242:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 244:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(355);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 246:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 247:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 248:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(519);
      END_STATE();
    case 249:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 250:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 252:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(948);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 272:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 273:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 275:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 276:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 277:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 278:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(949);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 279:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 280:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 281:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 282:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(225);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        'L', 373,
        'l', 373,
        'N', 193,
        'n', 193,
        'R', 195,
        'r', 195,
        'X', 177,
        'x', 177,
      );
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 291:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 299:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 300:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 334:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 337:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 338:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 339:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 340:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 341:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(409);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(922);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 362:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 363:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(513);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 406:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 407:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 408:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 410:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 411:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 412:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 413:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 414:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 415:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 416:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(178);
      END_STATE();
    case 417:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 418:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 419:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 420:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 421:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(934);
      END_STATE();
    case 422:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      END_STATE();
    case 423:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      END_STATE();
    case 424:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 425:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(115);
      END_STATE();
    case 426:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(560);
      END_STATE();
    case 427:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\t', 572,
        '\n', 586,
        ' ', 576,
        '%', 605,
        'A', 616,
        'a', 616,
        'D', 628,
        'd', 628,
        'L', 638,
        'l', 638,
        'N', 658,
        'n', 658,
        'O', 663,
        'o', 663,
        'P', 607,
        'p', 607,
        'R', 629,
        'r', 629,
        'S', 630,
        's', 630,
        'T', 642,
        't', 642,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 428:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 585,
        '%', 29,
        '(', 497,
        ')', 500,
        ':', 74,
        '[', 526,
        '{', 138,
        '\t', 573,
        ' ', 573,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 429:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '"', 22,
        '%', 28,
        '&', 523,
        '(', 498,
        ')', 47,
        ',', 460,
        '-', 51,
        '.', 57,
        '/', 103,
        ':', 453,
        ';', 520,
        '=', 81,
        '>', 544,
        'O', 413,
        '[', 527,
        '\\', 104,
        ']', 528,
        '`', 21,
        'm', 124,
        'o', 64,
        '{', 488,
        '|', 106,
        '}', 130,
        '~', 477,
        '\t', 576,
        ' ', 576,
        '<', 63,
        'x', 63,
        'A', 305,
        'a', 305,
        'C', 283,
        'c', 283,
        'E', 284,
        'e', 284,
        'F', 278,
        'f', 278,
        'G', 145,
        'g', 145,
        'L', 205,
        'l', 205,
        'P', 253,
        'p', 253,
        'R', 254,
        'r', 254,
        'S', 215,
        's', 215,
        'T', 263,
        't', 263,
      );
      END_STATE();
    case 430:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '"', 22,
        '%', 29,
        '-', 60,
        '.', 55,
        '}', 489,
        '\t', 576,
        ' ', 576,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(938);
      END_STATE();
    case 431:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '"', 424,
        '%', 29,
        '(', 496,
        ')', 499,
        '*', 501,
        '-', 59,
        '.', 66,
        ':', 453,
        '<', 734,
        '>', 544,
        '[', 526,
        ']', 528,
        '^', 923,
        'e', 128,
        'o', 728,
        'v', 921,
        '|', 84,
        '}', 139,
        '~', 477,
        '\t', 576,
        ' ', 576,
        'B', 342,
        'b', 342,
        'L', 343,
        'l', 343,
        'R', 286,
        'r', 286,
        'T', 171,
        't', 171,
      );
      END_STATE();
    case 432:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '"', 424,
        '%', 29,
        '-', 59,
        '.', 66,
        ':', 75,
        '`', 425,
        '{', 487,
        '~', 477,
        '\t', 576,
        ' ', 576,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 433:
      if (eof) ADVANCE(445);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '"') ADVANCE(906);
      if (lookahead == '%') ADVANCE(907);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 434:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '$', 502,
        '%', 29,
        '(', 496,
        ')', 499,
        '*', 501,
        ';', 520,
        '[', 526,
        ']', 528,
        '|', 524,
        '}', 489,
        '\t', 576,
        ' ', 576,
      );
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 435:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 831,
        '\t', 576,
        ' ', 576,
        'A', 894,
        'a', 894,
        'D', 832,
        'd', 832,
        'E', 895,
        'e', 895,
        'I', 872,
        'i', 872,
        'S', 848,
        's', 848,
        'T', 860,
        't', 860,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 436:
      if (eof) ADVANCE(445);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '%') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 437:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 29,
        '(', 496,
        ')', 499,
        '-', 60,
        '.', 55,
        ':', 453,
        '>', 85,
        '[', 53,
        ']', 48,
        '{', 487,
        '|', 524,
        '}', 489,
        '\t', 576,
        ' ', 576,
        'D', 805,
        'd', 805,
        'H', 806,
        'h', 806,
        'N', 810,
        'n', 810,
        'S', 813,
        's', 813,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 438:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 29,
        '-', 59,
        ':', 75,
        '<', 79,
        '[', 54,
        '{', 487,
        '}', 489,
        '~', 477,
        '\t', 576,
        ' ', 576,
        'A', 812,
        'a', 812,
        'D', 805,
        'd', 805,
        'H', 806,
        'h', 806,
        'N', 810,
        'n', 810,
        'S', 813,
        's', 813,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 439:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 29,
        '-', 52,
        ':', 453,
        '<', 79,
        '[', 102,
        'o', 137,
        '{', 487,
        '|', 131,
        '}', 129,
        '\t', 576,
        ' ', 576,
        'A', 364,
        'a', 364,
      );
      END_STATE();
    case 440:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 29,
        '-', 61,
        ':', 453,
        '[', 53,
        '}', 489,
        '\t', 576,
        ' ', 576,
        'D', 805,
        'd', 805,
        'H', 806,
        'h', 806,
        'N', 810,
        'n', 810,
        'S', 813,
        's', 813,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 441:
      if (eof) ADVANCE(445);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(453);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead == '~') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 442:
      if (eof) ADVANCE(445);
      ADVANCE_MAP(
        '\n', 586,
        '%', 29,
        ';', 520,
        's', 716,
        '\t', 576,
        ' ', 576,
        'D', 719,
        'd', 719,
      );
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 443:
      if (eof) ADVANCE(445);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 444:
      if (eof) ADVANCE(445);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(483);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(483);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(542);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == '|') ADVANCE(943);
      if (lookahead == '}') ADVANCE(543);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead == '>') ADVANCE(694);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(530);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '-') ADVANCE(532);
      if (lookahead == '[') ADVANCE(534);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(531);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(411);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token2);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(732);
      if (lookahead == ']') ADVANCE(539);
      if (lookahead == '{') ADVANCE(944);
      if (lookahead == '|') ADVANCE(945);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(540);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == '\\') ADVANCE(547);
      if (lookahead == '|') ADVANCE(538);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(535);
      if (lookahead == ']') ADVANCE(537);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_diagram_mindmap_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(559);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '%') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(559);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_mmap_class_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == '\t') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(571);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(573);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(560);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(953);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(902);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(601);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__md_start);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__md_end);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(691);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      ADVANCE_MAP(
        'C', 679,
        'c', 679,
        'L', 674,
        'l', 674,
        'N', 623,
        'n', 623,
        'U', 680,
        'u', 680,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(673);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(692);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(693);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(711);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(715);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(550);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(712);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(708);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(709);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(521);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(721);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(942);
      if (lookahead == '|') ADVANCE(940);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(503);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '|') ADVANCE(731);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(731);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(699);
      if (lookahead == '>') ADVANCE(695);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(695);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      ADVANCE_MAP(
        'B', 782,
        'b', 782,
        'L', 778,
        'l', 778,
        'R', 769,
        'r', 769,
        'T', 752,
        't', 752,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(791);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(589);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(588);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(10);
      if (lookahead != 0) ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(819);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(822);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(829);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(865);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(838);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(851);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(834);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(835);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(836);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(856);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(855);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(854);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(858);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(861);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(900);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(902);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(905);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(905);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(912);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(22);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(925);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(928);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(924);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(928);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(930);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(933);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(932);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(930);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(933);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(932);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(951);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(951);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '%') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(953);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(953);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 429},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 427},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 427},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 427},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 427},
  [48] = {.lex_state = 427},
  [49] = {.lex_state = 427},
  [50] = {.lex_state = 427},
  [51] = {.lex_state = 427},
  [52] = {.lex_state = 427},
  [53] = {.lex_state = 427},
  [54] = {.lex_state = 427},
  [55] = {.lex_state = 427},
  [56] = {.lex_state = 427},
  [57] = {.lex_state = 427},
  [58] = {.lex_state = 427},
  [59] = {.lex_state = 427},
  [60] = {.lex_state = 427},
  [61] = {.lex_state = 427},
  [62] = {.lex_state = 429},
  [63] = {.lex_state = 437},
  [64] = {.lex_state = 437},
  [65] = {.lex_state = 437},
  [66] = {.lex_state = 437},
  [67] = {.lex_state = 437},
  [68] = {.lex_state = 437},
  [69] = {.lex_state = 437},
  [70] = {.lex_state = 437},
  [71] = {.lex_state = 437},
  [72] = {.lex_state = 437},
  [73] = {.lex_state = 435},
  [74] = {.lex_state = 437},
  [75] = {.lex_state = 435},
  [76] = {.lex_state = 437},
  [77] = {.lex_state = 435},
  [78] = {.lex_state = 437},
  [79] = {.lex_state = 437},
  [80] = {.lex_state = 437},
  [81] = {.lex_state = 437},
  [82] = {.lex_state = 437},
  [83] = {.lex_state = 429},
  [84] = {.lex_state = 429},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 427},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 427},
  [158] = {.lex_state = 427},
  [159] = {.lex_state = 427},
  [160] = {.lex_state = 427},
  [161] = {.lex_state = 427},
  [162] = {.lex_state = 427},
  [163] = {.lex_state = 427},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 427},
  [175] = {.lex_state = 427},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 427},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 427},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 427},
  [184] = {.lex_state = 427},
  [185] = {.lex_state = 427},
  [186] = {.lex_state = 427},
  [187] = {.lex_state = 427},
  [188] = {.lex_state = 427},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 427},
  [191] = {.lex_state = 427},
  [192] = {.lex_state = 427},
  [193] = {.lex_state = 427},
  [194] = {.lex_state = 427},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 427},
  [197] = {.lex_state = 427},
  [198] = {.lex_state = 427},
  [199] = {.lex_state = 427},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 427},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 427},
  [207] = {.lex_state = 427},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 427},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 428},
  [213] = {.lex_state = 431},
  [214] = {.lex_state = 431},
  [215] = {.lex_state = 429},
  [216] = {.lex_state = 438},
  [217] = {.lex_state = 429},
  [218] = {.lex_state = 429},
  [219] = {.lex_state = 431},
  [220] = {.lex_state = 429},
  [221] = {.lex_state = 431},
  [222] = {.lex_state = 438},
  [223] = {.lex_state = 440},
  [224] = {.lex_state = 439},
  [225] = {.lex_state = 440},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 431},
  [228] = {.lex_state = 437},
  [229] = {.lex_state = 23},
  [230] = {.lex_state = 437},
  [231] = {.lex_state = 437},
  [232] = {.lex_state = 437},
  [233] = {.lex_state = 431},
  [234] = {.lex_state = 437},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 437},
  [237] = {.lex_state = 437},
  [238] = {.lex_state = 42},
  [239] = {.lex_state = 437},
  [240] = {.lex_state = 42},
  [241] = {.lex_state = 437},
  [242] = {.lex_state = 437},
  [243] = {.lex_state = 437},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 42},
  [246] = {.lex_state = 437},
  [247] = {.lex_state = 437},
  [248] = {.lex_state = 437},
  [249] = {.lex_state = 437},
  [250] = {.lex_state = 437},
  [251] = {.lex_state = 431},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 444},
  [254] = {.lex_state = 437},
  [255] = {.lex_state = 437},
  [256] = {.lex_state = 437},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 437},
  [259] = {.lex_state = 444},
  [260] = {.lex_state = 437},
  [261] = {.lex_state = 429},
  [262] = {.lex_state = 437},
  [263] = {.lex_state = 438},
  [264] = {.lex_state = 437},
  [265] = {.lex_state = 437},
  [266] = {.lex_state = 437},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 437},
  [269] = {.lex_state = 435},
  [270] = {.lex_state = 435},
  [271] = {.lex_state = 444},
  [272] = {.lex_state = 42},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 435},
  [275] = {.lex_state = 435},
  [276] = {.lex_state = 444},
  [277] = {.lex_state = 435},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 42},
  [282] = {.lex_state = 435},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 435},
  [285] = {.lex_state = 431},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 431},
  [288] = {.lex_state = 437},
  [289] = {.lex_state = 435},
  [290] = {.lex_state = 435},
  [291] = {.lex_state = 435},
  [292] = {.lex_state = 439},
  [293] = {.lex_state = 435},
  [294] = {.lex_state = 435},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 429},
  [298] = {.lex_state = 429},
  [299] = {.lex_state = 32},
  [300] = {.lex_state = 439},
  [301] = {.lex_state = 439},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 442},
  [304] = {.lex_state = 429},
  [305] = {.lex_state = 429},
  [306] = {.lex_state = 439},
  [307] = {.lex_state = 439},
  [308] = {.lex_state = 442},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 429},
  [311] = {.lex_state = 442},
  [312] = {.lex_state = 442},
  [313] = {.lex_state = 439},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 32},
  [316] = {.lex_state = 429},
  [317] = {.lex_state = 428},
  [318] = {.lex_state = 429},
  [319] = {.lex_state = 429},
  [320] = {.lex_state = 429},
  [321] = {.lex_state = 429},
  [322] = {.lex_state = 429},
  [323] = {.lex_state = 429},
  [324] = {.lex_state = 429},
  [325] = {.lex_state = 429},
  [326] = {.lex_state = 442},
  [327] = {.lex_state = 429},
  [328] = {.lex_state = 442},
  [329] = {.lex_state = 429},
  [330] = {.lex_state = 429},
  [331] = {.lex_state = 429},
  [332] = {.lex_state = 429},
  [333] = {.lex_state = 429},
  [334] = {.lex_state = 429},
  [335] = {.lex_state = 429},
  [336] = {.lex_state = 429},
  [337] = {.lex_state = 434},
  [338] = {.lex_state = 434},
  [339] = {.lex_state = 434},
  [340] = {.lex_state = 434},
  [341] = {.lex_state = 429},
  [342] = {.lex_state = 429},
  [343] = {.lex_state = 434},
  [344] = {.lex_state = 429},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 23},
  [347] = {.lex_state = 434},
  [348] = {.lex_state = 429},
  [349] = {.lex_state = 429},
  [350] = {.lex_state = 429},
  [351] = {.lex_state = 23},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 430},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 429},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 432},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 430},
  [360] = {.lex_state = 432},
  [361] = {.lex_state = 429},
  [362] = {.lex_state = 437},
  [363] = {.lex_state = 429},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 430},
  [366] = {.lex_state = 430},
  [367] = {.lex_state = 434},
  [368] = {.lex_state = 429},
  [369] = {.lex_state = 442},
  [370] = {.lex_state = 441},
  [371] = {.lex_state = 429},
  [372] = {.lex_state = 432},
  [373] = {.lex_state = 442},
  [374] = {.lex_state = 429},
  [375] = {.lex_state = 442},
  [376] = {.lex_state = 429},
  [377] = {.lex_state = 430},
  [378] = {.lex_state = 428},
  [379] = {.lex_state = 442},
  [380] = {.lex_state = 442},
  [381] = {.lex_state = 434},
  [382] = {.lex_state = 438},
  [383] = {.lex_state = 430},
  [384] = {.lex_state = 432},
  [385] = {.lex_state = 441},
  [386] = {.lex_state = 430},
  [387] = {.lex_state = 429},
  [388] = {.lex_state = 26},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 438},
  [391] = {.lex_state = 430},
  [392] = {.lex_state = 26},
  [393] = {.lex_state = 434},
  [394] = {.lex_state = 430},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 26},
  [397] = {.lex_state = 26},
  [398] = {.lex_state = 20},
  [399] = {.lex_state = 438},
  [400] = {.lex_state = 430},
  [401] = {.lex_state = 26},
  [402] = {.lex_state = 26},
  [403] = {.lex_state = 430},
  [404] = {.lex_state = 26},
  [405] = {.lex_state = 432},
  [406] = {.lex_state = 432},
  [407] = {.lex_state = 430},
  [408] = {.lex_state = 20},
  [409] = {.lex_state = 31},
  [410] = {.lex_state = 432},
  [411] = {.lex_state = 26},
  [412] = {.lex_state = 20},
  [413] = {.lex_state = 20},
  [414] = {.lex_state = 20},
  [415] = {.lex_state = 20},
  [416] = {.lex_state = 26},
  [417] = {.lex_state = 429},
  [418] = {.lex_state = 430},
  [419] = {.lex_state = 432},
  [420] = {.lex_state = 31},
  [421] = {.lex_state = 432},
  [422] = {.lex_state = 432},
  [423] = {.lex_state = 26},
  [424] = {.lex_state = 432},
  [425] = {.lex_state = 26},
  [426] = {.lex_state = 432},
  [427] = {.lex_state = 41},
  [428] = {.lex_state = 24},
  [429] = {.lex_state = 437},
  [430] = {.lex_state = 26},
  [431] = {.lex_state = 440},
  [432] = {.lex_state = 433},
  [433] = {.lex_state = 429},
  [434] = {.lex_state = 429},
  [435] = {.lex_state = 434},
  [436] = {.lex_state = 42},
  [437] = {.lex_state = 429},
  [438] = {.lex_state = 429},
  [439] = {.lex_state = 436},
  [440] = {.lex_state = 436},
  [441] = {.lex_state = 429},
  [442] = {.lex_state = 429},
  [443] = {.lex_state = 431},
  [444] = {.lex_state = 434},
  [445] = {.lex_state = 434},
  [446] = {.lex_state = 434},
  [447] = {.lex_state = 434},
  [448] = {.lex_state = 13},
  [449] = {.lex_state = 429},
  [450] = {.lex_state = 436},
  [451] = {.lex_state = 13},
  [452] = {.lex_state = 430},
  [453] = {.lex_state = 438},
  [454] = {.lex_state = 13},
  [455] = {.lex_state = 429},
  [456] = {.lex_state = 13},
  [457] = {.lex_state = 429},
  [458] = {.lex_state = 6},
  [459] = {.lex_state = 443},
  [460] = {.lex_state = 13},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 429},
  [463] = {.lex_state = 428},
  [464] = {.lex_state = 431},
  [465] = {.lex_state = 429},
  [466] = {.lex_state = 428},
  [467] = {.lex_state = 434},
  [468] = {.lex_state = 438},
  [469] = {.lex_state = 428},
  [470] = {.lex_state = 438},
  [471] = {.lex_state = 428},
  [472] = {.lex_state = 431},
  [473] = {.lex_state = 436},
  [474] = {.lex_state = 443},
  [475] = {.lex_state = 429},
  [476] = {.lex_state = 428},
  [477] = {.lex_state = 428},
  [478] = {.lex_state = 13},
  [479] = {.lex_state = 2},
  [480] = {.lex_state = 429},
  [481] = {.lex_state = 429},
  [482] = {.lex_state = 13},
  [483] = {.lex_state = 2},
  [484] = {.lex_state = 2},
  [485] = {.lex_state = 2},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 2},
  [488] = {.lex_state = 13},
  [489] = {.lex_state = 2},
  [490] = {.lex_state = 2},
  [491] = {.lex_state = 434},
  [492] = {.lex_state = 13},
  [493] = {.lex_state = 429},
  [494] = {.lex_state = 429},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 429},
  [497] = {.lex_state = 2},
  [498] = {.lex_state = 13},
  [499] = {.lex_state = 2},
  [500] = {.lex_state = 437},
  [501] = {.lex_state = 2},
  [502] = {.lex_state = 437},
  [503] = {.lex_state = 437},
  [504] = {.lex_state = 437},
  [505] = {.lex_state = 437},
  [506] = {.lex_state = 437},
  [507] = {.lex_state = 437},
  [508] = {.lex_state = 437},
  [509] = {.lex_state = 437},
  [510] = {.lex_state = 437},
  [511] = {.lex_state = 429},
  [512] = {.lex_state = 2},
  [513] = {.lex_state = 2},
  [514] = {.lex_state = 13},
  [515] = {.lex_state = 429},
  [516] = {.lex_state = 432},
  [517] = {.lex_state = 13},
  [518] = {.lex_state = 429},
  [519] = {.lex_state = 13},
  [520] = {.lex_state = 13},
  [521] = {.lex_state = 2},
  [522] = {.lex_state = 2},
  [523] = {.lex_state = 2},
  [524] = {.lex_state = 2},
  [525] = {.lex_state = 13},
  [526] = {.lex_state = 13},
  [527] = {.lex_state = 443},
  [528] = {.lex_state = 13},
  [529] = {.lex_state = 2},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 2},
  [532] = {.lex_state = 2},
  [533] = {.lex_state = 437},
  [534] = {.lex_state = 13},
  [535] = {.lex_state = 13},
  [536] = {.lex_state = 13},
  [537] = {.lex_state = 437},
  [538] = {.lex_state = 13},
  [539] = {.lex_state = 437},
  [540] = {.lex_state = 429},
  [541] = {.lex_state = 2},
  [542] = {.lex_state = 2},
  [543] = {.lex_state = 2},
  [544] = {.lex_state = 2},
  [545] = {.lex_state = 13},
  [546] = {.lex_state = 13},
  [547] = {.lex_state = 13},
  [548] = {.lex_state = 429},
  [549] = {.lex_state = 13},
  [550] = {.lex_state = 437},
  [551] = {.lex_state = 2},
  [552] = {.lex_state = 432},
  [553] = {.lex_state = 437},
  [554] = {.lex_state = 2},
  [555] = {.lex_state = 429},
  [556] = {.lex_state = 437},
  [557] = {.lex_state = 2},
  [558] = {.lex_state = 437},
  [559] = {.lex_state = 429},
  [560] = {.lex_state = 2},
  [561] = {.lex_state = 13},
  [562] = {.lex_state = 13},
  [563] = {.lex_state = 13},
  [564] = {.lex_state = 437},
  [565] = {.lex_state = 13},
  [566] = {.lex_state = 429},
  [567] = {.lex_state = 2},
  [568] = {.lex_state = 437},
  [569] = {.lex_state = 2},
  [570] = {.lex_state = 2},
  [571] = {.lex_state = 437},
  [572] = {.lex_state = 13},
  [573] = {.lex_state = 13},
  [574] = {.lex_state = 13},
  [575] = {.lex_state = 13},
  [576] = {.lex_state = 429},
  [577] = {.lex_state = 13},
  [578] = {.lex_state = 30},
  [579] = {.lex_state = 429},
  [580] = {.lex_state = 429},
  [581] = {.lex_state = 24},
  [582] = {.lex_state = 24},
  [583] = {.lex_state = 2},
  [584] = {.lex_state = 2},
  [585] = {.lex_state = 2},
  [586] = {.lex_state = 2},
  [587] = {.lex_state = 2},
  [588] = {.lex_state = 429},
  [589] = {.lex_state = 2},
  [590] = {.lex_state = 429},
  [591] = {.lex_state = 429},
  [592] = {.lex_state = 2},
  [593] = {.lex_state = 13},
  [594] = {.lex_state = 429},
  [595] = {.lex_state = 13},
  [596] = {.lex_state = 13},
  [597] = {.lex_state = 429},
  [598] = {.lex_state = 2},
  [599] = {.lex_state = 429},
  [600] = {.lex_state = 429},
  [601] = {.lex_state = 2},
  [602] = {.lex_state = 2},
  [603] = {.lex_state = 434},
  [604] = {.lex_state = 2},
  [605] = {.lex_state = 429},
  [606] = {.lex_state = 2},
  [607] = {.lex_state = 13},
  [608] = {.lex_state = 13},
  [609] = {.lex_state = 13},
  [610] = {.lex_state = 13},
  [611] = {.lex_state = 13},
  [612] = {.lex_state = 429},
  [613] = {.lex_state = 432},
  [614] = {.lex_state = 429},
  [615] = {.lex_state = 429},
  [616] = {.lex_state = 13},
  [617] = {.lex_state = 429},
  [618] = {.lex_state = 429},
  [619] = {.lex_state = 429},
  [620] = {.lex_state = 13},
  [621] = {.lex_state = 13},
  [622] = {.lex_state = 2},
  [623] = {.lex_state = 429},
  [624] = {.lex_state = 432},
  [625] = {.lex_state = 13},
  [626] = {.lex_state = 13},
  [627] = {.lex_state = 13},
  [628] = {.lex_state = 13},
  [629] = {.lex_state = 432},
  [630] = {.lex_state = 30},
  [631] = {.lex_state = 429},
  [632] = {.lex_state = 429},
  [633] = {.lex_state = 429},
  [634] = {.lex_state = 429},
  [635] = {.lex_state = 434},
  [636] = {.lex_state = 429},
  [637] = {.lex_state = 13},
  [638] = {.lex_state = 13},
  [639] = {.lex_state = 13},
  [640] = {.lex_state = 13},
  [641] = {.lex_state = 432},
  [642] = {.lex_state = 434},
  [643] = {.lex_state = 24},
  [644] = {.lex_state = 429},
  [645] = {.lex_state = 434},
  [646] = {.lex_state = 429},
  [647] = {.lex_state = 429},
  [648] = {.lex_state = 429},
  [649] = {.lex_state = 2},
  [650] = {.lex_state = 24},
  [651] = {.lex_state = 432},
  [652] = {.lex_state = 2},
  [653] = {.lex_state = 429},
  [654] = {.lex_state = 7},
  [655] = {.lex_state = 7},
  [656] = {.lex_state = 7},
  [657] = {.lex_state = 429},
  [658] = {.lex_state = 429},
  [659] = {.lex_state = 429},
  [660] = {.lex_state = 429},
  [661] = {.lex_state = 429},
  [662] = {.lex_state = 429},
  [663] = {.lex_state = 429},
  [664] = {.lex_state = 429},
  [665] = {.lex_state = 429},
  [666] = {.lex_state = 429},
  [667] = {.lex_state = 429},
  [668] = {.lex_state = 13},
  [669] = {.lex_state = 430},
  [670] = {.lex_state = 429},
  [671] = {.lex_state = 429},
  [672] = {.lex_state = 429},
  [673] = {.lex_state = 429},
  [674] = {.lex_state = 429},
  [675] = {.lex_state = 429},
  [676] = {.lex_state = 429},
  [677] = {.lex_state = 24},
  [678] = {.lex_state = 429},
  [679] = {.lex_state = 429},
  [680] = {.lex_state = 429},
  [681] = {.lex_state = 437},
  [682] = {.lex_state = 429},
  [683] = {.lex_state = 429},
  [684] = {.lex_state = 429},
  [685] = {.lex_state = 429},
  [686] = {.lex_state = 437},
  [687] = {.lex_state = 429},
  [688] = {.lex_state = 434},
  [689] = {.lex_state = 436},
  [690] = {.lex_state = 24},
  [691] = {.lex_state = 13},
  [692] = {.lex_state = 430},
  [693] = {.lex_state = 429},
  [694] = {.lex_state = 429},
  [695] = {.lex_state = 13},
  [696] = {.lex_state = 13},
  [697] = {.lex_state = 429},
  [698] = {.lex_state = 13},
  [699] = {.lex_state = 13},
  [700] = {.lex_state = 13},
  [701] = {.lex_state = 13},
  [702] = {.lex_state = 13},
  [703] = {.lex_state = 13},
  [704] = {.lex_state = 429},
  [705] = {.lex_state = 13},
  [706] = {.lex_state = 436},
  [707] = {.lex_state = 429},
  [708] = {.lex_state = 429},
  [709] = {.lex_state = 430},
  [710] = {.lex_state = 429},
  [711] = {.lex_state = 434},
  [712] = {.lex_state = 429},
  [713] = {.lex_state = 13},
  [714] = {.lex_state = 429},
  [715] = {.lex_state = 13},
  [716] = {.lex_state = 429},
  [717] = {.lex_state = 13},
  [718] = {.lex_state = 13},
  [719] = {.lex_state = 429},
  [720] = {.lex_state = 429},
  [721] = {.lex_state = 24},
  [722] = {.lex_state = 24},
  [723] = {.lex_state = 13},
  [724] = {.lex_state = 13},
  [725] = {.lex_state = 13},
  [726] = {.lex_state = 429},
  [727] = {.lex_state = 429},
  [728] = {.lex_state = 429},
  [729] = {.lex_state = 429},
  [730] = {.lex_state = 13},
  [731] = {.lex_state = 429},
  [732] = {.lex_state = 429},
  [733] = {.lex_state = 429},
  [734] = {.lex_state = 429},
  [735] = {.lex_state = 430},
  [736] = {.lex_state = 437},
  [737] = {.lex_state = 13},
  [738] = {.lex_state = 429},
  [739] = {.lex_state = 429},
  [740] = {.lex_state = 429},
  [741] = {.lex_state = 429},
  [742] = {.lex_state = 429},
  [743] = {.lex_state = 13},
  [744] = {.lex_state = 429},
  [745] = {.lex_state = 429},
  [746] = {.lex_state = 430},
  [747] = {.lex_state = 34},
  [748] = {.lex_state = 429},
  [749] = {.lex_state = 429},
  [750] = {.lex_state = 429},
  [751] = {.lex_state = 429},
  [752] = {.lex_state = 429},
  [753] = {.lex_state = 429},
  [754] = {.lex_state = 44},
  [755] = {.lex_state = 429},
  [756] = {.lex_state = 429},
  [757] = {.lex_state = 429},
  [758] = {.lex_state = 430},
  [759] = {.lex_state = 437},
  [760] = {.lex_state = 429},
  [761] = {.lex_state = 429},
  [762] = {.lex_state = 430},
  [763] = {.lex_state = 429},
  [764] = {.lex_state = 429},
  [765] = {.lex_state = 429},
  [766] = {.lex_state = 429},
  [767] = {.lex_state = 429},
  [768] = {.lex_state = 1},
  [769] = {.lex_state = 429},
  [770] = {.lex_state = 35},
  [771] = {.lex_state = 429},
  [772] = {.lex_state = 429},
  [773] = {.lex_state = 429},
  [774] = {.lex_state = 429},
  [775] = {.lex_state = 429},
  [776] = {.lex_state = 429},
  [777] = {.lex_state = 429},
  [778] = {.lex_state = 429},
  [779] = {.lex_state = 429},
  [780] = {.lex_state = 429},
  [781] = {.lex_state = 429},
  [782] = {.lex_state = 429},
  [783] = {.lex_state = 431},
  [784] = {.lex_state = 2},
  [785] = {.lex_state = 429},
  [786] = {.lex_state = 429},
  [787] = {.lex_state = 429},
  [788] = {.lex_state = 429},
  [789] = {.lex_state = 429},
  [790] = {.lex_state = 429},
  [791] = {.lex_state = 429},
  [792] = {.lex_state = 429},
  [793] = {.lex_state = 429},
  [794] = {.lex_state = 429},
  [795] = {.lex_state = 429},
  [796] = {.lex_state = 429},
  [797] = {.lex_state = 43},
  [798] = {.lex_state = 429},
  [799] = {.lex_state = 429},
  [800] = {.lex_state = 37},
  [801] = {.lex_state = 437},
  [802] = {.lex_state = 429},
  [803] = {.lex_state = 34},
  [804] = {.lex_state = 38},
  [805] = {.lex_state = 429},
  [806] = {.lex_state = 434},
  [807] = {.lex_state = 429},
  [808] = {.lex_state = 429},
  [809] = {.lex_state = 34},
  [810] = {.lex_state = 429},
  [811] = {.lex_state = 429},
  [812] = {.lex_state = 429},
  [813] = {.lex_state = 429},
  [814] = {.lex_state = 429},
  [815] = {.lex_state = 429},
  [816] = {.lex_state = 429},
  [817] = {.lex_state = 429},
  [818] = {.lex_state = 429},
  [819] = {.lex_state = 429},
  [820] = {.lex_state = 429},
  [821] = {.lex_state = 429},
  [822] = {.lex_state = 429},
  [823] = {.lex_state = 592},
  [824] = {.lex_state = 437},
  [825] = {.lex_state = 437},
  [826] = {.lex_state = 434},
  [827] = {.lex_state = 431},
  [828] = {.lex_state = 429},
  [829] = {.lex_state = 429},
  [830] = {.lex_state = 429},
  [831] = {.lex_state = 429},
  [832] = {.lex_state = 429},
  [833] = {.lex_state = 429},
  [834] = {.lex_state = 429},
  [835] = {.lex_state = 429},
  [836] = {.lex_state = 429},
  [837] = {.lex_state = 429},
  [838] = {.lex_state = 429},
  [839] = {.lex_state = 434},
  [840] = {.lex_state = 429},
  [841] = {.lex_state = 429},
  [842] = {.lex_state = 429},
  [843] = {.lex_state = 429},
  [844] = {.lex_state = 39},
  [845] = {.lex_state = 429},
  [846] = {.lex_state = 429},
  [847] = {.lex_state = 429},
  [848] = {.lex_state = 431},
  [849] = {.lex_state = 437},
  [850] = {.lex_state = 434},
  [851] = {.lex_state = 431},
  [852] = {.lex_state = 429},
  [853] = {.lex_state = 437},
  [854] = {.lex_state = 437},
  [855] = {.lex_state = 429},
  [856] = {.lex_state = 429},
  [857] = {.lex_state = 429},
  [858] = {.lex_state = 429},
  [859] = {.lex_state = 429},
  [860] = {.lex_state = 429},
  [861] = {.lex_state = 429},
  [862] = {.lex_state = 429},
  [863] = {.lex_state = 429},
  [864] = {.lex_state = 429},
  [865] = {.lex_state = 429},
  [866] = {.lex_state = 429},
  [867] = {.lex_state = 37},
  [868] = {.lex_state = 429},
  [869] = {.lex_state = 429},
  [870] = {.lex_state = 2},
  [871] = {.lex_state = 429},
  [872] = {.lex_state = 2},
  [873] = {.lex_state = 429},
  [874] = {.lex_state = 429},
  [875] = {.lex_state = 429},
  [876] = {.lex_state = 2},
  [877] = {.lex_state = 429},
  [878] = {.lex_state = 429},
  [879] = {.lex_state = 429},
  [880] = {.lex_state = 429},
  [881] = {.lex_state = 429},
  [882] = {.lex_state = 429},
  [883] = {.lex_state = 429},
  [884] = {.lex_state = 429},
  [885] = {.lex_state = 429},
  [886] = {.lex_state = 429},
  [887] = {.lex_state = 434},
  [888] = {.lex_state = 429},
  [889] = {.lex_state = 429},
  [890] = {.lex_state = 429},
  [891] = {.lex_state = 429},
  [892] = {.lex_state = 429},
  [893] = {.lex_state = 429},
  [894] = {.lex_state = 429},
  [895] = {.lex_state = 429},
  [896] = {.lex_state = 429},
  [897] = {.lex_state = 40},
  [898] = {.lex_state = 429},
  [899] = {.lex_state = 429},
  [900] = {.lex_state = 434},
  [901] = {.lex_state = 429},
  [902] = {.lex_state = 437},
  [903] = {.lex_state = 429},
  [904] = {.lex_state = 40},
  [905] = {.lex_state = 429},
  [906] = {.lex_state = 2},
  [907] = {.lex_state = 429},
  [908] = {.lex_state = 429},
  [909] = {.lex_state = 437},
  [910] = {.lex_state = 429},
  [911] = {.lex_state = 429},
  [912] = {.lex_state = 429},
  [913] = {.lex_state = 429},
  [914] = {.lex_state = 429},
  [915] = {.lex_state = 437},
  [916] = {.lex_state = 429},
  [917] = {.lex_state = 437},
  [918] = {.lex_state = 434},
  [919] = {.lex_state = 429},
  [920] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [aux_sym_diagram_class_token1] = ACTIONS(1),
    [aux_sym_diagram_class_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(1),
    [aux_sym_mmap_class_token1] = ACTIONS(1),
    [aux_sym_mmap_icon_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym__md_start] = ACTIONS(1),
    [sym__md_end] = ACTIONS(1),
    [aux_sym_direction_tb_token1] = ACTIONS(1),
    [aux_sym_direction_bt_token1] = ACTIONS(1),
    [aux_sym_direction_rl_token1] = ACTIONS(1),
    [aux_sym_direction_lr_token1] = ACTIONS(1),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_RBRACEo] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(818),
    [sym_directive] = STATE(84),
    [sym_diagram_sequence] = STATE(798),
    [sym_diagram_class] = STATE(798),
    [sym_diagram_state] = STATE(798),
    [sym_diagram_gantt] = STATE(798),
    [sym_diagram_pie] = STATE(798),
    [sym_diagram_flow] = STATE(798),
    [sym_diagram_er] = STATE(798),
    [sym_diagram_mindmap] = STATE(798),
    [aux_sym_source_file_repeat1] = STATE(84),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(7),
    [aux_sym_diagram_sequence_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token1] = ACTIONS(11),
    [aux_sym_diagram_class_token2] = ACTIONS(13),
    [aux_sym_diagram_state_token1] = ACTIONS(15),
    [aux_sym_diagram_state_token2] = ACTIONS(17),
    [aux_sym_diagram_gantt_token1] = ACTIONS(19),
    [aux_sym_diagram_pie_token1] = ACTIONS(21),
    [aux_sym_diagram_flow_token1] = ACTIONS(23),
    [aux_sym_diagram_flow_token2] = ACTIONS(23),
    [aux_sym_diagram_er_token1] = ACTIONS(25),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(5),
    [sym__newline] = ACTIONS(29),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(618), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [105] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(515), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [210] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(633), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [315] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    STATE(632), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [420] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(579), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [525] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(631), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [630] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(614), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [735] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(597), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [840] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    STATE(590), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [945] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    STATE(615), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1050] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    STATE(591), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1155] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(127), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    STATE(588), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1260] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(129), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1360] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(131), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1460] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(133), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1560] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(141), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(144), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(147), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(150), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(153), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(156), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(159), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(162), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(165), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(168), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(173), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(176), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(179), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(182), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(185), 1,
      sym__newline,
    ACTIONS(188), 1,
      sym__sequence_actor_word,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(135), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(171), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1660] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__sequence_actor_word,
    ACTIONS(194), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(197), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(200), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(203), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(206), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(209), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(212), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(215), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(218), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(221), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(224), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(227), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(230), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(233), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(239), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(171), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(191), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1760] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(307), 1,
      sym_sequence_actor,
    STATE(622), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(44), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(159), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1857] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1956] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2055] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2154] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2253] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2352] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2451] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2550] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2649] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2748] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2847] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2946] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3045] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3144] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(338), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3243] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 1,
      sym__newline,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(307), 1,
      sym_sequence_actor,
    STATE(622), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(19), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(159), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3340] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3439] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3538] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3637] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3736] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(46), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3835] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(188), 1,
      sym__sequence_actor_word,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(378), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(384), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(387), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(390), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(396), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(402), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(354), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3934] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(45), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4033] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4132] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(409), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4231] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(422), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(428), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(434), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(440), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(443), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(446), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(452), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(458), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(461), 1,
      sym__newline,
    ACTIONS(464), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(307), 1,
      sym_sequence_actor,
    STATE(622), 1,
      sym__sequence_participant_type,
    ACTIONS(413), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(44), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(159), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4328] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4427] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(180), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(479), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(155), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4526] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4622] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4718] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4814] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4910] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5006] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5102] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5198] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5294] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5390] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5486] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5582] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5678] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5774] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(301), 1,
      sym_sequence_actor,
    STATE(551), 1,
      sym__sequence_participant_type,
    ACTIONS(75), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(97), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5870] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(116), 1,
      sym__sequence_stmt,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(585), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(110), 17,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5966] = 18,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(483), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(487), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(489), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(495), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(497), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(322), 1,
      sym__flow_vertex_kind,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(499), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(335), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [6044] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(507), 1,
      sym__newline,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(65), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6111] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6178] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6245] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym__newline,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6312] = 18,
    ACTIONS(533), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(541), 1,
      sym__newline,
    ACTIONS(544), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(547), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(550), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(556), 1,
      anon_sym_DASH_DASH,
    ACTIONS(559), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(562), 1,
      aux_sym_state_name_token1,
    ACTIONS(565), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6379] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(662), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6442] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(662), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6505] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(288), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6568] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(580), 1,
      sym__newline,
    STATE(63), 1,
      sym__state_stmt,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6631] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(288), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6694] = 17,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(594), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(598), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(600), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(602), 1,
      sym__newline,
    ACTIONS(604), 1,
      aux_sym_gantt_task_text_token1,
    STATE(630), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(808), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(77), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6757] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(288), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6820] = 17,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(614), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(617), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(620), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(623), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(626), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(629), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(632), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(635), 1,
      sym__newline,
    ACTIONS(638), 1,
      aux_sym_gantt_task_text_token1,
    STATE(630), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(808), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(75), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6883] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(641), 1,
      sym__newline,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(634), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6946] = 17,
    ACTIONS(584), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(594), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(598), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(600), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(604), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    ACTIONS(645), 1,
      sym__newline,
    STATE(630), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(808), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(75), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 10,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [7009] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(662), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7072] = 16,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(288), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7132] = 16,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(662), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7192] = 16,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(64), 1,
      sym__state_stmt,
    STATE(223), 1,
      sym_state_name,
    STATE(234), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7252] = 16,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(570), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(234), 1,
      sym_state_hide_empty_description,
    STATE(431), 1,
      sym_state_name,
    STATE(647), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(239), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7312] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(651), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(649), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [7344] = 15,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(9), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(11), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(13), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(15), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(17), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(19), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(21), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(25), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(27), 1,
      aux_sym_diagram_mindmap_token1,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(23), 2,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_flow_token2,
    STATE(220), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(860), 8,
      sym_diagram_sequence,
      sym_diagram_class,
      sym_diagram_state,
      sym_diagram_gantt,
      sym_diagram_pie,
      sym_diagram_flow,
      sym_diagram_er,
      sym_diagram_mindmap,
  [7400] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7432] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7464] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7496] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7528] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7560] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7592] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7624] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7656] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7688] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7720] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7752] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7784] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7816] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7848] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7880] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7912] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7944] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7976] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8008] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8040] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8072] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8104] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8136] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8168] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8200] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8232] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8264] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8296] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8328] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8360] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8392] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8424] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8456] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8488] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8520] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8552] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8584] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8616] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8648] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8680] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8712] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8744] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8776] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8808] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8840] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8872] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8904] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8936] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8968] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9000] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9032] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9064] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9096] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9128] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9160] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9192] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9224] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9256] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9288] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9320] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9352] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9384] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9416] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9448] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9479] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9510] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9541] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9572] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9603] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9634] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9665] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9696] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9727] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9758] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9789] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9820] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9851] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9882] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9913] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9944] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9975] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10006] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10037] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10068] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10099] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10130] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10161] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10192] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10223] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10254] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10285] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10316] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10347] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10378] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10409] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10440] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10471] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10502] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10533] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10564] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10595] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10626] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10657] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10688] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10750] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10781] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10812] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10843] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10874] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10905] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10936] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10967] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10998] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11029] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11060] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11091] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11122] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11153] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11184] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11215] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11246] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11277] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11308] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11339] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11370] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11401] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      anon_sym_LBRACK,
    ACTIONS(791), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(793), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(795), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(799), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(801), 1,
      sym__newline,
    STATE(459), 1,
      sym_mmap_icon,
    STATE(657), 1,
      sym_mmap_class,
    STATE(378), 6,
      sym_mmap_node_square,
      sym_mmap_node_rounded,
      sym_mmap_node_circle,
      sym_mmap_node_cloud,
      sym_mmap_node_bang,
      sym_mmap_node_hexagon,
  [11452] = 15,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(805), 1,
      anon_sym_STAR,
    ACTIONS(807), 1,
      anon_sym_GT,
    ACTIONS(809), 1,
      sym__dquote_string,
    ACTIONS(811), 1,
      sym_class_reltype_aggregation,
    ACTIONS(815), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_DASH_DASH,
    ACTIONS(819), 1,
      anon_sym_DOT_DOT,
    STATE(235), 1,
      sym__class_linetype,
    STATE(384), 1,
      sym_class_relation,
    STATE(429), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(351), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(410), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11503] = 8,
    ACTIONS(823), 1,
      sym__newline,
    STATE(308), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(829), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(821), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(827), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(380), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11538] = 9,
    STATE(217), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(435), 1,
      sym__flow_link,
    STATE(635), 1,
      sym_flow_link_arrow_start,
    STATE(711), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(833), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(835), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(826), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11575] = 6,
    ACTIONS(839), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      aux_sym_state_name_token1,
    STATE(264), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(837), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11606] = 9,
    STATE(218), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(435), 1,
      sym__flow_link,
    STATE(635), 1,
      sym_flow_link_arrow_start,
    STATE(711), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(833), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(835), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(845), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(826), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11643] = 9,
    STATE(218), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(435), 1,
      sym__flow_link,
    STATE(635), 1,
      sym_flow_link_arrow_start,
    STATE(711), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(847), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(849), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(852), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(826), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11680] = 13,
    ACTIONS(805), 1,
      anon_sym_STAR,
    ACTIONS(807), 1,
      anon_sym_GT,
    ACTIONS(811), 1,
      sym_class_reltype_aggregation,
    ACTIONS(815), 1,
      anon_sym_LT,
    ACTIONS(817), 1,
      anon_sym_DASH_DASH,
    ACTIONS(819), 1,
      anon_sym_DOT_DOT,
    STATE(235), 1,
      sym__class_linetype,
    STATE(372), 1,
      sym_class_relation,
    STATE(429), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(351), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(410), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11725] = 6,
    ACTIONS(855), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(862), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(220), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    ACTIONS(858), 9,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_flow_token2,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
  [11755] = 7,
    STATE(540), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(829), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(821), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(827), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(380), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11787] = 3,
    ACTIONS(867), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(865), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11811] = 6,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(873), 1,
      anon_sym_DASH_DASH_GT,
    STATE(582), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(871), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11841] = 10,
    ACTIONS(879), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      sym_er_cardinarity_only_one,
    STATE(362), 1,
      sym__er_cardinarity,
    STATE(735), 1,
      sym_er_relation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(877), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(881), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(883), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(885), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(407), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11879] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(891), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(889), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11902] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_class_label_token1,
    STATE(232), 1,
      sym_state_description,
    ACTIONS(895), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(893), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11931] = 5,
    ACTIONS(901), 1,
      anon_sym_TILDE,
    ACTIONS(903), 1,
      anon_sym_LT,
    STATE(287), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(899), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [11958] = 4,
    ACTIONS(907), 1,
      anon_sym_COLON,
    ACTIONS(909), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(905), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11983] = 5,
    ACTIONS(913), 1,
      sym__class_name,
    ACTIONS(915), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(917), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(911), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12009] = 3,
    ACTIONS(921), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(919), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12031] = 3,
    ACTIONS(925), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(923), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12053] = 3,
    ACTIONS(929), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(927), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12075] = 3,
    ACTIONS(917), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(911), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12097] = 3,
    ACTIONS(933), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(931), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12119] = 10,
    ACTIONS(805), 1,
      anon_sym_STAR,
    ACTIONS(807), 1,
      anon_sym_GT,
    ACTIONS(815), 1,
      anon_sym_LT,
    ACTIONS(935), 1,
      sym__class_name,
    ACTIONS(939), 1,
      sym_class_reltype_aggregation,
    STATE(624), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(937), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(410), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12155] = 3,
    ACTIONS(943), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(941), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12177] = 3,
    ACTIONS(947), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(945), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12199] = 12,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(953), 1,
      anon_sym_end,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(281), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(693), 1,
      sym__flow_stmt,
    STATE(851), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12239] = 3,
    ACTIONS(959), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(957), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12261] = 12,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(961), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(281), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(693), 1,
      sym__flow_stmt,
    STATE(827), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12301] = 3,
    ACTIONS(965), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(963), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12323] = 3,
    ACTIONS(969), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(967), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12345] = 3,
    ACTIONS(973), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(971), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12367] = 5,
    ACTIONS(913), 1,
      sym__class_name,
    ACTIONS(915), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(975), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12393] = 12,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(979), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(281), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(693), 1,
      sym__flow_stmt,
    STATE(848), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12433] = 3,
    ACTIONS(983), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(981), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12455] = 3,
    ACTIONS(987), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(985), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12477] = 3,
    ACTIONS(991), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(989), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12499] = 3,
    ACTIONS(995), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(993), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12521] = 3,
    ACTIONS(999), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(997), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12543] = 3,
    ACTIONS(977), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(975), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12565] = 10,
    ACTIONS(805), 1,
      anon_sym_STAR,
    ACTIONS(807), 1,
      anon_sym_GT,
    ACTIONS(815), 1,
      anon_sym_LT,
    ACTIONS(939), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1001), 1,
      sym__class_name,
    STATE(552), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1003), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(410), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12601] = 11,
    ACTIONS(1005), 1,
      ts_builtin_sym_end,
    ACTIONS(1007), 1,
      anon_sym_class,
    ACTIONS(1009), 1,
      anon_sym_LT_LT,
    ACTIONS(1011), 1,
      sym__class_name,
    ACTIONS(1013), 1,
      sym__bquote_string,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(651), 1,
      aux_sym_class_name_body_repeat1,
    STATE(685), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(674), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12639] = 3,
    ACTIONS(1017), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12661] = 3,
    ACTIONS(1021), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1019), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12683] = 3,
    ACTIONS(891), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(889), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12705] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__sequence_actor_word,
    STATE(267), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1027), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1023), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12733] = 3,
    ACTIONS(1031), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1029), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12755] = 11,
    ACTIONS(1007), 1,
      anon_sym_class,
    ACTIONS(1009), 1,
      anon_sym_LT_LT,
    ACTIONS(1011), 1,
      sym__class_name,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(651), 1,
      aux_sym_class_name_body_repeat1,
    STATE(685), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(674), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12793] = 3,
    ACTIONS(1037), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12815] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1041), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(1039), 11,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_flow_token2,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      sym__newline,
  [12837] = 3,
    ACTIONS(1045), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1043), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12859] = 9,
    ACTIONS(839), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym__state_annotation,
    STATE(264), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1047), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1049), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1051), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(268), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12893] = 3,
    ACTIONS(1055), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1053), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12915] = 3,
    ACTIONS(1059), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1057), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12937] = 3,
    ACTIONS(1063), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1061), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12959] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__sequence_actor_word,
    STATE(267), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1070), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1065), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12987] = 3,
    ACTIONS(1074), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1072), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13009] = 3,
    ACTIONS(1078), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1076), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13030] = 3,
    ACTIONS(1082), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1080), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13051] = 10,
    ACTIONS(1007), 1,
      anon_sym_class,
    ACTIONS(1009), 1,
      anon_sym_LT_LT,
    ACTIONS(1011), 1,
      sym__class_name,
    ACTIONS(1013), 1,
      sym__bquote_string,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(651), 1,
      aux_sym_class_name_body_repeat1,
    STATE(653), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(674), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13086] = 11,
    ACTIONS(1084), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1087), 1,
      anon_sym_subgraph,
    ACTIONS(1090), 1,
      anon_sym_end,
    ACTIONS(1092), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(272), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(693), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13123] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13160] = 3,
    ACTIONS(1113), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1111), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13181] = 3,
    ACTIONS(1117), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1115), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13202] = 10,
    ACTIONS(1007), 1,
      anon_sym_class,
    ACTIONS(1009), 1,
      anon_sym_LT_LT,
    ACTIONS(1011), 1,
      sym__class_name,
    ACTIONS(1013), 1,
      sym__bquote_string,
    STATE(213), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(651), 1,
      aux_sym_class_name_body_repeat1,
    STATE(685), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(674), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13237] = 3,
    ACTIONS(1121), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1119), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13258] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1123), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(568), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13295] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13332] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13369] = 11,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(1129), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(272), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(693), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13406] = 3,
    ACTIONS(1133), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1131), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13427] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13464] = 3,
    ACTIONS(1139), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1137), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13485] = 3,
    ACTIONS(1143), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1141), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13506] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1145), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(533), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13543] = 3,
    ACTIONS(1149), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1147), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13564] = 3,
    ACTIONS(1151), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(536), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13585] = 3,
    ACTIONS(1155), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13606] = 3,
    ACTIONS(1159), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1157), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13627] = 3,
    ACTIONS(1163), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13648] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(889), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [13667] = 3,
    ACTIONS(1167), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13688] = 3,
    ACTIONS(1171), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1169), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13709] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13746] = 11,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13783] = 5,
    ACTIONS(1179), 1,
      anon_sym_AMP,
    STATE(298), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1177), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13807] = 5,
    ACTIONS(1179), 1,
      anon_sym_AMP,
    STATE(304), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1185), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1183), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13831] = 5,
    ACTIONS(1189), 1,
      anon_sym_RBRACK,
    ACTIONS(1191), 1,
      aux_sym_flow_text_literal_token1,
    STATE(315), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1187), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13855] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1193), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [13873] = 7,
    ACTIONS(1195), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1199), 1,
      sym_solid_open_arrow,
    ACTIONS(1201), 1,
      anon_sym_DASH_DASH_GT,
    STATE(354), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(655), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1197), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13901] = 10,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(550), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13935] = 10,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(644), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13969] = 5,
    ACTIONS(1207), 1,
      anon_sym_AMP,
    STATE(304), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1210), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1205), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13993] = 10,
    ACTIONS(1212), 1,
      ts_builtin_sym_end,
    ACTIONS(1214), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1216), 1,
      sym__newline,
    ACTIONS(1218), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1220), 1,
      aux_sym_pie_label_token1,
    STATE(342), 1,
      sym_pie_showdata,
    STATE(749), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(341), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(433), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14027] = 7,
    ACTIONS(1195), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1199), 1,
      sym_solid_open_arrow,
    ACTIONS(1201), 1,
      anon_sym_DASH_DASH_GT,
    STATE(356), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(655), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1197), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14055] = 7,
    ACTIONS(1195), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1199), 1,
      sym_solid_open_arrow,
    ACTIONS(1201), 1,
      anon_sym_DASH_DASH_GT,
    STATE(358), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(655), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1197), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14083] = 10,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(1222), 1,
      sym__newline,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(449), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14117] = 10,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(686), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14151] = 7,
    ACTIONS(887), 1,
      sym_er_cardinarity_only_one,
    STATE(762), 1,
      sym__er_cardinarity,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(883), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(885), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(407), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [14179] = 10,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(644), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14213] = 10,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    ACTIONS(1226), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(644), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14247] = 7,
    ACTIONS(1195), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1199), 1,
      sym_solid_open_arrow,
    ACTIONS(1201), 1,
      anon_sym_DASH_DASH_GT,
    STATE(364), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(655), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1197), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14275] = 10,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LT_LT,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(500), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14309] = 5,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
    ACTIONS(1232), 1,
      aux_sym_flow_text_literal_token1,
    STATE(315), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1228), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [14333] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1237), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1235), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14352] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1241), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__newline,
    ACTIONS(1239), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [14373] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1245), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1243), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14392] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1249), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1247), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14411] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1253), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1251), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14430] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1257), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1255), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14449] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1261), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1259), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14468] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1265), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1263), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14487] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1267), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14506] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1273), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1271), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14525] = 9,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(644), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14556] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1277), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1275), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14575] = 9,
    ACTIONS(949), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(951), 1,
      anon_sym_subgraph,
    ACTIONS(955), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(215), 1,
      sym_flow_node,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(475), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14606] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1281), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1279), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14625] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1210), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1205), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14644] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1285), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1283), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14663] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1289), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1287), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14682] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1293), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1291), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14701] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1297), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1295), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14720] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1301), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1299), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14739] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1305), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1303), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14758] = 6,
    ACTIONS(1311), 1,
      anon_sym_STAR,
    ACTIONS(1313), 1,
      anon_sym_DOLLAR,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1307), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14782] = 4,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1317), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1315), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [14802] = 6,
    ACTIONS(1322), 1,
      anon_sym_STAR,
    ACTIONS(1324), 1,
      anon_sym_DOLLAR,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1320), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14826] = 6,
    ACTIONS(1328), 1,
      anon_sym_STAR,
    ACTIONS(1330), 1,
      anon_sym_DOLLAR,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1326), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14850] = 8,
    ACTIONS(1214), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1220), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1332), 1,
      ts_builtin_sym_end,
    ACTIONS(1334), 1,
      sym__newline,
    STATE(749), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(348), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(433), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14878] = 8,
    ACTIONS(1214), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1220), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1332), 1,
      ts_builtin_sym_end,
    ACTIONS(1336), 1,
      sym__newline,
    STATE(749), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(349), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(433), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14906] = 6,
    ACTIONS(1340), 1,
      anon_sym_STAR,
    ACTIONS(1342), 1,
      anon_sym_DOLLAR,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1338), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14930] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1344), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(847), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14948] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1346), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14966] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1350), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14984] = 6,
    ACTIONS(1356), 1,
      anon_sym_STAR,
    ACTIONS(1358), 1,
      anon_sym_DOLLAR,
    STATE(338), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1354), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15008] = 8,
    ACTIONS(1360), 1,
      ts_builtin_sym_end,
    ACTIONS(1362), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1365), 1,
      sym__newline,
    ACTIONS(1368), 1,
      aux_sym_pie_label_token1,
    STATE(749), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(348), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(433), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15036] = 8,
    ACTIONS(1214), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1220), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1334), 1,
      sym__newline,
    ACTIONS(1371), 1,
      ts_builtin_sym_end,
    STATE(749), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(348), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(433), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15064] = 9,
    ACTIONS(1373), 1,
      sym__newline,
    ACTIONS(1375), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1377), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1379), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(465), 1,
      sym__er_attribute_key_type,
    STATE(881), 1,
      sym__er_word,
    STATE(882), 1,
      sym_er_attribute_comment,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(673), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [15094] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1383), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1381), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15112] = 9,
    ACTIONS(1095), 1,
      anon_sym_TILDE,
    ACTIONS(1099), 1,
      anon_sym_PLUS,
    ACTIONS(1101), 1,
      anon_sym_DASH,
    ACTIONS(1103), 1,
      anon_sym_POUND,
    ACTIONS(1109), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    STATE(742), 1,
      sym_class_method_line,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [15142] = 6,
    ACTIONS(1385), 1,
      ts_builtin_sym_end,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(716), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15164] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(894), 1,
      sym_sequence_actor,
    STATE(484), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15190] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1393), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15204] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(862), 1,
      sym_sequence_actor,
    STATE(501), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15230] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(915), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(911), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15246] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(785), 1,
      sym_sequence_actor,
    STATE(584), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15272] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(716), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15294] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(915), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(975), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15310] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1397), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15324] = 5,
    ACTIONS(1399), 1,
      anon_sym_DASH_DASH,
    STATE(310), 1,
      sym__er_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(363), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1401), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15344] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1403), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15358] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1389), 1,
      anon_sym_PLUS,
    ACTIONS(1391), 1,
      anon_sym_DASH,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(878), 1,
      sym_sequence_actor,
    STATE(490), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15384] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1405), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(716), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15406] = 6,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    ACTIONS(1407), 1,
      sym__newline,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(648), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15428] = 4,
    ACTIONS(1411), 1,
      sym__alpha_num_token,
    STATE(367), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1409), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15445] = 6,
    ACTIONS(1414), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1416), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1418), 1,
      aux_sym_note_placement_right_token1,
    STATE(512), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(876), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15466] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1422), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1420), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15481] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(915), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(975), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15496] = 6,
    ACTIONS(1416), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1418), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1424), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(495), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(876), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15517] = 7,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1426), 1,
      sym__class_name,
    ACTIONS(1428), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(555), 1,
      sym_class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15540] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1432), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1430), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15555] = 6,
    ACTIONS(1416), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1418), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1434), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(652), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(876), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15576] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1438), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1436), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15591] = 6,
    ACTIONS(1416), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1418), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1440), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(486), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(876), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15612] = 5,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(716), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15631] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(799), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(1442), 1,
      ts_builtin_sym_end,
    ACTIONS(1444), 1,
      sym__newline,
    STATE(474), 1,
      sym_mmap_icon,
    STATE(661), 1,
      sym_mmap_class,
  [15656] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1448), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1446), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15671] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1452), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1450), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15686] = 6,
    ACTIONS(1456), 1,
      sym__alpha_num_token,
    STATE(393), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(745), 1,
      sym_flow_vertex_text,
    STATE(783), 1,
      sym_flow_vertex_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1454), 2,
      anon_sym_SEMI,
      sym__newline,
  [15707] = 4,
    ACTIONS(1458), 1,
      anon_sym_TILDE,
    STATE(470), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(899), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15724] = 5,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(224), 1,
      sym_er_entity_name,
    STATE(617), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(683), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15743] = 7,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1426), 1,
      sym__class_name,
    ACTIONS(1460), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(623), 1,
      sym_class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15766] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(915), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(911), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15781] = 6,
    ACTIONS(1462), 1,
      anon_sym_RBRACE,
    ACTIONS(1464), 1,
      sym__er_alphanum,
    STATE(746), 1,
      sym_er_attribute_type,
    STATE(759), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(418), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15802] = 5,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    STATE(650), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(677), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15820] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1472), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(796), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15838] = 4,
    ACTIONS(1474), 1,
      sym__alpha_num_token,
    STATE(389), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1409), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15854] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(975), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15866] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1477), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15878] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1479), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(814), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15896] = 4,
    ACTIONS(1483), 1,
      sym__alpha_num_token,
    STATE(367), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1481), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [15912] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1485), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15924] = 5,
    ACTIONS(1487), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1489), 1,
      sym_flow_text_quoted,
    STATE(409), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(751), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15942] = 5,
    ACTIONS(1487), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1491), 1,
      sym_flow_text_quoted,
    STATE(409), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(752), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15960] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1493), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(753), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15978] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1495), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1497), 1,
      sym__md_start,
    STATE(912), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [15998] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(911), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16010] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1499), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16022] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1501), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(734), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16040] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1503), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(738), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16058] = 5,
    ACTIONS(1505), 1,
      anon_sym_RBRACE,
    ACTIONS(1507), 1,
      sym__er_alphanum,
    STATE(746), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(403), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16076] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1510), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(825), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16094] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1512), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16106] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1514), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16118] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1516), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16130] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1518), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1520), 1,
      sym__md_start,
    STATE(911), 1,
      sym_mmap_node_content,
    STATE(464), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16150] = 4,
    ACTIONS(1522), 1,
      aux_sym_flow_text_literal_token1,
    STATE(420), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1187), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16166] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1524), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16178] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1526), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(824), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16196] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1495), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1497), 1,
      sym__md_start,
    STATE(913), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16216] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1518), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1520), 1,
      sym__md_start,
    STATE(914), 1,
      sym_mmap_node_content,
    STATE(464), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16236] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1518), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1520), 1,
      sym__md_start,
    STATE(915), 1,
      sym_mmap_node_content,
    STATE(464), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16256] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1518), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1520), 1,
      sym__md_start,
    STATE(917), 1,
      sym_mmap_node_content,
    STATE(464), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16276] = 5,
    ACTIONS(1487), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1528), 1,
      sym_flow_text_quoted,
    STATE(409), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(802), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16294] = 5,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    STATE(581), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(677), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16312] = 5,
    ACTIONS(1464), 1,
      sym__er_alphanum,
    ACTIONS(1530), 1,
      anon_sym_RBRACE,
    STATE(746), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(403), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16330] = 6,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1426), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(511), 1,
      sym_class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16350] = 4,
    ACTIONS(1532), 1,
      aux_sym_flow_text_literal_token1,
    STATE(420), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1228), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16366] = 6,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1535), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(613), 1,
      aux_sym_class_name_body_repeat1,
    STATE(712), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16386] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1537), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16398] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1539), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(795), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16416] = 6,
    ACTIONS(1013), 1,
      sym__bquote_string,
    ACTIONS(1426), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(555), 1,
      sym_class_name,
    STATE(629), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16436] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1541), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(854), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16454] = 6,
    ACTIONS(1535), 1,
      sym__class_name,
    ACTIONS(1543), 1,
      sym__bquote_string,
    STATE(382), 1,
      sym_class_name_body,
    STATE(468), 1,
      sym_class_name,
    STATE(641), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16474] = 4,
    ACTIONS(1545), 1,
      sym__alpha_num_token,
    STATE(389), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1547), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16490] = 5,
    ACTIONS(1549), 1,
      sym__dquote_string,
    STATE(216), 1,
      sym_state_alias,
    STATE(263), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16508] = 5,
    ACTIONS(817), 1,
      anon_sym_DASH_DASH,
    ACTIONS(819), 1,
      anon_sym_DOT_DOT,
    STATE(252), 1,
      sym__class_linetype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(351), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16526] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1551), 1,
      sym_flow_text_quoted,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(853), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16544] = 5,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(873), 1,
      anon_sym_DASH_DASH_GT,
    STATE(643), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16562] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1555), 1,
      sym_pie_title,
    ACTIONS(1557), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1553), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [16580] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1559), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16591] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1561), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16602] = 5,
    ACTIONS(1563), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(297), 1,
      sym_flow_vertex,
    STATE(344), 1,
      sym_flow_node,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16619] = 3,
    ACTIONS(1565), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [16632] = 4,
    ACTIONS(1203), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1567), 2,
      anon_sym_SEMI,
      sym__newline,
  [16647] = 4,
    ACTIONS(1569), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1571), 2,
      anon_sym_SEMI,
      sym__newline,
  [16662] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1576), 1,
      aux_sym_class_label_token1,
    STATE(708), 1,
      sym_class_label,
    ACTIONS(1574), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16679] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_class_label_token1,
    STATE(232), 1,
      sym_state_description,
    ACTIONS(893), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16696] = 3,
    STATE(850), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(833), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16709] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1578), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16720] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16731] = 3,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1582), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16744] = 3,
    STATE(340), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1584), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16757] = 3,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16770] = 3,
    STATE(347), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1588), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16783] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1590), 1,
      sym__newline,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
    STATE(910), 1,
      sym_sequence_text,
  [16802] = 4,
    ACTIONS(1594), 1,
      ts_builtin_sym_end,
    STATE(455), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1596), 2,
      anon_sym_SEMI,
      sym__newline,
  [16817] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1576), 1,
      aux_sym_class_label_token1,
    STATE(665), 1,
      sym_class_label,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16834] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1600), 1,
      sym__newline,
    STATE(859), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [16853] = 4,
    STATE(678), 1,
      sym_er_role,
    STATE(684), 1,
      sym__er_word,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1602), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [16868] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1141), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16879] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1604), 1,
      sym__newline,
    STATE(875), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [16898] = 4,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    STATE(438), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1606), 2,
      anon_sym_SEMI,
      sym__newline,
  [16913] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1608), 1,
      sym__newline,
    STATE(794), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [16932] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1610), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [16943] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1612), 1,
      sym__sequence_actor_word,
    STATE(461), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1023), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [16960] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1442), 1,
      ts_builtin_sym_end,
    ACTIONS(1444), 1,
      sym__newline,
    STATE(661), 1,
      sym_mmap_class,
  [16979] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1614), 1,
      sym__newline,
    STATE(891), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [16998] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1616), 1,
      sym__sequence_actor_word,
    STATE(461), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1065), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17015] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17026] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1623), 1,
      sym__newline,
    ACTIONS(1621), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17041] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1625), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17052] = 5,
    ACTIONS(1375), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1627), 1,
      sym__newline,
    STATE(845), 1,
      sym_er_attribute_comment,
    STATE(881), 1,
      sym__er_word,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17069] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1631), 1,
      sym__newline,
    ACTIONS(1629), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17084] = 3,
    ACTIONS(649), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1633), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [17097] = 4,
    ACTIONS(1637), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1639), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1635), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17112] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1643), 1,
      sym__newline,
    ACTIONS(1641), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17127] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1147), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17138] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1647), 1,
      sym__newline,
    ACTIONS(1645), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17153] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1649), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [17164] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1576), 1,
      aux_sym_class_label_token1,
    STATE(687), 1,
      sym_class_label,
    ACTIONS(1651), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17181] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1653), 1,
      ts_builtin_sym_end,
    ACTIONS(1655), 1,
      sym__newline,
    STATE(675), 1,
      sym_mmap_class,
  [17200] = 4,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    STATE(437), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1606), 2,
      anon_sym_SEMI,
      sym__newline,
  [17215] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1659), 1,
      sym__newline,
    ACTIONS(1657), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17230] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1663), 1,
      sym__newline,
    ACTIONS(1661), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17245] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1665), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(177), 1,
      sym_sequence_text,
    STATE(184), 1,
      sym__sequence_rest_text,
  [17261] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(729), 1,
      sym_sequence_actor,
  [17277] = 4,
    ACTIONS(1669), 1,
      ts_builtin_sym_end,
    ACTIONS(1671), 1,
      sym__newline,
    STATE(480), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17291] = 4,
    ACTIONS(1674), 1,
      ts_builtin_sym_end,
    ACTIONS(1676), 1,
      sym__newline,
    STATE(605), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17305] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(773), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17321] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(896), 1,
      sym_sequence_actor,
  [17337] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(895), 1,
      sym_sequence_actor,
  [17353] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(775), 1,
      sym_sequence_actor,
  [17369] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(893), 1,
      sym_sequence_actor,
  [17385] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(666), 1,
      sym_sequence_actor,
  [17401] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(890), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17417] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(880), 1,
      sym_sequence_actor,
  [17433] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(879), 1,
      sym_sequence_actor,
  [17449] = 4,
    ACTIONS(1563), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(330), 1,
      sym_flow_vertex,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17463] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17479] = 4,
    ACTIONS(1678), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1680), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17493] = 4,
    ACTIONS(1683), 1,
      ts_builtin_sym_end,
    ACTIONS(1685), 1,
      sym__newline,
    STATE(494), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17507] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(877), 1,
      sym_sequence_actor,
  [17523] = 4,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(1688), 1,
      sym__newline,
    STATE(494), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17537] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(672), 1,
      sym_sequence_actor,
  [17553] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(874), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17569] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(864), 1,
      sym_sequence_actor,
  [17585] = 4,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    ACTIONS(1690), 1,
      sym__newline,
    STATE(537), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17599] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(863), 1,
      sym_sequence_actor,
  [17615] = 4,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    ACTIONS(1690), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17629] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1692), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17639] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1694), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17649] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1696), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17659] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1698), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17669] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1700), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17679] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1702), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17689] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1704), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17699] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1706), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17709] = 3,
    ACTIONS(1708), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1651), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17721] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(861), 1,
      sym_sequence_actor,
  [17737] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(679), 1,
      sym_sequence_actor,
  [17753] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(858), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17769] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1710), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17783] = 4,
    ACTIONS(1712), 1,
      sym__class_name,
    ACTIONS(1715), 1,
      sym__bquote_string,
    STATE(516), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17797] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(838), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17813] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1717), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17823] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(837), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17839] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(836), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17855] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(834), 1,
      sym_sequence_actor,
  [17871] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(833), 1,
      sym_sequence_actor,
  [17887] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(832), 1,
      sym_sequence_actor,
  [17903] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(831), 1,
      sym_sequence_actor,
  [17919] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(817), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17935] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(816), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17951] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1721), 1,
      sym__newline,
    ACTIONS(1719), 2,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
  [17965] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(815), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [17981] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(813), 1,
      sym_sequence_actor,
  [17997] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(812), 1,
      sym_sequence_actor,
  [18013] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(811), 1,
      sym_sequence_actor,
  [18029] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(810), 1,
      sym_sequence_actor,
  [18045] = 4,
    ACTIONS(1723), 1,
      anon_sym_RBRACE,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(553), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18059] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(805), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18075] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(793), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18091] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(792), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18107] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1727), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18121] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(791), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18137] = 4,
    ACTIONS(1729), 1,
      anon_sym_RBRACE,
    ACTIONS(1731), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18151] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1734), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18161] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(789), 1,
      sym_sequence_actor,
  [18177] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(788), 1,
      sym_sequence_actor,
  [18193] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(787), 1,
      sym_sequence_actor,
  [18209] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(786), 1,
      sym_sequence_actor,
  [18225] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(782), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18241] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(781), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18257] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(780), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18273] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1736), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18283] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(779), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18299] = 4,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    ACTIONS(1738), 1,
      sym__newline,
    STATE(564), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18313] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(740), 1,
      sym_sequence_actor,
  [18329] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1740), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18339] = 4,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    ACTIONS(1738), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18353] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(767), 1,
      sym_sequence_actor,
  [18369] = 3,
    ACTIONS(1742), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18381] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1307), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18391] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(766), 1,
      sym_sequence_actor,
  [18407] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1744), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18417] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1746), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18427] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(733), 1,
      sym_sequence_actor,
  [18443] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(765), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18459] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(764), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18475] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(763), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18491] = 4,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    ACTIONS(1748), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18505] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(761), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18521] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1750), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18531] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(750), 1,
      sym_sequence_actor,
  [18547] = 4,
    ACTIONS(1752), 1,
      anon_sym_RBRACE,
    ACTIONS(1754), 1,
      sym__newline,
    STATE(502), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18561] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(835), 1,
      sym_sequence_actor,
  [18577] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(726), 1,
      sym_sequence_actor,
  [18593] = 3,
    ACTIONS(1758), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1756), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18605] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
    STATE(903), 1,
      sym_sequence_text,
  [18621] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(790), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18637] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(748), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18653] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18669] = 4,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    ACTIONS(1760), 1,
      sym__newline,
    STATE(599), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18683] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(819), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [18699] = 4,
    ACTIONS(1762), 1,
      anon_sym_COLON,
    ACTIONS(1764), 1,
      aux_sym_gantt_task_text_token1,
    STATE(578), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18713] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1767), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18727] = 4,
    ACTIONS(1769), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1771), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18741] = 3,
    STATE(829), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18753] = 3,
    STATE(228), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1774), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18765] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(680), 1,
      sym_sequence_actor,
  [18781] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(856), 1,
      sym_sequence_actor,
  [18797] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(697), 1,
      sym_sequence_actor,
  [18813] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(843), 1,
      sym_sequence_actor,
  [18829] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(846), 1,
      sym_sequence_actor,
  [18845] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1776), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18859] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(694), 1,
      sym_sequence_actor,
  [18875] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1778), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18889] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1780), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18903] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(865), 1,
      sym_sequence_actor,
  [18919] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1665), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(175), 1,
      sym_sequence_text,
    STATE(184), 1,
      sym__sequence_rest_text,
  [18935] = 4,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
    ACTIONS(1782), 1,
      sym__newline,
    STATE(480), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18949] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1665), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(183), 1,
      sym_sequence_text,
    STATE(184), 1,
      sym__sequence_rest_text,
  [18965] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1665), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(184), 1,
      sym__sequence_rest_text,
    STATE(186), 1,
      sym_sequence_text,
  [18981] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1784), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18995] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(866), 1,
      sym_sequence_actor,
  [19011] = 4,
    ACTIONS(1786), 1,
      ts_builtin_sym_end,
    ACTIONS(1788), 1,
      sym__newline,
    STATE(599), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19025] = 4,
    ACTIONS(1791), 1,
      ts_builtin_sym_end,
    ACTIONS(1793), 1,
      sym__newline,
    STATE(481), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19039] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(883), 1,
      sym_sequence_actor,
  [19055] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(884), 1,
      sym_sequence_actor,
  [19071] = 4,
    ACTIONS(1483), 1,
      sym__alpha_num_token,
    ACTIONS(1547), 1,
      anon_sym_PIPE,
    STATE(367), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19085] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(886), 1,
      sym_sequence_actor,
  [19101] = 4,
    ACTIONS(1795), 1,
      ts_builtin_sym_end,
    ACTIONS(1797), 1,
      sym__newline,
    STATE(605), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19115] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(888), 1,
      sym_sequence_actor,
  [19131] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(898), 1,
      sym_sequence_text,
    STATE(899), 1,
      sym__sequence_rest_text,
  [19147] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym_sequence_text,
    STATE(95), 1,
      sym__sequence_rest_text,
  [19163] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(88), 1,
      sym_sequence_text,
    STATE(95), 1,
      sym__sequence_rest_text,
  [19179] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(89), 1,
      sym_sequence_text,
    STATE(95), 1,
      sym__sequence_rest_text,
  [19195] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(90), 1,
      sym_sequence_text,
    STATE(95), 1,
      sym__sequence_rest_text,
  [19211] = 4,
    ACTIONS(1385), 1,
      ts_builtin_sym_end,
    ACTIONS(1802), 1,
      sym__newline,
    STATE(480), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19225] = 4,
    ACTIONS(1804), 1,
      sym__class_name,
    ACTIONS(1806), 1,
      sym__bquote_string,
    STATE(516), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19239] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1808), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19253] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1810), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19267] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
    STATE(901), 1,
      sym_sequence_text,
  [19283] = 4,
    ACTIONS(1385), 1,
      ts_builtin_sym_end,
    ACTIONS(1802), 1,
      sym__newline,
    STATE(594), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19297] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1812), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19311] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1814), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19321] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
    STATE(905), 1,
      sym_sequence_text,
  [19337] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(899), 1,
      sym__sequence_rest_text,
    STATE(908), 1,
      sym_sequence_text,
  [19353] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1667), 1,
      sym__sequence_actor_word,
    STATE(458), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(660), 1,
      sym_sequence_actor,
  [19369] = 3,
    ACTIONS(1818), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1816), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19381] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1003), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [19391] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(164), 1,
      sym__sequence_rest_text,
    STATE(167), 1,
      sym_sequence_text,
  [19407] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(164), 1,
      sym__sequence_rest_text,
    STATE(166), 1,
      sym_sequence_text,
  [19423] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(164), 1,
      sym__sequence_rest_text,
    STATE(165), 1,
      sym_sequence_text,
  [19439] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(164), 1,
      sym__sequence_rest_text,
    STATE(208), 1,
      sym_sequence_text,
  [19455] = 4,
    ACTIONS(1806), 1,
      sym__bquote_string,
    ACTIONS(1822), 1,
      sym__class_name,
    STATE(516), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19469] = 4,
    ACTIONS(1824), 1,
      anon_sym_COLON,
    ACTIONS(1826), 1,
      aux_sym_gantt_task_text_token1,
    STATE(578), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19483] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1828), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19497] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1830), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19511] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1832), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(580), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19525] = 4,
    ACTIONS(1834), 1,
      ts_builtin_sym_end,
    ACTIONS(1836), 1,
      sym__newline,
    STATE(646), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19539] = 4,
    ACTIONS(1838), 1,
      sym__alpha_num_token,
    STATE(427), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(441), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19553] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1840), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19563] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1842), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(124), 1,
      sym_sequence_text,
    STATE(134), 1,
      sym__sequence_rest_text,
  [19579] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1842), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(123), 1,
      sym_sequence_text,
    STATE(134), 1,
      sym__sequence_rest_text,
  [19595] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1842), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(122), 1,
      sym_sequence_text,
    STATE(134), 1,
      sym__sequence_rest_text,
  [19611] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1842), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(121), 1,
      sym_sequence_text,
    STATE(134), 1,
      sym__sequence_rest_text,
  [19627] = 4,
    ACTIONS(1804), 1,
      sym__class_name,
    ACTIONS(1844), 1,
      sym__bquote_string,
    STATE(516), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19641] = 4,
    ACTIONS(1846), 1,
      sym__alpha_num_token,
    STATE(393), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(847), 1,
      sym_flow_vertex_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19655] = 3,
    STATE(228), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19667] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1569), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19677] = 4,
    ACTIONS(1848), 1,
      sym__alpha_num_token,
    STATE(603), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(849), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19691] = 4,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(1850), 1,
      sym__newline,
    STATE(494), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19705] = 4,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(1850), 1,
      sym__newline,
    STATE(496), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19719] = 4,
    ACTIONS(1852), 1,
      ts_builtin_sym_end,
    ACTIONS(1854), 1,
      sym__newline,
    STATE(612), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19733] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(732), 1,
      sym_sequence_actor,
  [19749] = 3,
    STATE(889), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19761] = 4,
    ACTIONS(1806), 1,
      sym__bquote_string,
    ACTIONS(1856), 1,
      sym__class_name,
    STATE(516), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19775] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(257), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(776), 1,
      sym_sequence_actor,
  [19791] = 4,
    ACTIONS(1858), 1,
      ts_builtin_sym_end,
    ACTIONS(1860), 1,
      sym__newline,
    STATE(576), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19805] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1864), 1,
      sym__sequence_actor_word,
    ACTIONS(1862), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19819] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1868), 1,
      sym__sequence_actor_word,
    ACTIONS(1866), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19833] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1872), 1,
      sym__sequence_actor_word,
    ACTIONS(1870), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19847] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1442), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19856] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1674), 1,
      ts_builtin_sym_end,
    ACTIONS(1874), 1,
      sym__whitespace,
    STATE(728), 1,
      sym_mmap_node,
  [19869] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1876), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19878] = 3,
    ACTIONS(1878), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1880), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19889] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1653), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19898] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1683), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19907] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1882), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19916] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1884), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19925] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1651), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19934] = 3,
    ACTIONS(1886), 1,
      anon_sym_COLON,
    ACTIONS(1888), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19945] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1890), 2,
      anon_sym_SEMI,
      sym__newline,
  [19954] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(777), 1,
      sym__sequence_rest_text,
  [19967] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1892), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [19976] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1894), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [19985] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1896), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [19994] = 3,
    ACTIONS(1898), 1,
      anon_sym_COLON,
    ACTIONS(1900), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20005] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1902), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20014] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1904), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20023] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1906), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20032] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1908), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20041] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1910), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20050] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1912), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20059] = 3,
    ACTIONS(1914), 1,
      anon_sym_COLON,
    ACTIONS(1916), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20070] = 3,
    ACTIONS(1918), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1920), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20081] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1922), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20090] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1924), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20099] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1926), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20108] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1928), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20117] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1786), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20126] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1729), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20135] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1574), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20144] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1930), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [20153] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_class_label_token1,
    STATE(260), 1,
      sym_state_description,
  [20166] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1932), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20175] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(274), 1,
      sym_gantt_meta_format,
  [20188] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1936), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20197] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1938), 2,
      anon_sym_SEMI,
      sym__newline,
  [20206] = 3,
    ACTIONS(1940), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1942), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20217] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(778), 1,
      sym__sequence_rest_text,
  [20230] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(774), 1,
      sym__sequence_rest_text,
  [20243] = 3,
    ACTIONS(1944), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1946), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20254] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(270), 1,
      sym_gantt_meta_format,
  [20267] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(275), 1,
      sym_gantt_meta_format,
  [20280] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(284), 1,
      sym_gantt_meta_format,
  [20293] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(291), 1,
      sym_gantt_meta_format,
  [20306] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(282), 1,
      sym_gantt_meta_format,
  [20319] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(771), 1,
      sym__sequence_rest_text,
  [20332] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1948), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20341] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(294), 1,
      sym_gantt_meta_format,
  [20354] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_class_label_token1,
    STATE(250), 1,
      sym_state_description,
  [20367] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1950), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20376] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1952), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20385] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1954), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20394] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1956), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20403] = 3,
    ACTIONS(1958), 1,
      anon_sym_PIPE,
    ACTIONS(1960), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20414] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1962), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20423] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(269), 1,
      sym_gantt_meta_format,
  [20436] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1964), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20445] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(760), 1,
      sym__sequence_rest_text,
  [20458] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1669), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20467] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(757), 1,
      sym__sequence_rest_text,
  [20480] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(755), 1,
      sym__sequence_rest_text,
  [20493] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1966), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20502] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1968), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20511] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1970), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20520] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1972), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20529] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(822), 1,
      sym__sequence_rest_text,
  [20542] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(828), 1,
      sym__sequence_rest_text,
  [20555] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(840), 1,
      sym__sequence_rest_text,
  [20568] = 3,
    ACTIONS(1974), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1976), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20579] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1625), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20588] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1795), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20597] = 3,
    ACTIONS(1978), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1980), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20608] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(916), 1,
      sym__sequence_rest_text,
  [20621] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym__whitespace,
    ACTIONS(1982), 1,
      ts_builtin_sym_end,
    STATE(728), 1,
      sym_mmap_node,
  [20634] = 3,
    ACTIONS(1984), 1,
      anon_sym_COLON,
    ACTIONS(1986), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20645] = 3,
    ACTIONS(1988), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1990), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20656] = 3,
    ACTIONS(1992), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1994), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20667] = 3,
    ACTIONS(1387), 1,
      sym__er_alphanum,
    STATE(919), 1,
      sym_er_entity_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20678] = 3,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20689] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(293), 1,
      sym_gantt_meta_format,
  [20702] = 3,
    ACTIONS(1996), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1998), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20713] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2000), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20722] = 3,
    ACTIONS(2002), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2004), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20733] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20742] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2006), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20751] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1592), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(873), 1,
      sym__sequence_rest_text,
  [20764] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1649), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20773] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2008), 2,
      anon_sym_SEMI,
      sym__newline,
  [20782] = 3,
    ACTIONS(2010), 1,
      sym__er_alphanum,
    STATE(350), 1,
      sym_er_attribute_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20793] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2012), 1,
      sym__mindmap_text,
    STATE(212), 1,
      sym_mmap_node_id,
  [20806] = 2,
    ACTIONS(2014), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20814] = 2,
    ACTIONS(2016), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20822] = 2,
    ACTIONS(2018), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20830] = 2,
    ACTIONS(2020), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20838] = 2,
    ACTIONS(2022), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20846] = 2,
    ACTIONS(2024), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20854] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2026), 1,
      sym_pie_value,
  [20864] = 2,
    ACTIONS(2028), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20872] = 2,
    ACTIONS(2030), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20880] = 2,
    ACTIONS(2032), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20888] = 2,
    ACTIONS(2034), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20896] = 2,
    ACTIONS(2036), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20904] = 2,
    ACTIONS(2038), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20912] = 2,
    ACTIONS(2040), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20920] = 2,
    ACTIONS(2042), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20928] = 2,
    ACTIONS(2044), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20936] = 2,
    ACTIONS(2046), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20944] = 2,
    ACTIONS(2048), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20952] = 2,
    ACTIONS(2050), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20960] = 2,
    ACTIONS(2052), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20968] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2054), 1,
      aux_sym_mmap_class_token2,
  [20978] = 2,
    ACTIONS(2056), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20986] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2058), 1,
      aux_sym_mmap_icon_token2,
  [20996] = 2,
    ACTIONS(2060), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21004] = 2,
    ACTIONS(2062), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21012] = 2,
    ACTIONS(2064), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21020] = 2,
    ACTIONS(2066), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21028] = 2,
    ACTIONS(2068), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21036] = 2,
    ACTIONS(1984), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21044] = 2,
    ACTIONS(2070), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21052] = 2,
    ACTIONS(2072), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21060] = 2,
    ACTIONS(2074), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21068] = 2,
    ACTIONS(2076), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21076] = 2,
    ACTIONS(2078), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21084] = 2,
    ACTIONS(2080), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21092] = 2,
    ACTIONS(2082), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21100] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2084), 1,
      sym__sequence_actor_word,
  [21110] = 2,
    ACTIONS(2086), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21118] = 2,
    ACTIONS(2088), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21126] = 2,
    ACTIONS(2090), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21134] = 2,
    ACTIONS(2092), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21142] = 2,
    ACTIONS(2094), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21150] = 2,
    ACTIONS(2096), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21158] = 2,
    ACTIONS(2098), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21166] = 2,
    ACTIONS(2100), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21174] = 2,
    ACTIONS(2102), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21182] = 2,
    ACTIONS(2104), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21190] = 2,
    ACTIONS(2106), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21198] = 2,
    ACTIONS(2108), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21206] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2110), 1,
      aux_sym_directive_token1,
  [21216] = 2,
    ACTIONS(2112), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21224] = 2,
    ACTIONS(2114), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21232] = 2,
    ACTIONS(2116), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21240] = 2,
    ACTIONS(2118), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21248] = 2,
    ACTIONS(2120), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21256] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2122), 1,
      sym__mindmap_text,
  [21266] = 2,
    ACTIONS(2124), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21274] = 2,
    ACTIONS(2126), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21282] = 2,
    ACTIONS(2128), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21290] = 2,
    ACTIONS(2130), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21298] = 2,
    ACTIONS(2132), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21306] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2134), 1,
      sym__mindmap_text,
  [21316] = 2,
    ACTIONS(2136), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21324] = 2,
    ACTIONS(2138), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21332] = 2,
    ACTIONS(2140), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21340] = 2,
    ACTIONS(2142), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21348] = 2,
    ACTIONS(2144), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21356] = 2,
    ACTIONS(2146), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21364] = 2,
    ACTIONS(2148), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21372] = 2,
    ACTIONS(2150), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21380] = 2,
    ACTIONS(2152), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21388] = 2,
    ACTIONS(2154), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21396] = 2,
    ACTIONS(2156), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21404] = 2,
    ACTIONS(2158), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21412] = 2,
    ACTIONS(2160), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21420] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2162), 1,
      sym_type_directive,
  [21430] = 2,
    ACTIONS(2164), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21438] = 2,
    ACTIONS(2166), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21446] = 2,
    ACTIONS(2168), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21454] = 2,
    ACTIONS(2170), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21462] = 2,
    ACTIONS(2172), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21470] = 2,
    ACTIONS(2174), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21478] = 2,
    ACTIONS(2176), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21486] = 2,
    ACTIONS(2178), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21494] = 2,
    ACTIONS(2180), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21502] = 2,
    ACTIONS(2182), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21510] = 2,
    ACTIONS(2184), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21518] = 2,
    ACTIONS(2186), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21526] = 2,
    ACTIONS(2188), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21534] = 2,
    ACTIONS(2190), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21542] = 2,
    ACTIONS(2192), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21550] = 2,
    ACTIONS(2194), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21558] = 2,
    ACTIONS(2196), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21566] = 2,
    ACTIONS(2198), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21574] = 2,
    ACTIONS(2200), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21582] = 2,
    ACTIONS(2202), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21590] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2204), 1,
      sym_gantt_task_data,
  [21600] = 2,
    ACTIONS(2206), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21608] = 2,
    ACTIONS(2208), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21616] = 2,
    ACTIONS(2210), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21624] = 2,
    ACTIONS(2212), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21632] = 2,
    ACTIONS(2214), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21640] = 2,
    ACTIONS(2216), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21648] = 2,
    ACTIONS(2218), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21656] = 2,
    ACTIONS(2220), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21664] = 2,
    ACTIONS(2222), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21672] = 2,
    ACTIONS(2224), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21680] = 2,
    ACTIONS(2226), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21688] = 2,
    ACTIONS(2228), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21696] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym__whitespace,
    STATE(600), 1,
      sym_mmap_node,
  [21706] = 2,
    ACTIONS(2230), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21714] = 2,
    ACTIONS(2232), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21722] = 2,
    ACTIONS(2234), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21730] = 2,
    ACTIONS(1914), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21738] = 2,
    ACTIONS(2236), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21746] = 2,
    ACTIONS(2238), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21754] = 2,
    ACTIONS(2240), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21762] = 2,
    ACTIONS(2242), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21770] = 2,
    ACTIONS(2244), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21778] = 2,
    ACTIONS(2246), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21786] = 2,
    ACTIONS(2248), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21794] = 2,
    ACTIONS(2250), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21802] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2252), 1,
      sym__sequence_actor_word,
  [21812] = 2,
    ACTIONS(2254), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21820] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2256), 1,
      sym__sequence_actor_word,
  [21830] = 2,
    ACTIONS(2258), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21838] = 2,
    ACTIONS(2260), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21846] = 2,
    ACTIONS(2262), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21854] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2264), 1,
      sym__sequence_actor_word,
  [21864] = 2,
    ACTIONS(1898), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21872] = 2,
    ACTIONS(2266), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21880] = 2,
    ACTIONS(2268), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21888] = 2,
    ACTIONS(2270), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21896] = 2,
    ACTIONS(2272), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21904] = 2,
    ACTIONS(1627), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21912] = 2,
    ACTIONS(2274), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21920] = 2,
    ACTIONS(2276), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21928] = 2,
    ACTIONS(2278), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21936] = 2,
    ACTIONS(2280), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21944] = 2,
    ACTIONS(2282), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21952] = 2,
    ACTIONS(2284), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21960] = 2,
    ACTIONS(2286), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21968] = 2,
    ACTIONS(2288), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21976] = 2,
    ACTIONS(2290), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21984] = 2,
    ACTIONS(699), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21992] = 2,
    ACTIONS(1886), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22000] = 2,
    ACTIONS(2292), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22008] = 2,
    ACTIONS(2294), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22016] = 2,
    ACTIONS(2296), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22024] = 2,
    ACTIONS(2298), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22032] = 2,
    ACTIONS(2300), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22040] = 2,
    ACTIONS(695), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22048] = 2,
    ACTIONS(2302), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22056] = 2,
    ACTIONS(2304), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22064] = 2,
    ACTIONS(2306), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22072] = 2,
    ACTIONS(2308), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22080] = 2,
    ACTIONS(2310), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22088] = 2,
    ACTIONS(2312), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22096] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2314), 1,
      sym__sequence_actor_word,
  [22106] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym__whitespace,
    STATE(728), 1,
      sym_mmap_node,
  [22116] = 2,
    ACTIONS(2316), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22124] = 2,
    ACTIONS(2318), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22132] = 2,
    ACTIONS(2320), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22140] = 2,
    ACTIONS(2322), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22148] = 2,
    ACTIONS(2324), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22156] = 2,
    ACTIONS(2326), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22164] = 2,
    ACTIONS(2328), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22172] = 2,
    ACTIONS(2330), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22180] = 2,
    ACTIONS(2332), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22188] = 2,
    ACTIONS(2334), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22196] = 2,
    ACTIONS(2336), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22204] = 2,
    ACTIONS(2338), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22212] = 2,
    ACTIONS(2340), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1155,
  [SMALL_STATE(14)] = 1260,
  [SMALL_STATE(15)] = 1360,
  [SMALL_STATE(16)] = 1460,
  [SMALL_STATE(17)] = 1560,
  [SMALL_STATE(18)] = 1660,
  [SMALL_STATE(19)] = 1760,
  [SMALL_STATE(20)] = 1857,
  [SMALL_STATE(21)] = 1956,
  [SMALL_STATE(22)] = 2055,
  [SMALL_STATE(23)] = 2154,
  [SMALL_STATE(24)] = 2253,
  [SMALL_STATE(25)] = 2352,
  [SMALL_STATE(26)] = 2451,
  [SMALL_STATE(27)] = 2550,
  [SMALL_STATE(28)] = 2649,
  [SMALL_STATE(29)] = 2748,
  [SMALL_STATE(30)] = 2847,
  [SMALL_STATE(31)] = 2946,
  [SMALL_STATE(32)] = 3045,
  [SMALL_STATE(33)] = 3144,
  [SMALL_STATE(34)] = 3243,
  [SMALL_STATE(35)] = 3340,
  [SMALL_STATE(36)] = 3439,
  [SMALL_STATE(37)] = 3538,
  [SMALL_STATE(38)] = 3637,
  [SMALL_STATE(39)] = 3736,
  [SMALL_STATE(40)] = 3835,
  [SMALL_STATE(41)] = 3934,
  [SMALL_STATE(42)] = 4033,
  [SMALL_STATE(43)] = 4132,
  [SMALL_STATE(44)] = 4231,
  [SMALL_STATE(45)] = 4328,
  [SMALL_STATE(46)] = 4427,
  [SMALL_STATE(47)] = 4526,
  [SMALL_STATE(48)] = 4622,
  [SMALL_STATE(49)] = 4718,
  [SMALL_STATE(50)] = 4814,
  [SMALL_STATE(51)] = 4910,
  [SMALL_STATE(52)] = 5006,
  [SMALL_STATE(53)] = 5102,
  [SMALL_STATE(54)] = 5198,
  [SMALL_STATE(55)] = 5294,
  [SMALL_STATE(56)] = 5390,
  [SMALL_STATE(57)] = 5486,
  [SMALL_STATE(58)] = 5582,
  [SMALL_STATE(59)] = 5678,
  [SMALL_STATE(60)] = 5774,
  [SMALL_STATE(61)] = 5870,
  [SMALL_STATE(62)] = 5966,
  [SMALL_STATE(63)] = 6044,
  [SMALL_STATE(64)] = 6111,
  [SMALL_STATE(65)] = 6178,
  [SMALL_STATE(66)] = 6245,
  [SMALL_STATE(67)] = 6312,
  [SMALL_STATE(68)] = 6379,
  [SMALL_STATE(69)] = 6442,
  [SMALL_STATE(70)] = 6505,
  [SMALL_STATE(71)] = 6568,
  [SMALL_STATE(72)] = 6631,
  [SMALL_STATE(73)] = 6694,
  [SMALL_STATE(74)] = 6757,
  [SMALL_STATE(75)] = 6820,
  [SMALL_STATE(76)] = 6883,
  [SMALL_STATE(77)] = 6946,
  [SMALL_STATE(78)] = 7009,
  [SMALL_STATE(79)] = 7072,
  [SMALL_STATE(80)] = 7132,
  [SMALL_STATE(81)] = 7192,
  [SMALL_STATE(82)] = 7252,
  [SMALL_STATE(83)] = 7312,
  [SMALL_STATE(84)] = 7344,
  [SMALL_STATE(85)] = 7400,
  [SMALL_STATE(86)] = 7432,
  [SMALL_STATE(87)] = 7464,
  [SMALL_STATE(88)] = 7496,
  [SMALL_STATE(89)] = 7528,
  [SMALL_STATE(90)] = 7560,
  [SMALL_STATE(91)] = 7592,
  [SMALL_STATE(92)] = 7624,
  [SMALL_STATE(93)] = 7656,
  [SMALL_STATE(94)] = 7688,
  [SMALL_STATE(95)] = 7720,
  [SMALL_STATE(96)] = 7752,
  [SMALL_STATE(97)] = 7784,
  [SMALL_STATE(98)] = 7816,
  [SMALL_STATE(99)] = 7848,
  [SMALL_STATE(100)] = 7880,
  [SMALL_STATE(101)] = 7912,
  [SMALL_STATE(102)] = 7944,
  [SMALL_STATE(103)] = 7976,
  [SMALL_STATE(104)] = 8008,
  [SMALL_STATE(105)] = 8040,
  [SMALL_STATE(106)] = 8072,
  [SMALL_STATE(107)] = 8104,
  [SMALL_STATE(108)] = 8136,
  [SMALL_STATE(109)] = 8168,
  [SMALL_STATE(110)] = 8200,
  [SMALL_STATE(111)] = 8232,
  [SMALL_STATE(112)] = 8264,
  [SMALL_STATE(113)] = 8296,
  [SMALL_STATE(114)] = 8328,
  [SMALL_STATE(115)] = 8360,
  [SMALL_STATE(116)] = 8392,
  [SMALL_STATE(117)] = 8424,
  [SMALL_STATE(118)] = 8456,
  [SMALL_STATE(119)] = 8488,
  [SMALL_STATE(120)] = 8520,
  [SMALL_STATE(121)] = 8552,
  [SMALL_STATE(122)] = 8584,
  [SMALL_STATE(123)] = 8616,
  [SMALL_STATE(124)] = 8648,
  [SMALL_STATE(125)] = 8680,
  [SMALL_STATE(126)] = 8712,
  [SMALL_STATE(127)] = 8744,
  [SMALL_STATE(128)] = 8776,
  [SMALL_STATE(129)] = 8808,
  [SMALL_STATE(130)] = 8840,
  [SMALL_STATE(131)] = 8872,
  [SMALL_STATE(132)] = 8904,
  [SMALL_STATE(133)] = 8936,
  [SMALL_STATE(134)] = 8968,
  [SMALL_STATE(135)] = 9000,
  [SMALL_STATE(136)] = 9032,
  [SMALL_STATE(137)] = 9064,
  [SMALL_STATE(138)] = 9096,
  [SMALL_STATE(139)] = 9128,
  [SMALL_STATE(140)] = 9160,
  [SMALL_STATE(141)] = 9192,
  [SMALL_STATE(142)] = 9224,
  [SMALL_STATE(143)] = 9256,
  [SMALL_STATE(144)] = 9288,
  [SMALL_STATE(145)] = 9320,
  [SMALL_STATE(146)] = 9352,
  [SMALL_STATE(147)] = 9384,
  [SMALL_STATE(148)] = 9416,
  [SMALL_STATE(149)] = 9448,
  [SMALL_STATE(150)] = 9479,
  [SMALL_STATE(151)] = 9510,
  [SMALL_STATE(152)] = 9541,
  [SMALL_STATE(153)] = 9572,
  [SMALL_STATE(154)] = 9603,
  [SMALL_STATE(155)] = 9634,
  [SMALL_STATE(156)] = 9665,
  [SMALL_STATE(157)] = 9696,
  [SMALL_STATE(158)] = 9727,
  [SMALL_STATE(159)] = 9758,
  [SMALL_STATE(160)] = 9789,
  [SMALL_STATE(161)] = 9820,
  [SMALL_STATE(162)] = 9851,
  [SMALL_STATE(163)] = 9882,
  [SMALL_STATE(164)] = 9913,
  [SMALL_STATE(165)] = 9944,
  [SMALL_STATE(166)] = 9975,
  [SMALL_STATE(167)] = 10006,
  [SMALL_STATE(168)] = 10037,
  [SMALL_STATE(169)] = 10068,
  [SMALL_STATE(170)] = 10099,
  [SMALL_STATE(171)] = 10130,
  [SMALL_STATE(172)] = 10161,
  [SMALL_STATE(173)] = 10192,
  [SMALL_STATE(174)] = 10223,
  [SMALL_STATE(175)] = 10254,
  [SMALL_STATE(176)] = 10285,
  [SMALL_STATE(177)] = 10316,
  [SMALL_STATE(178)] = 10347,
  [SMALL_STATE(179)] = 10378,
  [SMALL_STATE(180)] = 10409,
  [SMALL_STATE(181)] = 10440,
  [SMALL_STATE(182)] = 10471,
  [SMALL_STATE(183)] = 10502,
  [SMALL_STATE(184)] = 10533,
  [SMALL_STATE(185)] = 10564,
  [SMALL_STATE(186)] = 10595,
  [SMALL_STATE(187)] = 10626,
  [SMALL_STATE(188)] = 10657,
  [SMALL_STATE(189)] = 10688,
  [SMALL_STATE(190)] = 10719,
  [SMALL_STATE(191)] = 10750,
  [SMALL_STATE(192)] = 10781,
  [SMALL_STATE(193)] = 10812,
  [SMALL_STATE(194)] = 10843,
  [SMALL_STATE(195)] = 10874,
  [SMALL_STATE(196)] = 10905,
  [SMALL_STATE(197)] = 10936,
  [SMALL_STATE(198)] = 10967,
  [SMALL_STATE(199)] = 10998,
  [SMALL_STATE(200)] = 11029,
  [SMALL_STATE(201)] = 11060,
  [SMALL_STATE(202)] = 11091,
  [SMALL_STATE(203)] = 11122,
  [SMALL_STATE(204)] = 11153,
  [SMALL_STATE(205)] = 11184,
  [SMALL_STATE(206)] = 11215,
  [SMALL_STATE(207)] = 11246,
  [SMALL_STATE(208)] = 11277,
  [SMALL_STATE(209)] = 11308,
  [SMALL_STATE(210)] = 11339,
  [SMALL_STATE(211)] = 11370,
  [SMALL_STATE(212)] = 11401,
  [SMALL_STATE(213)] = 11452,
  [SMALL_STATE(214)] = 11503,
  [SMALL_STATE(215)] = 11538,
  [SMALL_STATE(216)] = 11575,
  [SMALL_STATE(217)] = 11606,
  [SMALL_STATE(218)] = 11643,
  [SMALL_STATE(219)] = 11680,
  [SMALL_STATE(220)] = 11725,
  [SMALL_STATE(221)] = 11755,
  [SMALL_STATE(222)] = 11787,
  [SMALL_STATE(223)] = 11811,
  [SMALL_STATE(224)] = 11841,
  [SMALL_STATE(225)] = 11879,
  [SMALL_STATE(226)] = 11902,
  [SMALL_STATE(227)] = 11931,
  [SMALL_STATE(228)] = 11958,
  [SMALL_STATE(229)] = 11983,
  [SMALL_STATE(230)] = 12009,
  [SMALL_STATE(231)] = 12031,
  [SMALL_STATE(232)] = 12053,
  [SMALL_STATE(233)] = 12075,
  [SMALL_STATE(234)] = 12097,
  [SMALL_STATE(235)] = 12119,
  [SMALL_STATE(236)] = 12155,
  [SMALL_STATE(237)] = 12177,
  [SMALL_STATE(238)] = 12199,
  [SMALL_STATE(239)] = 12239,
  [SMALL_STATE(240)] = 12261,
  [SMALL_STATE(241)] = 12301,
  [SMALL_STATE(242)] = 12323,
  [SMALL_STATE(243)] = 12345,
  [SMALL_STATE(244)] = 12367,
  [SMALL_STATE(245)] = 12393,
  [SMALL_STATE(246)] = 12433,
  [SMALL_STATE(247)] = 12455,
  [SMALL_STATE(248)] = 12477,
  [SMALL_STATE(249)] = 12499,
  [SMALL_STATE(250)] = 12521,
  [SMALL_STATE(251)] = 12543,
  [SMALL_STATE(252)] = 12565,
  [SMALL_STATE(253)] = 12601,
  [SMALL_STATE(254)] = 12639,
  [SMALL_STATE(255)] = 12661,
  [SMALL_STATE(256)] = 12683,
  [SMALL_STATE(257)] = 12705,
  [SMALL_STATE(258)] = 12733,
  [SMALL_STATE(259)] = 12755,
  [SMALL_STATE(260)] = 12793,
  [SMALL_STATE(261)] = 12815,
  [SMALL_STATE(262)] = 12837,
  [SMALL_STATE(263)] = 12859,
  [SMALL_STATE(264)] = 12893,
  [SMALL_STATE(265)] = 12915,
  [SMALL_STATE(266)] = 12937,
  [SMALL_STATE(267)] = 12959,
  [SMALL_STATE(268)] = 12987,
  [SMALL_STATE(269)] = 13009,
  [SMALL_STATE(270)] = 13030,
  [SMALL_STATE(271)] = 13051,
  [SMALL_STATE(272)] = 13086,
  [SMALL_STATE(273)] = 13123,
  [SMALL_STATE(274)] = 13160,
  [SMALL_STATE(275)] = 13181,
  [SMALL_STATE(276)] = 13202,
  [SMALL_STATE(277)] = 13237,
  [SMALL_STATE(278)] = 13258,
  [SMALL_STATE(279)] = 13295,
  [SMALL_STATE(280)] = 13332,
  [SMALL_STATE(281)] = 13369,
  [SMALL_STATE(282)] = 13406,
  [SMALL_STATE(283)] = 13427,
  [SMALL_STATE(284)] = 13464,
  [SMALL_STATE(285)] = 13485,
  [SMALL_STATE(286)] = 13506,
  [SMALL_STATE(287)] = 13543,
  [SMALL_STATE(288)] = 13564,
  [SMALL_STATE(289)] = 13585,
  [SMALL_STATE(290)] = 13606,
  [SMALL_STATE(291)] = 13627,
  [SMALL_STATE(292)] = 13648,
  [SMALL_STATE(293)] = 13667,
  [SMALL_STATE(294)] = 13688,
  [SMALL_STATE(295)] = 13709,
  [SMALL_STATE(296)] = 13746,
  [SMALL_STATE(297)] = 13783,
  [SMALL_STATE(298)] = 13807,
  [SMALL_STATE(299)] = 13831,
  [SMALL_STATE(300)] = 13855,
  [SMALL_STATE(301)] = 13873,
  [SMALL_STATE(302)] = 13901,
  [SMALL_STATE(303)] = 13935,
  [SMALL_STATE(304)] = 13969,
  [SMALL_STATE(305)] = 13993,
  [SMALL_STATE(306)] = 14027,
  [SMALL_STATE(307)] = 14055,
  [SMALL_STATE(308)] = 14083,
  [SMALL_STATE(309)] = 14117,
  [SMALL_STATE(310)] = 14151,
  [SMALL_STATE(311)] = 14179,
  [SMALL_STATE(312)] = 14213,
  [SMALL_STATE(313)] = 14247,
  [SMALL_STATE(314)] = 14275,
  [SMALL_STATE(315)] = 14309,
  [SMALL_STATE(316)] = 14333,
  [SMALL_STATE(317)] = 14352,
  [SMALL_STATE(318)] = 14373,
  [SMALL_STATE(319)] = 14392,
  [SMALL_STATE(320)] = 14411,
  [SMALL_STATE(321)] = 14430,
  [SMALL_STATE(322)] = 14449,
  [SMALL_STATE(323)] = 14468,
  [SMALL_STATE(324)] = 14487,
  [SMALL_STATE(325)] = 14506,
  [SMALL_STATE(326)] = 14525,
  [SMALL_STATE(327)] = 14556,
  [SMALL_STATE(328)] = 14575,
  [SMALL_STATE(329)] = 14606,
  [SMALL_STATE(330)] = 14625,
  [SMALL_STATE(331)] = 14644,
  [SMALL_STATE(332)] = 14663,
  [SMALL_STATE(333)] = 14682,
  [SMALL_STATE(334)] = 14701,
  [SMALL_STATE(335)] = 14720,
  [SMALL_STATE(336)] = 14739,
  [SMALL_STATE(337)] = 14758,
  [SMALL_STATE(338)] = 14782,
  [SMALL_STATE(339)] = 14802,
  [SMALL_STATE(340)] = 14826,
  [SMALL_STATE(341)] = 14850,
  [SMALL_STATE(342)] = 14878,
  [SMALL_STATE(343)] = 14906,
  [SMALL_STATE(344)] = 14930,
  [SMALL_STATE(345)] = 14948,
  [SMALL_STATE(346)] = 14966,
  [SMALL_STATE(347)] = 14984,
  [SMALL_STATE(348)] = 15008,
  [SMALL_STATE(349)] = 15036,
  [SMALL_STATE(350)] = 15064,
  [SMALL_STATE(351)] = 15094,
  [SMALL_STATE(352)] = 15112,
  [SMALL_STATE(353)] = 15142,
  [SMALL_STATE(354)] = 15164,
  [SMALL_STATE(355)] = 15190,
  [SMALL_STATE(356)] = 15204,
  [SMALL_STATE(357)] = 15230,
  [SMALL_STATE(358)] = 15246,
  [SMALL_STATE(359)] = 15272,
  [SMALL_STATE(360)] = 15294,
  [SMALL_STATE(361)] = 15310,
  [SMALL_STATE(362)] = 15324,
  [SMALL_STATE(363)] = 15344,
  [SMALL_STATE(364)] = 15358,
  [SMALL_STATE(365)] = 15384,
  [SMALL_STATE(366)] = 15406,
  [SMALL_STATE(367)] = 15428,
  [SMALL_STATE(368)] = 15445,
  [SMALL_STATE(369)] = 15466,
  [SMALL_STATE(370)] = 15481,
  [SMALL_STATE(371)] = 15496,
  [SMALL_STATE(372)] = 15517,
  [SMALL_STATE(373)] = 15540,
  [SMALL_STATE(374)] = 15555,
  [SMALL_STATE(375)] = 15576,
  [SMALL_STATE(376)] = 15591,
  [SMALL_STATE(377)] = 15612,
  [SMALL_STATE(378)] = 15631,
  [SMALL_STATE(379)] = 15656,
  [SMALL_STATE(380)] = 15671,
  [SMALL_STATE(381)] = 15686,
  [SMALL_STATE(382)] = 15707,
  [SMALL_STATE(383)] = 15724,
  [SMALL_STATE(384)] = 15743,
  [SMALL_STATE(385)] = 15766,
  [SMALL_STATE(386)] = 15781,
  [SMALL_STATE(387)] = 15802,
  [SMALL_STATE(388)] = 15820,
  [SMALL_STATE(389)] = 15838,
  [SMALL_STATE(390)] = 15854,
  [SMALL_STATE(391)] = 15866,
  [SMALL_STATE(392)] = 15878,
  [SMALL_STATE(393)] = 15896,
  [SMALL_STATE(394)] = 15912,
  [SMALL_STATE(395)] = 15924,
  [SMALL_STATE(396)] = 15942,
  [SMALL_STATE(397)] = 15960,
  [SMALL_STATE(398)] = 15978,
  [SMALL_STATE(399)] = 15998,
  [SMALL_STATE(400)] = 16010,
  [SMALL_STATE(401)] = 16022,
  [SMALL_STATE(402)] = 16040,
  [SMALL_STATE(403)] = 16058,
  [SMALL_STATE(404)] = 16076,
  [SMALL_STATE(405)] = 16094,
  [SMALL_STATE(406)] = 16106,
  [SMALL_STATE(407)] = 16118,
  [SMALL_STATE(408)] = 16130,
  [SMALL_STATE(409)] = 16150,
  [SMALL_STATE(410)] = 16166,
  [SMALL_STATE(411)] = 16178,
  [SMALL_STATE(412)] = 16196,
  [SMALL_STATE(413)] = 16216,
  [SMALL_STATE(414)] = 16236,
  [SMALL_STATE(415)] = 16256,
  [SMALL_STATE(416)] = 16276,
  [SMALL_STATE(417)] = 16294,
  [SMALL_STATE(418)] = 16312,
  [SMALL_STATE(419)] = 16330,
  [SMALL_STATE(420)] = 16350,
  [SMALL_STATE(421)] = 16366,
  [SMALL_STATE(422)] = 16386,
  [SMALL_STATE(423)] = 16398,
  [SMALL_STATE(424)] = 16416,
  [SMALL_STATE(425)] = 16436,
  [SMALL_STATE(426)] = 16454,
  [SMALL_STATE(427)] = 16474,
  [SMALL_STATE(428)] = 16490,
  [SMALL_STATE(429)] = 16508,
  [SMALL_STATE(430)] = 16526,
  [SMALL_STATE(431)] = 16544,
  [SMALL_STATE(432)] = 16562,
  [SMALL_STATE(433)] = 16580,
  [SMALL_STATE(434)] = 16591,
  [SMALL_STATE(435)] = 16602,
  [SMALL_STATE(436)] = 16619,
  [SMALL_STATE(437)] = 16632,
  [SMALL_STATE(438)] = 16647,
  [SMALL_STATE(439)] = 16662,
  [SMALL_STATE(440)] = 16679,
  [SMALL_STATE(441)] = 16696,
  [SMALL_STATE(442)] = 16709,
  [SMALL_STATE(443)] = 16720,
  [SMALL_STATE(444)] = 16731,
  [SMALL_STATE(445)] = 16744,
  [SMALL_STATE(446)] = 16757,
  [SMALL_STATE(447)] = 16770,
  [SMALL_STATE(448)] = 16783,
  [SMALL_STATE(449)] = 16802,
  [SMALL_STATE(450)] = 16817,
  [SMALL_STATE(451)] = 16834,
  [SMALL_STATE(452)] = 16853,
  [SMALL_STATE(453)] = 16868,
  [SMALL_STATE(454)] = 16879,
  [SMALL_STATE(455)] = 16898,
  [SMALL_STATE(456)] = 16913,
  [SMALL_STATE(457)] = 16932,
  [SMALL_STATE(458)] = 16943,
  [SMALL_STATE(459)] = 16960,
  [SMALL_STATE(460)] = 16979,
  [SMALL_STATE(461)] = 16998,
  [SMALL_STATE(462)] = 17015,
  [SMALL_STATE(463)] = 17026,
  [SMALL_STATE(464)] = 17041,
  [SMALL_STATE(465)] = 17052,
  [SMALL_STATE(466)] = 17069,
  [SMALL_STATE(467)] = 17084,
  [SMALL_STATE(468)] = 17097,
  [SMALL_STATE(469)] = 17112,
  [SMALL_STATE(470)] = 17127,
  [SMALL_STATE(471)] = 17138,
  [SMALL_STATE(472)] = 17153,
  [SMALL_STATE(473)] = 17164,
  [SMALL_STATE(474)] = 17181,
  [SMALL_STATE(475)] = 17200,
  [SMALL_STATE(476)] = 17215,
  [SMALL_STATE(477)] = 17230,
  [SMALL_STATE(478)] = 17245,
  [SMALL_STATE(479)] = 17261,
  [SMALL_STATE(480)] = 17277,
  [SMALL_STATE(481)] = 17291,
  [SMALL_STATE(482)] = 17305,
  [SMALL_STATE(483)] = 17321,
  [SMALL_STATE(484)] = 17337,
  [SMALL_STATE(485)] = 17353,
  [SMALL_STATE(486)] = 17369,
  [SMALL_STATE(487)] = 17385,
  [SMALL_STATE(488)] = 17401,
  [SMALL_STATE(489)] = 17417,
  [SMALL_STATE(490)] = 17433,
  [SMALL_STATE(491)] = 17449,
  [SMALL_STATE(492)] = 17463,
  [SMALL_STATE(493)] = 17479,
  [SMALL_STATE(494)] = 17493,
  [SMALL_STATE(495)] = 17507,
  [SMALL_STATE(496)] = 17523,
  [SMALL_STATE(497)] = 17537,
  [SMALL_STATE(498)] = 17553,
  [SMALL_STATE(499)] = 17569,
  [SMALL_STATE(500)] = 17585,
  [SMALL_STATE(501)] = 17599,
  [SMALL_STATE(502)] = 17615,
  [SMALL_STATE(503)] = 17629,
  [SMALL_STATE(504)] = 17639,
  [SMALL_STATE(505)] = 17649,
  [SMALL_STATE(506)] = 17659,
  [SMALL_STATE(507)] = 17669,
  [SMALL_STATE(508)] = 17679,
  [SMALL_STATE(509)] = 17689,
  [SMALL_STATE(510)] = 17699,
  [SMALL_STATE(511)] = 17709,
  [SMALL_STATE(512)] = 17721,
  [SMALL_STATE(513)] = 17737,
  [SMALL_STATE(514)] = 17753,
  [SMALL_STATE(515)] = 17769,
  [SMALL_STATE(516)] = 17783,
  [SMALL_STATE(517)] = 17797,
  [SMALL_STATE(518)] = 17813,
  [SMALL_STATE(519)] = 17823,
  [SMALL_STATE(520)] = 17839,
  [SMALL_STATE(521)] = 17855,
  [SMALL_STATE(522)] = 17871,
  [SMALL_STATE(523)] = 17887,
  [SMALL_STATE(524)] = 17903,
  [SMALL_STATE(525)] = 17919,
  [SMALL_STATE(526)] = 17935,
  [SMALL_STATE(527)] = 17951,
  [SMALL_STATE(528)] = 17965,
  [SMALL_STATE(529)] = 17981,
  [SMALL_STATE(530)] = 17997,
  [SMALL_STATE(531)] = 18013,
  [SMALL_STATE(532)] = 18029,
  [SMALL_STATE(533)] = 18045,
  [SMALL_STATE(534)] = 18059,
  [SMALL_STATE(535)] = 18075,
  [SMALL_STATE(536)] = 18091,
  [SMALL_STATE(537)] = 18107,
  [SMALL_STATE(538)] = 18121,
  [SMALL_STATE(539)] = 18137,
  [SMALL_STATE(540)] = 18151,
  [SMALL_STATE(541)] = 18161,
  [SMALL_STATE(542)] = 18177,
  [SMALL_STATE(543)] = 18193,
  [SMALL_STATE(544)] = 18209,
  [SMALL_STATE(545)] = 18225,
  [SMALL_STATE(546)] = 18241,
  [SMALL_STATE(547)] = 18257,
  [SMALL_STATE(548)] = 18273,
  [SMALL_STATE(549)] = 18283,
  [SMALL_STATE(550)] = 18299,
  [SMALL_STATE(551)] = 18313,
  [SMALL_STATE(552)] = 18329,
  [SMALL_STATE(553)] = 18339,
  [SMALL_STATE(554)] = 18353,
  [SMALL_STATE(555)] = 18369,
  [SMALL_STATE(556)] = 18381,
  [SMALL_STATE(557)] = 18391,
  [SMALL_STATE(558)] = 18407,
  [SMALL_STATE(559)] = 18417,
  [SMALL_STATE(560)] = 18427,
  [SMALL_STATE(561)] = 18443,
  [SMALL_STATE(562)] = 18459,
  [SMALL_STATE(563)] = 18475,
  [SMALL_STATE(564)] = 18491,
  [SMALL_STATE(565)] = 18505,
  [SMALL_STATE(566)] = 18521,
  [SMALL_STATE(567)] = 18531,
  [SMALL_STATE(568)] = 18547,
  [SMALL_STATE(569)] = 18561,
  [SMALL_STATE(570)] = 18577,
  [SMALL_STATE(571)] = 18593,
  [SMALL_STATE(572)] = 18605,
  [SMALL_STATE(573)] = 18621,
  [SMALL_STATE(574)] = 18637,
  [SMALL_STATE(575)] = 18653,
  [SMALL_STATE(576)] = 18669,
  [SMALL_STATE(577)] = 18683,
  [SMALL_STATE(578)] = 18699,
  [SMALL_STATE(579)] = 18713,
  [SMALL_STATE(580)] = 18727,
  [SMALL_STATE(581)] = 18741,
  [SMALL_STATE(582)] = 18753,
  [SMALL_STATE(583)] = 18765,
  [SMALL_STATE(584)] = 18781,
  [SMALL_STATE(585)] = 18797,
  [SMALL_STATE(586)] = 18813,
  [SMALL_STATE(587)] = 18829,
  [SMALL_STATE(588)] = 18845,
  [SMALL_STATE(589)] = 18859,
  [SMALL_STATE(590)] = 18875,
  [SMALL_STATE(591)] = 18889,
  [SMALL_STATE(592)] = 18903,
  [SMALL_STATE(593)] = 18919,
  [SMALL_STATE(594)] = 18935,
  [SMALL_STATE(595)] = 18949,
  [SMALL_STATE(596)] = 18965,
  [SMALL_STATE(597)] = 18981,
  [SMALL_STATE(598)] = 18995,
  [SMALL_STATE(599)] = 19011,
  [SMALL_STATE(600)] = 19025,
  [SMALL_STATE(601)] = 19039,
  [SMALL_STATE(602)] = 19055,
  [SMALL_STATE(603)] = 19071,
  [SMALL_STATE(604)] = 19085,
  [SMALL_STATE(605)] = 19101,
  [SMALL_STATE(606)] = 19115,
  [SMALL_STATE(607)] = 19131,
  [SMALL_STATE(608)] = 19147,
  [SMALL_STATE(609)] = 19163,
  [SMALL_STATE(610)] = 19179,
  [SMALL_STATE(611)] = 19195,
  [SMALL_STATE(612)] = 19211,
  [SMALL_STATE(613)] = 19225,
  [SMALL_STATE(614)] = 19239,
  [SMALL_STATE(615)] = 19253,
  [SMALL_STATE(616)] = 19267,
  [SMALL_STATE(617)] = 19283,
  [SMALL_STATE(618)] = 19297,
  [SMALL_STATE(619)] = 19311,
  [SMALL_STATE(620)] = 19321,
  [SMALL_STATE(621)] = 19337,
  [SMALL_STATE(622)] = 19353,
  [SMALL_STATE(623)] = 19369,
  [SMALL_STATE(624)] = 19381,
  [SMALL_STATE(625)] = 19391,
  [SMALL_STATE(626)] = 19407,
  [SMALL_STATE(627)] = 19423,
  [SMALL_STATE(628)] = 19439,
  [SMALL_STATE(629)] = 19455,
  [SMALL_STATE(630)] = 19469,
  [SMALL_STATE(631)] = 19483,
  [SMALL_STATE(632)] = 19497,
  [SMALL_STATE(633)] = 19511,
  [SMALL_STATE(634)] = 19525,
  [SMALL_STATE(635)] = 19539,
  [SMALL_STATE(636)] = 19553,
  [SMALL_STATE(637)] = 19563,
  [SMALL_STATE(638)] = 19579,
  [SMALL_STATE(639)] = 19595,
  [SMALL_STATE(640)] = 19611,
  [SMALL_STATE(641)] = 19627,
  [SMALL_STATE(642)] = 19641,
  [SMALL_STATE(643)] = 19655,
  [SMALL_STATE(644)] = 19667,
  [SMALL_STATE(645)] = 19677,
  [SMALL_STATE(646)] = 19691,
  [SMALL_STATE(647)] = 19705,
  [SMALL_STATE(648)] = 19719,
  [SMALL_STATE(649)] = 19733,
  [SMALL_STATE(650)] = 19749,
  [SMALL_STATE(651)] = 19761,
  [SMALL_STATE(652)] = 19775,
  [SMALL_STATE(653)] = 19791,
  [SMALL_STATE(654)] = 19805,
  [SMALL_STATE(655)] = 19819,
  [SMALL_STATE(656)] = 19833,
  [SMALL_STATE(657)] = 19847,
  [SMALL_STATE(658)] = 19856,
  [SMALL_STATE(659)] = 19869,
  [SMALL_STATE(660)] = 19878,
  [SMALL_STATE(661)] = 19889,
  [SMALL_STATE(662)] = 19898,
  [SMALL_STATE(663)] = 19907,
  [SMALL_STATE(664)] = 19916,
  [SMALL_STATE(665)] = 19925,
  [SMALL_STATE(666)] = 19934,
  [SMALL_STATE(667)] = 19945,
  [SMALL_STATE(668)] = 19954,
  [SMALL_STATE(669)] = 19967,
  [SMALL_STATE(670)] = 19976,
  [SMALL_STATE(671)] = 19985,
  [SMALL_STATE(672)] = 19994,
  [SMALL_STATE(673)] = 20005,
  [SMALL_STATE(674)] = 20014,
  [SMALL_STATE(675)] = 20023,
  [SMALL_STATE(676)] = 20032,
  [SMALL_STATE(677)] = 20041,
  [SMALL_STATE(678)] = 20050,
  [SMALL_STATE(679)] = 20059,
  [SMALL_STATE(680)] = 20070,
  [SMALL_STATE(681)] = 20081,
  [SMALL_STATE(682)] = 20090,
  [SMALL_STATE(683)] = 20099,
  [SMALL_STATE(684)] = 20108,
  [SMALL_STATE(685)] = 20117,
  [SMALL_STATE(686)] = 20126,
  [SMALL_STATE(687)] = 20135,
  [SMALL_STATE(688)] = 20144,
  [SMALL_STATE(689)] = 20153,
  [SMALL_STATE(690)] = 20166,
  [SMALL_STATE(691)] = 20175,
  [SMALL_STATE(692)] = 20188,
  [SMALL_STATE(693)] = 20197,
  [SMALL_STATE(694)] = 20206,
  [SMALL_STATE(695)] = 20217,
  [SMALL_STATE(696)] = 20230,
  [SMALL_STATE(697)] = 20243,
  [SMALL_STATE(698)] = 20254,
  [SMALL_STATE(699)] = 20267,
  [SMALL_STATE(700)] = 20280,
  [SMALL_STATE(701)] = 20293,
  [SMALL_STATE(702)] = 20306,
  [SMALL_STATE(703)] = 20319,
  [SMALL_STATE(704)] = 20332,
  [SMALL_STATE(705)] = 20341,
  [SMALL_STATE(706)] = 20354,
  [SMALL_STATE(707)] = 20367,
  [SMALL_STATE(708)] = 20376,
  [SMALL_STATE(709)] = 20385,
  [SMALL_STATE(710)] = 20394,
  [SMALL_STATE(711)] = 20403,
  [SMALL_STATE(712)] = 20414,
  [SMALL_STATE(713)] = 20423,
  [SMALL_STATE(714)] = 20436,
  [SMALL_STATE(715)] = 20445,
  [SMALL_STATE(716)] = 20458,
  [SMALL_STATE(717)] = 20467,
  [SMALL_STATE(718)] = 20480,
  [SMALL_STATE(719)] = 20493,
  [SMALL_STATE(720)] = 20502,
  [SMALL_STATE(721)] = 20511,
  [SMALL_STATE(722)] = 20520,
  [SMALL_STATE(723)] = 20529,
  [SMALL_STATE(724)] = 20542,
  [SMALL_STATE(725)] = 20555,
  [SMALL_STATE(726)] = 20568,
  [SMALL_STATE(727)] = 20579,
  [SMALL_STATE(728)] = 20588,
  [SMALL_STATE(729)] = 20597,
  [SMALL_STATE(730)] = 20608,
  [SMALL_STATE(731)] = 20621,
  [SMALL_STATE(732)] = 20634,
  [SMALL_STATE(733)] = 20645,
  [SMALL_STATE(734)] = 20656,
  [SMALL_STATE(735)] = 20667,
  [SMALL_STATE(736)] = 20678,
  [SMALL_STATE(737)] = 20689,
  [SMALL_STATE(738)] = 20702,
  [SMALL_STATE(739)] = 20713,
  [SMALL_STATE(740)] = 20722,
  [SMALL_STATE(741)] = 20733,
  [SMALL_STATE(742)] = 20742,
  [SMALL_STATE(743)] = 20751,
  [SMALL_STATE(744)] = 20764,
  [SMALL_STATE(745)] = 20773,
  [SMALL_STATE(746)] = 20782,
  [SMALL_STATE(747)] = 20793,
  [SMALL_STATE(748)] = 20806,
  [SMALL_STATE(749)] = 20814,
  [SMALL_STATE(750)] = 20822,
  [SMALL_STATE(751)] = 20830,
  [SMALL_STATE(752)] = 20838,
  [SMALL_STATE(753)] = 20846,
  [SMALL_STATE(754)] = 20854,
  [SMALL_STATE(755)] = 20864,
  [SMALL_STATE(756)] = 20872,
  [SMALL_STATE(757)] = 20880,
  [SMALL_STATE(758)] = 20888,
  [SMALL_STATE(759)] = 20896,
  [SMALL_STATE(760)] = 20904,
  [SMALL_STATE(761)] = 20912,
  [SMALL_STATE(762)] = 20920,
  [SMALL_STATE(763)] = 20928,
  [SMALL_STATE(764)] = 20936,
  [SMALL_STATE(765)] = 20944,
  [SMALL_STATE(766)] = 20952,
  [SMALL_STATE(767)] = 20960,
  [SMALL_STATE(768)] = 20968,
  [SMALL_STATE(769)] = 20978,
  [SMALL_STATE(770)] = 20986,
  [SMALL_STATE(771)] = 20996,
  [SMALL_STATE(772)] = 21004,
  [SMALL_STATE(773)] = 21012,
  [SMALL_STATE(774)] = 21020,
  [SMALL_STATE(775)] = 21028,
  [SMALL_STATE(776)] = 21036,
  [SMALL_STATE(777)] = 21044,
  [SMALL_STATE(778)] = 21052,
  [SMALL_STATE(779)] = 21060,
  [SMALL_STATE(780)] = 21068,
  [SMALL_STATE(781)] = 21076,
  [SMALL_STATE(782)] = 21084,
  [SMALL_STATE(783)] = 21092,
  [SMALL_STATE(784)] = 21100,
  [SMALL_STATE(785)] = 21110,
  [SMALL_STATE(786)] = 21118,
  [SMALL_STATE(787)] = 21126,
  [SMALL_STATE(788)] = 21134,
  [SMALL_STATE(789)] = 21142,
  [SMALL_STATE(790)] = 21150,
  [SMALL_STATE(791)] = 21158,
  [SMALL_STATE(792)] = 21166,
  [SMALL_STATE(793)] = 21174,
  [SMALL_STATE(794)] = 21182,
  [SMALL_STATE(795)] = 21190,
  [SMALL_STATE(796)] = 21198,
  [SMALL_STATE(797)] = 21206,
  [SMALL_STATE(798)] = 21216,
  [SMALL_STATE(799)] = 21224,
  [SMALL_STATE(800)] = 21232,
  [SMALL_STATE(801)] = 21240,
  [SMALL_STATE(802)] = 21248,
  [SMALL_STATE(803)] = 21256,
  [SMALL_STATE(804)] = 21266,
  [SMALL_STATE(805)] = 21274,
  [SMALL_STATE(806)] = 21282,
  [SMALL_STATE(807)] = 21290,
  [SMALL_STATE(808)] = 21298,
  [SMALL_STATE(809)] = 21306,
  [SMALL_STATE(810)] = 21316,
  [SMALL_STATE(811)] = 21324,
  [SMALL_STATE(812)] = 21332,
  [SMALL_STATE(813)] = 21340,
  [SMALL_STATE(814)] = 21348,
  [SMALL_STATE(815)] = 21356,
  [SMALL_STATE(816)] = 21364,
  [SMALL_STATE(817)] = 21372,
  [SMALL_STATE(818)] = 21380,
  [SMALL_STATE(819)] = 21388,
  [SMALL_STATE(820)] = 21396,
  [SMALL_STATE(821)] = 21404,
  [SMALL_STATE(822)] = 21412,
  [SMALL_STATE(823)] = 21420,
  [SMALL_STATE(824)] = 21430,
  [SMALL_STATE(825)] = 21438,
  [SMALL_STATE(826)] = 21446,
  [SMALL_STATE(827)] = 21454,
  [SMALL_STATE(828)] = 21462,
  [SMALL_STATE(829)] = 21470,
  [SMALL_STATE(830)] = 21478,
  [SMALL_STATE(831)] = 21486,
  [SMALL_STATE(832)] = 21494,
  [SMALL_STATE(833)] = 21502,
  [SMALL_STATE(834)] = 21510,
  [SMALL_STATE(835)] = 21518,
  [SMALL_STATE(836)] = 21526,
  [SMALL_STATE(837)] = 21534,
  [SMALL_STATE(838)] = 21542,
  [SMALL_STATE(839)] = 21550,
  [SMALL_STATE(840)] = 21558,
  [SMALL_STATE(841)] = 21566,
  [SMALL_STATE(842)] = 21574,
  [SMALL_STATE(843)] = 21582,
  [SMALL_STATE(844)] = 21590,
  [SMALL_STATE(845)] = 21600,
  [SMALL_STATE(846)] = 21608,
  [SMALL_STATE(847)] = 21616,
  [SMALL_STATE(848)] = 21624,
  [SMALL_STATE(849)] = 21632,
  [SMALL_STATE(850)] = 21640,
  [SMALL_STATE(851)] = 21648,
  [SMALL_STATE(852)] = 21656,
  [SMALL_STATE(853)] = 21664,
  [SMALL_STATE(854)] = 21672,
  [SMALL_STATE(855)] = 21680,
  [SMALL_STATE(856)] = 21688,
  [SMALL_STATE(857)] = 21696,
  [SMALL_STATE(858)] = 21706,
  [SMALL_STATE(859)] = 21714,
  [SMALL_STATE(860)] = 21722,
  [SMALL_STATE(861)] = 21730,
  [SMALL_STATE(862)] = 21738,
  [SMALL_STATE(863)] = 21746,
  [SMALL_STATE(864)] = 21754,
  [SMALL_STATE(865)] = 21762,
  [SMALL_STATE(866)] = 21770,
  [SMALL_STATE(867)] = 21778,
  [SMALL_STATE(868)] = 21786,
  [SMALL_STATE(869)] = 21794,
  [SMALL_STATE(870)] = 21802,
  [SMALL_STATE(871)] = 21812,
  [SMALL_STATE(872)] = 21820,
  [SMALL_STATE(873)] = 21830,
  [SMALL_STATE(874)] = 21838,
  [SMALL_STATE(875)] = 21846,
  [SMALL_STATE(876)] = 21854,
  [SMALL_STATE(877)] = 21864,
  [SMALL_STATE(878)] = 21872,
  [SMALL_STATE(879)] = 21880,
  [SMALL_STATE(880)] = 21888,
  [SMALL_STATE(881)] = 21896,
  [SMALL_STATE(882)] = 21904,
  [SMALL_STATE(883)] = 21912,
  [SMALL_STATE(884)] = 21920,
  [SMALL_STATE(885)] = 21928,
  [SMALL_STATE(886)] = 21936,
  [SMALL_STATE(887)] = 21944,
  [SMALL_STATE(888)] = 21952,
  [SMALL_STATE(889)] = 21960,
  [SMALL_STATE(890)] = 21968,
  [SMALL_STATE(891)] = 21976,
  [SMALL_STATE(892)] = 21984,
  [SMALL_STATE(893)] = 21992,
  [SMALL_STATE(894)] = 22000,
  [SMALL_STATE(895)] = 22008,
  [SMALL_STATE(896)] = 22016,
  [SMALL_STATE(897)] = 22024,
  [SMALL_STATE(898)] = 22032,
  [SMALL_STATE(899)] = 22040,
  [SMALL_STATE(900)] = 22048,
  [SMALL_STATE(901)] = 22056,
  [SMALL_STATE(902)] = 22064,
  [SMALL_STATE(903)] = 22072,
  [SMALL_STATE(904)] = 22080,
  [SMALL_STATE(905)] = 22088,
  [SMALL_STATE(906)] = 22096,
  [SMALL_STATE(907)] = 22106,
  [SMALL_STATE(908)] = 22116,
  [SMALL_STATE(909)] = 22124,
  [SMALL_STATE(910)] = 22132,
  [SMALL_STATE(911)] = 22140,
  [SMALL_STATE(912)] = 22148,
  [SMALL_STATE(913)] = 22156,
  [SMALL_STATE(914)] = 22164,
  [SMALL_STATE(915)] = 22172,
  [SMALL_STATE(916)] = 22180,
  [SMALL_STATE(917)] = 22188,
  [SMALL_STATE(918)] = 22196,
  [SMALL_STATE(919)] = 22204,
  [SMALL_STATE(920)] = 22212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 4, 0, 16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 3, 0, 10),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 24),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(551),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(560),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(98),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(557),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(554),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(376),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(524),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(523),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(522),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(521),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(885),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(520),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(519),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(517),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(488),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(460),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(130),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(257),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(585),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(589),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(109),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(587),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(586),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(368),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(544),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(543),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(542),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(541),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(852),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(538),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(536),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(535),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(514),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(451),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(116),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(479),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(570),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(156),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(569),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(567),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(371),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(532),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(531),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(530),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(529),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(869),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(528),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(526),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(525),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(498),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(454),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(180),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(622),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(592),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(598),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(601),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(602),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(604),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(606),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(772),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(607),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(616),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(620),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(621),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(691),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(698),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(699),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(700),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(701),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(702),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(705),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(713),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(737),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(630),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(688),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(900),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(823),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, 0, 11),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, 0, 11),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, 0, 23),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, 0, 23),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1087] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 21),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2, 0, 0),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 20),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 19),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [1368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(830),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3, 0, 0),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0),
  [1411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1, 0, 0),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(758),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1, 0, 0),
  [1532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1, 0, 0),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1, 0, 0),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0),
  [1571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6, 0, 0),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2, 0, 0),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_markdown, 3, 0, 0),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1, 0, 0),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_content, 1, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_text, 2, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0),
  [1671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 4, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0),
  [1680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0),
  [1685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 25),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 19),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 26),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 20),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 27),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 21),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 28),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0),
  [1731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 22),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, 0, 17),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0),
  [1764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0),
  [1771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0),
  [1788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 3, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0),
  [1797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0), SHIFT_REPEAT(907),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1, 0, 0),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3, 0, 0),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1, 0, 0),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3, 0, 0),
  [1842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1, 0, 0),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [1872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_class, 2, 0, 0),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5, 0, 0),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1, 0, 0),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3, 0, 0),
  [1894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1, 0, 0),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1, 0, 0),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1, 0, 0),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1, 0, 0),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 5, 0, 0),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5, 0, 0),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1, 0, 0),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5, 0, 0),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, 0, 18),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6, 0, 0),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1, 0, 0),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1, 0, 0),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1, 0, 0),
  [1932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1, 0, 0),
  [1934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4, 0, 0),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 17),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 0),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7, 0, 0),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5, 0, 0),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 17),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1, 0, 0),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, 0, 18),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 0),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, 0, 17),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, 0, 17),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 5, 0, 0),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4, 0, 0),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3, 0, 0),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [2012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1, 0, 0),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3, 0, 0),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [2084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1, 0, 0),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [2112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [2124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1, 0, 0),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1, 0, 0),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3, 0, 0),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1, 0, 0),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1, 0, 0),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4, 0, 0),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1, 0, 0),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1, 0, 0),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
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

TS_PUBLIC const TSLanguage *tree_sitter_mermaid(void) {
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
