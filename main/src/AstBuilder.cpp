#include "AstBuilder.h"
#include "antlr4-runtime.h"
using namespace antlr4;
AstBuilder::AstBuilder() {}
AstBuilder::~AstBuilder() {}

std::any AstBuilder::visitTop_level(Swift5Parser::Top_levelContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStatement(Swift5Parser::StatementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStatements(Swift5Parser::StatementsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLoop_statement(Swift5Parser::Loop_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFor_in_statement(Swift5Parser::For_in_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWhile_statement(Swift5Parser::While_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCondition_list(Swift5Parser::Condition_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCondition(Swift5Parser::ConditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCase_condition(Swift5Parser::Case_conditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBranch_statement(Swift5Parser::Branch_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIf_statement(Swift5Parser::If_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitElse_clause(Swift5Parser::Else_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGuard_statement(Swift5Parser::Guard_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_statement(Swift5Parser::Switch_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_cases(Swift5Parser::Switch_casesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_case(Swift5Parser::Switch_caseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCase_label(Swift5Parser::Case_labelContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCase_item_list(Swift5Parser::Case_item_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDefault_label(Swift5Parser::Default_labelContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWhere_clause(Swift5Parser::Where_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWhere_expression(Swift5Parser::Where_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLabeled_statement(Swift5Parser::Labeled_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStatement_label(Swift5Parser::Statement_labelContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLabel_name(Swift5Parser::Label_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBreak_statement(Swift5Parser::Break_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitContinue_statement(Swift5Parser::Continue_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFallthrough_statement(Swift5Parser::Fallthrough_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitReturn_statement(Swift5Parser::Return_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitThrow_statement(Swift5Parser::Throw_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDefer_statement(Swift5Parser::Defer_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDo_statement(Swift5Parser::Do_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCatch_clauses(Swift5Parser::Catch_clausesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCatch_clause(Swift5Parser::Catch_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCatch_pattern(Swift5Parser::Catch_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIf_directive_clause(Swift5Parser::If_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitElse_directive_clause(Swift5Parser::Else_directive_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompilation_condition(Swift5Parser::Compilation_conditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPlatform_condition(Swift5Parser::Platform_conditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwift_version(Swift5Parser::Swift_versionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperating_system(Swift5Parser::Operating_systemContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArchitecture(Swift5Parser::ArchitectureContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitModule_name(Swift5Parser::Module_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitEnvironment(Swift5Parser::EnvironmentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLine_control_statement(Swift5Parser::Line_control_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLine_number(Swift5Parser::Line_numberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFile_name(Swift5Parser::File_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDiagnostic_message(Swift5Parser::Diagnostic_messageContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAvailability_condition(Swift5Parser::Availability_conditionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAvailability_arguments(Swift5Parser::Availability_argumentsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAvailability_argument(Swift5Parser::Availability_argumentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPlatform_name(Swift5Parser::Platform_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPlatform_version(Swift5Parser::Platform_versionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_parameter(Swift5Parser::Generic_parameterContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRequirement_list(Swift5Parser::Requirement_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRequirement(Swift5Parser::RequirementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitConformance_requirement(Swift5Parser::Conformance_requirementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSame_type_requirement(Swift5Parser::Same_type_requirementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_argument_list(Swift5Parser::Generic_argument_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGeneric_argument(Swift5Parser::Generic_argumentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDeclaration(Swift5Parser::DeclarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDeclarations(Swift5Parser::DeclarationsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTop_level_declaration(Swift5Parser::Top_level_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCode_block(Swift5Parser::Code_blockContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitImport_declaration(Swift5Parser::Import_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitImport_kind(Swift5Parser::Import_kindContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitImport_path(Swift5Parser::Import_pathContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitImport_path_identifier(Swift5Parser::Import_path_identifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitConstant_declaration(Swift5Parser::Constant_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPattern_initializer(Swift5Parser::Pattern_initializerContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInitializer(Swift5Parser::InitializerContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitVariable_declaration(Swift5Parser::Variable_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitVariable_name(Swift5Parser::Variable_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGetter_setter_block(Swift5Parser::Getter_setter_blockContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGetter_clause(Swift5Parser::Getter_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSetter_clause(Swift5Parser::Setter_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSetter_name(Swift5Parser::Setter_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWillSet_clause(Swift5Parser::WillSet_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDidSet_clause(Swift5Parser::DidSet_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTypealias_declaration(Swift5Parser::Typealias_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTypealias_name(Swift5Parser::Typealias_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTypealias_assignment(Swift5Parser::Typealias_assignmentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_declaration(Swift5Parser::Function_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_head(Swift5Parser::Function_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_name(Swift5Parser::Function_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_signature(Swift5Parser::Function_signatureContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_result(Swift5Parser::Function_resultContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_body(Swift5Parser::Function_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitParameter_clause(Swift5Parser::Parameter_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitParameter_list(Swift5Parser::Parameter_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitParameter(Swift5Parser::ParameterContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExternal_parameter_name(Swift5Parser::External_parameter_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitEnum_declaration(Swift5Parser::Enum_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum(Swift5Parser::Union_style_enumContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitEnum_name(Swift5Parser::Enum_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitEnum_case_name(Swift5Parser::Enum_case_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRaw_value_literal(Swift5Parser::Raw_value_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStruct_declaration(Swift5Parser::Struct_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStruct_name(Swift5Parser::Struct_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStruct_body(Swift5Parser::Struct_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStruct_members(Swift5Parser::Struct_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStruct_member(Swift5Parser::Struct_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClass_declaration(Swift5Parser::Class_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClass_name(Swift5Parser::Class_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClass_body(Swift5Parser::Class_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClass_members(Swift5Parser::Class_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClass_member(Swift5Parser::Class_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_declaration(Swift5Parser::Protocol_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_name(Swift5Parser::Protocol_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_body(Swift5Parser::Protocol_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_members(Swift5Parser::Protocol_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_member(Swift5Parser::Protocol_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInitializer_declaration(Swift5Parser::Initializer_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInitializer_head(Swift5Parser::Initializer_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInitializer_body(Swift5Parser::Initializer_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExtension_declaration(Swift5Parser::Extension_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExtension_body(Swift5Parser::Extension_bodyContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExtension_members(Swift5Parser::Extension_membersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExtension_member(Swift5Parser::Extension_memberContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSubscript_declaration(Swift5Parser::Subscript_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSubscript_head(Swift5Parser::Subscript_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSubscript_result(Swift5Parser::Subscript_resultContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperator_declaration(Swift5Parser::Operator_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInfix_operator_group(Swift5Parser::Infix_operator_groupContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDeclaration_modifier(Swift5Parser::Declaration_modifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAccess_level_modifier(Swift5Parser::Access_level_modifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitMutation_modifier(Swift5Parser::Mutation_modifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPattern(Swift5Parser::PatternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWildcard_pattern(Swift5Parser::Wildcard_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIdentifier_pattern(Swift5Parser::Identifier_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitValue_binding_pattern(Swift5Parser::Value_binding_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_pattern(Swift5Parser::Tuple_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitEnum_case_pattern(Swift5Parser::Enum_case_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOptional_pattern(Swift5Parser::Optional_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExpression_pattern(Swift5Parser::Expression_patternContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAttribute(Swift5Parser::AttributeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAttribute_name(Swift5Parser::Attribute_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAttributes(Swift5Parser::AttributesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBalanced_tokens(Swift5Parser::Balanced_tokensContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBalanced_token(Swift5Parser::Balanced_tokenContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExpression(Swift5Parser::ExpressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExpression_list(Swift5Parser::Expression_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrefix_expression(Swift5Parser::Prefix_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIn_out_expression(Swift5Parser::In_out_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTry_operator(Swift5Parser::Try_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBinary_expression(Swift5Parser::Binary_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBinary_expressions(Swift5Parser::Binary_expressionsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitConditional_operator(Swift5Parser::Conditional_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_casting_operator(Swift5Parser::Type_casting_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrimary_expression(Swift5Parser::Primary_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitUnqualified_name(Swift5Parser::Unqualified_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLiteral_expression(Swift5Parser::Literal_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArray_literal(Swift5Parser::Array_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArray_literal_items(Swift5Parser::Array_literal_itemsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArray_literal_item(Swift5Parser::Array_literal_itemContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDictionary_literal(Swift5Parser::Dictionary_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPlayground_literal(Swift5Parser::Playground_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClosure_expression(Swift5Parser::Closure_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClosure_signature(Swift5Parser::Closure_signatureContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitClosure_parameter(Swift5Parser::Closure_parameterContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCapture_list(Swift5Parser::Capture_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCapture_list_items(Swift5Parser::Capture_list_itemsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCapture_list_item(Swift5Parser::Capture_list_itemContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCapture_specifier(Swift5Parser::Capture_specifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_expression(Swift5Parser::Tuple_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_element_list(Swift5Parser::Tuple_element_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_element(Swift5Parser::Tuple_elementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitWildcard_expression(Swift5Parser::Wildcard_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_expression(Swift5Parser::Key_path_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_components(Swift5Parser::Key_path_componentsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_component(Swift5Parser::Key_path_componentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_postfix(Swift5Parser::Key_path_postfixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSelector_expression(Swift5Parser::Selector_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPostfix_expression(Swift5Parser::Postfix_expressionContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_call_suffix(Swift5Parser::Function_call_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInitializer_suffix(Swift5Parser::Initializer_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSubscript_suffix(Swift5Parser::Subscript_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitForced_value_suffix(Swift5Parser::Forced_value_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_call_argument(Swift5Parser::Function_call_argumentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTrailing_closures(Swift5Parser::Trailing_closuresContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArgument_names(Swift5Parser::Argument_namesContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArgument_name(Swift5Parser::Argument_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType(Swift5Parser::TypeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_annotation(Swift5Parser::Type_annotationContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_identifier(Swift5Parser::Type_identifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_name(Swift5Parser::Type_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_type(Swift5Parser::Tuple_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTuple_type_element(Swift5Parser::Tuple_type_elementContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitElement_name(Swift5Parser::Element_nameContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_type(Swift5Parser::Function_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitFunction_type_argument(Swift5Parser::Function_type_argumentContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArgument_label(Swift5Parser::Argument_labelContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArray_type(Swift5Parser::Array_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDictionary_type(Swift5Parser::Dictionary_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOpaque_type(Swift5Parser::Opaque_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAny_type(Swift5Parser::Any_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSelf_type(Swift5Parser::Self_typeContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitType_inheritance_list(Swift5Parser::Type_inheritance_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIdentifier(Swift5Parser::IdentifierContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitIdentifier_list(Swift5Parser::Identifier_listContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitKeyword(Swift5Parser::KeywordContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitAssignment_operator(Swift5Parser::Assignment_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitArrow_operator(Swift5Parser::Arrow_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitRange_operator(Swift5Parser::Range_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitSame_type_equals(Swift5Parser::Same_type_equalsContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBinary_operator(Swift5Parser::Binary_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPrefix_operator(Swift5Parser::Prefix_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitPostfix_operator(Swift5Parser::Postfix_operatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperator(Swift5Parser::OperatorContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperator_head(Swift5Parser::Operator_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperator_character(Swift5Parser::Operator_characterContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitOperator_characters(Swift5Parser::Operator_charactersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDot_operator_head(Swift5Parser::Dot_operator_headContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDot_operator_character(Swift5Parser::Dot_operator_characterContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitLiteral(Swift5Parser::LiteralContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitNumeric_literal(Swift5Parser::Numeric_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitBoolean_literal(Swift5Parser::Boolean_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitNil_literal(Swift5Parser::Nil_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInteger_literal(Swift5Parser::Integer_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitString_literal(Swift5Parser::String_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitExtended_string_literal(Swift5Parser::Extended_string_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitStatic_string_literal(Swift5Parser::Static_string_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}

std::any AstBuilder::visitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext * ctx) {
    pushNode(ctx);
    visitChildren(ctx);
    return true;
}
