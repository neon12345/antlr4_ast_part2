#include "SwiftSupport.h"

// Generated from Swift5Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Swift5Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Swift5Parser.
 */
class  Swift5ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Swift5Parser.
   */
    virtual std::any visitTop_level(Swift5Parser::Top_levelContext *context) = 0;

    virtual std::any visitStatement(Swift5Parser::StatementContext *context) = 0;

    virtual std::any visitStatements(Swift5Parser::StatementsContext *context) = 0;

    virtual std::any visitLoop_statement(Swift5Parser::Loop_statementContext *context) = 0;

    virtual std::any visitFor_in_statement(Swift5Parser::For_in_statementContext *context) = 0;

    virtual std::any visitWhile_statement(Swift5Parser::While_statementContext *context) = 0;

    virtual std::any visitCondition_list(Swift5Parser::Condition_listContext *context) = 0;

    virtual std::any visitCondition(Swift5Parser::ConditionContext *context) = 0;

    virtual std::any visitCase_condition(Swift5Parser::Case_conditionContext *context) = 0;

    virtual std::any visitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext *context) = 0;

    virtual std::any visitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext *context) = 0;

    virtual std::any visitBranch_statement(Swift5Parser::Branch_statementContext *context) = 0;

    virtual std::any visitIf_statement(Swift5Parser::If_statementContext *context) = 0;

    virtual std::any visitElse_clause(Swift5Parser::Else_clauseContext *context) = 0;

    virtual std::any visitGuard_statement(Swift5Parser::Guard_statementContext *context) = 0;

    virtual std::any visitSwitch_statement(Swift5Parser::Switch_statementContext *context) = 0;

    virtual std::any visitSwitch_cases(Swift5Parser::Switch_casesContext *context) = 0;

    virtual std::any visitSwitch_case(Swift5Parser::Switch_caseContext *context) = 0;

    virtual std::any visitCase_label(Swift5Parser::Case_labelContext *context) = 0;

    virtual std::any visitCase_item_list(Swift5Parser::Case_item_listContext *context) = 0;

    virtual std::any visitDefault_label(Swift5Parser::Default_labelContext *context) = 0;

    virtual std::any visitWhere_clause(Swift5Parser::Where_clauseContext *context) = 0;

    virtual std::any visitWhere_expression(Swift5Parser::Where_expressionContext *context) = 0;

    virtual std::any visitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext *context) = 0;

    virtual std::any visitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext *context) = 0;

    virtual std::any visitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext *context) = 0;

    virtual std::any visitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext *context) = 0;

    virtual std::any visitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext *context) = 0;

    virtual std::any visitLabeled_statement(Swift5Parser::Labeled_statementContext *context) = 0;

    virtual std::any visitStatement_label(Swift5Parser::Statement_labelContext *context) = 0;

    virtual std::any visitLabel_name(Swift5Parser::Label_nameContext *context) = 0;

    virtual std::any visitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext *context) = 0;

    virtual std::any visitBreak_statement(Swift5Parser::Break_statementContext *context) = 0;

    virtual std::any visitContinue_statement(Swift5Parser::Continue_statementContext *context) = 0;

    virtual std::any visitFallthrough_statement(Swift5Parser::Fallthrough_statementContext *context) = 0;

    virtual std::any visitReturn_statement(Swift5Parser::Return_statementContext *context) = 0;

    virtual std::any visitThrow_statement(Swift5Parser::Throw_statementContext *context) = 0;

    virtual std::any visitDefer_statement(Swift5Parser::Defer_statementContext *context) = 0;

    virtual std::any visitDo_statement(Swift5Parser::Do_statementContext *context) = 0;

    virtual std::any visitCatch_clauses(Swift5Parser::Catch_clausesContext *context) = 0;

    virtual std::any visitCatch_clause(Swift5Parser::Catch_clauseContext *context) = 0;

    virtual std::any visitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext *context) = 0;

    virtual std::any visitCatch_pattern(Swift5Parser::Catch_patternContext *context) = 0;

    virtual std::any visitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext *context) = 0;

    virtual std::any visitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext *context) = 0;

    virtual std::any visitIf_directive_clause(Swift5Parser::If_directive_clauseContext *context) = 0;

    virtual std::any visitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext *context) = 0;

    virtual std::any visitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext *context) = 0;

    virtual std::any visitElse_directive_clause(Swift5Parser::Else_directive_clauseContext *context) = 0;

    virtual std::any visitCompilation_condition(Swift5Parser::Compilation_conditionContext *context) = 0;

    virtual std::any visitPlatform_condition(Swift5Parser::Platform_conditionContext *context) = 0;

    virtual std::any visitSwift_version(Swift5Parser::Swift_versionContext *context) = 0;

    virtual std::any visitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext *context) = 0;

    virtual std::any visitOperating_system(Swift5Parser::Operating_systemContext *context) = 0;

    virtual std::any visitArchitecture(Swift5Parser::ArchitectureContext *context) = 0;

    virtual std::any visitModule_name(Swift5Parser::Module_nameContext *context) = 0;

    virtual std::any visitEnvironment(Swift5Parser::EnvironmentContext *context) = 0;

    virtual std::any visitLine_control_statement(Swift5Parser::Line_control_statementContext *context) = 0;

    virtual std::any visitLine_number(Swift5Parser::Line_numberContext *context) = 0;

    virtual std::any visitFile_name(Swift5Parser::File_nameContext *context) = 0;

    virtual std::any visitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext *context) = 0;

    virtual std::any visitDiagnostic_message(Swift5Parser::Diagnostic_messageContext *context) = 0;

    virtual std::any visitAvailability_condition(Swift5Parser::Availability_conditionContext *context) = 0;

    virtual std::any visitAvailability_arguments(Swift5Parser::Availability_argumentsContext *context) = 0;

    virtual std::any visitAvailability_argument(Swift5Parser::Availability_argumentContext *context) = 0;

    virtual std::any visitPlatform_name(Swift5Parser::Platform_nameContext *context) = 0;

    virtual std::any visitPlatform_version(Swift5Parser::Platform_versionContext *context) = 0;

    virtual std::any visitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext *context) = 0;

    virtual std::any visitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext *context) = 0;

    virtual std::any visitGeneric_parameter(Swift5Parser::Generic_parameterContext *context) = 0;

    virtual std::any visitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext *context) = 0;

    virtual std::any visitRequirement_list(Swift5Parser::Requirement_listContext *context) = 0;

    virtual std::any visitRequirement(Swift5Parser::RequirementContext *context) = 0;

    virtual std::any visitConformance_requirement(Swift5Parser::Conformance_requirementContext *context) = 0;

    virtual std::any visitSame_type_requirement(Swift5Parser::Same_type_requirementContext *context) = 0;

    virtual std::any visitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext *context) = 0;

    virtual std::any visitGeneric_argument_list(Swift5Parser::Generic_argument_listContext *context) = 0;

    virtual std::any visitGeneric_argument(Swift5Parser::Generic_argumentContext *context) = 0;

    virtual std::any visitDeclaration(Swift5Parser::DeclarationContext *context) = 0;

    virtual std::any visitDeclarations(Swift5Parser::DeclarationsContext *context) = 0;

    virtual std::any visitTop_level_declaration(Swift5Parser::Top_level_declarationContext *context) = 0;

    virtual std::any visitCode_block(Swift5Parser::Code_blockContext *context) = 0;

    virtual std::any visitImport_declaration(Swift5Parser::Import_declarationContext *context) = 0;

    virtual std::any visitImport_kind(Swift5Parser::Import_kindContext *context) = 0;

    virtual std::any visitImport_path(Swift5Parser::Import_pathContext *context) = 0;

    virtual std::any visitImport_path_identifier(Swift5Parser::Import_path_identifierContext *context) = 0;

    virtual std::any visitConstant_declaration(Swift5Parser::Constant_declarationContext *context) = 0;

    virtual std::any visitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext *context) = 0;

    virtual std::any visitPattern_initializer(Swift5Parser::Pattern_initializerContext *context) = 0;

    virtual std::any visitInitializer(Swift5Parser::InitializerContext *context) = 0;

    virtual std::any visitVariable_declaration(Swift5Parser::Variable_declarationContext *context) = 0;

    virtual std::any visitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext *context) = 0;

    virtual std::any visitVariable_name(Swift5Parser::Variable_nameContext *context) = 0;

    virtual std::any visitGetter_setter_block(Swift5Parser::Getter_setter_blockContext *context) = 0;

    virtual std::any visitGetter_clause(Swift5Parser::Getter_clauseContext *context) = 0;

    virtual std::any visitSetter_clause(Swift5Parser::Setter_clauseContext *context) = 0;

    virtual std::any visitSetter_name(Swift5Parser::Setter_nameContext *context) = 0;

    virtual std::any visitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext *context) = 0;

    virtual std::any visitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext *context) = 0;

    virtual std::any visitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext *context) = 0;

    virtual std::any visitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext *context) = 0;

    virtual std::any visitWillSet_clause(Swift5Parser::WillSet_clauseContext *context) = 0;

    virtual std::any visitDidSet_clause(Swift5Parser::DidSet_clauseContext *context) = 0;

    virtual std::any visitTypealias_declaration(Swift5Parser::Typealias_declarationContext *context) = 0;

    virtual std::any visitTypealias_name(Swift5Parser::Typealias_nameContext *context) = 0;

    virtual std::any visitTypealias_assignment(Swift5Parser::Typealias_assignmentContext *context) = 0;

    virtual std::any visitFunction_declaration(Swift5Parser::Function_declarationContext *context) = 0;

    virtual std::any visitFunction_head(Swift5Parser::Function_headContext *context) = 0;

    virtual std::any visitFunction_name(Swift5Parser::Function_nameContext *context) = 0;

    virtual std::any visitFunction_signature(Swift5Parser::Function_signatureContext *context) = 0;

    virtual std::any visitFunction_result(Swift5Parser::Function_resultContext *context) = 0;

    virtual std::any visitFunction_body(Swift5Parser::Function_bodyContext *context) = 0;

    virtual std::any visitParameter_clause(Swift5Parser::Parameter_clauseContext *context) = 0;

    virtual std::any visitParameter_list(Swift5Parser::Parameter_listContext *context) = 0;

    virtual std::any visitParameter(Swift5Parser::ParameterContext *context) = 0;

    virtual std::any visitExternal_parameter_name(Swift5Parser::External_parameter_nameContext *context) = 0;

    virtual std::any visitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext *context) = 0;

    virtual std::any visitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext *context) = 0;

    virtual std::any visitEnum_declaration(Swift5Parser::Enum_declarationContext *context) = 0;

    virtual std::any visitUnion_style_enum(Swift5Parser::Union_style_enumContext *context) = 0;

    virtual std::any visitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext *context) = 0;

    virtual std::any visitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext *context) = 0;

    virtual std::any visitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext *context) = 0;

    virtual std::any visitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext *context) = 0;

    virtual std::any visitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext *context) = 0;

    virtual std::any visitEnum_name(Swift5Parser::Enum_nameContext *context) = 0;

    virtual std::any visitEnum_case_name(Swift5Parser::Enum_case_nameContext *context) = 0;

    virtual std::any visitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext *context) = 0;

    virtual std::any visitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext *context) = 0;

    virtual std::any visitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext *context) = 0;

    virtual std::any visitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext *context) = 0;

    virtual std::any visitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext *context) = 0;

    virtual std::any visitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext *context) = 0;

    virtual std::any visitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext *context) = 0;

    virtual std::any visitRaw_value_literal(Swift5Parser::Raw_value_literalContext *context) = 0;

    virtual std::any visitStruct_declaration(Swift5Parser::Struct_declarationContext *context) = 0;

    virtual std::any visitStruct_name(Swift5Parser::Struct_nameContext *context) = 0;

    virtual std::any visitStruct_body(Swift5Parser::Struct_bodyContext *context) = 0;

    virtual std::any visitStruct_members(Swift5Parser::Struct_membersContext *context) = 0;

    virtual std::any visitStruct_member(Swift5Parser::Struct_memberContext *context) = 0;

    virtual std::any visitClass_declaration(Swift5Parser::Class_declarationContext *context) = 0;

    virtual std::any visitClass_name(Swift5Parser::Class_nameContext *context) = 0;

    virtual std::any visitClass_body(Swift5Parser::Class_bodyContext *context) = 0;

    virtual std::any visitClass_members(Swift5Parser::Class_membersContext *context) = 0;

    virtual std::any visitClass_member(Swift5Parser::Class_memberContext *context) = 0;

    virtual std::any visitProtocol_declaration(Swift5Parser::Protocol_declarationContext *context) = 0;

    virtual std::any visitProtocol_name(Swift5Parser::Protocol_nameContext *context) = 0;

    virtual std::any visitProtocol_body(Swift5Parser::Protocol_bodyContext *context) = 0;

    virtual std::any visitProtocol_members(Swift5Parser::Protocol_membersContext *context) = 0;

    virtual std::any visitProtocol_member(Swift5Parser::Protocol_memberContext *context) = 0;

    virtual std::any visitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext *context) = 0;

    virtual std::any visitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext *context) = 0;

    virtual std::any visitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext *context) = 0;

    virtual std::any visitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext *context) = 0;

    virtual std::any visitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext *context) = 0;

    virtual std::any visitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext *context) = 0;

    virtual std::any visitInitializer_declaration(Swift5Parser::Initializer_declarationContext *context) = 0;

    virtual std::any visitInitializer_head(Swift5Parser::Initializer_headContext *context) = 0;

    virtual std::any visitInitializer_body(Swift5Parser::Initializer_bodyContext *context) = 0;

    virtual std::any visitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext *context) = 0;

    virtual std::any visitExtension_declaration(Swift5Parser::Extension_declarationContext *context) = 0;

    virtual std::any visitExtension_body(Swift5Parser::Extension_bodyContext *context) = 0;

    virtual std::any visitExtension_members(Swift5Parser::Extension_membersContext *context) = 0;

    virtual std::any visitExtension_member(Swift5Parser::Extension_memberContext *context) = 0;

    virtual std::any visitSubscript_declaration(Swift5Parser::Subscript_declarationContext *context) = 0;

    virtual std::any visitSubscript_head(Swift5Parser::Subscript_headContext *context) = 0;

    virtual std::any visitSubscript_result(Swift5Parser::Subscript_resultContext *context) = 0;

    virtual std::any visitOperator_declaration(Swift5Parser::Operator_declarationContext *context) = 0;

    virtual std::any visitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext *context) = 0;

    virtual std::any visitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext *context) = 0;

    virtual std::any visitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext *context) = 0;

    virtual std::any visitInfix_operator_group(Swift5Parser::Infix_operator_groupContext *context) = 0;

    virtual std::any visitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext *context) = 0;

    virtual std::any visitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext *context) = 0;

    virtual std::any visitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext *context) = 0;

    virtual std::any visitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext *context) = 0;

    virtual std::any visitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext *context) = 0;

    virtual std::any visitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext *context) = 0;

    virtual std::any visitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext *context) = 0;

    virtual std::any visitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext *context) = 0;

    virtual std::any visitDeclaration_modifier(Swift5Parser::Declaration_modifierContext *context) = 0;

    virtual std::any visitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext *context) = 0;

    virtual std::any visitAccess_level_modifier(Swift5Parser::Access_level_modifierContext *context) = 0;

    virtual std::any visitMutation_modifier(Swift5Parser::Mutation_modifierContext *context) = 0;

    virtual std::any visitPattern(Swift5Parser::PatternContext *context) = 0;

    virtual std::any visitWildcard_pattern(Swift5Parser::Wildcard_patternContext *context) = 0;

    virtual std::any visitIdentifier_pattern(Swift5Parser::Identifier_patternContext *context) = 0;

    virtual std::any visitValue_binding_pattern(Swift5Parser::Value_binding_patternContext *context) = 0;

    virtual std::any visitTuple_pattern(Swift5Parser::Tuple_patternContext *context) = 0;

    virtual std::any visitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext *context) = 0;

    virtual std::any visitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext *context) = 0;

    virtual std::any visitEnum_case_pattern(Swift5Parser::Enum_case_patternContext *context) = 0;

    virtual std::any visitOptional_pattern(Swift5Parser::Optional_patternContext *context) = 0;

    virtual std::any visitExpression_pattern(Swift5Parser::Expression_patternContext *context) = 0;

    virtual std::any visitAttribute(Swift5Parser::AttributeContext *context) = 0;

    virtual std::any visitAttribute_name(Swift5Parser::Attribute_nameContext *context) = 0;

    virtual std::any visitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext *context) = 0;

    virtual std::any visitAttributes(Swift5Parser::AttributesContext *context) = 0;

    virtual std::any visitBalanced_tokens(Swift5Parser::Balanced_tokensContext *context) = 0;

    virtual std::any visitBalanced_token(Swift5Parser::Balanced_tokenContext *context) = 0;

    virtual std::any visitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext *context) = 0;

    virtual std::any visitExpression(Swift5Parser::ExpressionContext *context) = 0;

    virtual std::any visitExpression_list(Swift5Parser::Expression_listContext *context) = 0;

    virtual std::any visitPrefix_expression(Swift5Parser::Prefix_expressionContext *context) = 0;

    virtual std::any visitIn_out_expression(Swift5Parser::In_out_expressionContext *context) = 0;

    virtual std::any visitTry_operator(Swift5Parser::Try_operatorContext *context) = 0;

    virtual std::any visitBinary_expression(Swift5Parser::Binary_expressionContext *context) = 0;

    virtual std::any visitBinary_expressions(Swift5Parser::Binary_expressionsContext *context) = 0;

    virtual std::any visitConditional_operator(Swift5Parser::Conditional_operatorContext *context) = 0;

    virtual std::any visitType_casting_operator(Swift5Parser::Type_casting_operatorContext *context) = 0;

    virtual std::any visitPrimary_expression(Swift5Parser::Primary_expressionContext *context) = 0;

    virtual std::any visitUnqualified_name(Swift5Parser::Unqualified_nameContext *context) = 0;

    virtual std::any visitLiteral_expression(Swift5Parser::Literal_expressionContext *context) = 0;

    virtual std::any visitArray_literal(Swift5Parser::Array_literalContext *context) = 0;

    virtual std::any visitArray_literal_items(Swift5Parser::Array_literal_itemsContext *context) = 0;

    virtual std::any visitArray_literal_item(Swift5Parser::Array_literal_itemContext *context) = 0;

    virtual std::any visitDictionary_literal(Swift5Parser::Dictionary_literalContext *context) = 0;

    virtual std::any visitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext *context) = 0;

    virtual std::any visitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext *context) = 0;

    virtual std::any visitPlayground_literal(Swift5Parser::Playground_literalContext *context) = 0;

    virtual std::any visitSelf_pure_expression(Swift5Parser::Self_pure_expressionContext *context) = 0;

    virtual std::any visitSelf_method_expression(Swift5Parser::Self_method_expressionContext *context) = 0;

    virtual std::any visitSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext *context) = 0;

    virtual std::any visitSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext *context) = 0;

    virtual std::any visitSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext *context) = 0;

    virtual std::any visitSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext *context) = 0;

    virtual std::any visitSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext *context) = 0;

    virtual std::any visitClosure_expression(Swift5Parser::Closure_expressionContext *context) = 0;

    virtual std::any visitClosure_signature(Swift5Parser::Closure_signatureContext *context) = 0;

    virtual std::any visitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext *context) = 0;

    virtual std::any visitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext *context) = 0;

    virtual std::any visitClosure_parameter(Swift5Parser::Closure_parameterContext *context) = 0;

    virtual std::any visitCapture_list(Swift5Parser::Capture_listContext *context) = 0;

    virtual std::any visitCapture_list_items(Swift5Parser::Capture_list_itemsContext *context) = 0;

    virtual std::any visitCapture_list_item(Swift5Parser::Capture_list_itemContext *context) = 0;

    virtual std::any visitCapture_specifier(Swift5Parser::Capture_specifierContext *context) = 0;

    virtual std::any visitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext *context) = 0;

    virtual std::any visitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext *context) = 0;

    virtual std::any visitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext *context) = 0;

    virtual std::any visitTuple_expression(Swift5Parser::Tuple_expressionContext *context) = 0;

    virtual std::any visitTuple_element_list(Swift5Parser::Tuple_element_listContext *context) = 0;

    virtual std::any visitTuple_element(Swift5Parser::Tuple_elementContext *context) = 0;

    virtual std::any visitWildcard_expression(Swift5Parser::Wildcard_expressionContext *context) = 0;

    virtual std::any visitKey_path_expression(Swift5Parser::Key_path_expressionContext *context) = 0;

    virtual std::any visitKey_path_components(Swift5Parser::Key_path_componentsContext *context) = 0;

    virtual std::any visitKey_path_component(Swift5Parser::Key_path_componentContext *context) = 0;

    virtual std::any visitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext *context) = 0;

    virtual std::any visitKey_path_postfix(Swift5Parser::Key_path_postfixContext *context) = 0;

    virtual std::any visitSelector_expression(Swift5Parser::Selector_expressionContext *context) = 0;

    virtual std::any visitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext *context) = 0;

    virtual std::any visitPostfix_expression(Swift5Parser::Postfix_expressionContext *context) = 0;

    virtual std::any visitFunction_call_suffix(Swift5Parser::Function_call_suffixContext *context) = 0;

    virtual std::any visitInitializer_suffix(Swift5Parser::Initializer_suffixContext *context) = 0;

    virtual std::any visitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext *context) = 0;

    virtual std::any visitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext *context) = 0;

    virtual std::any visitSubscript_suffix(Swift5Parser::Subscript_suffixContext *context) = 0;

    virtual std::any visitForced_value_suffix(Swift5Parser::Forced_value_suffixContext *context) = 0;

    virtual std::any visitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext *context) = 0;

    virtual std::any visitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext *context) = 0;

    virtual std::any visitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext *context) = 0;

    virtual std::any visitFunction_call_argument(Swift5Parser::Function_call_argumentContext *context) = 0;

    virtual std::any visitTrailing_closures(Swift5Parser::Trailing_closuresContext *context) = 0;

    virtual std::any visitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext *context) = 0;

    virtual std::any visitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext *context) = 0;

    virtual std::any visitArgument_names(Swift5Parser::Argument_namesContext *context) = 0;

    virtual std::any visitArgument_name(Swift5Parser::Argument_nameContext *context) = 0;

    virtual std::any visitType(Swift5Parser::TypeContext *context) = 0;

    virtual std::any visitType_annotation(Swift5Parser::Type_annotationContext *context) = 0;

    virtual std::any visitType_identifier(Swift5Parser::Type_identifierContext *context) = 0;

    virtual std::any visitType_name(Swift5Parser::Type_nameContext *context) = 0;

    virtual std::any visitTuple_type(Swift5Parser::Tuple_typeContext *context) = 0;

    virtual std::any visitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext *context) = 0;

    virtual std::any visitTuple_type_element(Swift5Parser::Tuple_type_elementContext *context) = 0;

    virtual std::any visitElement_name(Swift5Parser::Element_nameContext *context) = 0;

    virtual std::any visitFunction_type(Swift5Parser::Function_typeContext *context) = 0;

    virtual std::any visitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext *context) = 0;

    virtual std::any visitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext *context) = 0;

    virtual std::any visitFunction_type_argument(Swift5Parser::Function_type_argumentContext *context) = 0;

    virtual std::any visitArgument_label(Swift5Parser::Argument_labelContext *context) = 0;

    virtual std::any visitArray_type(Swift5Parser::Array_typeContext *context) = 0;

    virtual std::any visitDictionary_type(Swift5Parser::Dictionary_typeContext *context) = 0;

    virtual std::any visitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext *context) = 0;

    virtual std::any visitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext *context) = 0;

    virtual std::any visitOpaque_type(Swift5Parser::Opaque_typeContext *context) = 0;

    virtual std::any visitAny_type(Swift5Parser::Any_typeContext *context) = 0;

    virtual std::any visitSelf_type(Swift5Parser::Self_typeContext *context) = 0;

    virtual std::any visitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext *context) = 0;

    virtual std::any visitType_inheritance_list(Swift5Parser::Type_inheritance_listContext *context) = 0;

    virtual std::any visitIdentifier(Swift5Parser::IdentifierContext *context) = 0;

    virtual std::any visitIdentifier_list(Swift5Parser::Identifier_listContext *context) = 0;

    virtual std::any visitKeyword(Swift5Parser::KeywordContext *context) = 0;

    virtual std::any visitAssignment_operator(Swift5Parser::Assignment_operatorContext *context) = 0;

    virtual std::any visitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext *context) = 0;

    virtual std::any visitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext *context) = 0;

    virtual std::any visitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext *context) = 0;

    virtual std::any visitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext *context) = 0;

    virtual std::any visitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext *context) = 0;

    virtual std::any visitArrow_operator(Swift5Parser::Arrow_operatorContext *context) = 0;

    virtual std::any visitRange_operator(Swift5Parser::Range_operatorContext *context) = 0;

    virtual std::any visitSame_type_equals(Swift5Parser::Same_type_equalsContext *context) = 0;

    virtual std::any visitBinary_operator(Swift5Parser::Binary_operatorContext *context) = 0;

    virtual std::any visitPrefix_operator(Swift5Parser::Prefix_operatorContext *context) = 0;

    virtual std::any visitPostfix_operator(Swift5Parser::Postfix_operatorContext *context) = 0;

    virtual std::any visitOperator(Swift5Parser::OperatorContext *context) = 0;

    virtual std::any visitOperator_head(Swift5Parser::Operator_headContext *context) = 0;

    virtual std::any visitOperator_character(Swift5Parser::Operator_characterContext *context) = 0;

    virtual std::any visitOperator_characters(Swift5Parser::Operator_charactersContext *context) = 0;

    virtual std::any visitDot_operator_head(Swift5Parser::Dot_operator_headContext *context) = 0;

    virtual std::any visitDot_operator_character(Swift5Parser::Dot_operator_characterContext *context) = 0;

    virtual std::any visitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext *context) = 0;

    virtual std::any visitLiteral(Swift5Parser::LiteralContext *context) = 0;

    virtual std::any visitNumeric_literal(Swift5Parser::Numeric_literalContext *context) = 0;

    virtual std::any visitBoolean_literal(Swift5Parser::Boolean_literalContext *context) = 0;

    virtual std::any visitNil_literal(Swift5Parser::Nil_literalContext *context) = 0;

    virtual std::any visitInteger_literal(Swift5Parser::Integer_literalContext *context) = 0;

    virtual std::any visitString_literal(Swift5Parser::String_literalContext *context) = 0;

    virtual std::any visitExtended_string_literal(Swift5Parser::Extended_string_literalContext *context) = 0;

    virtual std::any visitStatic_string_literal(Swift5Parser::Static_string_literalContext *context) = 0;

    virtual std::any visitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext *context) = 0;


};

