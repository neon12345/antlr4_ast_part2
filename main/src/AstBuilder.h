#include "AstBuilderBase.h"
class AstBuilder : public AstBuilderBase {
public:
    AstBuilder();
    virtual ~AstBuilder();
    enum class NodeType  : int32_t {
        Top_level = 0,
        Statement = 2,
        Statements = 5,
        While_statement = 13,
        Branch_statement = 28,
        Loop_statement = 7,
        For_in_statement = 11,
        Switch_if_directive_clause = 58,
        Condition_list = 15,
        Condition = 17,
        Case_condition = 22,
        Optional_binding_condition = 24,
        Repeat_while_statement = 26,
        Label_name = 70,
        Control_transfer_statement = 72,
        If_statement = 32,
        Else_clause = 34,
        Guard_statement = 37,
        Switch_statement = 39,
        Switch_cases = 41,
        Switch_case = 43,
        Case_label = 46,
        Case_item_list = 48,
        Default_label = 50,
        Where_clause = 52,
        Where_expression = 54,
        Conditional_switch_case = 56,
        Line_number = 151,
        Switch_elseif_directive_clauses = 60,
        Switch_elseif_directive_clause = 62,
        Switch_else_directive_clause = 64,
        Labeled_statement = 66,
        Statement_label = 68,
        Availability_argument = 163,
        Platform_name = 166,
        Break_statement = 78,
        Continue_statement = 80,
        Fallthrough_statement = 82,
        Return_statement = 84,
        Throw_statement = 86,
        Defer_statement = 88,
        Do_statement = 90,
        Catch_clauses = 92,
        Catch_clause = 94,
        Catch_pattern_list = 96,
        Catch_pattern = 98,
        Compiler_control_statement = 100,
        Conditional_compilation_block = 104,
        If_directive_clause = 106,
        Elseif_directive_clauses = 108,
        Elseif_directive_clause = 110,
        Else_directive_clause = 112,
        Compilation_condition = 114,
        Platform_condition = 121,
        Swift_version = 127,
        Swift_version_continuation = 129,
        Operating_system = 131,
        Architecture = 139,
        Module_name = 144,
        Environment = 146,
        Line_control_statement = 149,
        Union_style_enum_case = 307,
        Enum_name = 310,
        Enum_case_name = 312,
        File_name = 153,
        Diagnostic_statement = 155,
        Diagnostic_message = 157,
        Availability_condition = 159,
        Availability_arguments = 161,
        Trailing_closures = 665,
        Raw_value_style_enum_members = 316,
        Raw_value_style_enum_member = 318,
        Raw_value_style_enum_case_clause = 322,
        Raw_value_style_enum_case_list = 324,
        Raw_value_style_enum_case = 326,
        Raw_value_assignment = 328,
        Raw_value_literal = 330,
        Struct_declaration = 334,
        Platform_version = 176,
        Generic_parameter_clause = 180,
        Generic_parameter_list = 182,
        Generic_parameter = 184,
        Generic_where_clause = 186,
        Requirement_list = 188,
        Requirement = 190,
        Conformance_requirement = 193,
        Same_type_requirement = 195,
        Generic_argument_clause = 197,
        Generic_argument_list = 199,
        Generic_argument = 201,
        Declaration = 203,
        Setter_keyword_clause = 254,
        Declarations = 205,
        Top_level_declaration = 207,
        Code_block = 209,
        Import_declaration = 211,
        Import_kind = 213,
        Import_path = 222,
        Import_path_identifier = 224,
        Constant_declaration = 227,
        Pattern_initializer_list = 229,
        Pattern_initializer = 231,
        Initializer = 233,
        Variable_declaration = 235,
        Variable_declaration_head = 237,
        Variable_name = 239,
        Getter_setter_block = 241,
        Getter_clause = 244,
        Setter_clause = 246,
        Setter_name = 248,
        Getter_setter_keyword_block = 250,
        Getter_keyword_clause = 252,
        WillSet_didSet_block = 256,
        WillSet_clause = 258,
        DidSet_clause = 260,
        Typealias_declaration = 262,
        Typealias_name = 264,
        Typealias_assignment = 266,
        Function_declaration = 268,
        Function_head = 270,
        Function_name = 272,
        Function_signature = 275,
        Function_result = 277,
        Function_body = 279,
        Parameter_clause = 281,
        Parameter_list = 283,
        Parameter = 285,
        External_parameter_name = 287,
        Local_parameter_name = 289,
        Default_argument_clause = 291,
        Enum_declaration = 293,
        Union_style_enum = 295,
        Union_style_enum_members = 297,
        Union_style_enum_member = 299,
        Union_style_enum_case_clause = 303,
        Union_style_enum_case_list = 305,
        Tuple_element_list = 618,
        Tuple_element = 620,
        Wildcard_expression = 622,
        Key_path_expression = 624,
        Key_path_components = 626,
        Key_path_component = 628,
        Key_path_postfixes = 631,
        Key_path_postfix = 633,
        Raw_value_style_enum = 314,
        Key_path_string_expression = 640,
        Postfix_expression = 642,
        Function_call_suffix = 644,
        Initializer_suffix = 647,
        Explicit_member_suffix = 649,
        Postfix_self_suffix = 651,
        Subscript_suffix = 653,
        Forced_value_suffix = 655,
        Struct_name = 336,
        Struct_body = 338,
        Struct_members = 340,
        Struct_member = 342,
        Class_declaration = 345,
        Class_name = 347,
        Class_body = 349,
        Class_members = 351,
        Class_member = 353,
        Protocol_declaration = 356,
        Protocol_name = 358,
        Protocol_body = 360,
        Protocol_members = 362,
        Protocol_member = 364,
        Protocol_member_declaration = 367,
        Protocol_property_declaration = 374,
        Protocol_method_declaration = 376,
        Protocol_initializer_declaration = 378,
        Protocol_subscript_declaration = 380,
        Protocol_associated_type_declaration = 382,
        Initializer_declaration = 384,
        Initializer_head = 386,
        Initializer_body = 388,
        Deinitializer_declaration = 390,
        Extension_declaration = 392,
        Extension_body = 394,
        Extension_members = 396,
        Extension_member = 398,
        Subscript_declaration = 401,
        Subscript_head = 403,
        Subscript_result = 405,
        Operator_declaration = 407,
        Prefix_operator_declaration = 411,
        Postfix_operator_declaration = 413,
        Infix_operator_declaration = 415,
        Infix_operator_group = 417,
        Precedence_group_declaration = 419,
        Precedence_group_attributes = 421,
        Precedence_group_attribute = 423,
        Precedence_group_relation = 427,
        Precedence_group_assignment = 429,
        Precedence_group_associativity = 431,
        Precedence_group_names = 433,
        Precedence_group_name = 435,
        Declaration_modifier = 437,
        Declaration_modifiers = 454,
        Access_level_modifier = 456,
        Mutation_modifier = 458,
        Pattern = 461,
        Wildcard_pattern = 469,
        Identifier_pattern = 471,
        Value_binding_pattern = 473,
        Tuple_pattern = 476,
        Tuple_pattern_element_list = 478,
        Tuple_pattern_element = 480,
        Enum_case_pattern = 482,
        Optional_pattern = 484,
        Expression_pattern = 486,
        Attribute = 488,
        Attribute_name = 490,
        Attribute_argument_clause = 492,
        Attributes = 494,
        Balanced_tokens = 496,
        Balanced_token = 498,
        Balanced_token_punctuation = 507,
        Expression = 512,
        Expression_list = 514,
        Prefix_expression = 516,
        In_out_expression = 519,
        Try_operator = 521,
        Binary_expression = 523,
        Binary_expressions = 527,
        Conditional_operator = 529,
        Type_casting_operator = 531,
        Primary_expression = 533,
        Unqualified_name = 549,
        Literal_expression = 551,
        Array_literal = 563,
        Array_literal_items = 565,
        Array_literal_item = 567,
        Dictionary_literal = 569,
        Dictionary_literal_items = 571,
        Dictionary_literal_item = 573,
        Playground_literal = 575,
        Self_pure_expression = 580,
        Self_method_expression = 581,
        Self_subscript_expression = 582,
        Self_initializer_expression = 583,
        Superclass_method_expression = 585,
        Superclass_subscript_expression = 586,
        Superclass_initializer_expression = 587,
        Closure_expression = 588,
        Closure_signature = 590,
        Closure_parameter_clause = 593,
        Closure_parameter_list = 596,
        Closure_parameter = 598,
        Capture_list = 600,
        Capture_list_items = 602,
        Capture_list_item = 604,
        Capture_specifier = 606,
        Implicit_member_expression = 609,
        Parenthesized_operator = 611,
        Parenthesized_expression = 613,
        Tuple_expression = 615,
        Selector_expression = 638,
        Optional_chaining_suffix = 657,
        Function_call_argument_clause = 659,
        Function_call_argument_list = 661,
        Function_call_argument = 663,
        Labeled_trailing_closures = 667,
        Labeled_trailing_closure = 669,
        Argument_names = 671,
        Argument_name = 673,
        Type = 675,
        Type_annotation = 687,
        Type_identifier = 689,
        Type_name = 691,
        Tuple_type = 693,
        Tuple_type_element_list = 695,
        Tuple_type_element = 697,
        Element_name = 699,
        Function_type = 701,
        Function_type_argument_clause = 703,
        Function_type_argument_list = 705,
        Function_type_argument = 707,
        Argument_label = 710,
        Array_type = 712,
        Dictionary_type = 714,
        Protocol_composition_type = 716,
        Trailing_composition_and = 718,
        Opaque_type = 720,
        Any_type = 722,
        Self_type = 724,
        Type_inheritance_clause = 726,
        Type_inheritance_list = 728,
        Identifier = 730,
        Identifier_list = 734,
        Keyword = 736,
        Assignment_operator = 809,
        Negate_prefix_operator = 811,
        Compilation_condition_AND = 813,
        Compilation_condition_OR = 815,
        Compilation_condition_GE = 817,
        Compilation_condition_L = 819,
        Arrow_operator = 821,
        Range_operator = 823,
        Same_type_equals = 825,
        Binary_operator = 827,
        Prefix_operator = 829,
        Postfix_operator = 831,
        Operator = 833,
        Operator_head = 836,
        Operator_character = 839,
        Operator_characters = 842,
        Dot_operator_head = 844,
        Dot_operator_character = 846,
        Dot_operator_characters = 849,
        Literal = 851,
        Numeric_literal = 856,
        Boolean_literal = 859,
        Nil_literal = 862,
        Integer_literal = 864,
        String_literal = 870,
        Extended_string_literal = 874,
        Static_string_literal = 877,
        Interpolated_string_literal = 880,
        
    };
    class Node {
    public:
        Node(NodeType type) : type(type) {}
        void print() {
            switch(type) {
                case NodeType::Top_level:
                    static_cast<Top_level*>(this)->print();
                    break;
                case NodeType::Statement:
                    static_cast<Statement*>(this)->print();
                    break;
                case NodeType::Statements:
                    static_cast<Statements*>(this)->print();
                    break;
                case NodeType::While_statement:
                    static_cast<While_statement*>(this)->print();
                    break;
                case NodeType::Branch_statement:
                    static_cast<Branch_statement*>(this)->print();
                    break;
                case NodeType::Loop_statement:
                    static_cast<Loop_statement*>(this)->print();
                    break;
                case NodeType::For_in_statement:
                    static_cast<For_in_statement*>(this)->print();
                    break;
                case NodeType::Switch_if_directive_clause:
                    static_cast<Switch_if_directive_clause*>(this)->print();
                    break;
                case NodeType::Condition_list:
                    static_cast<Condition_list*>(this)->print();
                    break;
                case NodeType::Condition:
                    static_cast<Condition*>(this)->print();
                    break;
                case NodeType::Case_condition:
                    static_cast<Case_condition*>(this)->print();
                    break;
                case NodeType::Optional_binding_condition:
                    static_cast<Optional_binding_condition*>(this)->print();
                    break;
                case NodeType::Repeat_while_statement:
                    static_cast<Repeat_while_statement*>(this)->print();
                    break;
                case NodeType::Label_name:
                    static_cast<Label_name*>(this)->print();
                    break;
                case NodeType::Control_transfer_statement:
                    static_cast<Control_transfer_statement*>(this)->print();
                    break;
                case NodeType::If_statement:
                    static_cast<If_statement*>(this)->print();
                    break;
                case NodeType::Else_clause:
                    static_cast<Else_clause*>(this)->print();
                    break;
                case NodeType::Guard_statement:
                    static_cast<Guard_statement*>(this)->print();
                    break;
                case NodeType::Switch_statement:
                    static_cast<Switch_statement*>(this)->print();
                    break;
                case NodeType::Switch_cases:
                    static_cast<Switch_cases*>(this)->print();
                    break;
                case NodeType::Switch_case:
                    static_cast<Switch_case*>(this)->print();
                    break;
                case NodeType::Case_label:
                    static_cast<Case_label*>(this)->print();
                    break;
                case NodeType::Case_item_list:
                    static_cast<Case_item_list*>(this)->print();
                    break;
                case NodeType::Default_label:
                    static_cast<Default_label*>(this)->print();
                    break;
                case NodeType::Where_clause:
                    static_cast<Where_clause*>(this)->print();
                    break;
                case NodeType::Where_expression:
                    static_cast<Where_expression*>(this)->print();
                    break;
                case NodeType::Conditional_switch_case:
                    static_cast<Conditional_switch_case*>(this)->print();
                    break;
                case NodeType::Line_number:
                    static_cast<Line_number*>(this)->print();
                    break;
                case NodeType::Switch_elseif_directive_clauses:
                    static_cast<Switch_elseif_directive_clauses*>(this)->print();
                    break;
                case NodeType::Switch_elseif_directive_clause:
                    static_cast<Switch_elseif_directive_clause*>(this)->print();
                    break;
                case NodeType::Switch_else_directive_clause:
                    static_cast<Switch_else_directive_clause*>(this)->print();
                    break;
                case NodeType::Labeled_statement:
                    static_cast<Labeled_statement*>(this)->print();
                    break;
                case NodeType::Statement_label:
                    static_cast<Statement_label*>(this)->print();
                    break;
                case NodeType::Availability_argument:
                    static_cast<Availability_argument*>(this)->print();
                    break;
                case NodeType::Platform_name:
                    static_cast<Platform_name*>(this)->print();
                    break;
                case NodeType::Break_statement:
                    static_cast<Break_statement*>(this)->print();
                    break;
                case NodeType::Continue_statement:
                    static_cast<Continue_statement*>(this)->print();
                    break;
                case NodeType::Fallthrough_statement:
                    static_cast<Fallthrough_statement*>(this)->print();
                    break;
                case NodeType::Return_statement:
                    static_cast<Return_statement*>(this)->print();
                    break;
                case NodeType::Throw_statement:
                    static_cast<Throw_statement*>(this)->print();
                    break;
                case NodeType::Defer_statement:
                    static_cast<Defer_statement*>(this)->print();
                    break;
                case NodeType::Do_statement:
                    static_cast<Do_statement*>(this)->print();
                    break;
                case NodeType::Catch_clauses:
                    static_cast<Catch_clauses*>(this)->print();
                    break;
                case NodeType::Catch_clause:
                    static_cast<Catch_clause*>(this)->print();
                    break;
                case NodeType::Catch_pattern_list:
                    static_cast<Catch_pattern_list*>(this)->print();
                    break;
                case NodeType::Catch_pattern:
                    static_cast<Catch_pattern*>(this)->print();
                    break;
                case NodeType::Compiler_control_statement:
                    static_cast<Compiler_control_statement*>(this)->print();
                    break;
                case NodeType::Conditional_compilation_block:
                    static_cast<Conditional_compilation_block*>(this)->print();
                    break;
                case NodeType::If_directive_clause:
                    static_cast<If_directive_clause*>(this)->print();
                    break;
                case NodeType::Elseif_directive_clauses:
                    static_cast<Elseif_directive_clauses*>(this)->print();
                    break;
                case NodeType::Elseif_directive_clause:
                    static_cast<Elseif_directive_clause*>(this)->print();
                    break;
                case NodeType::Else_directive_clause:
                    static_cast<Else_directive_clause*>(this)->print();
                    break;
                case NodeType::Compilation_condition:
                    static_cast<Compilation_condition*>(this)->print();
                    break;
                case NodeType::Platform_condition:
                    static_cast<Platform_condition*>(this)->print();
                    break;
                case NodeType::Swift_version:
                    static_cast<Swift_version*>(this)->print();
                    break;
                case NodeType::Swift_version_continuation:
                    static_cast<Swift_version_continuation*>(this)->print();
                    break;
                case NodeType::Operating_system:
                    static_cast<Operating_system*>(this)->print();
                    break;
                case NodeType::Architecture:
                    static_cast<Architecture*>(this)->print();
                    break;
                case NodeType::Module_name:
                    static_cast<Module_name*>(this)->print();
                    break;
                case NodeType::Environment:
                    static_cast<Environment*>(this)->print();
                    break;
                case NodeType::Line_control_statement:
                    static_cast<Line_control_statement*>(this)->print();
                    break;
                case NodeType::Union_style_enum_case:
                    static_cast<Union_style_enum_case*>(this)->print();
                    break;
                case NodeType::Enum_name:
                    static_cast<Enum_name*>(this)->print();
                    break;
                case NodeType::Enum_case_name:
                    static_cast<Enum_case_name*>(this)->print();
                    break;
                case NodeType::File_name:
                    static_cast<File_name*>(this)->print();
                    break;
                case NodeType::Diagnostic_statement:
                    static_cast<Diagnostic_statement*>(this)->print();
                    break;
                case NodeType::Diagnostic_message:
                    static_cast<Diagnostic_message*>(this)->print();
                    break;
                case NodeType::Availability_condition:
                    static_cast<Availability_condition*>(this)->print();
                    break;
                case NodeType::Availability_arguments:
                    static_cast<Availability_arguments*>(this)->print();
                    break;
                case NodeType::Trailing_closures:
                    static_cast<Trailing_closures*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum_members:
                    static_cast<Raw_value_style_enum_members*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum_member:
                    static_cast<Raw_value_style_enum_member*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum_case_clause:
                    static_cast<Raw_value_style_enum_case_clause*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum_case_list:
                    static_cast<Raw_value_style_enum_case_list*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum_case:
                    static_cast<Raw_value_style_enum_case*>(this)->print();
                    break;
                case NodeType::Raw_value_assignment:
                    static_cast<Raw_value_assignment*>(this)->print();
                    break;
                case NodeType::Raw_value_literal:
                    static_cast<Raw_value_literal*>(this)->print();
                    break;
                case NodeType::Struct_declaration:
                    static_cast<Struct_declaration*>(this)->print();
                    break;
                case NodeType::Platform_version:
                    static_cast<Platform_version*>(this)->print();
                    break;
                case NodeType::Generic_parameter_clause:
                    static_cast<Generic_parameter_clause*>(this)->print();
                    break;
                case NodeType::Generic_parameter_list:
                    static_cast<Generic_parameter_list*>(this)->print();
                    break;
                case NodeType::Generic_parameter:
                    static_cast<Generic_parameter*>(this)->print();
                    break;
                case NodeType::Generic_where_clause:
                    static_cast<Generic_where_clause*>(this)->print();
                    break;
                case NodeType::Requirement_list:
                    static_cast<Requirement_list*>(this)->print();
                    break;
                case NodeType::Requirement:
                    static_cast<Requirement*>(this)->print();
                    break;
                case NodeType::Conformance_requirement:
                    static_cast<Conformance_requirement*>(this)->print();
                    break;
                case NodeType::Same_type_requirement:
                    static_cast<Same_type_requirement*>(this)->print();
                    break;
                case NodeType::Generic_argument_clause:
                    static_cast<Generic_argument_clause*>(this)->print();
                    break;
                case NodeType::Generic_argument_list:
                    static_cast<Generic_argument_list*>(this)->print();
                    break;
                case NodeType::Generic_argument:
                    static_cast<Generic_argument*>(this)->print();
                    break;
                case NodeType::Declaration:
                    static_cast<Declaration*>(this)->print();
                    break;
                case NodeType::Setter_keyword_clause:
                    static_cast<Setter_keyword_clause*>(this)->print();
                    break;
                case NodeType::Declarations:
                    static_cast<Declarations*>(this)->print();
                    break;
                case NodeType::Top_level_declaration:
                    static_cast<Top_level_declaration*>(this)->print();
                    break;
                case NodeType::Code_block:
                    static_cast<Code_block*>(this)->print();
                    break;
                case NodeType::Import_declaration:
                    static_cast<Import_declaration*>(this)->print();
                    break;
                case NodeType::Import_kind:
                    static_cast<Import_kind*>(this)->print();
                    break;
                case NodeType::Import_path:
                    static_cast<Import_path*>(this)->print();
                    break;
                case NodeType::Import_path_identifier:
                    static_cast<Import_path_identifier*>(this)->print();
                    break;
                case NodeType::Constant_declaration:
                    static_cast<Constant_declaration*>(this)->print();
                    break;
                case NodeType::Pattern_initializer_list:
                    static_cast<Pattern_initializer_list*>(this)->print();
                    break;
                case NodeType::Pattern_initializer:
                    static_cast<Pattern_initializer*>(this)->print();
                    break;
                case NodeType::Initializer:
                    static_cast<Initializer*>(this)->print();
                    break;
                case NodeType::Variable_declaration:
                    static_cast<Variable_declaration*>(this)->print();
                    break;
                case NodeType::Variable_declaration_head:
                    static_cast<Variable_declaration_head*>(this)->print();
                    break;
                case NodeType::Variable_name:
                    static_cast<Variable_name*>(this)->print();
                    break;
                case NodeType::Getter_setter_block:
                    static_cast<Getter_setter_block*>(this)->print();
                    break;
                case NodeType::Getter_clause:
                    static_cast<Getter_clause*>(this)->print();
                    break;
                case NodeType::Setter_clause:
                    static_cast<Setter_clause*>(this)->print();
                    break;
                case NodeType::Setter_name:
                    static_cast<Setter_name*>(this)->print();
                    break;
                case NodeType::Getter_setter_keyword_block:
                    static_cast<Getter_setter_keyword_block*>(this)->print();
                    break;
                case NodeType::Getter_keyword_clause:
                    static_cast<Getter_keyword_clause*>(this)->print();
                    break;
                case NodeType::WillSet_didSet_block:
                    static_cast<WillSet_didSet_block*>(this)->print();
                    break;
                case NodeType::WillSet_clause:
                    static_cast<WillSet_clause*>(this)->print();
                    break;
                case NodeType::DidSet_clause:
                    static_cast<DidSet_clause*>(this)->print();
                    break;
                case NodeType::Typealias_declaration:
                    static_cast<Typealias_declaration*>(this)->print();
                    break;
                case NodeType::Typealias_name:
                    static_cast<Typealias_name*>(this)->print();
                    break;
                case NodeType::Typealias_assignment:
                    static_cast<Typealias_assignment*>(this)->print();
                    break;
                case NodeType::Function_declaration:
                    static_cast<Function_declaration*>(this)->print();
                    break;
                case NodeType::Function_head:
                    static_cast<Function_head*>(this)->print();
                    break;
                case NodeType::Function_name:
                    static_cast<Function_name*>(this)->print();
                    break;
                case NodeType::Function_signature:
                    static_cast<Function_signature*>(this)->print();
                    break;
                case NodeType::Function_result:
                    static_cast<Function_result*>(this)->print();
                    break;
                case NodeType::Function_body:
                    static_cast<Function_body*>(this)->print();
                    break;
                case NodeType::Parameter_clause:
                    static_cast<Parameter_clause*>(this)->print();
                    break;
                case NodeType::Parameter_list:
                    static_cast<Parameter_list*>(this)->print();
                    break;
                case NodeType::Parameter:
                    static_cast<Parameter*>(this)->print();
                    break;
                case NodeType::External_parameter_name:
                    static_cast<External_parameter_name*>(this)->print();
                    break;
                case NodeType::Local_parameter_name:
                    static_cast<Local_parameter_name*>(this)->print();
                    break;
                case NodeType::Default_argument_clause:
                    static_cast<Default_argument_clause*>(this)->print();
                    break;
                case NodeType::Enum_declaration:
                    static_cast<Enum_declaration*>(this)->print();
                    break;
                case NodeType::Union_style_enum:
                    static_cast<Union_style_enum*>(this)->print();
                    break;
                case NodeType::Union_style_enum_members:
                    static_cast<Union_style_enum_members*>(this)->print();
                    break;
                case NodeType::Union_style_enum_member:
                    static_cast<Union_style_enum_member*>(this)->print();
                    break;
                case NodeType::Union_style_enum_case_clause:
                    static_cast<Union_style_enum_case_clause*>(this)->print();
                    break;
                case NodeType::Union_style_enum_case_list:
                    static_cast<Union_style_enum_case_list*>(this)->print();
                    break;
                case NodeType::Tuple_element_list:
                    static_cast<Tuple_element_list*>(this)->print();
                    break;
                case NodeType::Tuple_element:
                    static_cast<Tuple_element*>(this)->print();
                    break;
                case NodeType::Wildcard_expression:
                    static_cast<Wildcard_expression*>(this)->print();
                    break;
                case NodeType::Key_path_expression:
                    static_cast<Key_path_expression*>(this)->print();
                    break;
                case NodeType::Key_path_components:
                    static_cast<Key_path_components*>(this)->print();
                    break;
                case NodeType::Key_path_component:
                    static_cast<Key_path_component*>(this)->print();
                    break;
                case NodeType::Key_path_postfixes:
                    static_cast<Key_path_postfixes*>(this)->print();
                    break;
                case NodeType::Key_path_postfix:
                    static_cast<Key_path_postfix*>(this)->print();
                    break;
                case NodeType::Raw_value_style_enum:
                    static_cast<Raw_value_style_enum*>(this)->print();
                    break;
                case NodeType::Key_path_string_expression:
                    static_cast<Key_path_string_expression*>(this)->print();
                    break;
                case NodeType::Postfix_expression:
                    static_cast<Postfix_expression*>(this)->print();
                    break;
                case NodeType::Function_call_suffix:
                    static_cast<Function_call_suffix*>(this)->print();
                    break;
                case NodeType::Initializer_suffix:
                    static_cast<Initializer_suffix*>(this)->print();
                    break;
                case NodeType::Explicit_member_suffix:
                    static_cast<Explicit_member_suffix*>(this)->print();
                    break;
                case NodeType::Postfix_self_suffix:
                    static_cast<Postfix_self_suffix*>(this)->print();
                    break;
                case NodeType::Subscript_suffix:
                    static_cast<Subscript_suffix*>(this)->print();
                    break;
                case NodeType::Forced_value_suffix:
                    static_cast<Forced_value_suffix*>(this)->print();
                    break;
                case NodeType::Struct_name:
                    static_cast<Struct_name*>(this)->print();
                    break;
                case NodeType::Struct_body:
                    static_cast<Struct_body*>(this)->print();
                    break;
                case NodeType::Struct_members:
                    static_cast<Struct_members*>(this)->print();
                    break;
                case NodeType::Struct_member:
                    static_cast<Struct_member*>(this)->print();
                    break;
                case NodeType::Class_declaration:
                    static_cast<Class_declaration*>(this)->print();
                    break;
                case NodeType::Class_name:
                    static_cast<Class_name*>(this)->print();
                    break;
                case NodeType::Class_body:
                    static_cast<Class_body*>(this)->print();
                    break;
                case NodeType::Class_members:
                    static_cast<Class_members*>(this)->print();
                    break;
                case NodeType::Class_member:
                    static_cast<Class_member*>(this)->print();
                    break;
                case NodeType::Protocol_declaration:
                    static_cast<Protocol_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_name:
                    static_cast<Protocol_name*>(this)->print();
                    break;
                case NodeType::Protocol_body:
                    static_cast<Protocol_body*>(this)->print();
                    break;
                case NodeType::Protocol_members:
                    static_cast<Protocol_members*>(this)->print();
                    break;
                case NodeType::Protocol_member:
                    static_cast<Protocol_member*>(this)->print();
                    break;
                case NodeType::Protocol_member_declaration:
                    static_cast<Protocol_member_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_property_declaration:
                    static_cast<Protocol_property_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_method_declaration:
                    static_cast<Protocol_method_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_initializer_declaration:
                    static_cast<Protocol_initializer_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_subscript_declaration:
                    static_cast<Protocol_subscript_declaration*>(this)->print();
                    break;
                case NodeType::Protocol_associated_type_declaration:
                    static_cast<Protocol_associated_type_declaration*>(this)->print();
                    break;
                case NodeType::Initializer_declaration:
                    static_cast<Initializer_declaration*>(this)->print();
                    break;
                case NodeType::Initializer_head:
                    static_cast<Initializer_head*>(this)->print();
                    break;
                case NodeType::Initializer_body:
                    static_cast<Initializer_body*>(this)->print();
                    break;
                case NodeType::Deinitializer_declaration:
                    static_cast<Deinitializer_declaration*>(this)->print();
                    break;
                case NodeType::Extension_declaration:
                    static_cast<Extension_declaration*>(this)->print();
                    break;
                case NodeType::Extension_body:
                    static_cast<Extension_body*>(this)->print();
                    break;
                case NodeType::Extension_members:
                    static_cast<Extension_members*>(this)->print();
                    break;
                case NodeType::Extension_member:
                    static_cast<Extension_member*>(this)->print();
                    break;
                case NodeType::Subscript_declaration:
                    static_cast<Subscript_declaration*>(this)->print();
                    break;
                case NodeType::Subscript_head:
                    static_cast<Subscript_head*>(this)->print();
                    break;
                case NodeType::Subscript_result:
                    static_cast<Subscript_result*>(this)->print();
                    break;
                case NodeType::Operator_declaration:
                    static_cast<Operator_declaration*>(this)->print();
                    break;
                case NodeType::Prefix_operator_declaration:
                    static_cast<Prefix_operator_declaration*>(this)->print();
                    break;
                case NodeType::Postfix_operator_declaration:
                    static_cast<Postfix_operator_declaration*>(this)->print();
                    break;
                case NodeType::Infix_operator_declaration:
                    static_cast<Infix_operator_declaration*>(this)->print();
                    break;
                case NodeType::Infix_operator_group:
                    static_cast<Infix_operator_group*>(this)->print();
                    break;
                case NodeType::Precedence_group_declaration:
                    static_cast<Precedence_group_declaration*>(this)->print();
                    break;
                case NodeType::Precedence_group_attributes:
                    static_cast<Precedence_group_attributes*>(this)->print();
                    break;
                case NodeType::Precedence_group_attribute:
                    static_cast<Precedence_group_attribute*>(this)->print();
                    break;
                case NodeType::Precedence_group_relation:
                    static_cast<Precedence_group_relation*>(this)->print();
                    break;
                case NodeType::Precedence_group_assignment:
                    static_cast<Precedence_group_assignment*>(this)->print();
                    break;
                case NodeType::Precedence_group_associativity:
                    static_cast<Precedence_group_associativity*>(this)->print();
                    break;
                case NodeType::Precedence_group_names:
                    static_cast<Precedence_group_names*>(this)->print();
                    break;
                case NodeType::Precedence_group_name:
                    static_cast<Precedence_group_name*>(this)->print();
                    break;
                case NodeType::Declaration_modifier:
                    static_cast<Declaration_modifier*>(this)->print();
                    break;
                case NodeType::Declaration_modifiers:
                    static_cast<Declaration_modifiers*>(this)->print();
                    break;
                case NodeType::Access_level_modifier:
                    static_cast<Access_level_modifier*>(this)->print();
                    break;
                case NodeType::Mutation_modifier:
                    static_cast<Mutation_modifier*>(this)->print();
                    break;
                case NodeType::Pattern:
                    static_cast<Pattern*>(this)->print();
                    break;
                case NodeType::Wildcard_pattern:
                    static_cast<Wildcard_pattern*>(this)->print();
                    break;
                case NodeType::Identifier_pattern:
                    static_cast<Identifier_pattern*>(this)->print();
                    break;
                case NodeType::Value_binding_pattern:
                    static_cast<Value_binding_pattern*>(this)->print();
                    break;
                case NodeType::Tuple_pattern:
                    static_cast<Tuple_pattern*>(this)->print();
                    break;
                case NodeType::Tuple_pattern_element_list:
                    static_cast<Tuple_pattern_element_list*>(this)->print();
                    break;
                case NodeType::Tuple_pattern_element:
                    static_cast<Tuple_pattern_element*>(this)->print();
                    break;
                case NodeType::Enum_case_pattern:
                    static_cast<Enum_case_pattern*>(this)->print();
                    break;
                case NodeType::Optional_pattern:
                    static_cast<Optional_pattern*>(this)->print();
                    break;
                case NodeType::Expression_pattern:
                    static_cast<Expression_pattern*>(this)->print();
                    break;
                case NodeType::Attribute:
                    static_cast<Attribute*>(this)->print();
                    break;
                case NodeType::Attribute_name:
                    static_cast<Attribute_name*>(this)->print();
                    break;
                case NodeType::Attribute_argument_clause:
                    static_cast<Attribute_argument_clause*>(this)->print();
                    break;
                case NodeType::Attributes:
                    static_cast<Attributes*>(this)->print();
                    break;
                case NodeType::Balanced_tokens:
                    static_cast<Balanced_tokens*>(this)->print();
                    break;
                case NodeType::Balanced_token:
                    static_cast<Balanced_token*>(this)->print();
                    break;
                case NodeType::Balanced_token_punctuation:
                    static_cast<Balanced_token_punctuation*>(this)->print();
                    break;
                case NodeType::Expression:
                    static_cast<Expression*>(this)->print();
                    break;
                case NodeType::Expression_list:
                    static_cast<Expression_list*>(this)->print();
                    break;
                case NodeType::Prefix_expression:
                    static_cast<Prefix_expression*>(this)->print();
                    break;
                case NodeType::In_out_expression:
                    static_cast<In_out_expression*>(this)->print();
                    break;
                case NodeType::Try_operator:
                    static_cast<Try_operator*>(this)->print();
                    break;
                case NodeType::Binary_expression:
                    static_cast<Binary_expression*>(this)->print();
                    break;
                case NodeType::Binary_expressions:
                    static_cast<Binary_expressions*>(this)->print();
                    break;
                case NodeType::Conditional_operator:
                    static_cast<Conditional_operator*>(this)->print();
                    break;
                case NodeType::Type_casting_operator:
                    static_cast<Type_casting_operator*>(this)->print();
                    break;
                case NodeType::Primary_expression:
                    static_cast<Primary_expression*>(this)->print();
                    break;
                case NodeType::Unqualified_name:
                    static_cast<Unqualified_name*>(this)->print();
                    break;
                case NodeType::Literal_expression:
                    static_cast<Literal_expression*>(this)->print();
                    break;
                case NodeType::Array_literal:
                    static_cast<Array_literal*>(this)->print();
                    break;
                case NodeType::Array_literal_items:
                    static_cast<Array_literal_items*>(this)->print();
                    break;
                case NodeType::Array_literal_item:
                    static_cast<Array_literal_item*>(this)->print();
                    break;
                case NodeType::Dictionary_literal:
                    static_cast<Dictionary_literal*>(this)->print();
                    break;
                case NodeType::Dictionary_literal_items:
                    static_cast<Dictionary_literal_items*>(this)->print();
                    break;
                case NodeType::Dictionary_literal_item:
                    static_cast<Dictionary_literal_item*>(this)->print();
                    break;
                case NodeType::Playground_literal:
                    static_cast<Playground_literal*>(this)->print();
                    break;
                case NodeType::Self_pure_expression:
                    static_cast<Self_pure_expression*>(this)->print();
                    break;
                case NodeType::Self_method_expression:
                    static_cast<Self_method_expression*>(this)->print();
                    break;
                case NodeType::Self_subscript_expression:
                    static_cast<Self_subscript_expression*>(this)->print();
                    break;
                case NodeType::Self_initializer_expression:
                    static_cast<Self_initializer_expression*>(this)->print();
                    break;
                case NodeType::Superclass_method_expression:
                    static_cast<Superclass_method_expression*>(this)->print();
                    break;
                case NodeType::Superclass_subscript_expression:
                    static_cast<Superclass_subscript_expression*>(this)->print();
                    break;
                case NodeType::Superclass_initializer_expression:
                    static_cast<Superclass_initializer_expression*>(this)->print();
                    break;
                case NodeType::Closure_expression:
                    static_cast<Closure_expression*>(this)->print();
                    break;
                case NodeType::Closure_signature:
                    static_cast<Closure_signature*>(this)->print();
                    break;
                case NodeType::Closure_parameter_clause:
                    static_cast<Closure_parameter_clause*>(this)->print();
                    break;
                case NodeType::Closure_parameter_list:
                    static_cast<Closure_parameter_list*>(this)->print();
                    break;
                case NodeType::Closure_parameter:
                    static_cast<Closure_parameter*>(this)->print();
                    break;
                case NodeType::Capture_list:
                    static_cast<Capture_list*>(this)->print();
                    break;
                case NodeType::Capture_list_items:
                    static_cast<Capture_list_items*>(this)->print();
                    break;
                case NodeType::Capture_list_item:
                    static_cast<Capture_list_item*>(this)->print();
                    break;
                case NodeType::Capture_specifier:
                    static_cast<Capture_specifier*>(this)->print();
                    break;
                case NodeType::Implicit_member_expression:
                    static_cast<Implicit_member_expression*>(this)->print();
                    break;
                case NodeType::Parenthesized_operator:
                    static_cast<Parenthesized_operator*>(this)->print();
                    break;
                case NodeType::Parenthesized_expression:
                    static_cast<Parenthesized_expression*>(this)->print();
                    break;
                case NodeType::Tuple_expression:
                    static_cast<Tuple_expression*>(this)->print();
                    break;
                case NodeType::Selector_expression:
                    static_cast<Selector_expression*>(this)->print();
                    break;
                case NodeType::Optional_chaining_suffix:
                    static_cast<Optional_chaining_suffix*>(this)->print();
                    break;
                case NodeType::Function_call_argument_clause:
                    static_cast<Function_call_argument_clause*>(this)->print();
                    break;
                case NodeType::Function_call_argument_list:
                    static_cast<Function_call_argument_list*>(this)->print();
                    break;
                case NodeType::Function_call_argument:
                    static_cast<Function_call_argument*>(this)->print();
                    break;
                case NodeType::Labeled_trailing_closures:
                    static_cast<Labeled_trailing_closures*>(this)->print();
                    break;
                case NodeType::Labeled_trailing_closure:
                    static_cast<Labeled_trailing_closure*>(this)->print();
                    break;
                case NodeType::Argument_names:
                    static_cast<Argument_names*>(this)->print();
                    break;
                case NodeType::Argument_name:
                    static_cast<Argument_name*>(this)->print();
                    break;
                case NodeType::Type:
                    static_cast<Type*>(this)->print();
                    break;
                case NodeType::Type_annotation:
                    static_cast<Type_annotation*>(this)->print();
                    break;
                case NodeType::Type_identifier:
                    static_cast<Type_identifier*>(this)->print();
                    break;
                case NodeType::Type_name:
                    static_cast<Type_name*>(this)->print();
                    break;
                case NodeType::Tuple_type:
                    static_cast<Tuple_type*>(this)->print();
                    break;
                case NodeType::Tuple_type_element_list:
                    static_cast<Tuple_type_element_list*>(this)->print();
                    break;
                case NodeType::Tuple_type_element:
                    static_cast<Tuple_type_element*>(this)->print();
                    break;
                case NodeType::Element_name:
                    static_cast<Element_name*>(this)->print();
                    break;
                case NodeType::Function_type:
                    static_cast<Function_type*>(this)->print();
                    break;
                case NodeType::Function_type_argument_clause:
                    static_cast<Function_type_argument_clause*>(this)->print();
                    break;
                case NodeType::Function_type_argument_list:
                    static_cast<Function_type_argument_list*>(this)->print();
                    break;
                case NodeType::Function_type_argument:
                    static_cast<Function_type_argument*>(this)->print();
                    break;
                case NodeType::Argument_label:
                    static_cast<Argument_label*>(this)->print();
                    break;
                case NodeType::Array_type:
                    static_cast<Array_type*>(this)->print();
                    break;
                case NodeType::Dictionary_type:
                    static_cast<Dictionary_type*>(this)->print();
                    break;
                case NodeType::Protocol_composition_type:
                    static_cast<Protocol_composition_type*>(this)->print();
                    break;
                case NodeType::Trailing_composition_and:
                    static_cast<Trailing_composition_and*>(this)->print();
                    break;
                case NodeType::Opaque_type:
                    static_cast<Opaque_type*>(this)->print();
                    break;
                case NodeType::Any_type:
                    static_cast<Any_type*>(this)->print();
                    break;
                case NodeType::Self_type:
                    static_cast<Self_type*>(this)->print();
                    break;
                case NodeType::Type_inheritance_clause:
                    static_cast<Type_inheritance_clause*>(this)->print();
                    break;
                case NodeType::Type_inheritance_list:
                    static_cast<Type_inheritance_list*>(this)->print();
                    break;
                case NodeType::Identifier:
                    static_cast<Identifier*>(this)->print();
                    break;
                case NodeType::Identifier_list:
                    static_cast<Identifier_list*>(this)->print();
                    break;
                case NodeType::Keyword:
                    static_cast<Keyword*>(this)->print();
                    break;
                case NodeType::Assignment_operator:
                    static_cast<Assignment_operator*>(this)->print();
                    break;
                case NodeType::Negate_prefix_operator:
                    static_cast<Negate_prefix_operator*>(this)->print();
                    break;
                case NodeType::Compilation_condition_AND:
                    static_cast<Compilation_condition_AND*>(this)->print();
                    break;
                case NodeType::Compilation_condition_OR:
                    static_cast<Compilation_condition_OR*>(this)->print();
                    break;
                case NodeType::Compilation_condition_GE:
                    static_cast<Compilation_condition_GE*>(this)->print();
                    break;
                case NodeType::Compilation_condition_L:
                    static_cast<Compilation_condition_L*>(this)->print();
                    break;
                case NodeType::Arrow_operator:
                    static_cast<Arrow_operator*>(this)->print();
                    break;
                case NodeType::Range_operator:
                    static_cast<Range_operator*>(this)->print();
                    break;
                case NodeType::Same_type_equals:
                    static_cast<Same_type_equals*>(this)->print();
                    break;
                case NodeType::Binary_operator:
                    static_cast<Binary_operator*>(this)->print();
                    break;
                case NodeType::Prefix_operator:
                    static_cast<Prefix_operator*>(this)->print();
                    break;
                case NodeType::Postfix_operator:
                    static_cast<Postfix_operator*>(this)->print();
                    break;
                case NodeType::Operator:
                    static_cast<Operator*>(this)->print();
                    break;
                case NodeType::Operator_head:
                    static_cast<Operator_head*>(this)->print();
                    break;
                case NodeType::Operator_character:
                    static_cast<Operator_character*>(this)->print();
                    break;
                case NodeType::Operator_characters:
                    static_cast<Operator_characters*>(this)->print();
                    break;
                case NodeType::Dot_operator_head:
                    static_cast<Dot_operator_head*>(this)->print();
                    break;
                case NodeType::Dot_operator_character:
                    static_cast<Dot_operator_character*>(this)->print();
                    break;
                case NodeType::Dot_operator_characters:
                    static_cast<Dot_operator_characters*>(this)->print();
                    break;
                case NodeType::Literal:
                    static_cast<Literal*>(this)->print();
                    break;
                case NodeType::Numeric_literal:
                    static_cast<Numeric_literal*>(this)->print();
                    break;
                case NodeType::Boolean_literal:
                    static_cast<Boolean_literal*>(this)->print();
                    break;
                case NodeType::Nil_literal:
                    static_cast<Nil_literal*>(this)->print();
                    break;
                case NodeType::Integer_literal:
                    static_cast<Integer_literal*>(this)->print();
                    break;
                case NodeType::String_literal:
                    static_cast<String_literal*>(this)->print();
                    break;
                case NodeType::Extended_string_literal:
                    static_cast<Extended_string_literal*>(this)->print();
                    break;
                case NodeType::Static_string_literal:
                    static_cast<Static_string_literal*>(this)->print();
                    break;
                case NodeType::Interpolated_string_literal:
                    static_cast<Interpolated_string_literal*>(this)->print();
                    break;
                
            }
        }
        NodeType type;
    };
    
