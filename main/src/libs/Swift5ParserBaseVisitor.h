#include "SwiftSupport.h"

// Generated from Swift5Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "Swift5ParserVisitor.h"


/**
 * This class provides an empty implementation of Swift5ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Swift5ParserBaseVisitor : public Swift5ParserVisitor {
public:

  virtual std::any visitTop_level(Swift5Parser::Top_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(Swift5Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(Swift5Parser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop_statement(Swift5Parser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_in_statement(Swift5Parser::For_in_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(Swift5Parser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition_list(Swift5Parser::Condition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(Swift5Parser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_condition(Swift5Parser::Case_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranch_statement(Swift5Parser::Branch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(Swift5Parser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_clause(Swift5Parser::Else_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGuard_statement(Swift5Parser::Guard_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_statement(Swift5Parser::Switch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_cases(Swift5Parser::Switch_casesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_case(Swift5Parser::Switch_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_label(Swift5Parser::Case_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_item_list(Swift5Parser::Case_item_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_label(Swift5Parser::Default_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_clause(Swift5Parser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_expression(Swift5Parser::Where_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeled_statement(Swift5Parser::Labeled_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_label(Swift5Parser::Statement_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel_name(Swift5Parser::Label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak_statement(Swift5Parser::Break_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue_statement(Swift5Parser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFallthrough_statement(Swift5Parser::Fallthrough_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(Swift5Parser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_statement(Swift5Parser::Throw_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefer_statement(Swift5Parser::Defer_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDo_statement(Swift5Parser::Do_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatch_clauses(Swift5Parser::Catch_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatch_clause(Swift5Parser::Catch_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatch_pattern(Swift5Parser::Catch_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_directive_clause(Swift5Parser::If_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_directive_clause(Swift5Parser::Else_directive_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilation_condition(Swift5Parser::Compilation_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlatform_condition(Swift5Parser::Platform_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwift_version(Swift5Parser::Swift_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperating_system(Swift5Parser::Operating_systemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArchitecture(Swift5Parser::ArchitectureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_name(Swift5Parser::Module_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnvironment(Swift5Parser::EnvironmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine_control_statement(Swift5Parser::Line_control_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine_number(Swift5Parser::Line_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_name(Swift5Parser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiagnostic_message(Swift5Parser::Diagnostic_messageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAvailability_condition(Swift5Parser::Availability_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAvailability_arguments(Swift5Parser::Availability_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAvailability_argument(Swift5Parser::Availability_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlatform_name(Swift5Parser::Platform_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlatform_version(Swift5Parser::Platform_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_parameter(Swift5Parser::Generic_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequirement_list(Swift5Parser::Requirement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequirement(Swift5Parser::RequirementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConformance_requirement(Swift5Parser::Conformance_requirementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSame_type_requirement(Swift5Parser::Same_type_requirementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_argument_list(Swift5Parser::Generic_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneric_argument(Swift5Parser::Generic_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(Swift5Parser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarations(Swift5Parser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTop_level_declaration(Swift5Parser::Top_level_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCode_block(Swift5Parser::Code_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_declaration(Swift5Parser::Import_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_kind(Swift5Parser::Import_kindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_path(Swift5Parser::Import_pathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImport_path_identifier(Swift5Parser::Import_path_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_declaration(Swift5Parser::Constant_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern_initializer(Swift5Parser::Pattern_initializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(Swift5Parser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration(Swift5Parser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_name(Swift5Parser::Variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter_setter_block(Swift5Parser::Getter_setter_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter_clause(Swift5Parser::Getter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetter_clause(Swift5Parser::Setter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetter_name(Swift5Parser::Setter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWillSet_clause(Swift5Parser::WillSet_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDidSet_clause(Swift5Parser::DidSet_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypealias_declaration(Swift5Parser::Typealias_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypealias_name(Swift5Parser::Typealias_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypealias_assignment(Swift5Parser::Typealias_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_declaration(Swift5Parser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_head(Swift5Parser::Function_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_name(Swift5Parser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_signature(Swift5Parser::Function_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_result(Swift5Parser::Function_resultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_body(Swift5Parser::Function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_clause(Swift5Parser::Parameter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_list(Swift5Parser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(Swift5Parser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_parameter_name(Swift5Parser::External_parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_declaration(Swift5Parser::Enum_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum(Swift5Parser::Union_style_enumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_name(Swift5Parser::Enum_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_case_name(Swift5Parser::Enum_case_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRaw_value_literal(Swift5Parser::Raw_value_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct_declaration(Swift5Parser::Struct_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct_name(Swift5Parser::Struct_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct_body(Swift5Parser::Struct_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct_members(Swift5Parser::Struct_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct_member(Swift5Parser::Struct_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_declaration(Swift5Parser::Class_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_name(Swift5Parser::Class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_body(Swift5Parser::Class_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_members(Swift5Parser::Class_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_member(Swift5Parser::Class_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_declaration(Swift5Parser::Protocol_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_name(Swift5Parser::Protocol_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_body(Swift5Parser::Protocol_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_members(Swift5Parser::Protocol_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_member(Swift5Parser::Protocol_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer_declaration(Swift5Parser::Initializer_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer_head(Swift5Parser::Initializer_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer_body(Swift5Parser::Initializer_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtension_declaration(Swift5Parser::Extension_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtension_body(Swift5Parser::Extension_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtension_members(Swift5Parser::Extension_membersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtension_member(Swift5Parser::Extension_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript_declaration(Swift5Parser::Subscript_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript_head(Swift5Parser::Subscript_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript_result(Swift5Parser::Subscript_resultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_declaration(Swift5Parser::Operator_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfix_operator_group(Swift5Parser::Infix_operator_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration_modifier(Swift5Parser::Declaration_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_level_modifier(Swift5Parser::Access_level_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMutation_modifier(Swift5Parser::Mutation_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern(Swift5Parser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildcard_pattern(Swift5Parser::Wildcard_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier_pattern(Swift5Parser::Identifier_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_binding_pattern(Swift5Parser::Value_binding_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_pattern(Swift5Parser::Tuple_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_case_pattern(Swift5Parser::Enum_case_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptional_pattern(Swift5Parser::Optional_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_pattern(Swift5Parser::Expression_patternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(Swift5Parser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_name(Swift5Parser::Attribute_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributes(Swift5Parser::AttributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalanced_tokens(Swift5Parser::Balanced_tokensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalanced_token(Swift5Parser::Balanced_tokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(Swift5Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list(Swift5Parser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_expression(Swift5Parser::Prefix_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_out_expression(Swift5Parser::In_out_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTry_operator(Swift5Parser::Try_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_expression(Swift5Parser::Binary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_expressions(Swift5Parser::Binary_expressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_operator(Swift5Parser::Conditional_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_casting_operator(Swift5Parser::Type_casting_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_expression(Swift5Parser::Primary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualified_name(Swift5Parser::Unqualified_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral_expression(Swift5Parser::Literal_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_literal(Swift5Parser::Array_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_literal_items(Swift5Parser::Array_literal_itemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_literal_item(Swift5Parser::Array_literal_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDictionary_literal(Swift5Parser::Dictionary_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlayground_literal(Swift5Parser::Playground_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelf_pure_expression(Swift5Parser::Self_pure_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelf_method_expression(Swift5Parser::Self_method_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClosure_expression(Swift5Parser::Closure_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClosure_signature(Swift5Parser::Closure_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClosure_parameter(Swift5Parser::Closure_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture_list(Swift5Parser::Capture_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture_list_items(Swift5Parser::Capture_list_itemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture_list_item(Swift5Parser::Capture_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture_specifier(Swift5Parser::Capture_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_expression(Swift5Parser::Tuple_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_element_list(Swift5Parser::Tuple_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_element(Swift5Parser::Tuple_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildcard_expression(Swift5Parser::Wildcard_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_expression(Swift5Parser::Key_path_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_components(Swift5Parser::Key_path_componentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_component(Swift5Parser::Key_path_componentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_postfix(Swift5Parser::Key_path_postfixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelector_expression(Swift5Parser::Selector_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_expression(Swift5Parser::Postfix_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_suffix(Swift5Parser::Function_call_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer_suffix(Swift5Parser::Initializer_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript_suffix(Swift5Parser::Subscript_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForced_value_suffix(Swift5Parser::Forced_value_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_argument(Swift5Parser::Function_call_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailing_closures(Swift5Parser::Trailing_closuresContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument_names(Swift5Parser::Argument_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument_name(Swift5Parser::Argument_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(Swift5Parser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_annotation(Swift5Parser::Type_annotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_identifier(Swift5Parser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_name(Swift5Parser::Type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_type(Swift5Parser::Tuple_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple_type_element(Swift5Parser::Tuple_type_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElement_name(Swift5Parser::Element_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_type(Swift5Parser::Function_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_type_argument(Swift5Parser::Function_type_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument_label(Swift5Parser::Argument_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_type(Swift5Parser::Array_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDictionary_type(Swift5Parser::Dictionary_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpaque_type(Swift5Parser::Opaque_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAny_type(Swift5Parser::Any_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelf_type(Swift5Parser::Self_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_inheritance_list(Swift5Parser::Type_inheritance_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(Swift5Parser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier_list(Swift5Parser::Identifier_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyword(Swift5Parser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_operator(Swift5Parser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrow_operator(Swift5Parser::Arrow_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRange_operator(Swift5Parser::Range_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSame_type_equals(Swift5Parser::Same_type_equalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator(Swift5Parser::Binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_operator(Swift5Parser::Prefix_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_operator(Swift5Parser::Postfix_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(Swift5Parser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_head(Swift5Parser::Operator_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_character(Swift5Parser::Operator_characterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_characters(Swift5Parser::Operator_charactersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDot_operator_head(Swift5Parser::Dot_operator_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDot_operator_character(Swift5Parser::Dot_operator_characterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(Swift5Parser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumeric_literal(Swift5Parser::Numeric_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean_literal(Swift5Parser::Boolean_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNil_literal(Swift5Parser::Nil_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_literal(Swift5Parser::Integer_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_literal(Swift5Parser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtended_string_literal(Swift5Parser::Extended_string_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatic_string_literal(Swift5Parser::Static_string_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext *ctx) override {
    return visitChildren(ctx);
  }


};