    class Top_level : public Node
    {
    public:
        Top_level() : Node(NodeType::Top_level) {}
        void print() {
            if(statements_ != nullptr) {
                statements_->print();
            }
            if(EOF_ != "") std::cout << EOF_ << std::endl;
        }
        std::unique_ptr<Node> statements_;
        std::string EOF_;
    private:
    };
    
    virtual std::any visitTop_level(Swift5Parser::Top_levelContext * ctx) override;
    
    class Statement : public Node
    {
    public:
        Statement() : Node(NodeType::Statement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // loop_statement, declaration, branch_statement, labeled_statement, control_transfer_statement, defer_statement, do_statement, expression, compiler_control_statement
    private:
    };
    
    virtual std::any visitStatement(Swift5Parser::StatementContext * ctx) override;
    
    class Statements : public Node
    {
    public:
        Statements() : Node(NodeType::Statements) {}
        void print() {
            for(auto& item : statements_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> statements_;
    private:
    };
    
    virtual std::any visitStatements(Swift5Parser::StatementsContext * ctx) override;
    
    class While_statement : public Node
    {
    public:
        While_statement() : Node(NodeType::While_statement) {}
        void print() {
            if(condition_list_ != nullptr) {
                condition_list_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> condition_list_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitWhile_statement(Swift5Parser::While_statementContext * ctx) override;
    
    class Branch_statement : public Node
    {
    public:
        Branch_statement() : Node(NodeType::Branch_statement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // if_statement, guard_statement, switch_statement
    private:
    };
    
    virtual std::any visitBranch_statement(Swift5Parser::Branch_statementContext * ctx) override;
    
    class Loop_statement : public Node
    {
    public:
        Loop_statement() : Node(NodeType::Loop_statement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // for_in_statement, While_statement, repeat_while_statement
    private:
    };
    
    virtual std::any visitLoop_statement(Swift5Parser::Loop_statementContext * ctx) override;
    
    class For_in_statement : public Node
    {
    public:
        For_in_statement() : Node(NodeType::For_in_statement) {}
        void print() {
            if(pattern_ != nullptr) {
                pattern_->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
            if(where_clause_ != nullptr) {
                where_clause_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> pattern_;
        std::unique_ptr<Node> expression_;
        std::unique_ptr<Node> where_clause_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitFor_in_statement(Swift5Parser::For_in_statementContext * ctx) override;
    
    class Switch_if_directive_clause : public Node
    {
    public:
        Switch_if_directive_clause() : Node(NodeType::Switch_if_directive_clause) {}
        void print() {
            if(compilation_condition_ != nullptr) {
                compilation_condition_->print();
            }
            if(switch_cases_ != nullptr) {
                switch_cases_->print();
            }
        }
        std::unique_ptr<Node> compilation_condition_;
        std::unique_ptr<Node> switch_cases_;
    private:
    };
    
    virtual std::any visitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext * ctx) override;
    
    class Condition_list : public Node
    {
    public:
        Condition_list() : Node(NodeType::Condition_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // condition, condition
    private:
    };
    
    virtual std::any visitCondition_list(Swift5Parser::Condition_listContext * ctx) override;
    
    class Condition : public Node
    {
    public:
        Condition() : Node(NodeType::Condition) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // availability_condition, expression, case_condition, optional_binding_condition
    private:
    };
    
    virtual std::any visitCondition(Swift5Parser::ConditionContext * ctx) override;
    
    class Case_condition : public Node
    {
    public:
        Case_condition() : Node(NodeType::Case_condition) {}
        void print() {
            if(pattern_ != nullptr) {
                pattern_->print();
            }
            if(initializer_ != nullptr) {
                initializer_->print();
            }
        }
        std::unique_ptr<Node> pattern_;
        std::unique_ptr<Node> initializer_;
    private:
    };
    
    virtual std::any visitCase_condition(Swift5Parser::Case_conditionContext * ctx) override;
    
    class Optional_binding_condition : public Node
    {
    public:
        Optional_binding_condition() : Node(NodeType::Optional_binding_condition) {}
        void print() {
            if(pattern_ != nullptr) {
                pattern_->print();
            }
            if(initializer_ != nullptr) {
                initializer_->print();
            }
        }
        std::unique_ptr<Node> pattern_;
        std::unique_ptr<Node> initializer_;
    private:
    };
    
    virtual std::any visitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext * ctx) override;
    
    class Repeat_while_statement : public Node
    {
    public:
        Repeat_while_statement() : Node(NodeType::Repeat_while_statement) {}
        void print() {
            if(code_block_ != nullptr) {
                code_block_->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> code_block_;
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext * ctx) override;
    
    class Label_name : public Node
    {
    public:
        Label_name() : Node(NodeType::Label_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitLabel_name(Swift5Parser::Label_nameContext * ctx) override;
    
    class Control_transfer_statement : public Node
    {
    public:
        Control_transfer_statement() : Node(NodeType::Control_transfer_statement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // break_statement, continue_statement, fallthrough_statement, return_statement, throw_statement
    private:
    };
    
    virtual std::any visitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext * ctx) override;
    
    class If_statement : public Node
    {
    public:
        If_statement() : Node(NodeType::If_statement) {}
        void print() {
            if(condition_list_ != nullptr) {
                condition_list_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
            if(else_clause_ != nullptr) {
                else_clause_->print();
            }
        }
        std::unique_ptr<Node> condition_list_;
        std::unique_ptr<Node> code_block_;
        std::unique_ptr<Node> else_clause_;
    private:
    };
    
    virtual std::any visitIf_statement(Swift5Parser::If_statementContext * ctx) override;
    
    class Else_clause : public Node
    {
    public:
        Else_clause() : Node(NodeType::Else_clause) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // code_block, If_statement
    private:
    };
    
    virtual std::any visitElse_clause(Swift5Parser::Else_clauseContext * ctx) override;
    
    class Guard_statement : public Node
    {
    public:
        Guard_statement() : Node(NodeType::Guard_statement) {}
        void print() {
            if(condition_list_ != nullptr) {
                condition_list_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> condition_list_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitGuard_statement(Swift5Parser::Guard_statementContext * ctx) override;
    
    class Switch_statement : public Node
    {
    public:
        Switch_statement() : Node(NodeType::Switch_statement) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
            if(switch_cases_ != nullptr) {
                switch_cases_->print();
            }
        }
        std::unique_ptr<Node> expression_;
        std::unique_ptr<Node> switch_cases_;
    private:
    };
    
    virtual std::any visitSwitch_statement(Swift5Parser::Switch_statementContext * ctx) override;
    
    class Switch_cases : public Node
    {
    public:
        Switch_cases() : Node(NodeType::Switch_cases) {}
        void print() {
            if(switch_case_ != nullptr) {
                switch_case_->print();
            }
            if(switch_cases_ != nullptr) {
                switch_cases_->print();
            }
        }
        std::unique_ptr<Node> switch_case_;
        std::unique_ptr<Node> switch_cases_;
    private:
    };
    
    virtual std::any visitSwitch_cases(Swift5Parser::Switch_casesContext * ctx) override;
    
    class Switch_case : public Node
    {
    public:
        Switch_case() : Node(NodeType::Switch_case) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> val0; // case_label, default_label, conditional_switch_case
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitSwitch_case(Swift5Parser::Switch_caseContext * ctx) override;
    
    class Case_label : public Node
    {
    public:
        Case_label() : Node(NodeType::Case_label) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(case_item_list_ != nullptr) {
                case_item_list_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> case_item_list_;
    private:
    };
    
    virtual std::any visitCase_label(Swift5Parser::Case_labelContext * ctx) override;
    
    class Case_item_list : public Node
    {
    public:
        Case_item_list() : Node(NodeType::Case_item_list) {}
        void print() {
            if(where_clause_ != nullptr) {
                where_clause_->print();
            }
            for(auto& item : val0) {
                item->print();
            }
            for(auto& item : where_clauses_) {
                item->print();
            }
        }
        std::unique_ptr<Node> where_clause_;
        std::vector<std::unique_ptr<Node>> val0; // pattern, pattern
        std::vector<std::unique_ptr<Node>> where_clauses_;
    private:
    };
    
    virtual std::any visitCase_item_list(Swift5Parser::Case_item_listContext * ctx) override;
    
    class Default_label : public Node
    {
    public:
        Default_label() : Node(NodeType::Default_label) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
    private:
    };
    
    virtual std::any visitDefault_label(Swift5Parser::Default_labelContext * ctx) override;
    
    class Where_clause : public Node
    {
    public:
        Where_clause() : Node(NodeType::Where_clause) {}
        void print() {
            if(where_expression_ != nullptr) {
                where_expression_->print();
            }
        }
        std::unique_ptr<Node> where_expression_;
    private:
    };
    
    virtual std::any visitWhere_clause(Swift5Parser::Where_clauseContext * ctx) override;
    
    class Where_expression : public Node
    {
    public:
        Where_expression() : Node(NodeType::Where_expression) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitWhere_expression(Swift5Parser::Where_expressionContext * ctx) override;
    
    class Conditional_switch_case : public Node
    {
    public:
        Conditional_switch_case() : Node(NodeType::Conditional_switch_case) {}
        void print() {
            if(switch_if_directive_clause_ != nullptr) {
                switch_if_directive_clause_->print();
            }
            if(switch_elseif_directive_clauses_ != nullptr) {
                switch_elseif_directive_clauses_->print();
            }
            if(switch_else_directive_clause_ != nullptr) {
                switch_else_directive_clause_->print();
            }
        }
        std::unique_ptr<Node> switch_if_directive_clause_;
        std::unique_ptr<Node> switch_elseif_directive_clauses_;
        std::unique_ptr<Node> switch_else_directive_clause_;
    private:
    };
    
    virtual std::any visitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext * ctx) override;
    
    class Line_number : public Node
    {
    public:
        Line_number() : Node(NodeType::Line_number) {}
        void print() {
            if(Decimal_literal_ != "") std::cout << Decimal_literal_ << std::endl;
        }
        std::string Decimal_literal_;
    private:
    };
    
    virtual std::any visitLine_number(Swift5Parser::Line_numberContext * ctx) override;
    
    class Switch_elseif_directive_clauses : public Node
    {
    public:
        Switch_elseif_directive_clauses() : Node(NodeType::Switch_elseif_directive_clauses) {}
        void print() {
            if(elseif_directive_clause_ != nullptr) {
                elseif_directive_clause_->print();
            }
            if(switch_elseif_directive_clauses_ != nullptr) {
                switch_elseif_directive_clauses_->print();
            }
        }
        std::unique_ptr<Node> elseif_directive_clause_;
        std::unique_ptr<Node> switch_elseif_directive_clauses_;
    private:
    };
    
    virtual std::any visitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext * ctx) override;
    
    class Switch_elseif_directive_clause : public Node
    {
    public:
        Switch_elseif_directive_clause() : Node(NodeType::Switch_elseif_directive_clause) {}
        void print() {
            if(compilation_condition_ != nullptr) {
                compilation_condition_->print();
            }
            if(switch_cases_ != nullptr) {
                switch_cases_->print();
            }
        }
        std::unique_ptr<Node> compilation_condition_;
        std::unique_ptr<Node> switch_cases_;
    private:
    };
    
    virtual std::any visitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext * ctx) override;
    
    class Switch_else_directive_clause : public Node
    {
    public:
        Switch_else_directive_clause() : Node(NodeType::Switch_else_directive_clause) {}
        void print() {
            if(switch_cases_ != nullptr) {
                switch_cases_->print();
            }
        }
        std::unique_ptr<Node> switch_cases_;
    private:
    };
    
    virtual std::any visitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext * ctx) override;
    
    class Labeled_statement : public Node
    {
    public:
        Labeled_statement() : Node(NodeType::Labeled_statement) {}
        void print() {
            if(statement_label_ != nullptr) {
                statement_label_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> statement_label_;
        std::unique_ptr<Node> val0; // Loop_statement, If_statement, Switch_statement, do_statement
    private:
    };
    
    virtual std::any visitLabeled_statement(Swift5Parser::Labeled_statementContext * ctx) override;
    
    class Statement_label : public Node
    {
    public:
        Statement_label() : Node(NodeType::Statement_label) {}
        void print() {
            if(label_name_ != nullptr) {
                label_name_->print();
            }
        }
        std::unique_ptr<Node> label_name_;
    private:
    };
    
    virtual std::any visitStatement_label(Swift5Parser::Statement_labelContext * ctx) override;
    
    class Availability_argument : public Node
    {
    public:
        Availability_argument() : Node(NodeType::Availability_argument) {}
        void print() {
            if(platform_name_ != nullptr) {
                platform_name_->print();
            }
            if(platform_version_ != nullptr) {
                platform_version_->print();
            }
        }
        std::unique_ptr<Node> platform_name_;
        std::unique_ptr<Node> platform_version_;
    private:
    };
    
    virtual std::any visitAvailability_argument(Swift5Parser::Availability_argumentContext * ctx) override;
    
    class Platform_name : public Node
    {
    public:
        Platform_name() : Node(NodeType::Platform_name) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitPlatform_name(Swift5Parser::Platform_nameContext * ctx) override;
    
    class Break_statement : public Node
    {
    public:
        Break_statement() : Node(NodeType::Break_statement) {}
        void print() {
            if(label_name_ != nullptr) {
                label_name_->print();
            }
        }
        std::unique_ptr<Node> label_name_;
    private:
    };
    
    virtual std::any visitBreak_statement(Swift5Parser::Break_statementContext * ctx) override;
    
    class Continue_statement : public Node
    {
    public:
        Continue_statement() : Node(NodeType::Continue_statement) {}
        void print() {
            if(label_name_ != nullptr) {
                label_name_->print();
            }
        }
        std::unique_ptr<Node> label_name_;
    private:
    };
    
    virtual std::any visitContinue_statement(Swift5Parser::Continue_statementContext * ctx) override;
    
    class Fallthrough_statement : public Node
    {
    public:
        Fallthrough_statement() : Node(NodeType::Fallthrough_statement) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitFallthrough_statement(Swift5Parser::Fallthrough_statementContext * ctx) override;
    
    class Return_statement : public Node
    {
    public:
        Return_statement() : Node(NodeType::Return_statement) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitReturn_statement(Swift5Parser::Return_statementContext * ctx) override;
    
    class Throw_statement : public Node
    {
    public:
        Throw_statement() : Node(NodeType::Throw_statement) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitThrow_statement(Swift5Parser::Throw_statementContext * ctx) override;
    
    class Defer_statement : public Node
    {
    public:
        Defer_statement() : Node(NodeType::Defer_statement) {}
        void print() {
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitDefer_statement(Swift5Parser::Defer_statementContext * ctx) override;
    
    class Do_statement : public Node
    {
    public:
        Do_statement() : Node(NodeType::Do_statement) {}
        void print() {
            if(code_block_ != nullptr) {
                code_block_->print();
            }
            if(catch_clauses_ != nullptr) {
                catch_clauses_->print();
            }
        }
        std::unique_ptr<Node> code_block_;
        std::unique_ptr<Node> catch_clauses_;
    private:
    };
    
    virtual std::any visitDo_statement(Swift5Parser::Do_statementContext * ctx) override;
    
    class Catch_clauses : public Node
    {
    public:
        Catch_clauses() : Node(NodeType::Catch_clauses) {}
        void print() {
            for(auto& item : catch_clauses_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> catch_clauses_;
    private:
    };
    
    virtual std::any visitCatch_clauses(Swift5Parser::Catch_clausesContext * ctx) override;
    
    class Catch_clause : public Node
    {
    public:
        Catch_clause() : Node(NodeType::Catch_clause) {}
        void print() {
            if(catch_pattern_list_ != nullptr) {
                catch_pattern_list_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> catch_pattern_list_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitCatch_clause(Swift5Parser::Catch_clauseContext * ctx) override;
    
    class Catch_pattern_list : public Node
    {
    public:
        Catch_pattern_list() : Node(NodeType::Catch_pattern_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
            for(auto& item : catch_patterns_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // catch_pattern, catch_pattern
        std::vector<std::unique_ptr<Node>> catch_patterns_;
    private:
    };
    
    virtual std::any visitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext * ctx) override;
    
    class Catch_pattern : public Node
    {
    public:
        Catch_pattern() : Node(NodeType::Catch_pattern) {}
        void print() {
            if(pattern_ != nullptr) {
                pattern_->print();
            }
            if(where_clause_ != nullptr) {
                where_clause_->print();
            }
        }
        std::unique_ptr<Node> pattern_;
        std::unique_ptr<Node> where_clause_;
    private:
    };
    
    virtual std::any visitCatch_pattern(Swift5Parser::Catch_patternContext * ctx) override;
    
    class Compiler_control_statement : public Node
    {
    public:
        Compiler_control_statement() : Node(NodeType::Compiler_control_statement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // conditional_compilation_block, line_control_statement, diagnostic_statement
    private:
    };
    
    virtual std::any visitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext * ctx) override;
    
    class Conditional_compilation_block : public Node
    {
    public:
        Conditional_compilation_block() : Node(NodeType::Conditional_compilation_block) {}
        void print() {
            if(if_directive_clause_ != nullptr) {
                if_directive_clause_->print();
            }
            if(elseif_directive_clauses_ != nullptr) {
                elseif_directive_clauses_->print();
            }
            if(else_directive_clause_ != nullptr) {
                else_directive_clause_->print();
            }
        }
        std::unique_ptr<Node> if_directive_clause_;
        std::unique_ptr<Node> elseif_directive_clauses_;
        std::unique_ptr<Node> else_directive_clause_;
    private:
    };
    
    virtual std::any visitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext * ctx) override;
    
    class If_directive_clause : public Node
    {
    public:
        If_directive_clause() : Node(NodeType::If_directive_clause) {}
        void print() {
            if(compilation_condition_ != nullptr) {
                compilation_condition_->print();
            }
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> compilation_condition_;
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitIf_directive_clause(Swift5Parser::If_directive_clauseContext * ctx) override;
    
    class Elseif_directive_clauses : public Node
    {
    public:
        Elseif_directive_clauses() : Node(NodeType::Elseif_directive_clauses) {}
        void print() {
            for(auto& item : elseif_directive_clauses_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> elseif_directive_clauses_;
    private:
    };
    
    virtual std::any visitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext * ctx) override;
    
    class Elseif_directive_clause : public Node
    {
    public:
        Elseif_directive_clause() : Node(NodeType::Elseif_directive_clause) {}
        void print() {
            if(compilation_condition_ != nullptr) {
                compilation_condition_->print();
            }
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> compilation_condition_;
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext * ctx) override;
    
    class Else_directive_clause : public Node
    {
    public:
        Else_directive_clause() : Node(NodeType::Else_directive_clause) {}
        void print() {
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitElse_directive_clause(Swift5Parser::Else_directive_clauseContext * ctx) override;
    
    class Compilation_condition : public Node
    {
    public:
        Compilation_condition() : Node(NodeType::Compilation_condition) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // platform_condition, identifier, boolean_literal, Compilation_condition, Compilation_condition, Compilation_condition, compilation_condition_AND, compilation_condition_OR, Compilation_condition
    private:
    };
    
    virtual std::any visitCompilation_condition(Swift5Parser::Compilation_conditionContext * ctx) override;
    
    class Platform_condition : public Node
    {
    public:
        Platform_condition() : Node(NodeType::Platform_condition) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // operating_system, architecture, compilation_condition_GE, compilation_condition_L, swift_version, module_name, environment
    private:
    };
    
    virtual std::any visitPlatform_condition(Swift5Parser::Platform_conditionContext * ctx) override;
    
    class Swift_version : public Node
    {
    public:
        Swift_version() : Node(NodeType::Swift_version) {}
        void print() {
            if(Decimal_digits_ != "") std::cout << Decimal_digits_ << std::endl;
            if(swift_version_continuation_ != nullptr) {
                swift_version_continuation_->print();
            }
        }
        std::string Decimal_digits_;
        std::unique_ptr<Node> swift_version_continuation_;
    private:
    };
    
    virtual std::any visitSwift_version(Swift5Parser::Swift_versionContext * ctx) override;
    
    class Swift_version_continuation : public Node
    {
    public:
        Swift_version_continuation() : Node(NodeType::Swift_version_continuation) {}
        void print() {
            if(Decimal_digits_ != "") std::cout << Decimal_digits_ << std::endl;
            if(swift_version_continuation_ != nullptr) {
                swift_version_continuation_->print();
            }
        }
        std::string Decimal_digits_;
        std::unique_ptr<Node> swift_version_continuation_;
    private:
    };
    
    virtual std::any visitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext * ctx) override;
    
    class Operating_system : public Node
    {
    public:
        Operating_system() : Node(NodeType::Operating_system) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitOperating_system(Swift5Parser::Operating_systemContext * ctx) override;
    
    class Architecture : public Node
    {
    public:
        Architecture() : Node(NodeType::Architecture) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitArchitecture(Swift5Parser::ArchitectureContext * ctx) override;
    
    class Module_name : public Node
    {
    public:
        Module_name() : Node(NodeType::Module_name) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // identifier, identifier
    private:
    };
    
    virtual std::any visitModule_name(Swift5Parser::Module_nameContext * ctx) override;
    
    class Environment : public Node
    {
    public:
        Environment() : Node(NodeType::Environment) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitEnvironment(Swift5Parser::EnvironmentContext * ctx) override;
    
    class Line_control_statement : public Node
    {
    public:
        Line_control_statement() : Node(NodeType::Line_control_statement) {}
        void print() {
            if(file_name_ != nullptr) {
                file_name_->print();
            }
            if(line_number_ != nullptr) {
                line_number_->print();
            }
        }
        std::unique_ptr<Node> file_name_;
        std::unique_ptr<Node> line_number_;
    private:
    };
    
    virtual std::any visitLine_control_statement(Swift5Parser::Line_control_statementContext * ctx) override;
    
    class Union_style_enum_case : public Node
    {
    public:
        Union_style_enum_case() : Node(NodeType::Union_style_enum_case) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(val1 != nullptr) {
                val1->print();
            }
        }
        std::unique_ptr<Node> val0; // opaque_type, enum_case_name
        std::unique_ptr<Node> val1; // tuple_type, type
    private:
    };
    
    virtual std::any visitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext * ctx) override;
    
    class Enum_name : public Node
    {
    public:
        Enum_name() : Node(NodeType::Enum_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitEnum_name(Swift5Parser::Enum_nameContext * ctx) override;
    
    class Enum_case_name : public Node
    {
    public:
        Enum_case_name() : Node(NodeType::Enum_case_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitEnum_case_name(Swift5Parser::Enum_case_nameContext * ctx) override;
    
    class File_name : public Node
    {
    public:
        File_name() : Node(NodeType::File_name) {}
        void print() {
            if(static_string_literal_ != nullptr) {
                static_string_literal_->print();
            }
        }
        std::unique_ptr<Node> static_string_literal_;
    private:
    };
    
    virtual std::any visitFile_name(Swift5Parser::File_nameContext * ctx) override;
    
    class Diagnostic_statement : public Node
    {
    public:
        Diagnostic_statement() : Node(NodeType::Diagnostic_statement) {}
        void print() {
            if(diagnostic_message_ != nullptr) {
                diagnostic_message_->print();
            }
        }
        std::unique_ptr<Node> diagnostic_message_;
    private:
    };
    
    virtual std::any visitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext * ctx) override;
    
    class Diagnostic_message : public Node
    {
    public:
        Diagnostic_message() : Node(NodeType::Diagnostic_message) {}
        void print() {
            if(static_string_literal_ != nullptr) {
                static_string_literal_->print();
            }
        }
        std::unique_ptr<Node> static_string_literal_;
    private:
    };
    
    virtual std::any visitDiagnostic_message(Swift5Parser::Diagnostic_messageContext * ctx) override;
    
    class Availability_condition : public Node
    {
    public:
        Availability_condition() : Node(NodeType::Availability_condition) {}
        void print() {
            if(availability_arguments_ != nullptr) {
                availability_arguments_->print();
            }
        }
        std::unique_ptr<Node> availability_arguments_;
    private:
    };
    
    virtual std::any visitAvailability_condition(Swift5Parser::Availability_conditionContext * ctx) override;
    
    class Availability_arguments : public Node
    {
    public:
        Availability_arguments() : Node(NodeType::Availability_arguments) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // Availability_argument, Availability_argument
    private:
    };
    
    virtual std::any visitAvailability_arguments(Swift5Parser::Availability_argumentsContext * ctx) override;
    
    class Trailing_closures : public Node
    {
    public:
        Trailing_closures() : Node(NodeType::Trailing_closures) {}
        void print() {
            if(closure_expression_ != nullptr) {
                closure_expression_->print();
            }
            if(labeled_trailing_closures_ != nullptr) {
                labeled_trailing_closures_->print();
            }
        }
        std::unique_ptr<Node> closure_expression_;
        std::unique_ptr<Node> labeled_trailing_closures_;
    private:
    };
    
    virtual std::any visitTrailing_closures(Swift5Parser::Trailing_closuresContext * ctx) override;
    
    class Raw_value_style_enum_members : public Node
    {
    public:
        Raw_value_style_enum_members() : Node(NodeType::Raw_value_style_enum_members) {}
        void print() {
            for(auto& item : raw_value_style_enum_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> raw_value_style_enum_members_;
    private:
    };
    
    virtual std::any visitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext * ctx) override;
    
    class Raw_value_style_enum_member : public Node
    {
    public:
        Raw_value_style_enum_member() : Node(NodeType::Raw_value_style_enum_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // declaration, raw_value_style_enum_case_clause, Compiler_control_statement
    private:
    };
    
    virtual std::any visitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext * ctx) override;
    
    class Raw_value_style_enum_case_clause : public Node
    {
    public:
        Raw_value_style_enum_case_clause() : Node(NodeType::Raw_value_style_enum_case_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(raw_value_style_enum_case_list_ != nullptr) {
                raw_value_style_enum_case_list_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> raw_value_style_enum_case_list_;
    private:
    };
    
    virtual std::any visitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext * ctx) override;
    
    class Raw_value_style_enum_case_list : public Node
    {
    public:
        Raw_value_style_enum_case_list() : Node(NodeType::Raw_value_style_enum_case_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // raw_value_style_enum_case, raw_value_style_enum_case
    private:
    };
    
    virtual std::any visitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext * ctx) override;
    
    class Raw_value_style_enum_case : public Node
    {
    public:
        Raw_value_style_enum_case() : Node(NodeType::Raw_value_style_enum_case) {}
        void print() {
            if(enum_case_name_ != nullptr) {
                enum_case_name_->print();
            }
            if(raw_value_assignment_ != nullptr) {
                raw_value_assignment_->print();
            }
        }
        std::unique_ptr<Node> enum_case_name_;
        std::unique_ptr<Node> raw_value_assignment_;
    private:
    };
    
    virtual std::any visitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext * ctx) override;
    
    class Raw_value_assignment : public Node
    {
    public:
        Raw_value_assignment() : Node(NodeType::Raw_value_assignment) {}
        void print() {
            if(raw_value_literal_ != nullptr) {
                raw_value_literal_->print();
            }
        }
        std::unique_ptr<Node> raw_value_literal_;
    private:
    };
    
    virtual std::any visitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext * ctx) override;
    
    class Raw_value_literal : public Node
    {
    public:
        Raw_value_literal() : Node(NodeType::Raw_value_literal) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // numeric_literal, static_string_literal, boolean_literal
    private:
    };
    
    virtual std::any visitRaw_value_literal(Swift5Parser::Raw_value_literalContext * ctx) override;
    
    class Struct_declaration : public Node
    {
    public:
        Struct_declaration() : Node(NodeType::Struct_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(struct_name_ != nullptr) {
                struct_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(struct_body_ != nullptr) {
                struct_body_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> struct_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> struct_body_;
    private:
    };
    
    virtual std::any visitStruct_declaration(Swift5Parser::Struct_declarationContext * ctx) override;
    
    class Platform_version : public Node
    {
    public:
        Platform_version() : Node(NodeType::Platform_version) {}
        void print() {
            if(str0 != "") std::cout << str0 << std::endl;
            if(Decimal_digits_ != "") std::cout << Decimal_digits_ << std::endl;
        }
        std::string str0; // Platform_version, Platform_version, Platform_version
        std::string Decimal_digits_;
    private:
    };
    
    virtual std::any visitPlatform_version(Swift5Parser::Platform_versionContext * ctx) override;
    
    class Generic_parameter_clause : public Node
    {
    public:
        Generic_parameter_clause() : Node(NodeType::Generic_parameter_clause) {}
        void print() {
            if(generic_parameter_list_ != nullptr) {
                generic_parameter_list_->print();
            }
        }
        std::unique_ptr<Node> generic_parameter_list_;
    private:
    };
    
    virtual std::any visitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext * ctx) override;
    
    class Generic_parameter_list : public Node
    {
    public:
        Generic_parameter_list() : Node(NodeType::Generic_parameter_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // generic_parameter, generic_parameter
    private:
    };
    
    virtual std::any visitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext * ctx) override;
    
    class Generic_parameter : public Node
    {
    public:
        Generic_parameter() : Node(NodeType::Generic_parameter) {}
        void print() {
            if(type_name_ != nullptr) {
                type_name_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> type_name_;
        std::unique_ptr<Node> val0; // type_identifier, protocol_composition_type
    private:
    };
    
    virtual std::any visitGeneric_parameter(Swift5Parser::Generic_parameterContext * ctx) override;
    
    class Generic_where_clause : public Node
    {
    public:
        Generic_where_clause() : Node(NodeType::Generic_where_clause) {}
        void print() {
            if(requirement_list_ != nullptr) {
                requirement_list_->print();
            }
        }
        std::unique_ptr<Node> requirement_list_;
    private:
    };
    
    virtual std::any visitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext * ctx) override;
    
    class Requirement_list : public Node
    {
    public:
        Requirement_list() : Node(NodeType::Requirement_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // requirement, requirement
    private:
    };
    
    virtual std::any visitRequirement_list(Swift5Parser::Requirement_listContext * ctx) override;
    
    class Requirement : public Node
    {
    public:
        Requirement() : Node(NodeType::Requirement) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // conformance_requirement, same_type_requirement
    private:
    };
    
    virtual std::any visitRequirement(Swift5Parser::RequirementContext * ctx) override;
    
    class Conformance_requirement : public Node
    {
    public:
        Conformance_requirement() : Node(NodeType::Conformance_requirement) {}
        void print() {
            if(type_identifier_ != nullptr) {
                type_identifier_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> type_identifier_;
        std::unique_ptr<Node> val0; // type_identifier, protocol_composition_type
    private:
    };
    
    virtual std::any visitConformance_requirement(Swift5Parser::Conformance_requirementContext * ctx) override;
    
    class Same_type_requirement : public Node
    {
    public:
        Same_type_requirement() : Node(NodeType::Same_type_requirement) {}
        void print() {
            if(type_identifier_ != nullptr) {
                type_identifier_->print();
            }
            if(same_type_equals_ != nullptr) {
                same_type_equals_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> type_identifier_;
        std::unique_ptr<Node> same_type_equals_;
        std::unique_ptr<Node> val0; // type_identifier, type
    private:
    };
    
    virtual std::any visitSame_type_requirement(Swift5Parser::Same_type_requirementContext * ctx) override;
    
    class Generic_argument_clause : public Node
    {
    public:
        Generic_argument_clause() : Node(NodeType::Generic_argument_clause) {}
        void print() {
            if(generic_argument_list_ != nullptr) {
                generic_argument_list_->print();
            }
        }
        std::unique_ptr<Node> generic_argument_list_;
    private:
    };
    
    virtual std::any visitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext * ctx) override;
    
    class Generic_argument_list : public Node
    {
    public:
        Generic_argument_list() : Node(NodeType::Generic_argument_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // generic_argument, generic_argument
    private:
    };
    
    virtual std::any visitGeneric_argument_list(Swift5Parser::Generic_argument_listContext * ctx) override;
    
    class Generic_argument : public Node
    {
    public:
        Generic_argument() : Node(NodeType::Generic_argument) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitGeneric_argument(Swift5Parser::Generic_argumentContext * ctx) override;
    
    class Declaration : public Node
    {
    public:
        Declaration() : Node(NodeType::Declaration) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // import_declaration, constant_declaration, variable_declaration, typealias_declaration, function_declaration, enum_declaration, Struct_declaration, class_declaration, protocol_declaration, initializer_declaration, deinitializer_declaration, extension_declaration, subscript_declaration, operator_declaration, precedence_group_declaration
    private:
    };
    
    virtual std::any visitDeclaration(Swift5Parser::DeclarationContext * ctx) override;
    
    class Setter_keyword_clause : public Node
    {
    public:
        Setter_keyword_clause() : Node(NodeType::Setter_keyword_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(mutation_modifier_ != nullptr) {
                mutation_modifier_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> mutation_modifier_;
    private:
    };
    
    virtual std::any visitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext * ctx) override;
    
    class Declarations : public Node
    {
    public:
        Declarations() : Node(NodeType::Declarations) {}
        void print() {
            for(auto& item : declarations_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> declarations_;
    private:
    };
    
    virtual std::any visitDeclarations(Swift5Parser::DeclarationsContext * ctx) override;
    
    class Top_level_declaration : public Node
    {
    public:
        Top_level_declaration() : Node(NodeType::Top_level_declaration) {}
        void print() {
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitTop_level_declaration(Swift5Parser::Top_level_declarationContext * ctx) override;
    
    class Code_block : public Node
    {
    public:
        Code_block() : Node(NodeType::Code_block) {}
        void print() {
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitCode_block(Swift5Parser::Code_blockContext * ctx) override;
    
    class Import_declaration : public Node
    {
    public:
        Import_declaration() : Node(NodeType::Import_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(import_kind_ != nullptr) {
                import_kind_->print();
            }
            if(import_path_ != nullptr) {
                import_path_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> import_kind_;
        std::unique_ptr<Node> import_path_;
    private:
    };
    
    virtual std::any visitImport_declaration(Swift5Parser::Import_declarationContext * ctx) override;
    
    class Import_kind : public Node
    {
    public:
        Import_kind() : Node(NodeType::Import_kind) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitImport_kind(Swift5Parser::Import_kindContext * ctx) override;
    
    class Import_path : public Node
    {
    public:
        Import_path() : Node(NodeType::Import_path) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // import_path_identifier, import_path_identifier
    private:
    };
    
    virtual std::any visitImport_path(Swift5Parser::Import_pathContext * ctx) override;
    
    class Import_path_identifier : public Node
    {
    public:
        Import_path_identifier() : Node(NodeType::Import_path_identifier) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // identifier, operator
    private:
    };
    
    virtual std::any visitImport_path_identifier(Swift5Parser::Import_path_identifierContext * ctx) override;
    
    class Constant_declaration : public Node
    {
    public:
        Constant_declaration() : Node(NodeType::Constant_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(declaration_modifiers_ != nullptr) {
                declaration_modifiers_->print();
            }
            if(pattern_initializer_list_ != nullptr) {
                pattern_initializer_list_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> declaration_modifiers_;
        std::unique_ptr<Node> pattern_initializer_list_;
    private:
    };
    
    virtual std::any visitConstant_declaration(Swift5Parser::Constant_declarationContext * ctx) override;
    
    class Pattern_initializer_list : public Node
    {
    public:
        Pattern_initializer_list() : Node(NodeType::Pattern_initializer_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // pattern_initializer, pattern_initializer
    private:
    };
    
    virtual std::any visitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext * ctx) override;
    
    class Pattern_initializer : public Node
    {
    public:
        Pattern_initializer() : Node(NodeType::Pattern_initializer) {}
        void print() {
            if(pattern_ != nullptr) {
                pattern_->print();
            }
            if(initializer_ != nullptr) {
                initializer_->print();
            }
        }
        std::unique_ptr<Node> pattern_;
        std::unique_ptr<Node> initializer_;
    private:
    };
    
    virtual std::any visitPattern_initializer(Swift5Parser::Pattern_initializerContext * ctx) override;
    
    class Initializer : public Node
    {
    public:
        Initializer() : Node(NodeType::Initializer) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitInitializer(Swift5Parser::InitializerContext * ctx) override;
    
    class Variable_declaration : public Node
    {
    public:
        Variable_declaration() : Node(NodeType::Variable_declaration) {}
        void print() {
            if(variable_declaration_head_ != nullptr) {
                variable_declaration_head_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
            if(val1 != nullptr) {
                val1->print();
            }
            if(willSet_didSet_block_ != nullptr) {
                willSet_didSet_block_->print();
            }
            if(initializer_ != nullptr) {
                initializer_->print();
            }
        }
        std::unique_ptr<Node> variable_declaration_head_;
        std::unique_ptr<Node> val0; // variable_name, Pattern_initializer_list
        std::unique_ptr<Node> val1; // Initializer, type_annotation, willSet_didSet_block, getter_setter_block, getter_setter_keyword_block
        std::unique_ptr<Node> willSet_didSet_block_;
        std::unique_ptr<Node> initializer_;
    private:
    };
    
    virtual std::any visitVariable_declaration(Swift5Parser::Variable_declarationContext * ctx) override;
    
    class Variable_declaration_head : public Node
    {
    public:
        Variable_declaration_head() : Node(NodeType::Variable_declaration_head) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(declaration_modifiers_ != nullptr) {
                declaration_modifiers_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> declaration_modifiers_;
    private:
    };
    
    virtual std::any visitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext * ctx) override;
    
    class Variable_name : public Node
    {
    public:
        Variable_name() : Node(NodeType::Variable_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitVariable_name(Swift5Parser::Variable_nameContext * ctx) override;
    
    class Getter_setter_block : public Node
    {
    public:
        Getter_setter_block() : Node(NodeType::Getter_setter_block) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(setter_clause_ != nullptr) {
                setter_clause_->print();
            }
        }
        std::unique_ptr<Node> val0; // getter_clause, setter_clause, getter_clause, Code_block
        std::unique_ptr<Node> setter_clause_;
    private:
    };
    
    virtual std::any visitGetter_setter_block(Swift5Parser::Getter_setter_blockContext * ctx) override;
    
    class Getter_clause : public Node
    {
    public:
        Getter_clause() : Node(NodeType::Getter_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(mutation_modifier_ != nullptr) {
                mutation_modifier_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> mutation_modifier_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitGetter_clause(Swift5Parser::Getter_clauseContext * ctx) override;
    
    class Setter_clause : public Node
    {
    public:
        Setter_clause() : Node(NodeType::Setter_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(mutation_modifier_ != nullptr) {
                mutation_modifier_->print();
            }
            if(setter_name_ != nullptr) {
                setter_name_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> mutation_modifier_;
        std::unique_ptr<Node> setter_name_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitSetter_clause(Swift5Parser::Setter_clauseContext * ctx) override;
    
    class Setter_name : public Node
    {
    public:
        Setter_name() : Node(NodeType::Setter_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitSetter_name(Swift5Parser::Setter_nameContext * ctx) override;
    
    class Getter_setter_keyword_block : public Node
    {
    public:
        Getter_setter_keyword_block() : Node(NodeType::Getter_setter_keyword_block) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(setter_keyword_clause_ != nullptr) {
                setter_keyword_clause_->print();
            }
        }
        std::unique_ptr<Node> val0; // getter_keyword_clause, Setter_keyword_clause, getter_keyword_clause
        std::unique_ptr<Node> setter_keyword_clause_;
    private:
    };
    
    virtual std::any visitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext * ctx) override;
    
    class Getter_keyword_clause : public Node
    {
    public:
        Getter_keyword_clause() : Node(NodeType::Getter_keyword_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(mutation_modifier_ != nullptr) {
                mutation_modifier_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> mutation_modifier_;
    private:
    };
    
    virtual std::any visitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext * ctx) override;
    
    class WillSet_didSet_block : public Node
    {
    public:
        WillSet_didSet_block() : Node(NodeType::WillSet_didSet_block) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(val1 != nullptr) {
                val1->print();
            }
        }
        std::unique_ptr<Node> val0; // willSet_clause, didSet_clause
        std::unique_ptr<Node> val1; // didSet_clause, willSet_clause
    private:
    };
    
    virtual std::any visitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext * ctx) override;
    
    class WillSet_clause : public Node
    {
    public:
        WillSet_clause() : Node(NodeType::WillSet_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(setter_name_ != nullptr) {
                setter_name_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> setter_name_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitWillSet_clause(Swift5Parser::WillSet_clauseContext * ctx) override;
    
    class DidSet_clause : public Node
    {
    public:
        DidSet_clause() : Node(NodeType::DidSet_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(setter_name_ != nullptr) {
                setter_name_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> setter_name_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitDidSet_clause(Swift5Parser::DidSet_clauseContext * ctx) override;
    
    class Typealias_declaration : public Node
    {
    public:
        Typealias_declaration() : Node(NodeType::Typealias_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(typealias_name_ != nullptr) {
                typealias_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(typealias_assignment_ != nullptr) {
                typealias_assignment_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> typealias_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> typealias_assignment_;
    private:
    };
    
    virtual std::any visitTypealias_declaration(Swift5Parser::Typealias_declarationContext * ctx) override;
    
    class Typealias_name : public Node
    {
    public:
        Typealias_name() : Node(NodeType::Typealias_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitTypealias_name(Swift5Parser::Typealias_nameContext * ctx) override;
    
    class Typealias_assignment : public Node
    {
    public:
        Typealias_assignment() : Node(NodeType::Typealias_assignment) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitTypealias_assignment(Swift5Parser::Typealias_assignmentContext * ctx) override;
    
    class Function_declaration : public Node
    {
    public:
        Function_declaration() : Node(NodeType::Function_declaration) {}
        void print() {
            if(function_head_ != nullptr) {
                function_head_->print();
            }
            if(function_name_ != nullptr) {
                function_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(function_signature_ != nullptr) {
                function_signature_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(function_body_ != nullptr) {
                function_body_->print();
            }
        }
        std::unique_ptr<Node> function_head_;
        std::unique_ptr<Node> function_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> function_signature_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> function_body_;
    private:
    };
    
    virtual std::any visitFunction_declaration(Swift5Parser::Function_declarationContext * ctx) override;
    
    class Function_head : public Node
    {
    public:
        Function_head() : Node(NodeType::Function_head) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(declaration_modifiers_ != nullptr) {
                declaration_modifiers_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> declaration_modifiers_;
    private:
    };
    
    virtual std::any visitFunction_head(Swift5Parser::Function_headContext * ctx) override;
    
    class Function_name : public Node
    {
    public:
        Function_name() : Node(NodeType::Function_name) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // identifier, operator
    private:
    };
    
    virtual std::any visitFunction_name(Swift5Parser::Function_nameContext * ctx) override;
    
    class Function_signature : public Node
    {
    public:
        Function_signature() : Node(NodeType::Function_signature) {}
        void print() {
            if(parameter_clause_ != nullptr) {
                parameter_clause_->print();
            }
            if(function_result_ != nullptr) {
                function_result_->print();
            }
        }
        std::unique_ptr<Node> parameter_clause_;
        std::unique_ptr<Node> function_result_;
    private:
    };
    
    virtual std::any visitFunction_signature(Swift5Parser::Function_signatureContext * ctx) override;
    
    class Function_result : public Node
    {
    public:
        Function_result() : Node(NodeType::Function_result) {}
        void print() {
            if(arrow_operator_ != nullptr) {
                arrow_operator_->print();
            }
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> arrow_operator_;
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitFunction_result(Swift5Parser::Function_resultContext * ctx) override;
    
    class Function_body : public Node
    {
    public:
        Function_body() : Node(NodeType::Function_body) {}
        void print() {
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitFunction_body(Swift5Parser::Function_bodyContext * ctx) override;
    
    class Parameter_clause : public Node
    {
    public:
        Parameter_clause() : Node(NodeType::Parameter_clause) {}
        void print() {
            if(parameter_list_ != nullptr) {
                parameter_list_->print();
            }
        }
        std::unique_ptr<Node> parameter_list_;
    private:
    };
    
    virtual std::any visitParameter_clause(Swift5Parser::Parameter_clauseContext * ctx) override;
    
    class Parameter_list : public Node
    {
    public:
        Parameter_list() : Node(NodeType::Parameter_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // parameter, parameter
    private:
    };
    
    virtual std::any visitParameter_list(Swift5Parser::Parameter_listContext * ctx) override;
    
    class Parameter : public Node
    {
    public:
        Parameter() : Node(NodeType::Parameter) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(external_parameter_name_ != nullptr) {
                external_parameter_name_->print();
            }
            if(local_parameter_name_ != nullptr) {
                local_parameter_name_->print();
            }
            if(type_annotation_ != nullptr) {
                type_annotation_->print();
            }
            if(default_argument_clause_ != nullptr) {
                default_argument_clause_->print();
            }
            if(range_operator_ != nullptr) {
                range_operator_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> external_parameter_name_;
        std::unique_ptr<Node> local_parameter_name_;
        std::unique_ptr<Node> type_annotation_;
        std::unique_ptr<Node> default_argument_clause_;
        std::unique_ptr<Node> range_operator_;
    private:
    };
    
    virtual std::any visitParameter(Swift5Parser::ParameterContext * ctx) override;
    
    class External_parameter_name : public Node
    {
    public:
        External_parameter_name() : Node(NodeType::External_parameter_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitExternal_parameter_name(Swift5Parser::External_parameter_nameContext * ctx) override;
    
    class Local_parameter_name : public Node
    {
    public:
        Local_parameter_name() : Node(NodeType::Local_parameter_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext * ctx) override;
    
    class Default_argument_clause : public Node
    {
    public:
        Default_argument_clause() : Node(NodeType::Default_argument_clause) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext * ctx) override;
    
    class Enum_declaration : public Node
    {
    public:
        Enum_declaration() : Node(NodeType::Enum_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> val0; // union_style_enum, raw_value_style_enum
    private:
    };
    
    virtual std::any visitEnum_declaration(Swift5Parser::Enum_declarationContext * ctx) override;
    
    class Union_style_enum : public Node
    {
    public:
        Union_style_enum() : Node(NodeType::Union_style_enum) {}
        void print() {
            if(enum_name_ != nullptr) {
                enum_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(union_style_enum_members_ != nullptr) {
                union_style_enum_members_->print();
            }
        }
        std::unique_ptr<Node> enum_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> union_style_enum_members_;
    private:
    };
    
    virtual std::any visitUnion_style_enum(Swift5Parser::Union_style_enumContext * ctx) override;
    
    class Union_style_enum_members : public Node
    {
    public:
        Union_style_enum_members() : Node(NodeType::Union_style_enum_members) {}
        void print() {
            for(auto& item : union_style_enum_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> union_style_enum_members_;
    private:
    };
    
    virtual std::any visitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext * ctx) override;
    
    class Union_style_enum_member : public Node
    {
    public:
        Union_style_enum_member() : Node(NodeType::Union_style_enum_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // Declaration, union_style_enum_case_clause, Compiler_control_statement
    private:
    };
    
    virtual std::any visitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext * ctx) override;
    
    class Union_style_enum_case_clause : public Node
    {
    public:
        Union_style_enum_case_clause() : Node(NodeType::Union_style_enum_case_clause) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(union_style_enum_case_list_ != nullptr) {
                union_style_enum_case_list_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> union_style_enum_case_list_;
    private:
    };
    
    virtual std::any visitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext * ctx) override;
    
    class Union_style_enum_case_list : public Node
    {
    public:
        Union_style_enum_case_list() : Node(NodeType::Union_style_enum_case_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // Union_style_enum_case, Union_style_enum_case
    private:
    };
    
    virtual std::any visitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext * ctx) override;
    
    class Tuple_element_list : public Node
    {
    public:
        Tuple_element_list() : Node(NodeType::Tuple_element_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // tuple_element, tuple_element
    private:
    };
    
    virtual std::any visitTuple_element_list(Swift5Parser::Tuple_element_listContext * ctx) override;
    
    class Tuple_element : public Node
    {
    public:
        Tuple_element() : Node(NodeType::Tuple_element) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitTuple_element(Swift5Parser::Tuple_elementContext * ctx) override;
    
    class Wildcard_expression : public Node
    {
    public:
        Wildcard_expression() : Node(NodeType::Wildcard_expression) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitWildcard_expression(Swift5Parser::Wildcard_expressionContext * ctx) override;
    
    class Key_path_expression : public Node
    {
    public:
        Key_path_expression() : Node(NodeType::Key_path_expression) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
            if(key_path_components_ != nullptr) {
                key_path_components_->print();
            }
        }
        std::unique_ptr<Node> type_;
        std::unique_ptr<Node> key_path_components_;
    private:
    };
    
    virtual std::any visitKey_path_expression(Swift5Parser::Key_path_expressionContext * ctx) override;
    
    class Key_path_components : public Node
    {
    public:
        Key_path_components() : Node(NodeType::Key_path_components) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // key_path_component, key_path_component
    private:
    };
    
    virtual std::any visitKey_path_components(Swift5Parser::Key_path_componentsContext * ctx) override;
    
    class Key_path_component : public Node
    {
    public:
        Key_path_component() : Node(NodeType::Key_path_component) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(key_path_postfixes_ != nullptr) {
                key_path_postfixes_->print();
            }
        }
        std::unique_ptr<Node> val0; // identifier, key_path_postfixes
        std::unique_ptr<Node> key_path_postfixes_;
    private:
    };
    
    virtual std::any visitKey_path_component(Swift5Parser::Key_path_componentContext * ctx) override;
    
    class Key_path_postfixes : public Node
    {
    public:
        Key_path_postfixes() : Node(NodeType::Key_path_postfixes) {}
        void print() {
            for(auto& item : key_path_postfixs_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> key_path_postfixs_;
    private:
    };
    
    virtual std::any visitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext * ctx) override;
    
    class Key_path_postfix : public Node
    {
    public:
        Key_path_postfix() : Node(NodeType::Key_path_postfix) {}
        void print() {
            if(function_call_argument_list_ != nullptr) {
                function_call_argument_list_->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_list_;
    private:
    };
    
    virtual std::any visitKey_path_postfix(Swift5Parser::Key_path_postfixContext * ctx) override;
    
    class Raw_value_style_enum : public Node
    {
    public:
        Raw_value_style_enum() : Node(NodeType::Raw_value_style_enum) {}
        void print() {
            if(enum_name_ != nullptr) {
                enum_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(raw_value_style_enum_members_ != nullptr) {
                raw_value_style_enum_members_->print();
            }
        }
        std::unique_ptr<Node> enum_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> raw_value_style_enum_members_;
    private:
    };
    
    virtual std::any visitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext * ctx) override;
    
    class Key_path_string_expression : public Node
    {
    public:
        Key_path_string_expression() : Node(NodeType::Key_path_string_expression) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext * ctx) override;
    
    class Postfix_expression : public Node
    {
    public:
        Postfix_expression() : Node(NodeType::Postfix_expression) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
            for(auto& item : postfix_operators_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // function_call_suffix, initializer_suffix, explicit_member_suffix, postfix_self_suffix, subscript_suffix, forced_value_suffix, optional_chaining_suffix, primary_expression
        std::vector<std::unique_ptr<Node>> postfix_operators_;
    private:
    };
    
    virtual std::any visitPostfix_expression(Swift5Parser::Postfix_expressionContext * ctx) override;
    
    class Function_call_suffix : public Node
    {
    public:
        Function_call_suffix() : Node(NodeType::Function_call_suffix) {}
        void print() {
            if(function_call_argument_clause_ != nullptr) {
                function_call_argument_clause_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_clause_;
        std::unique_ptr<Node> val0; // Trailing_closures, function_call_argument_clause
    private:
    };
    
    virtual std::any visitFunction_call_suffix(Swift5Parser::Function_call_suffixContext * ctx) override;
    
    class Initializer_suffix : public Node
    {
    public:
        Initializer_suffix() : Node(NodeType::Initializer_suffix) {}
        void print() {
            if(argument_names_ != nullptr) {
                argument_names_->print();
            }
        }
        std::unique_ptr<Node> argument_names_;
    private:
    };
    
    virtual std::any visitInitializer_suffix(Swift5Parser::Initializer_suffixContext * ctx) override;
    
    class Explicit_member_suffix : public Node
    {
    public:
        Explicit_member_suffix() : Node(NodeType::Explicit_member_suffix) {}
        void print() {
            if(Decimal_digits_ != "") std::cout << Decimal_digits_ << std::endl;
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::string Decimal_digits_;
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> val0; // Generic_argument_clause, argument_names
    private:
    };
    
    virtual std::any visitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext * ctx) override;
    
    class Postfix_self_suffix : public Node
    {
    public:
        Postfix_self_suffix() : Node(NodeType::Postfix_self_suffix) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext * ctx) override;
    
    class Subscript_suffix : public Node
    {
    public:
        Subscript_suffix() : Node(NodeType::Subscript_suffix) {}
        void print() {
            if(function_call_argument_list_ != nullptr) {
                function_call_argument_list_->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_list_;
    private:
    };
    
    virtual std::any visitSubscript_suffix(Swift5Parser::Subscript_suffixContext * ctx) override;
    
    class Forced_value_suffix : public Node
    {
    public:
        Forced_value_suffix() : Node(NodeType::Forced_value_suffix) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitForced_value_suffix(Swift5Parser::Forced_value_suffixContext * ctx) override;
    
    class Struct_name : public Node
    {
    public:
        Struct_name() : Node(NodeType::Struct_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitStruct_name(Swift5Parser::Struct_nameContext * ctx) override;
    
    class Struct_body : public Node
    {
    public:
        Struct_body() : Node(NodeType::Struct_body) {}
        void print() {
            if(struct_members_ != nullptr) {
                struct_members_->print();
            }
        }
        std::unique_ptr<Node> struct_members_;
    private:
    };
    
    virtual std::any visitStruct_body(Swift5Parser::Struct_bodyContext * ctx) override;
    
    class Struct_members : public Node
    {
    public:
        Struct_members() : Node(NodeType::Struct_members) {}
        void print() {
            for(auto& item : struct_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> struct_members_;
    private:
    };
    
    virtual std::any visitStruct_members(Swift5Parser::Struct_membersContext * ctx) override;
    
    class Struct_member : public Node
    {
    public:
        Struct_member() : Node(NodeType::Struct_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // Declaration, Compiler_control_statement
    private:
    };
    
    virtual std::any visitStruct_member(Swift5Parser::Struct_memberContext * ctx) override;
    
    class Class_declaration : public Node
    {
    public:
        Class_declaration() : Node(NodeType::Class_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
            if(class_name_ != nullptr) {
                class_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(class_body_ != nullptr) {
                class_body_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> val0; // access_level_modifier, access_level_modifier
        std::unique_ptr<Node> class_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> class_body_;
    private:
    };
    
    virtual std::any visitClass_declaration(Swift5Parser::Class_declarationContext * ctx) override;
    
    class Class_name : public Node
    {
    public:
        Class_name() : Node(NodeType::Class_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitClass_name(Swift5Parser::Class_nameContext * ctx) override;
    
    class Class_body : public Node
    {
    public:
        Class_body() : Node(NodeType::Class_body) {}
        void print() {
            if(class_members_ != nullptr) {
                class_members_->print();
            }
        }
        std::unique_ptr<Node> class_members_;
    private:
    };
    
    virtual std::any visitClass_body(Swift5Parser::Class_bodyContext * ctx) override;
    
    class Class_members : public Node
    {
    public:
        Class_members() : Node(NodeType::Class_members) {}
        void print() {
            for(auto& item : class_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> class_members_;
    private:
    };
    
    virtual std::any visitClass_members(Swift5Parser::Class_membersContext * ctx) override;
    
    class Class_member : public Node
    {
    public:
        Class_member() : Node(NodeType::Class_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // Declaration, Compiler_control_statement
    private:
    };
    
    virtual std::any visitClass_member(Swift5Parser::Class_memberContext * ctx) override;
    
    class Protocol_declaration : public Node
    {
    public:
        Protocol_declaration() : Node(NodeType::Protocol_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(protocol_name_ != nullptr) {
                protocol_name_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(protocol_body_ != nullptr) {
                protocol_body_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> protocol_name_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> protocol_body_;
    private:
    };
    
    virtual std::any visitProtocol_declaration(Swift5Parser::Protocol_declarationContext * ctx) override;
    
    class Protocol_name : public Node
    {
    public:
        Protocol_name() : Node(NodeType::Protocol_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitProtocol_name(Swift5Parser::Protocol_nameContext * ctx) override;
    
    class Protocol_body : public Node
    {
    public:
        Protocol_body() : Node(NodeType::Protocol_body) {}
        void print() {
            if(protocol_members_ != nullptr) {
                protocol_members_->print();
            }
        }
        std::unique_ptr<Node> protocol_members_;
    private:
    };
    
    virtual std::any visitProtocol_body(Swift5Parser::Protocol_bodyContext * ctx) override;
    
    class Protocol_members : public Node
    {
    public:
        Protocol_members() : Node(NodeType::Protocol_members) {}
        void print() {
            for(auto& item : protocol_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> protocol_members_;
    private:
    };
    
    virtual std::any visitProtocol_members(Swift5Parser::Protocol_membersContext * ctx) override;
    
    class Protocol_member : public Node
    {
    public:
        Protocol_member() : Node(NodeType::Protocol_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // protocol_member_declaration, Compiler_control_statement
    private:
    };
    
    virtual std::any visitProtocol_member(Swift5Parser::Protocol_memberContext * ctx) override;
    
    class Protocol_member_declaration : public Node
    {
    public:
        Protocol_member_declaration() : Node(NodeType::Protocol_member_declaration) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // protocol_property_declaration, protocol_method_declaration, protocol_initializer_declaration, protocol_subscript_declaration, protocol_associated_type_declaration, Typealias_declaration
    private:
    };
    
    virtual std::any visitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext * ctx) override;
    
    class Protocol_property_declaration : public Node
    {
    public:
        Protocol_property_declaration() : Node(NodeType::Protocol_property_declaration) {}
        void print() {
            if(variable_declaration_head_ != nullptr) {
                variable_declaration_head_->print();
            }
            if(variable_name_ != nullptr) {
                variable_name_->print();
            }
            if(type_annotation_ != nullptr) {
                type_annotation_->print();
            }
            if(getter_setter_keyword_block_ != nullptr) {
                getter_setter_keyword_block_->print();
            }
        }
        std::unique_ptr<Node> variable_declaration_head_;
        std::unique_ptr<Node> variable_name_;
        std::unique_ptr<Node> type_annotation_;
        std::unique_ptr<Node> getter_setter_keyword_block_;
    private:
    };
    
    virtual std::any visitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext * ctx) override;
    
    class Protocol_method_declaration : public Node
    {
    public:
        Protocol_method_declaration() : Node(NodeType::Protocol_method_declaration) {}
        void print() {
            if(function_head_ != nullptr) {
                function_head_->print();
            }
            if(function_name_ != nullptr) {
                function_name_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(function_signature_ != nullptr) {
                function_signature_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
        }
        std::unique_ptr<Node> function_head_;
        std::unique_ptr<Node> function_name_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> function_signature_;
        std::unique_ptr<Node> generic_where_clause_;
    private:
    };
    
    virtual std::any visitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext * ctx) override;
    
    class Protocol_initializer_declaration : public Node
    {
    public:
        Protocol_initializer_declaration() : Node(NodeType::Protocol_initializer_declaration) {}
        void print() {
            if(initializer_head_ != nullptr) {
                initializer_head_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(parameter_clause_ != nullptr) {
                parameter_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
        }
        std::unique_ptr<Node> initializer_head_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> parameter_clause_;
        std::unique_ptr<Node> generic_where_clause_;
    private:
    };
    
    virtual std::any visitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext * ctx) override;
    
    class Protocol_subscript_declaration : public Node
    {
    public:
        Protocol_subscript_declaration() : Node(NodeType::Protocol_subscript_declaration) {}
        void print() {
            if(subscript_head_ != nullptr) {
                subscript_head_->print();
            }
            if(subscript_result_ != nullptr) {
                subscript_result_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(getter_setter_keyword_block_ != nullptr) {
                getter_setter_keyword_block_->print();
            }
        }
        std::unique_ptr<Node> subscript_head_;
        std::unique_ptr<Node> subscript_result_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> getter_setter_keyword_block_;
    private:
    };
    
    virtual std::any visitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext * ctx) override;
    
    class Protocol_associated_type_declaration : public Node
    {
    public:
        Protocol_associated_type_declaration() : Node(NodeType::Protocol_associated_type_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(typealias_name_ != nullptr) {
                typealias_name_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(typealias_assignment_ != nullptr) {
                typealias_assignment_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> typealias_name_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> typealias_assignment_;
        std::unique_ptr<Node> generic_where_clause_;
    private:
    };
    
    virtual std::any visitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext * ctx) override;
    
    class Initializer_declaration : public Node
    {
    public:
        Initializer_declaration() : Node(NodeType::Initializer_declaration) {}
        void print() {
            if(initializer_head_ != nullptr) {
                initializer_head_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(parameter_clause_ != nullptr) {
                parameter_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(initializer_body_ != nullptr) {
                initializer_body_->print();
            }
        }
        std::unique_ptr<Node> initializer_head_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> parameter_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> initializer_body_;
    private:
    };
    
    virtual std::any visitInitializer_declaration(Swift5Parser::Initializer_declarationContext * ctx) override;
    
    class Initializer_head : public Node
    {
    public:
        Initializer_head() : Node(NodeType::Initializer_head) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(declaration_modifiers_ != nullptr) {
                declaration_modifiers_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> declaration_modifiers_;
    private:
    };
    
    virtual std::any visitInitializer_head(Swift5Parser::Initializer_headContext * ctx) override;
    
    class Initializer_body : public Node
    {
    public:
        Initializer_body() : Node(NodeType::Initializer_body) {}
        void print() {
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitInitializer_body(Swift5Parser::Initializer_bodyContext * ctx) override;
    
    class Deinitializer_declaration : public Node
    {
    public:
        Deinitializer_declaration() : Node(NodeType::Deinitializer_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(code_block_ != nullptr) {
                code_block_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> code_block_;
    private:
    };
    
    virtual std::any visitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext * ctx) override;
    
    class Extension_declaration : public Node
    {
    public:
        Extension_declaration() : Node(NodeType::Extension_declaration) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(access_level_modifier_ != nullptr) {
                access_level_modifier_->print();
            }
            if(type_identifier_ != nullptr) {
                type_identifier_->print();
            }
            if(type_inheritance_clause_ != nullptr) {
                type_inheritance_clause_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(extension_body_ != nullptr) {
                extension_body_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> access_level_modifier_;
        std::unique_ptr<Node> type_identifier_;
        std::unique_ptr<Node> type_inheritance_clause_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> extension_body_;
    private:
    };
    
    virtual std::any visitExtension_declaration(Swift5Parser::Extension_declarationContext * ctx) override;
    
    class Extension_body : public Node
    {
    public:
        Extension_body() : Node(NodeType::Extension_body) {}
        void print() {
            if(extension_members_ != nullptr) {
                extension_members_->print();
            }
        }
        std::unique_ptr<Node> extension_members_;
    private:
    };
    
    virtual std::any visitExtension_body(Swift5Parser::Extension_bodyContext * ctx) override;
    
    class Extension_members : public Node
    {
    public:
        Extension_members() : Node(NodeType::Extension_members) {}
        void print() {
            for(auto& item : extension_members_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> extension_members_;
    private:
    };
    
    virtual std::any visitExtension_members(Swift5Parser::Extension_membersContext * ctx) override;
    
    class Extension_member : public Node
    {
    public:
        Extension_member() : Node(NodeType::Extension_member) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // Declaration, Compiler_control_statement
    private:
    };
    
    virtual std::any visitExtension_member(Swift5Parser::Extension_memberContext * ctx) override;
    
    class Subscript_declaration : public Node
    {
    public:
        Subscript_declaration() : Node(NodeType::Subscript_declaration) {}
        void print() {
            if(subscript_head_ != nullptr) {
                subscript_head_->print();
            }
            if(subscript_result_ != nullptr) {
                subscript_result_->print();
            }
            if(generic_where_clause_ != nullptr) {
                generic_where_clause_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> subscript_head_;
        std::unique_ptr<Node> subscript_result_;
        std::unique_ptr<Node> generic_where_clause_;
        std::unique_ptr<Node> val0; // Code_block, Getter_setter_block, Getter_setter_keyword_block
    private:
    };
    
    virtual std::any visitSubscript_declaration(Swift5Parser::Subscript_declarationContext * ctx) override;
    
    class Subscript_head : public Node
    {
    public:
        Subscript_head() : Node(NodeType::Subscript_head) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(declaration_modifiers_ != nullptr) {
                declaration_modifiers_->print();
            }
            if(generic_parameter_clause_ != nullptr) {
                generic_parameter_clause_->print();
            }
            if(parameter_clause_ != nullptr) {
                parameter_clause_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> declaration_modifiers_;
        std::unique_ptr<Node> generic_parameter_clause_;
        std::unique_ptr<Node> parameter_clause_;
    private:
    };
    
    virtual std::any visitSubscript_head(Swift5Parser::Subscript_headContext * ctx) override;
    
    class Subscript_result : public Node
    {
    public:
        Subscript_result() : Node(NodeType::Subscript_result) {}
        void print() {
            if(arrow_operator_ != nullptr) {
                arrow_operator_->print();
            }
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> arrow_operator_;
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitSubscript_result(Swift5Parser::Subscript_resultContext * ctx) override;
    
    class Operator_declaration : public Node
    {
    public:
        Operator_declaration() : Node(NodeType::Operator_declaration) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // prefix_operator_declaration, postfix_operator_declaration, infix_operator_declaration
    private:
    };
    
    virtual std::any visitOperator_declaration(Swift5Parser::Operator_declarationContext * ctx) override;
    
    class Prefix_operator_declaration : public Node
    {
    public:
        Prefix_operator_declaration() : Node(NodeType::Prefix_operator_declaration) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext * ctx) override;
    
    class Postfix_operator_declaration : public Node
    {
    public:
        Postfix_operator_declaration() : Node(NodeType::Postfix_operator_declaration) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext * ctx) override;
    
    class Infix_operator_declaration : public Node
    {
    public:
        Infix_operator_declaration() : Node(NodeType::Infix_operator_declaration) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
            if(infix_operator_group_ != nullptr) {
                infix_operator_group_->print();
            }
        }
        std::unique_ptr<Node> operator_;
        std::unique_ptr<Node> infix_operator_group_;
    private:
    };
    
    virtual std::any visitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext * ctx) override;
    
    class Infix_operator_group : public Node
    {
    public:
        Infix_operator_group() : Node(NodeType::Infix_operator_group) {}
        void print() {
            if(precedence_group_name_ != nullptr) {
                precedence_group_name_->print();
            }
        }
        std::unique_ptr<Node> precedence_group_name_;
    private:
    };
    
    virtual std::any visitInfix_operator_group(Swift5Parser::Infix_operator_groupContext * ctx) override;
    
    class Precedence_group_declaration : public Node
    {
    public:
        Precedence_group_declaration() : Node(NodeType::Precedence_group_declaration) {}
        void print() {
            if(precedence_group_name_ != nullptr) {
                precedence_group_name_->print();
            }
            if(precedence_group_attributes_ != nullptr) {
                precedence_group_attributes_->print();
            }
        }
        std::unique_ptr<Node> precedence_group_name_;
        std::unique_ptr<Node> precedence_group_attributes_;
    private:
    };
    
    virtual std::any visitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext * ctx) override;
    
    class Precedence_group_attributes : public Node
    {
    public:
        Precedence_group_attributes() : Node(NodeType::Precedence_group_attributes) {}
        void print() {
            for(auto& item : precedence_group_attributes_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> precedence_group_attributes_;
    private:
    };
    
    virtual std::any visitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext * ctx) override;
    
    class Precedence_group_attribute : public Node
    {
    public:
        Precedence_group_attribute() : Node(NodeType::Precedence_group_attribute) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // precedence_group_relation, precedence_group_assignment, precedence_group_associativity
    private:
    };
    
    virtual std::any visitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext * ctx) override;
    
    class Precedence_group_relation : public Node
    {
    public:
        Precedence_group_relation() : Node(NodeType::Precedence_group_relation) {}
        void print() {
            if(precedence_group_names_ != nullptr) {
                precedence_group_names_->print();
            }
        }
        std::unique_ptr<Node> precedence_group_names_;
    private:
    };
    
    virtual std::any visitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext * ctx) override;
    
    class Precedence_group_assignment : public Node
    {
    public:
        Precedence_group_assignment() : Node(NodeType::Precedence_group_assignment) {}
        void print() {
            if(boolean_literal_ != nullptr) {
                boolean_literal_->print();
            }
        }
        std::unique_ptr<Node> boolean_literal_;
    private:
    };
    
    virtual std::any visitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext * ctx) override;
    
    class Precedence_group_associativity : public Node
    {
    public:
        Precedence_group_associativity() : Node(NodeType::Precedence_group_associativity) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext * ctx) override;
    
    class Precedence_group_names : public Node
    {
    public:
        Precedence_group_names() : Node(NodeType::Precedence_group_names) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // precedence_group_name, precedence_group_name
    private:
    };
    
    virtual std::any visitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext * ctx) override;
    
    class Precedence_group_name : public Node
    {
    public:
        Precedence_group_name() : Node(NodeType::Precedence_group_name) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // identifier, identifier
    private:
    };
    
    virtual std::any visitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext * ctx) override;
    
    class Declaration_modifier : public Node
    {
    public:
        Declaration_modifier() : Node(NodeType::Declaration_modifier) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // access_level_modifier, mutation_modifier
    private:
    };
    
    virtual std::any visitDeclaration_modifier(Swift5Parser::Declaration_modifierContext * ctx) override;
    
    class Declaration_modifiers : public Node
    {
    public:
        Declaration_modifiers() : Node(NodeType::Declaration_modifiers) {}
        void print() {
            for(auto& item : declaration_modifiers_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> declaration_modifiers_;
    private:
    };
    
    virtual std::any visitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext * ctx) override;
    
    class Access_level_modifier : public Node
    {
    public:
        Access_level_modifier() : Node(NodeType::Access_level_modifier) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitAccess_level_modifier(Swift5Parser::Access_level_modifierContext * ctx) override;
    
    class Mutation_modifier : public Node
    {
    public:
        Mutation_modifier() : Node(NodeType::Mutation_modifier) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitMutation_modifier(Swift5Parser::Mutation_modifierContext * ctx) override;
    
    class Pattern : public Node
    {
    public:
        Pattern() : Node(NodeType::Pattern) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(type_annotation_ != nullptr) {
                type_annotation_->print();
            }
        }
        std::unique_ptr<Node> val0; // wildcard_pattern, identifier_pattern, tuple_pattern, value_binding_pattern, enum_case_pattern, optional_pattern, type, Pattern, type, expression_pattern
        std::unique_ptr<Node> type_annotation_;
    private:
    };
    
    virtual std::any visitPattern(Swift5Parser::PatternContext * ctx) override;
    
    class Wildcard_pattern : public Node
    {
    public:
        Wildcard_pattern() : Node(NodeType::Wildcard_pattern) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitWildcard_pattern(Swift5Parser::Wildcard_patternContext * ctx) override;
    
    class Identifier_pattern : public Node
    {
    public:
        Identifier_pattern() : Node(NodeType::Identifier_pattern) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitIdentifier_pattern(Swift5Parser::Identifier_patternContext * ctx) override;
    
    class Value_binding_pattern : public Node
    {
    public:
        Value_binding_pattern() : Node(NodeType::Value_binding_pattern) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // Pattern, Pattern
    private:
    };
    
    virtual std::any visitValue_binding_pattern(Swift5Parser::Value_binding_patternContext * ctx) override;
    
    class Tuple_pattern : public Node
    {
    public:
        Tuple_pattern() : Node(NodeType::Tuple_pattern) {}
        void print() {
            if(tuple_pattern_element_list_ != nullptr) {
                tuple_pattern_element_list_->print();
            }
        }
        std::unique_ptr<Node> tuple_pattern_element_list_;
    private:
    };
    
    virtual std::any visitTuple_pattern(Swift5Parser::Tuple_patternContext * ctx) override;
    
    class Tuple_pattern_element_list : public Node
    {
    public:
        Tuple_pattern_element_list() : Node(NodeType::Tuple_pattern_element_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // tuple_pattern_element, tuple_pattern_element
    private:
    };
    
    virtual std::any visitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext * ctx) override;
    
    class Tuple_pattern_element : public Node
    {
    public:
        Tuple_pattern_element() : Node(NodeType::Tuple_pattern_element) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(pattern_ != nullptr) {
                pattern_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> pattern_;
    private:
    };
    
    virtual std::any visitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext * ctx) override;
    
    class Enum_case_pattern : public Node
    {
    public:
        Enum_case_pattern() : Node(NodeType::Enum_case_pattern) {}
        void print() {
            if(type_identifier_ != nullptr) {
                type_identifier_->print();
            }
            if(enum_case_name_ != nullptr) {
                enum_case_name_->print();
            }
            if(tuple_pattern_ != nullptr) {
                tuple_pattern_->print();
            }
        }
        std::unique_ptr<Node> type_identifier_;
        std::unique_ptr<Node> enum_case_name_;
        std::unique_ptr<Node> tuple_pattern_;
    private:
    };
    
    virtual std::any visitEnum_case_pattern(Swift5Parser::Enum_case_patternContext * ctx) override;
    
    class Optional_pattern : public Node
    {
    public:
        Optional_pattern() : Node(NodeType::Optional_pattern) {}
        void print() {
            if(identifier_pattern_ != nullptr) {
                identifier_pattern_->print();
            }
        }
        std::unique_ptr<Node> identifier_pattern_;
    private:
    };
    
    virtual std::any visitOptional_pattern(Swift5Parser::Optional_patternContext * ctx) override;
    
    class Expression_pattern : public Node
    {
    public:
        Expression_pattern() : Node(NodeType::Expression_pattern) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitExpression_pattern(Swift5Parser::Expression_patternContext * ctx) override;
    
    class Attribute : public Node
    {
    public:
        Attribute() : Node(NodeType::Attribute) {}
        void print() {
            if(attribute_name_ != nullptr) {
                attribute_name_->print();
            }
            if(attribute_argument_clause_ != nullptr) {
                attribute_argument_clause_->print();
            }
        }
        std::unique_ptr<Node> attribute_name_;
        std::unique_ptr<Node> attribute_argument_clause_;
    private:
    };
    
    virtual std::any visitAttribute(Swift5Parser::AttributeContext * ctx) override;
    
    class Attribute_name : public Node
    {
    public:
        Attribute_name() : Node(NodeType::Attribute_name) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // identifier, identifier
    private:
    };
    
    virtual std::any visitAttribute_name(Swift5Parser::Attribute_nameContext * ctx) override;
    
    class Attribute_argument_clause : public Node
    {
    public:
        Attribute_argument_clause() : Node(NodeType::Attribute_argument_clause) {}
        void print() {
            if(balanced_tokens_ != nullptr) {
                balanced_tokens_->print();
            }
        }
        std::unique_ptr<Node> balanced_tokens_;
    private:
    };
    
    virtual std::any visitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext * ctx) override;
    
    class Attributes : public Node
    {
    public:
        Attributes() : Node(NodeType::Attributes) {}
        void print() {
            for(auto& item : attributes_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> attributes_;
    private:
    };
    
    virtual std::any visitAttributes(Swift5Parser::AttributesContext * ctx) override;
    
    class Balanced_tokens : public Node
    {
    public:
        Balanced_tokens() : Node(NodeType::Balanced_tokens) {}
        void print() {
            for(auto& item : balanced_tokens_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> balanced_tokens_;
    private:
    };
    
    virtual std::any visitBalanced_tokens(Swift5Parser::Balanced_tokensContext * ctx) override;
    
    class Balanced_token : public Node
    {
    public:
        Balanced_token() : Node(NodeType::Balanced_token) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(val1 != nullptr) {
                val1->print();
            }
        }
        std::unique_ptr<Node> val0; // Balanced_tokens, Balanced_tokens, Balanced_tokens
        std::unique_ptr<Node> val1; // identifier, keyword, literal, operator, balanced_token_punctuation
    private:
    };
    
    virtual std::any visitBalanced_token(Swift5Parser::Balanced_tokenContext * ctx) override;
    
    class Balanced_token_punctuation : public Node
    {
    public:
        Balanced_token_punctuation() : Node(NodeType::Balanced_token_punctuation) {}
        void print() {
            if(arrow_operator_ != nullptr) {
                arrow_operator_->print();
            }
        }
        std::unique_ptr<Node> arrow_operator_;
    private:
    };
    
    virtual std::any visitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext * ctx) override;
    
    class Expression : public Node
    {
    public:
        Expression() : Node(NodeType::Expression) {}
        void print() {
            if(try_operator_ != nullptr) {
                try_operator_->print();
            }
            if(prefix_expression_ != nullptr) {
                prefix_expression_->print();
            }
            if(binary_expressions_ != nullptr) {
                binary_expressions_->print();
            }
        }
        std::unique_ptr<Node> try_operator_;
        std::unique_ptr<Node> prefix_expression_;
        std::unique_ptr<Node> binary_expressions_;
    private:
    };
    
    virtual std::any visitExpression(Swift5Parser::ExpressionContext * ctx) override;
    
    class Expression_list : public Node
    {
    public:
        Expression_list() : Node(NodeType::Expression_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // Expression, Expression
    private:
    };
    
    virtual std::any visitExpression_list(Swift5Parser::Expression_listContext * ctx) override;
    
    class Prefix_expression : public Node
    {
    public:
        Prefix_expression() : Node(NodeType::Prefix_expression) {}
        void print() {
            if(prefix_operator_ != nullptr) {
                prefix_operator_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> prefix_operator_;
        std::unique_ptr<Node> val0; // Postfix_expression, in_out_expression
    private:
    };
    
    virtual std::any visitPrefix_expression(Swift5Parser::Prefix_expressionContext * ctx) override;
    
    class In_out_expression : public Node
    {
    public:
        In_out_expression() : Node(NodeType::In_out_expression) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitIn_out_expression(Swift5Parser::In_out_expressionContext * ctx) override;
    
    class Try_operator : public Node
    {
    public:
        Try_operator() : Node(NodeType::Try_operator) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitTry_operator(Swift5Parser::Try_operatorContext * ctx) override;
    
    class Binary_expression : public Node
    {
    public:
        Binary_expression() : Node(NodeType::Binary_expression) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(prefix_expression_ != nullptr) {
                prefix_expression_->print();
            }
            if(try_operator_ != nullptr) {
                try_operator_->print();
            }
        }
        std::unique_ptr<Node> val0; // binary_operator, assignment_operator, conditional_operator, Prefix_expression, type_casting_operator
        std::unique_ptr<Node> prefix_expression_;
        std::unique_ptr<Node> try_operator_;
    private:
    };
    
    virtual std::any visitBinary_expression(Swift5Parser::Binary_expressionContext * ctx) override;
    
    class Binary_expressions : public Node
    {
    public:
        Binary_expressions() : Node(NodeType::Binary_expressions) {}
        void print() {
            for(auto& item : binary_expressions_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> binary_expressions_;
    private:
    };
    
    virtual std::any visitBinary_expressions(Swift5Parser::Binary_expressionsContext * ctx) override;
    
    class Conditional_operator : public Node
    {
    public:
        Conditional_operator() : Node(NodeType::Conditional_operator) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitConditional_operator(Swift5Parser::Conditional_operatorContext * ctx) override;
    
    class Type_casting_operator : public Node
    {
    public:
        Type_casting_operator() : Node(NodeType::Type_casting_operator) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitType_casting_operator(Swift5Parser::Type_casting_operatorContext * ctx) override;
    
    class Primary_expression : public Node
    {
    public:
        Primary_expression() : Node(NodeType::Primary_expression) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(generic_argument_clause_ != nullptr) {
                generic_argument_clause_->print();
            }
        }
        std::unique_ptr<Node> val0; // unqualified_name, array_type, dictionary_type, literal_expression, self_expression, superclass_expression, closure_expression, parenthesized_operator, parenthesized_expression, tuple_expression, implicit_member_expression, Wildcard_expression, Key_path_expression, selector_expression, Key_path_string_expression
        std::unique_ptr<Node> generic_argument_clause_;
    private:
    };
    
    virtual std::any visitPrimary_expression(Swift5Parser::Primary_expressionContext * ctx) override;
    
    class Unqualified_name : public Node
    {
    public:
        Unqualified_name() : Node(NodeType::Unqualified_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(argument_names_ != nullptr) {
                argument_names_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> argument_names_;
    private:
    };
    
    virtual std::any visitUnqualified_name(Swift5Parser::Unqualified_nameContext * ctx) override;
    
    class Literal_expression : public Node
    {
    public:
        Literal_expression() : Node(NodeType::Literal_expression) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // literal, array_literal, dictionary_literal, playground_literal
    private:
    };
    
    virtual std::any visitLiteral_expression(Swift5Parser::Literal_expressionContext * ctx) override;
    
    class Array_literal : public Node
    {
    public:
        Array_literal() : Node(NodeType::Array_literal) {}
        void print() {
            if(array_literal_items_ != nullptr) {
                array_literal_items_->print();
            }
        }
        std::unique_ptr<Node> array_literal_items_;
    private:
    };
    
    virtual std::any visitArray_literal(Swift5Parser::Array_literalContext * ctx) override;
    
    class Array_literal_items : public Node
    {
    public:
        Array_literal_items() : Node(NodeType::Array_literal_items) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // array_literal_item, array_literal_item
    private:
    };
    
    virtual std::any visitArray_literal_items(Swift5Parser::Array_literal_itemsContext * ctx) override;
    
    class Array_literal_item : public Node
    {
    public:
        Array_literal_item() : Node(NodeType::Array_literal_item) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitArray_literal_item(Swift5Parser::Array_literal_itemContext * ctx) override;
    
    class Dictionary_literal : public Node
    {
    public:
        Dictionary_literal() : Node(NodeType::Dictionary_literal) {}
        void print() {
            if(dictionary_literal_items_ != nullptr) {
                dictionary_literal_items_->print();
            }
        }
        std::unique_ptr<Node> dictionary_literal_items_;
    private:
    };
    
    virtual std::any visitDictionary_literal(Swift5Parser::Dictionary_literalContext * ctx) override;
    
    class Dictionary_literal_items : public Node
    {
    public:
        Dictionary_literal_items() : Node(NodeType::Dictionary_literal_items) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // dictionary_literal_item, dictionary_literal_item
    private:
    };
    
    virtual std::any visitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext * ctx) override;
    
    class Dictionary_literal_item : public Node
    {
    public:
        Dictionary_literal_item() : Node(NodeType::Dictionary_literal_item) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
            if(expression1_ != nullptr) {
                expression1_->print();
            }
        }
        std::unique_ptr<Node> expression_;
        std::unique_ptr<Node> expression1_;
    private:
    };
    
    virtual std::any visitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext * ctx) override;
    
    class Playground_literal : public Node
    {
    public:
        Playground_literal() : Node(NodeType::Playground_literal) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
            if(expression1_ != nullptr) {
                expression1_->print();
            }
            if(expression11_ != nullptr) {
                expression11_->print();
            }
        }
        std::unique_ptr<Node> val0; // Expression, Expression, Expression
        std::unique_ptr<Node> expression_;
        std::unique_ptr<Node> expression1_;
        std::unique_ptr<Node> expression11_;
    private:
    };
    
    virtual std::any visitPlayground_literal(Swift5Parser::Playground_literalContext * ctx) override;
    
    class Self_pure_expression : public Node
    {
    public:
        Self_pure_expression() : Node(NodeType::Self_pure_expression) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitSelf_pure_expression(Swift5Parser::Self_pure_expressionContext * ctx) override;
    
    class Self_method_expression : public Node
    {
    public:
        Self_method_expression() : Node(NodeType::Self_method_expression) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitSelf_method_expression(Swift5Parser::Self_method_expressionContext * ctx) override;
    
    class Self_subscript_expression : public Node
    {
    public:
        Self_subscript_expression() : Node(NodeType::Self_subscript_expression) {}
        void print() {
            if(function_call_argument_list_ != nullptr) {
                function_call_argument_list_->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_list_;
    private:
    };
    
    virtual std::any visitSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext * ctx) override;
    
    class Self_initializer_expression : public Node
    {
    public:
        Self_initializer_expression() : Node(NodeType::Self_initializer_expression) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext * ctx) override;
    
    class Superclass_method_expression : public Node
    {
    public:
        Superclass_method_expression() : Node(NodeType::Superclass_method_expression) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext * ctx) override;
    
    class Superclass_subscript_expression : public Node
    {
    public:
        Superclass_subscript_expression() : Node(NodeType::Superclass_subscript_expression) {}
        void print() {
            if(function_call_argument_list_ != nullptr) {
                function_call_argument_list_->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_list_;
    private:
    };
    
    virtual std::any visitSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext * ctx) override;
    
    class Superclass_initializer_expression : public Node
    {
    public:
        Superclass_initializer_expression() : Node(NodeType::Superclass_initializer_expression) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext * ctx) override;
    
    class Closure_expression : public Node
    {
    public:
        Closure_expression() : Node(NodeType::Closure_expression) {}
        void print() {
            if(closure_signature_ != nullptr) {
                closure_signature_->print();
            }
            if(statements_ != nullptr) {
                statements_->print();
            }
        }
        std::unique_ptr<Node> closure_signature_;
        std::unique_ptr<Node> statements_;
    private:
    };
    
    virtual std::any visitClosure_expression(Swift5Parser::Closure_expressionContext * ctx) override;
    
    class Closure_signature : public Node
    {
    public:
        Closure_signature() : Node(NodeType::Closure_signature) {}
        void print() {
            if(capture_list_ != nullptr) {
                capture_list_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
            if(function_result_ != nullptr) {
                function_result_->print();
            }
        }
        std::unique_ptr<Node> capture_list_;
        std::unique_ptr<Node> val0; // closure_parameter_clause, capture_list
        std::unique_ptr<Node> function_result_;
    private:
    };
    
    virtual std::any visitClosure_signature(Swift5Parser::Closure_signatureContext * ctx) override;
    
    class Closure_parameter_clause : public Node
    {
    public:
        Closure_parameter_clause() : Node(NodeType::Closure_parameter_clause) {}
        void print() {
            if(closure_parameter_list_ != nullptr) {
                closure_parameter_list_->print();
            }
            if(identifier_list_ != nullptr) {
                identifier_list_->print();
            }
        }
        std::unique_ptr<Node> closure_parameter_list_;
        std::unique_ptr<Node> identifier_list_;
    private:
    };
    
    virtual std::any visitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext * ctx) override;
    
    class Closure_parameter_list : public Node
    {
    public:
        Closure_parameter_list() : Node(NodeType::Closure_parameter_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // closure_parameter, closure_parameter
    private:
    };
    
    virtual std::any visitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext * ctx) override;
    
    class Closure_parameter : public Node
    {
    public:
        Closure_parameter() : Node(NodeType::Closure_parameter) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(type_annotation_ != nullptr) {
                type_annotation_->print();
            }
            if(range_operator_ != nullptr) {
                range_operator_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> type_annotation_;
        std::unique_ptr<Node> range_operator_;
    private:
    };
    
    virtual std::any visitClosure_parameter(Swift5Parser::Closure_parameterContext * ctx) override;
    
    class Capture_list : public Node
    {
    public:
        Capture_list() : Node(NodeType::Capture_list) {}
        void print() {
            if(capture_list_items_ != nullptr) {
                capture_list_items_->print();
            }
        }
        std::unique_ptr<Node> capture_list_items_;
    private:
    };
    
    virtual std::any visitCapture_list(Swift5Parser::Capture_listContext * ctx) override;
    
    class Capture_list_items : public Node
    {
    public:
        Capture_list_items() : Node(NodeType::Capture_list_items) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // capture_list_item, capture_list_item
    private:
    };
    
    virtual std::any visitCapture_list_items(Swift5Parser::Capture_list_itemsContext * ctx) override;
    
    class Capture_list_item : public Node
    {
    public:
        Capture_list_item() : Node(NodeType::Capture_list_item) {}
        void print() {
            if(capture_specifier_ != nullptr) {
                capture_specifier_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> capture_specifier_;
        std::unique_ptr<Node> val0; // identifier, self_expression
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitCapture_list_item(Swift5Parser::Capture_list_itemContext * ctx) override;
    
    class Capture_specifier : public Node
    {
    public:
        Capture_specifier() : Node(NodeType::Capture_specifier) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitCapture_specifier(Swift5Parser::Capture_specifierContext * ctx) override;
    
    class Implicit_member_expression : public Node
    {
    public:
        Implicit_member_expression() : Node(NodeType::Implicit_member_expression) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(postfix_expression_ != nullptr) {
                postfix_expression_->print();
            }
        }
        std::unique_ptr<Node> val0; // identifier, keyword
        std::unique_ptr<Node> postfix_expression_;
    private:
    };
    
    virtual std::any visitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext * ctx) override;
    
    class Parenthesized_operator : public Node
    {
    public:
        Parenthesized_operator() : Node(NodeType::Parenthesized_operator) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext * ctx) override;
    
    class Parenthesized_expression : public Node
    {
    public:
        Parenthesized_expression() : Node(NodeType::Parenthesized_expression) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext * ctx) override;
    
    class Tuple_expression : public Node
    {
    public:
        Tuple_expression() : Node(NodeType::Tuple_expression) {}
        void print() {
            if(tuple_element_ != nullptr) {
                tuple_element_->print();
            }
            if(tuple_element_list_ != nullptr) {
                tuple_element_list_->print();
            }
        }
        std::unique_ptr<Node> tuple_element_;
        std::unique_ptr<Node> tuple_element_list_;
    private:
    };
    
    virtual std::any visitTuple_expression(Swift5Parser::Tuple_expressionContext * ctx) override;
    
    class Selector_expression : public Node
    {
    public:
        Selector_expression() : Node(NodeType::Selector_expression) {}
        void print() {
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitSelector_expression(Swift5Parser::Selector_expressionContext * ctx) override;
    
    class Optional_chaining_suffix : public Node
    {
    public:
        Optional_chaining_suffix() : Node(NodeType::Optional_chaining_suffix) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext * ctx) override;
    
    class Function_call_argument_clause : public Node
    {
    public:
        Function_call_argument_clause() : Node(NodeType::Function_call_argument_clause) {}
        void print() {
            if(function_call_argument_list_ != nullptr) {
                function_call_argument_list_->print();
            }
        }
        std::unique_ptr<Node> function_call_argument_list_;
    private:
    };
    
    virtual std::any visitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext * ctx) override;
    
    class Function_call_argument_list : public Node
    {
    public:
        Function_call_argument_list() : Node(NodeType::Function_call_argument_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // function_call_argument, function_call_argument
    private:
    };
    
    virtual std::any visitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext * ctx) override;
    
    class Function_call_argument : public Node
    {
    public:
        Function_call_argument() : Node(NodeType::Function_call_argument) {}
        void print() {
            if(argument_name_ != nullptr) {
                argument_name_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> argument_name_;
        std::unique_ptr<Node> val0; // identifier, Expression, operator
    private:
    };
    
    virtual std::any visitFunction_call_argument(Swift5Parser::Function_call_argumentContext * ctx) override;
    
    class Labeled_trailing_closures : public Node
    {
    public:
        Labeled_trailing_closures() : Node(NodeType::Labeled_trailing_closures) {}
        void print() {
            for(auto& item : labeled_trailing_closures_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> labeled_trailing_closures_;
    private:
    };
    
    virtual std::any visitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext * ctx) override;
    
    class Labeled_trailing_closure : public Node
    {
    public:
        Labeled_trailing_closure() : Node(NodeType::Labeled_trailing_closure) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
            if(closure_expression_ != nullptr) {
                closure_expression_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
        std::unique_ptr<Node> closure_expression_;
    private:
    };
    
    virtual std::any visitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext * ctx) override;
    
    class Argument_names : public Node
    {
    public:
        Argument_names() : Node(NodeType::Argument_names) {}
        void print() {
            for(auto& item : argument_names_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> argument_names_;
    private:
    };
    
    virtual std::any visitArgument_names(Swift5Parser::Argument_namesContext * ctx) override;
    
    class Argument_name : public Node
    {
    public:
        Argument_name() : Node(NodeType::Argument_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitArgument_name(Swift5Parser::Argument_nameContext * ctx) override;
    
    class Type : public Node
    {
    public:
        Type() : Node(NodeType::Type) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // function_type, array_type, dictionary_type, protocol_composition_type, type_identifier, tuple_type, opaque_type, Type, any_type, self_type, Type
    private:
    };
    
    virtual std::any visitType(Swift5Parser::TypeContext * ctx) override;
    
    class Type_annotation : public Node
    {
    public:
        Type_annotation() : Node(NodeType::Type_annotation) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitType_annotation(Swift5Parser::Type_annotationContext * ctx) override;
    
    class Type_identifier : public Node
    {
    public:
        Type_identifier() : Node(NodeType::Type_identifier) {}
        void print() {
            if(type_name_ != nullptr) {
                type_name_->print();
            }
            if(generic_argument_clause_ != nullptr) {
                generic_argument_clause_->print();
            }
            if(type_identifier_ != nullptr) {
                type_identifier_->print();
            }
        }
        std::unique_ptr<Node> type_name_;
        std::unique_ptr<Node> generic_argument_clause_;
        std::unique_ptr<Node> type_identifier_;
    private:
    };
    
    virtual std::any visitType_identifier(Swift5Parser::Type_identifierContext * ctx) override;
    
    class Type_name : public Node
    {
    public:
        Type_name() : Node(NodeType::Type_name) {}
        void print() {
            if(identifier_ != nullptr) {
                identifier_->print();
            }
        }
        std::unique_ptr<Node> identifier_;
    private:
    };
    
    virtual std::any visitType_name(Swift5Parser::Type_nameContext * ctx) override;
    
    class Tuple_type : public Node
    {
    public:
        Tuple_type() : Node(NodeType::Tuple_type) {}
        void print() {
            if(tuple_type_element_list_ != nullptr) {
                tuple_type_element_list_->print();
            }
        }
        std::unique_ptr<Node> tuple_type_element_list_;
    private:
    };
    
    virtual std::any visitTuple_type(Swift5Parser::Tuple_typeContext * ctx) override;
    
    class Tuple_type_element_list : public Node
    {
    public:
        Tuple_type_element_list() : Node(NodeType::Tuple_type_element_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // tuple_type_element, tuple_type_element
    private:
    };
    
    virtual std::any visitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext * ctx) override;
    
    class Tuple_type_element : public Node
    {
    public:
        Tuple_type_element() : Node(NodeType::Tuple_type_element) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(type_annotation_ != nullptr) {
                type_annotation_->print();
            }
            if(expression_ != nullptr) {
                expression_->print();
            }
        }
        std::unique_ptr<Node> val0; // element_name, Type
        std::unique_ptr<Node> type_annotation_;
        std::unique_ptr<Node> expression_;
    private:
    };
    
    virtual std::any visitTuple_type_element(Swift5Parser::Tuple_type_elementContext * ctx) override;
    
    class Element_name : public Node
    {
    public:
        Element_name() : Node(NodeType::Element_name) {}
        void print() {
            for(auto& item : identifiers_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> identifiers_;
    private:
    };
    
    virtual std::any visitElement_name(Swift5Parser::Element_nameContext * ctx) override;
    
    class Function_type : public Node
    {
    public:
        Function_type() : Node(NodeType::Function_type) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(function_type_argument_clause_ != nullptr) {
                function_type_argument_clause_->print();
            }
            if(arrow_operator_ != nullptr) {
                arrow_operator_->print();
            }
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> function_type_argument_clause_;
        std::unique_ptr<Node> arrow_operator_;
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitFunction_type(Swift5Parser::Function_typeContext * ctx) override;
    
    class Function_type_argument_clause : public Node
    {
    public:
        Function_type_argument_clause() : Node(NodeType::Function_type_argument_clause) {}
        void print() {
            if(function_type_argument_list_ != nullptr) {
                function_type_argument_list_->print();
            }
            if(range_operator_ != nullptr) {
                range_operator_->print();
            }
        }
        std::unique_ptr<Node> function_type_argument_list_;
        std::unique_ptr<Node> range_operator_;
    private:
    };
    
    virtual std::any visitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext * ctx) override;
    
    class Function_type_argument_list : public Node
    {
    public:
        Function_type_argument_list() : Node(NodeType::Function_type_argument_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // function_type_argument, function_type_argument
    private:
    };
    
    virtual std::any visitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext * ctx) override;
    
    class Function_type_argument : public Node
    {
    public:
        Function_type_argument() : Node(NodeType::Function_type_argument) {}
        void print() {
            if(attributes_ != nullptr) {
                attributes_->print();
            }
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> attributes_;
        std::unique_ptr<Node> val0; // Type, argument_label, Type_annotation
    private:
    };
    
    virtual std::any visitFunction_type_argument(Swift5Parser::Function_type_argumentContext * ctx) override;
    
    class Argument_label : public Node
    {
    public:
        Argument_label() : Node(NodeType::Argument_label) {}
        void print() {
            for(auto& item : identifiers_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> identifiers_;
    private:
    };
    
    virtual std::any visitArgument_label(Swift5Parser::Argument_labelContext * ctx) override;
    
    class Array_type : public Node
    {
    public:
        Array_type() : Node(NodeType::Array_type) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitArray_type(Swift5Parser::Array_typeContext * ctx) override;
    
    class Dictionary_type : public Node
    {
    public:
        Dictionary_type() : Node(NodeType::Dictionary_type) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
            if(type1_ != nullptr) {
                type1_->print();
            }
        }
        std::unique_ptr<Node> type_;
        std::unique_ptr<Node> type1_;
    private:
    };
    
    virtual std::any visitDictionary_type(Swift5Parser::Dictionary_typeContext * ctx) override;
    
    class Protocol_composition_type : public Node
    {
    public:
        Protocol_composition_type() : Node(NodeType::Protocol_composition_type) {}
        void print() {
            if(trailing_composition_and_ != nullptr) {
                trailing_composition_and_->print();
            }
            for(auto& item : val0) {
                item->print();
            }
        }
        std::unique_ptr<Node> trailing_composition_and_;
        std::vector<std::unique_ptr<Node>> val0; // Type_identifier, Type_identifier
    private:
    };
    
    virtual std::any visitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext * ctx) override;
    
    class Trailing_composition_and : public Node
    {
    public:
        Trailing_composition_and() : Node(NodeType::Trailing_composition_and) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext * ctx) override;
    
    class Opaque_type : public Node
    {
    public:
        Opaque_type() : Node(NodeType::Opaque_type) {}
        void print() {
            if(type_ != nullptr) {
                type_->print();
            }
        }
        std::unique_ptr<Node> type_;
    private:
    };
    
    virtual std::any visitOpaque_type(Swift5Parser::Opaque_typeContext * ctx) override;
    
    class Any_type : public Node
    {
    public:
        Any_type() : Node(NodeType::Any_type) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitAny_type(Swift5Parser::Any_typeContext * ctx) override;
    
    class Self_type : public Node
    {
    public:
        Self_type() : Node(NodeType::Self_type) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitSelf_type(Swift5Parser::Self_typeContext * ctx) override;
    
    class Type_inheritance_clause : public Node
    {
    public:
        Type_inheritance_clause() : Node(NodeType::Type_inheritance_clause) {}
        void print() {
            if(type_inheritance_list_ != nullptr) {
                type_inheritance_list_->print();
            }
        }
        std::unique_ptr<Node> type_inheritance_list_;
    private:
    };
    
    virtual std::any visitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext * ctx) override;
    
    class Type_inheritance_list : public Node
    {
    public:
        Type_inheritance_list() : Node(NodeType::Type_inheritance_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // Type_identifier, Type_identifier
    private:
    };
    
    virtual std::any visitType_inheritance_list(Swift5Parser::Type_inheritance_listContext * ctx) override;
    
    class Identifier : public Node
    {
    public:
        Identifier() : Node(NodeType::Identifier) {}
        void print() {
            if(str0 != "") std::cout << str0 << std::endl;
            if(keyword_ != nullptr) {
                keyword_->print();
            }
        }
        std::string str0; // Identifier, Identifier
        std::unique_ptr<Node> keyword_;
    private:
    };
    
    virtual std::any visitIdentifier(Swift5Parser::IdentifierContext * ctx) override;
    
    class Identifier_list : public Node
    {
    public:
        Identifier_list() : Node(NodeType::Identifier_list) {}
        void print() {
            for(auto& item : val0) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> val0; // Identifier, Identifier
    private:
    };
    
    virtual std::any visitIdentifier_list(Swift5Parser::Identifier_listContext * ctx) override;
    
    class Keyword : public Node
    {
    public:
        Keyword() : Node(NodeType::Keyword) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitKeyword(Swift5Parser::KeywordContext * ctx) override;
    
    class Assignment_operator : public Node
    {
    public:
        Assignment_operator() : Node(NodeType::Assignment_operator) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitAssignment_operator(Swift5Parser::Assignment_operatorContext * ctx) override;
    
    class Negate_prefix_operator : public Node
    {
    public:
        Negate_prefix_operator() : Node(NodeType::Negate_prefix_operator) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext * ctx) override;
    
    class Compilation_condition_AND : public Node
    {
    public:
        Compilation_condition_AND() : Node(NodeType::Compilation_condition_AND) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext * ctx) override;
    
    class Compilation_condition_OR : public Node
    {
    public:
        Compilation_condition_OR() : Node(NodeType::Compilation_condition_OR) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext * ctx) override;
    
    class Compilation_condition_GE : public Node
    {
    public:
        Compilation_condition_GE() : Node(NodeType::Compilation_condition_GE) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext * ctx) override;
    
    class Compilation_condition_L : public Node
    {
    public:
        Compilation_condition_L() : Node(NodeType::Compilation_condition_L) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext * ctx) override;
    
    class Arrow_operator : public Node
    {
    public:
        Arrow_operator() : Node(NodeType::Arrow_operator) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitArrow_operator(Swift5Parser::Arrow_operatorContext * ctx) override;
    
    class Range_operator : public Node
    {
    public:
        Range_operator() : Node(NodeType::Range_operator) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitRange_operator(Swift5Parser::Range_operatorContext * ctx) override;
    
    class Same_type_equals : public Node
    {
    public:
        Same_type_equals() : Node(NodeType::Same_type_equals) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitSame_type_equals(Swift5Parser::Same_type_equalsContext * ctx) override;
    
    class Binary_operator : public Node
    {
    public:
        Binary_operator() : Node(NodeType::Binary_operator) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitBinary_operator(Swift5Parser::Binary_operatorContext * ctx) override;
    
    class Prefix_operator : public Node
    {
    public:
        Prefix_operator() : Node(NodeType::Prefix_operator) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitPrefix_operator(Swift5Parser::Prefix_operatorContext * ctx) override;
    
    class Postfix_operator : public Node
    {
    public:
        Postfix_operator() : Node(NodeType::Postfix_operator) {}
        void print() {
            if(operator_ != nullptr) {
                operator_->print();
            }
        }
        std::unique_ptr<Node> operator_;
    private:
    };
    
    virtual std::any visitPostfix_operator(Swift5Parser::Postfix_operatorContext * ctx) override;
    
    class Operator : public Node
    {
    public:
        Operator() : Node(NodeType::Operator) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(operator_characters_ != nullptr) {
                operator_characters_->print();
            }
        }
        std::unique_ptr<Node> val0; // operator_head, dot_operator_head, dot_operator_characters
        std::unique_ptr<Node> operator_characters_;
    private:
    };
    
    virtual std::any visitOperator(Swift5Parser::OperatorContext * ctx) override;
    
    class Operator_head : public Node
    {
    public:
        Operator_head() : Node(NodeType::Operator_head) {}
        void print() {
            if(Operator_head_other_ != "") std::cout << Operator_head_other_ << std::endl;
        }
        std::string Operator_head_other_;
    private:
    };
    
    virtual std::any visitOperator_head(Swift5Parser::Operator_headContext * ctx) override;
    
    class Operator_character : public Node
    {
    public:
        Operator_character() : Node(NodeType::Operator_character) {}
        void print() {
            if(operator_head_ != nullptr) {
                operator_head_->print();
            }
            if(Operator_following_character_ != "") std::cout << Operator_following_character_ << std::endl;
        }
        std::unique_ptr<Node> operator_head_;
        std::string Operator_following_character_;
    private:
    };
    
    virtual std::any visitOperator_character(Swift5Parser::Operator_characterContext * ctx) override;
    
    class Operator_characters : public Node
    {
    public:
        Operator_characters() : Node(NodeType::Operator_characters) {}
        void print() {
            for(auto& item : operator_characters_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> operator_characters_;
    private:
    };
    
    virtual std::any visitOperator_characters(Swift5Parser::Operator_charactersContext * ctx) override;
    
    class Dot_operator_head : public Node
    {
    public:
        Dot_operator_head() : Node(NodeType::Dot_operator_head) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitDot_operator_head(Swift5Parser::Dot_operator_headContext * ctx) override;
    
    class Dot_operator_character : public Node
    {
    public:
        Dot_operator_character() : Node(NodeType::Dot_operator_character) {}
        void print() {
            if(operator_character_ != nullptr) {
                operator_character_->print();
            }
        }
        std::unique_ptr<Node> operator_character_;
    private:
    };
    
    virtual std::any visitDot_operator_character(Swift5Parser::Dot_operator_characterContext * ctx) override;
    
    class Dot_operator_characters : public Node
    {
    public:
        Dot_operator_characters() : Node(NodeType::Dot_operator_characters) {}
        void print() {
            for(auto& item : dot_operator_characters_) {
                item->print();
            }
        }
        std::vector<std::unique_ptr<Node>> dot_operator_characters_;
    private:
    };
    
    virtual std::any visitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext * ctx) override;
    
    class Literal : public Node
    {
    public:
        Literal() : Node(NodeType::Literal) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // numeric_literal, string_literal, boolean_literal, nil_literal
    private:
    };
    
    virtual std::any visitLiteral(Swift5Parser::LiteralContext * ctx) override;
    
    class Numeric_literal : public Node
    {
    public:
        Numeric_literal() : Node(NodeType::Numeric_literal) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
            if(integer_literal_ != nullptr) {
                integer_literal_->print();
            }
            if(Floating_point_literal_ != "") std::cout << Floating_point_literal_ << std::endl;
        }
        std::unique_ptr<Node> val0; // Negate_prefix_operator, Negate_prefix_operator
        std::unique_ptr<Node> integer_literal_;
        std::string Floating_point_literal_;
    private:
    };
    
    virtual std::any visitNumeric_literal(Swift5Parser::Numeric_literalContext * ctx) override;
    
    class Boolean_literal : public Node
    {
    public:
        Boolean_literal() : Node(NodeType::Boolean_literal) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitBoolean_literal(Swift5Parser::Boolean_literalContext * ctx) override;
    
    class Nil_literal : public Node
    {
    public:
        Nil_literal() : Node(NodeType::Nil_literal) {}
        void print() {
            
        }
    private:
    };
    
    virtual std::any visitNil_literal(Swift5Parser::Nil_literalContext * ctx) override;
    
    class Integer_literal : public Node
    {
    public:
        Integer_literal() : Node(NodeType::Integer_literal) {}
        void print() {
            if(str0 != "") std::cout << str0 << std::endl;
        }
        std::string str0; // Integer_literal, Integer_literal, Integer_literal, Integer_literal, Integer_literal
    private:
    };
    
    virtual std::any visitInteger_literal(Swift5Parser::Integer_literalContext * ctx) override;
    
    class String_literal : public Node
    {
    public:
        String_literal() : Node(NodeType::String_literal) {}
        void print() {
            if(val0 != nullptr) {
                val0->print();
            }
        }
        std::unique_ptr<Node> val0; // extended_string_literal, interpolated_string_literal, static_string_literal
    private:
    };
    
    virtual std::any visitString_literal(Swift5Parser::String_literalContext * ctx) override;
    
    class Extended_string_literal : public Node
    {
    public:
        Extended_string_literal() : Node(NodeType::Extended_string_literal) {}
        void print() {
            if(str0 != "") std::cout << str0 << std::endl;
            for(std::string& str : str1) {
                if(str != "") std::cout << str << std::endl;
            }
            if(Multi_line_extended_string_close_ != "") std::cout << Multi_line_extended_string_close_ << std::endl;
        }
        std::string str0; // Extended_string_literal, Extended_string_literal, Extended_string_literal
        std::vector<std::string> str1; // Extended_string_literal, Extended_string_literal
        std::string Multi_line_extended_string_close_;
    private:
    };
    
    virtual std::any visitExtended_string_literal(Swift5Parser::Extended_string_literalContext * ctx) override;
    
    class Static_string_literal : public Node
    {
    public:
        Static_string_literal() : Node(NodeType::Static_string_literal) {}
        void print() {
            for(std::string& str : str0) {
                if(str != "") std::cout << str << std::endl;
            }
        }
        std::vector<std::string> str0; // Static_string_literal, Static_string_literal
    private:
    };
    
    virtual std::any visitStatic_string_literal(Swift5Parser::Static_string_literalContext * ctx) override;
    
    class Interpolated_string_literal : public Node
    {
    public:
        Interpolated_string_literal() : Node(NodeType::Interpolated_string_literal) {}
        void print() {
            for(std::string& str : str0) {
                if(str != "") std::cout << str << std::endl;
            }
            for(auto& item : val1) {
                item->print();
            }
        }
        std::vector<std::string> str0; // Interpolated_string_literal, Interpolated_string_literal
        std::vector<std::unique_ptr<Node>> val1; // Expression, Tuple_element, Tuple_element_list, Expression, Tuple_element, Tuple_element_list
    private:
    };
    
    virtual std::any visitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext * ctx) override;
    
private:
    
};