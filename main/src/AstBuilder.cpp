#include "AstBuilder.h"
#include "antlr4-runtime.h"
using namespace antlr4;
AstBuilder::AstBuilder() {}
AstBuilder::~AstBuilder() {}

std::any AstBuilder::visitTop_level(Swift5Parser::Top_levelContext * ctx) {
    std::unique_ptr<Top_level> node(new Top_level());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->EOF())) {
        assign_text(node->EOF_, ctx->EOF());
    }
    switch(getState(ctx)) {
        case 631:
            break;
        default:
            break;
    }
    Top_level* ret = node.get();
    node.release();
    return ret;
}

std::any AstBuilder::visitStatement(Swift5Parser::StatementContext * ctx) {
    std::unique_ptr<Statement> node(new Statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 650:
            reinterpret_cast<Statements*>(topNode())->statements_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStatements(Swift5Parser::StatementsContext * ctx) {
    std::unique_ptr<Statements> node(new Statements());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 628:
            reinterpret_cast<Top_level*>(topNode())->statements_ = std::move(node);
            break;
        case 629:
            reinterpret_cast<Top_level*>(topNode())->statements_ = std::move(node);
            break;
        case 743:
            reinterpret_cast<Switch_case*>(topNode())->statements_ = std::move(node);
            break;
        case 892:
            reinterpret_cast<If_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 893:
            reinterpret_cast<If_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 902:
            reinterpret_cast<Elseif_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 903:
            reinterpret_cast<Elseif_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 906:
            reinterpret_cast<Else_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 907:
            reinterpret_cast<Else_directive_clause*>(topNode())->statements_ = std::move(node);
            break;
        case 1128:
            reinterpret_cast<Top_level_declaration*>(topNode())->statements_ = std::move(node);
            break;
        case 1129:
            reinterpret_cast<Top_level_declaration*>(topNode())->statements_ = std::move(node);
            break;
        case 1132:
            reinterpret_cast<Code_block*>(topNode())->statements_ = std::move(node);
            break;
        case 1133:
            reinterpret_cast<Code_block*>(topNode())->statements_ = std::move(node);
            break;
        case 2233:
            reinterpret_cast<Closure_expression*>(topNode())->statements_ = std::move(node);
            break;
        case 2234:
            reinterpret_cast<Closure_expression*>(topNode())->statements_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWhile_statement(Swift5Parser::While_statementContext * ctx) {
    std::unique_ptr<While_statement> node(new While_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 658:
            reinterpret_cast<Loop_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBranch_statement(Swift5Parser::Branch_statementContext * ctx) {
    std::unique_ptr<Branch_statement> node(new Branch_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 635:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLoop_statement(Swift5Parser::Loop_statementContext * ctx) {
    std::unique_ptr<Loop_statement> node(new Loop_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 633:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        case 808:
            reinterpret_cast<Labeled_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFor_in_statement(Swift5Parser::For_in_statementContext * ctx) {
    std::unique_ptr<For_in_statement> node(new For_in_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 657:
            reinterpret_cast<Loop_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_if_directive_clause(Swift5Parser::Switch_if_directive_clauseContext * ctx) {
    std::unique_ptr<Switch_if_directive_clause> node(new Switch_if_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 780:
            reinterpret_cast<Conditional_switch_case*>(topNode())->switch_if_directive_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCondition_list(Swift5Parser::Condition_listContext * ctx) {
    std::unique_ptr<Condition_list> node(new Condition_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 675:
            reinterpret_cast<While_statement*>(topNode())->condition_list_ = std::move(node);
            break;
        case 711:
            reinterpret_cast<If_statement*>(topNode())->condition_list_ = std::move(node);
            break;
        case 723:
            reinterpret_cast<Guard_statement*>(topNode())->condition_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCondition(Swift5Parser::ConditionContext * ctx) {
    std::unique_ptr<Condition> node(new Condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 678:
            reinterpret_cast<Condition_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 680:
            reinterpret_cast<Condition_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCase_condition(Swift5Parser::Case_conditionContext * ctx) {
    std::unique_ptr<Case_condition> node(new Case_condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 688:
            reinterpret_cast<Condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOptional_binding_condition(Swift5Parser::Optional_binding_conditionContext * ctx) {
    std::unique_ptr<Optional_binding_condition> node(new Optional_binding_condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 689:
            reinterpret_cast<Condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRepeat_while_statement(Swift5Parser::Repeat_while_statementContext * ctx) {
    std::unique_ptr<Repeat_while_statement> node(new Repeat_while_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 659:
            reinterpret_cast<Loop_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLabel_name(Swift5Parser::Label_nameContext * ctx) {
    std::unique_ptr<Label_name> node(new Label_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 814:
            reinterpret_cast<Statement_label*>(topNode())->label_name_ = std::move(node);
            break;
        case 827:
            reinterpret_cast<Break_statement*>(topNode())->label_name_ = std::move(node);
            break;
        case 828:
            reinterpret_cast<Break_statement*>(topNode())->label_name_ = std::move(node);
            break;
        case 831:
            reinterpret_cast<Continue_statement*>(topNode())->label_name_ = std::move(node);
            break;
        case 832:
            reinterpret_cast<Continue_statement*>(topNode())->label_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitControl_transfer_statement(Swift5Parser::Control_transfer_statementContext * ctx) {
    std::unique_ptr<Control_transfer_statement> node(new Control_transfer_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 637:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIf_statement(Swift5Parser::If_statementContext * ctx) {
    std::unique_ptr<If_statement> node(new If_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 705:
            reinterpret_cast<Branch_statement*>(topNode())->val0 = std::move(node);
            break;
        case 719:
            reinterpret_cast<Else_clause*>(topNode())->val0 = std::move(node);
            break;
        case 809:
            reinterpret_cast<Labeled_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitElse_clause(Swift5Parser::Else_clauseContext * ctx) {
    std::unique_ptr<Else_clause> node(new Else_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 713:
            reinterpret_cast<If_statement*>(topNode())->else_clause_ = std::move(node);
            break;
        case 714:
            reinterpret_cast<If_statement*>(topNode())->else_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGuard_statement(Swift5Parser::Guard_statementContext * ctx) {
    std::unique_ptr<Guard_statement> node(new Guard_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 706:
            reinterpret_cast<Branch_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_statement(Swift5Parser::Switch_statementContext * ctx) {
    std::unique_ptr<Switch_statement> node(new Switch_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 707:
            reinterpret_cast<Branch_statement*>(topNode())->val0 = std::move(node);
            break;
        case 810:
            reinterpret_cast<Labeled_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_cases(Swift5Parser::Switch_casesContext * ctx) {
    std::unique_ptr<Switch_cases> node(new Switch_cases());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 730:
            reinterpret_cast<Switch_statement*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 731:
            reinterpret_cast<Switch_statement*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 736:
            reinterpret_cast<Switch_cases*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 737:
            reinterpret_cast<Switch_cases*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 791:
            reinterpret_cast<Switch_if_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 792:
            reinterpret_cast<Switch_if_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 800:
            reinterpret_cast<Switch_elseif_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 801:
            reinterpret_cast<Switch_elseif_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 804:
            reinterpret_cast<Switch_else_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        case 805:
            reinterpret_cast<Switch_else_directive_clause*>(topNode())->switch_cases_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_case(Swift5Parser::Switch_caseContext * ctx) {
    std::unique_ptr<Switch_case> node(new Switch_case());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 735:
            reinterpret_cast<Switch_cases*>(topNode())->switch_case_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCase_label(Swift5Parser::Case_labelContext * ctx) {
    std::unique_ptr<Case_label> node(new Case_label());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 739:
            reinterpret_cast<Switch_case*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCase_item_list(Swift5Parser::Case_item_listContext * ctx) {
    std::unique_ptr<Case_item_list> node(new Case_item_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 752:
            reinterpret_cast<Case_label*>(topNode())->case_item_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDefault_label(Swift5Parser::Default_labelContext * ctx) {
    std::unique_ptr<Default_label> node(new Default_label());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 740:
            reinterpret_cast<Switch_case*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWhere_clause(Swift5Parser::Where_clauseContext * ctx) {
    std::unique_ptr<Where_clause> node(new Where_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 669:
            reinterpret_cast<For_in_statement*>(topNode())->where_clause_ = std::move(node);
            break;
        case 670:
            reinterpret_cast<For_in_statement*>(topNode())->where_clause_ = std::move(node);
            break;
        case 756:
            reinterpret_cast<Case_item_list*>(topNode())->where_clause_ = std::move(node);
            break;
        case 757:
            reinterpret_cast<Case_item_list*>(topNode())->where_clause_ = std::move(node);
            break;
        case 761:
            reinterpret_cast<Case_item_list*>(topNode())->where_clauses_.push_back(std::move(node));
            break;
        case 762:
            reinterpret_cast<Case_item_list*>(topNode())->where_clauses_.push_back(std::move(node));
            break;
        case 873:
            reinterpret_cast<Catch_pattern*>(topNode())->where_clause_ = std::move(node);
            break;
        case 874:
            reinterpret_cast<Catch_pattern*>(topNode())->where_clause_ = std::move(node);
            break;
        case 2526:
            reinterpret_cast<For_in_statement*>(topNode())->where_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWhere_expression(Swift5Parser::Where_expressionContext * ctx) {
    std::unique_ptr<Where_expression> node(new Where_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 776:
            reinterpret_cast<Where_clause*>(topNode())->where_expression_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitConditional_switch_case(Swift5Parser::Conditional_switch_caseContext * ctx) {
    std::unique_ptr<Conditional_switch_case> node(new Conditional_switch_case());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 745:
            reinterpret_cast<Switch_case*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLine_number(Swift5Parser::Line_numberContext * ctx) {
    std::unique_ptr<Line_number> node(new Line_number());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_literal())) {
        assign_text(node->Decimal_literal_, ctx->Decimal_literal());
    }
    switch(getState(ctx)) {
        case 995:
            reinterpret_cast<Line_control_statement*>(topNode())->line_number_ = std::move(node);
            break;
        case 1001:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_elseif_directive_clauses(Swift5Parser::Switch_elseif_directive_clausesContext * ctx) {
    std::unique_ptr<Switch_elseif_directive_clauses> node(new Switch_elseif_directive_clauses());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 781:
            reinterpret_cast<Conditional_switch_case*>(topNode())->switch_elseif_directive_clauses_ = std::move(node);
            break;
        case 782:
            reinterpret_cast<Conditional_switch_case*>(topNode())->switch_elseif_directive_clauses_ = std::move(node);
            break;
        case 795:
            reinterpret_cast<Switch_elseif_directive_clauses*>(topNode())->switch_elseif_directive_clauses_ = std::move(node);
            break;
        case 796:
            reinterpret_cast<Switch_elseif_directive_clauses*>(topNode())->switch_elseif_directive_clauses_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_elseif_directive_clause(Swift5Parser::Switch_elseif_directive_clauseContext * ctx) {
    std::unique_ptr<Switch_elseif_directive_clause> node(new Switch_elseif_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwitch_else_directive_clause(Swift5Parser::Switch_else_directive_clauseContext * ctx) {
    std::unique_ptr<Switch_else_directive_clause> node(new Switch_else_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 784:
            reinterpret_cast<Conditional_switch_case*>(topNode())->switch_else_directive_clause_ = std::move(node);
            break;
        case 785:
            reinterpret_cast<Conditional_switch_case*>(topNode())->switch_else_directive_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLabeled_statement(Swift5Parser::Labeled_statementContext * ctx) {
    std::unique_ptr<Labeled_statement> node(new Labeled_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 636:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStatement_label(Swift5Parser::Statement_labelContext * ctx) {
    std::unique_ptr<Statement_label> node(new Statement_label());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 807:
            reinterpret_cast<Labeled_statement*>(topNode())->statement_label_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAvailability_argument(Swift5Parser::Availability_argumentContext * ctx) {
    std::unique_ptr<Availability_argument> node(new Availability_argument());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1017:
            reinterpret_cast<Availability_arguments*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1019:
            reinterpret_cast<Availability_arguments*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPlatform_name(Swift5Parser::Platform_nameContext * ctx) {
    std::unique_ptr<Platform_name> node(new Platform_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1025:
            reinterpret_cast<Availability_argument*>(topNode())->platform_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBreak_statement(Swift5Parser::Break_statementContext * ctx) {
    std::unique_ptr<Break_statement> node(new Break_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 819:
            reinterpret_cast<Control_transfer_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitContinue_statement(Swift5Parser::Continue_statementContext * ctx) {
    std::unique_ptr<Continue_statement> node(new Continue_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 820:
            reinterpret_cast<Control_transfer_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFallthrough_statement(Swift5Parser::Fallthrough_statementContext * ctx) {
    std::unique_ptr<Fallthrough_statement> node(new Fallthrough_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 821:
            reinterpret_cast<Control_transfer_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitReturn_statement(Swift5Parser::Return_statementContext * ctx) {
    std::unique_ptr<Return_statement> node(new Return_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 822:
            reinterpret_cast<Control_transfer_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitThrow_statement(Swift5Parser::Throw_statementContext * ctx) {
    std::unique_ptr<Throw_statement> node(new Throw_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 823:
            reinterpret_cast<Control_transfer_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDefer_statement(Swift5Parser::Defer_statementContext * ctx) {
    std::unique_ptr<Defer_statement> node(new Defer_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 638:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDo_statement(Swift5Parser::Do_statementContext * ctx) {
    std::unique_ptr<Do_statement> node(new Do_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 639:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        case 811:
            reinterpret_cast<Labeled_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCatch_clauses(Swift5Parser::Catch_clausesContext * ctx) {
    std::unique_ptr<Catch_clauses> node(new Catch_clauses());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 848:
            reinterpret_cast<Do_statement*>(topNode())->catch_clauses_ = std::move(node);
            break;
        case 849:
            reinterpret_cast<Do_statement*>(topNode())->catch_clauses_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCatch_clause(Swift5Parser::Catch_clauseContext * ctx) {
    std::unique_ptr<Catch_clause> node(new Catch_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 851:
            reinterpret_cast<Catch_clauses*>(topNode())->catch_clauses_.push_back(std::move(node));
            break;
        case 852:
            reinterpret_cast<Catch_clauses*>(topNode())->catch_clauses_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCatch_pattern_list(Swift5Parser::Catch_pattern_listContext * ctx) {
    std::unique_ptr<Catch_pattern_list> node(new Catch_pattern_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 857:
            reinterpret_cast<Catch_clause*>(topNode())->catch_pattern_list_ = std::move(node);
            break;
        case 858:
            reinterpret_cast<Catch_clause*>(topNode())->catch_pattern_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCatch_pattern(Swift5Parser::Catch_patternContext * ctx) {
    std::unique_ptr<Catch_pattern> node(new Catch_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 862:
            reinterpret_cast<Catch_pattern_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 863:
            reinterpret_cast<Catch_pattern_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 865:
            reinterpret_cast<Catch_pattern_list*>(topNode())->catch_patterns_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompiler_control_statement(Swift5Parser::Compiler_control_statementContext * ctx) {
    std::unique_ptr<Compiler_control_statement> node(new Compiler_control_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 646:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        case 1446:
            reinterpret_cast<Union_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        case 1501:
            reinterpret_cast<Raw_value_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        case 1562:
            reinterpret_cast<Struct_member*>(topNode())->val0 = std::move(node);
            break;
        case 1606:
            reinterpret_cast<Class_member*>(topNode())->val0 = std::move(node);
            break;
        case 1640:
            reinterpret_cast<Protocol_member*>(topNode())->val0 = std::move(node);
            break;
        case 1761:
            reinterpret_cast<Extension_member*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitConditional_compilation_block(Swift5Parser::Conditional_compilation_blockContext * ctx) {
    std::unique_ptr<Conditional_compilation_block> node(new Conditional_compilation_block());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 876:
            reinterpret_cast<Compiler_control_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIf_directive_clause(Swift5Parser::If_directive_clauseContext * ctx) {
    std::unique_ptr<If_directive_clause> node(new If_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 881:
            reinterpret_cast<Conditional_compilation_block*>(topNode())->if_directive_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitElseif_directive_clauses(Swift5Parser::Elseif_directive_clausesContext * ctx) {
    std::unique_ptr<Elseif_directive_clauses> node(new Elseif_directive_clauses());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 882:
            reinterpret_cast<Conditional_compilation_block*>(topNode())->elseif_directive_clauses_ = std::move(node);
            break;
        case 883:
            reinterpret_cast<Conditional_compilation_block*>(topNode())->elseif_directive_clauses_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitElseif_directive_clause(Swift5Parser::Elseif_directive_clauseContext * ctx) {
    std::unique_ptr<Elseif_directive_clause> node(new Elseif_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 794:
            reinterpret_cast<Switch_elseif_directive_clauses*>(topNode())->elseif_directive_clause_ = std::move(node);
            break;
        case 895:
            reinterpret_cast<Elseif_directive_clauses*>(topNode())->elseif_directive_clauses_.push_back(std::move(node));
            break;
        case 896:
            reinterpret_cast<Elseif_directive_clauses*>(topNode())->elseif_directive_clauses_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitElse_directive_clause(Swift5Parser::Else_directive_clauseContext * ctx) {
    std::unique_ptr<Else_directive_clause> node(new Else_directive_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 885:
            reinterpret_cast<Conditional_compilation_block*>(topNode())->else_directive_clause_ = std::move(node);
            break;
        case 886:
            reinterpret_cast<Conditional_compilation_block*>(topNode())->else_directive_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompilation_condition(Swift5Parser::Compilation_conditionContext * ctx) {
    std::unique_ptr<Compilation_condition> node(new Compilation_condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 98:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 790:
            reinterpret_cast<Switch_if_directive_clause*>(topNode())->compilation_condition_ = std::move(node);
            break;
        case 799:
            reinterpret_cast<Switch_elseif_directive_clause*>(topNode())->compilation_condition_ = std::move(node);
            break;
        case 891:
            reinterpret_cast<If_directive_clause*>(topNode())->compilation_condition_ = std::move(node);
            break;
        case 901:
            reinterpret_cast<Elseif_directive_clause*>(topNode())->compilation_condition_ = std::move(node);
            break;
        case 914:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 918:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 919:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 924:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 926:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 928:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 930:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPlatform_condition(Swift5Parser::Platform_conditionContext * ctx) {
    std::unique_ptr<Platform_condition> node(new Platform_condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 910:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwift_version(Swift5Parser::Swift_versionContext * ctx) {
    std::unique_ptr<Swift_version> node(new Swift_version());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->Decimal_digits_, ctx->Decimal_digits());
    }
    switch(getState(ctx)) {
        case 949:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        case 964:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSwift_version_continuation(Swift5Parser::Swift_version_continuationContext * ctx) {
    std::unique_ptr<Swift_version_continuation> node(new Swift_version_continuation());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->Decimal_digits_, ctx->Decimal_digits());
    }
    switch(getState(ctx)) {
        case 965:
            reinterpret_cast<Swift_version*>(topNode())->swift_version_continuation_ = std::move(node);
            break;
        case 966:
            reinterpret_cast<Swift_version*>(topNode())->swift_version_continuation_ = std::move(node);
            break;
        case 969:
            break;
        case 970:
            reinterpret_cast<Swift_version_continuation*>(topNode())->swift_version_continuation_ = std::move(node);
            break;
        case 971:
            reinterpret_cast<Swift_version_continuation*>(topNode())->swift_version_continuation_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperating_system(Swift5Parser::Operating_systemContext * ctx) {
    std::unique_ptr<Operating_system> node(new Operating_system());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 935:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArchitecture(Swift5Parser::ArchitectureContext * ctx) {
    std::unique_ptr<Architecture> node(new Architecture());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 940:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitModule_name(Swift5Parser::Module_nameContext * ctx) {
    std::unique_ptr<Module_name> node(new Module_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 954:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitEnvironment(Swift5Parser::EnvironmentContext * ctx) {
    std::unique_ptr<Environment> node(new Environment());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 959:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLine_control_statement(Swift5Parser::Line_control_statementContext * ctx) {
    std::unique_ptr<Line_control_statement> node(new Line_control_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 877:
            reinterpret_cast<Compiler_control_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case(Swift5Parser::Union_style_enum_caseContext * ctx) {
    std::unique_ptr<Union_style_enum_case> node(new Union_style_enum_case());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1458:
            reinterpret_cast<Union_style_enum_case_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1460:
            reinterpret_cast<Union_style_enum_case_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitEnum_name(Swift5Parser::Enum_nameContext * ctx) {
    std::unique_ptr<Enum_name> node(new Enum_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1423:
            reinterpret_cast<Union_style_enum*>(topNode())->enum_name_ = std::move(node);
            break;
        case 1482:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->enum_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitEnum_case_name(Swift5Parser::Enum_case_nameContext * ctx) {
    std::unique_ptr<Enum_case_name> node(new Enum_case_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1467:
            reinterpret_cast<Union_style_enum_case*>(topNode())->val0 = std::move(node);
            break;
        case 1518:
            reinterpret_cast<Raw_value_style_enum_case*>(topNode())->enum_case_name_ = std::move(node);
            break;
        case 1956:
            reinterpret_cast<Enum_case_pattern*>(topNode())->enum_case_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFile_name(Swift5Parser::File_nameContext * ctx) {
    std::unique_ptr<File_name> node(new File_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 991:
            reinterpret_cast<Line_control_statement*>(topNode())->file_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDiagnostic_statement(Swift5Parser::Diagnostic_statementContext * ctx) {
    std::unique_ptr<Diagnostic_statement> node(new Diagnostic_statement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 878:
            reinterpret_cast<Compiler_control_statement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDiagnostic_message(Swift5Parser::Diagnostic_messageContext * ctx) {
    std::unique_ptr<Diagnostic_message> node(new Diagnostic_message());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1007:
            reinterpret_cast<Diagnostic_statement*>(topNode())->diagnostic_message_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAvailability_condition(Swift5Parser::Availability_conditionContext * ctx) {
    std::unique_ptr<Availability_condition> node(new Availability_condition());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 686:
            reinterpret_cast<Condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAvailability_arguments(Swift5Parser::Availability_argumentsContext * ctx) {
    std::unique_ptr<Availability_arguments> node(new Availability_arguments());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1014:
            reinterpret_cast<Availability_condition*>(topNode())->availability_arguments_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTrailing_closures(Swift5Parser::Trailing_closuresContext * ctx) {
    std::unique_ptr<Trailing_closures> node(new Trailing_closures());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2427:
            reinterpret_cast<Function_call_suffix*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_members(Swift5Parser::Raw_value_style_enum_membersContext * ctx) {
    std::unique_ptr<Raw_value_style_enum_members> node(new Raw_value_style_enum_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1491:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->raw_value_style_enum_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_member(Swift5Parser::Raw_value_style_enum_memberContext * ctx) {
    std::unique_ptr<Raw_value_style_enum_member> node(new Raw_value_style_enum_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1494:
            reinterpret_cast<Raw_value_style_enum_members*>(topNode())->raw_value_style_enum_members_.push_back(std::move(node));
            break;
        case 1495:
            reinterpret_cast<Raw_value_style_enum_members*>(topNode())->raw_value_style_enum_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case_clause(Swift5Parser::Raw_value_style_enum_case_clauseContext * ctx) {
    std::unique_ptr<Raw_value_style_enum_case_clause> node(new Raw_value_style_enum_case_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1500:
            reinterpret_cast<Raw_value_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case_list(Swift5Parser::Raw_value_style_enum_case_listContext * ctx) {
    std::unique_ptr<Raw_value_style_enum_case_list> node(new Raw_value_style_enum_case_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1508:
            reinterpret_cast<Raw_value_style_enum_case_clause*>(topNode())->raw_value_style_enum_case_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum_case(Swift5Parser::Raw_value_style_enum_caseContext * ctx) {
    std::unique_ptr<Raw_value_style_enum_case> node(new Raw_value_style_enum_case());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1510:
            reinterpret_cast<Raw_value_style_enum_case_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1512:
            reinterpret_cast<Raw_value_style_enum_case_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_assignment(Swift5Parser::Raw_value_assignmentContext * ctx) {
    std::unique_ptr<Raw_value_assignment> node(new Raw_value_assignment());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1519:
            reinterpret_cast<Raw_value_style_enum_case*>(topNode())->raw_value_assignment_ = std::move(node);
            break;
        case 1520:
            reinterpret_cast<Raw_value_style_enum_case*>(topNode())->raw_value_assignment_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_literal(Swift5Parser::Raw_value_literalContext * ctx) {
    std::unique_ptr<Raw_value_literal> node(new Raw_value_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1523:
            reinterpret_cast<Raw_value_assignment*>(topNode())->raw_value_literal_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStruct_declaration(Swift5Parser::Struct_declarationContext * ctx) {
    std::unique_ptr<Struct_declaration> node(new Struct_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1109:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPlatform_version(Swift5Parser::Platform_versionContext * ctx) {
    std::unique_ptr<Platform_version> node(new Platform_version());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_literal())) {
        assign_text(node->str0, ctx->Decimal_literal());
    }
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->str0, ctx->Decimal_digits());
    }
    if(!isEmpty(ctx->Floating_point_literal())) {
        assign_text(node->str0, ctx->Floating_point_literal());
    }
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->Decimal_digits_, ctx->Decimal_digits());
    }
    switch(getState(ctx)) {
        case 1026:
            reinterpret_cast<Availability_argument*>(topNode())->platform_version_ = std::move(node);
            break;
        case 1033:
            break;
        case 1034:
            break;
        case 1035:
            break;
        case 1037:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_parameter_clause(Swift5Parser::Generic_parameter_clauseContext * ctx) {
    std::unique_ptr<Generic_parameter_clause> node(new Generic_parameter_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1322:
            reinterpret_cast<Typealias_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1323:
            reinterpret_cast<Typealias_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1334:
            reinterpret_cast<Function_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1335:
            reinterpret_cast<Function_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1424:
            reinterpret_cast<Union_style_enum*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1425:
            reinterpret_cast<Union_style_enum*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1483:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1484:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1538:
            reinterpret_cast<Struct_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1539:
            reinterpret_cast<Struct_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1582:
            reinterpret_cast<Class_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1583:
            reinterpret_cast<Class_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1658:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1659:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1666:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1667:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1704:
            reinterpret_cast<Initializer_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1705:
            reinterpret_cast<Initializer_declaration*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1781:
            reinterpret_cast<Subscript_head*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        case 1782:
            reinterpret_cast<Subscript_head*>(topNode())->generic_parameter_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_parameter_list(Swift5Parser::Generic_parameter_listContext * ctx) {
    std::unique_ptr<Generic_parameter_list> node(new Generic_parameter_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1043:
            reinterpret_cast<Generic_parameter_clause*>(topNode())->generic_parameter_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_parameter(Swift5Parser::Generic_parameterContext * ctx) {
    std::unique_ptr<Generic_parameter> node(new Generic_parameter());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1046:
            reinterpret_cast<Generic_parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1048:
            reinterpret_cast<Generic_parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_where_clause(Swift5Parser::Generic_where_clauseContext * ctx) {
    std::unique_ptr<Generic_where_clause> node(new Generic_where_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1338:
            reinterpret_cast<Function_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1339:
            reinterpret_cast<Function_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1430:
            reinterpret_cast<Union_style_enum*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1431:
            reinterpret_cast<Union_style_enum*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1487:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1488:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1544:
            reinterpret_cast<Struct_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1545:
            reinterpret_cast<Struct_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1588:
            reinterpret_cast<Class_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1589:
            reinterpret_cast<Class_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1622:
            reinterpret_cast<Protocol_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1623:
            reinterpret_cast<Protocol_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1662:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1663:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1676:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1677:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1681:
            reinterpret_cast<Protocol_subscript_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1682:
            reinterpret_cast<Protocol_subscript_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1700:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1701:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1711:
            reinterpret_cast<Initializer_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1712:
            reinterpret_cast<Initializer_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1745:
            reinterpret_cast<Extension_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1746:
            reinterpret_cast<Extension_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1766:
            reinterpret_cast<Subscript_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        case 1767:
            reinterpret_cast<Subscript_declaration*>(topNode())->generic_where_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRequirement_list(Swift5Parser::Requirement_listContext * ctx) {
    std::unique_ptr<Requirement_list> node(new Requirement_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1063:
            reinterpret_cast<Generic_where_clause*>(topNode())->requirement_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRequirement(Swift5Parser::RequirementContext * ctx) {
    std::unique_ptr<Requirement> node(new Requirement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1065:
            reinterpret_cast<Requirement_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1067:
            reinterpret_cast<Requirement_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitConformance_requirement(Swift5Parser::Conformance_requirementContext * ctx) {
    std::unique_ptr<Conformance_requirement> node(new Conformance_requirement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1073:
            reinterpret_cast<Requirement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSame_type_requirement(Swift5Parser::Same_type_requirementContext * ctx) {
    std::unique_ptr<Same_type_requirement> node(new Same_type_requirement());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1074:
            reinterpret_cast<Requirement*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_argument_clause(Swift5Parser::Generic_argument_clauseContext * ctx) {
    std::unique_ptr<Generic_argument_clause> node(new Generic_argument_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2087:
            reinterpret_cast<Primary_expression*>(topNode())->generic_argument_clause_ = std::move(node);
            break;
        case 2088:
            reinterpret_cast<Primary_expression*>(topNode())->generic_argument_clause_ = std::move(node);
            break;
        case 2442:
            reinterpret_cast<Explicit_member_suffix*>(topNode())->val0 = std::move(node);
            break;
        case 2549:
            reinterpret_cast<Type_identifier*>(topNode())->generic_argument_clause_ = std::move(node);
            break;
        case 2550:
            reinterpret_cast<Type_identifier*>(topNode())->generic_argument_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_argument_list(Swift5Parser::Generic_argument_listContext * ctx) {
    std::unique_ptr<Generic_argument_list> node(new Generic_argument_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1090:
            reinterpret_cast<Generic_argument_clause*>(topNode())->generic_argument_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGeneric_argument(Swift5Parser::Generic_argumentContext * ctx) {
    std::unique_ptr<Generic_argument> node(new Generic_argument());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1093:
            reinterpret_cast<Generic_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1095:
            reinterpret_cast<Generic_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDeclaration(Swift5Parser::DeclarationContext * ctx) {
    std::unique_ptr<Declaration> node(new Declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 634:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        case 1123:
            reinterpret_cast<Declarations*>(topNode())->declarations_.push_back(std::move(node));
            break;
        case 1124:
            reinterpret_cast<Declarations*>(topNode())->declarations_.push_back(std::move(node));
            break;
        case 1444:
            reinterpret_cast<Union_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        case 1499:
            reinterpret_cast<Raw_value_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        case 1561:
            reinterpret_cast<Struct_member*>(topNode())->val0 = std::move(node);
            break;
        case 1605:
            reinterpret_cast<Class_member*>(topNode())->val0 = std::move(node);
            break;
        case 1760:
            reinterpret_cast<Extension_member*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSetter_keyword_clause(Swift5Parser::Setter_keyword_clauseContext * ctx) {
    std::unique_ptr<Setter_keyword_clause> node(new Setter_keyword_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1257:
            reinterpret_cast<Getter_setter_keyword_block*>(topNode())->setter_keyword_clause_ = std::move(node);
            break;
        case 1258:
            reinterpret_cast<Getter_setter_keyword_block*>(topNode())->setter_keyword_clause_ = std::move(node);
            break;
        case 1260:
            reinterpret_cast<Getter_setter_keyword_block*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDeclarations(Swift5Parser::DeclarationsContext * ctx) {
    std::unique_ptr<Declarations> node(new Declarations());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTop_level_declaration(Swift5Parser::Top_level_declarationContext * ctx) {
    std::unique_ptr<Top_level_declaration> node(new Top_level_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCode_block(Swift5Parser::Code_blockContext * ctx) {
    std::unique_ptr<Code_block> node(new Code_block());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 672:
            reinterpret_cast<For_in_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 676:
            reinterpret_cast<While_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 701:
            reinterpret_cast<Repeat_while_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 712:
            reinterpret_cast<If_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 717:
            reinterpret_cast<Else_clause*>(topNode())->val0 = std::move(node);
            break;
        case 725:
            reinterpret_cast<Guard_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 844:
            reinterpret_cast<Defer_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 847:
            reinterpret_cast<Do_statement*>(topNode())->code_block_ = std::move(node);
            break;
        case 860:
            reinterpret_cast<Catch_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1225:
            reinterpret_cast<Getter_setter_block*>(topNode())->val0 = std::move(node);
            break;
        case 1235:
            reinterpret_cast<Getter_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1236:
            reinterpret_cast<Getter_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1248:
            reinterpret_cast<Setter_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1249:
            reinterpret_cast<Setter_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1303:
            reinterpret_cast<WillSet_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1312:
            reinterpret_cast<DidSet_clause*>(topNode())->code_block_ = std::move(node);
            break;
        case 1372:
            reinterpret_cast<Function_body*>(topNode())->code_block_ = std::move(node);
            break;
        case 1726:
            reinterpret_cast<Initializer_body*>(topNode())->code_block_ = std::move(node);
            break;
        case 1732:
            reinterpret_cast<Deinitializer_declaration*>(topNode())->code_block_ = std::move(node);
            break;
        case 1769:
            reinterpret_cast<Subscript_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitImport_declaration(Swift5Parser::Import_declarationContext * ctx) {
    std::unique_ptr<Import_declaration> node(new Import_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1103:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitImport_kind(Swift5Parser::Import_kindContext * ctx) {
    std::unique_ptr<Import_kind> node(new Import_kind());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1141:
            reinterpret_cast<Import_declaration*>(topNode())->import_kind_ = std::move(node);
            break;
        case 1142:
            reinterpret_cast<Import_declaration*>(topNode())->import_kind_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitImport_path(Swift5Parser::Import_pathContext * ctx) {
    std::unique_ptr<Import_path> node(new Import_path());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1144:
            reinterpret_cast<Import_declaration*>(topNode())->import_path_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitImport_path_identifier(Swift5Parser::Import_path_identifierContext * ctx) {
    std::unique_ptr<Import_path_identifier> node(new Import_path_identifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1148:
            reinterpret_cast<Import_path*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1150:
            reinterpret_cast<Import_path*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitConstant_declaration(Swift5Parser::Constant_declarationContext * ctx) {
    std::unique_ptr<Constant_declaration> node(new Constant_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1104:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPattern_initializer_list(Swift5Parser::Pattern_initializer_listContext * ctx) {
    std::unique_ptr<Pattern_initializer_list> node(new Pattern_initializer_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1167:
            reinterpret_cast<Constant_declaration*>(topNode())->pattern_initializer_list_ = std::move(node);
            break;
        case 1200:
            reinterpret_cast<Variable_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPattern_initializer(Swift5Parser::Pattern_initializerContext * ctx) {
    std::unique_ptr<Pattern_initializer> node(new Pattern_initializer());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1169:
            reinterpret_cast<Pattern_initializer_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1171:
            reinterpret_cast<Pattern_initializer_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInitializer(Swift5Parser::InitializerContext * ctx) {
    std::unique_ptr<Initializer> node(new Initializer());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 694:
            reinterpret_cast<Case_condition*>(topNode())->initializer_ = std::move(node);
            break;
        case 698:
            reinterpret_cast<Optional_binding_condition*>(topNode())->initializer_ = std::move(node);
            break;
        case 1178:
            reinterpret_cast<Pattern_initializer*>(topNode())->initializer_ = std::move(node);
            break;
        case 1179:
            reinterpret_cast<Pattern_initializer*>(topNode())->initializer_ = std::move(node);
            break;
        case 1186:
            reinterpret_cast<Variable_declaration*>(topNode())->val1 = std::move(node);
            break;
        case 1190:
            reinterpret_cast<Variable_declaration*>(topNode())->initializer_ = std::move(node);
            break;
        case 1191:
            reinterpret_cast<Variable_declaration*>(topNode())->initializer_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitVariable_declaration(Swift5Parser::Variable_declarationContext * ctx) {
    std::unique_ptr<Variable_declaration> node(new Variable_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1105:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitVariable_declaration_head(Swift5Parser::Variable_declaration_headContext * ctx) {
    std::unique_ptr<Variable_declaration_head> node(new Variable_declaration_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1184:
            reinterpret_cast<Variable_declaration*>(topNode())->variable_declaration_head_ = std::move(node);
            break;
        case 1651:
            reinterpret_cast<Protocol_property_declaration*>(topNode())->variable_declaration_head_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitVariable_name(Swift5Parser::Variable_nameContext * ctx) {
    std::unique_ptr<Variable_name> node(new Variable_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1185:
            reinterpret_cast<Variable_declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1652:
            reinterpret_cast<Protocol_property_declaration*>(topNode())->variable_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGetter_setter_block(Swift5Parser::Getter_setter_blockContext * ctx) {
    std::unique_ptr<Getter_setter_block> node(new Getter_setter_block());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1194:
            reinterpret_cast<Variable_declaration*>(topNode())->val1 = std::move(node);
            break;
        case 1770:
            reinterpret_cast<Subscript_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGetter_clause(Swift5Parser::Getter_clauseContext * ctx) {
    std::unique_ptr<Getter_clause> node(new Getter_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1214:
            reinterpret_cast<Getter_setter_block*>(topNode())->val0 = std::move(node);
            break;
        case 1219:
            reinterpret_cast<Getter_setter_block*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSetter_clause(Swift5Parser::Setter_clauseContext * ctx) {
    std::unique_ptr<Setter_clause> node(new Setter_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1215:
            reinterpret_cast<Getter_setter_block*>(topNode())->setter_clause_ = std::move(node);
            break;
        case 1216:
            reinterpret_cast<Getter_setter_block*>(topNode())->setter_clause_ = std::move(node);
            break;
        case 1218:
            reinterpret_cast<Getter_setter_block*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSetter_name(Swift5Parser::Setter_nameContext * ctx) {
    std::unique_ptr<Setter_name> node(new Setter_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1245:
            reinterpret_cast<Setter_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        case 1246:
            reinterpret_cast<Setter_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        case 1300:
            reinterpret_cast<WillSet_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        case 1301:
            reinterpret_cast<WillSet_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        case 1309:
            reinterpret_cast<DidSet_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        case 1310:
            reinterpret_cast<DidSet_clause*>(topNode())->setter_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGetter_setter_keyword_block(Swift5Parser::Getter_setter_keyword_blockContext * ctx) {
    std::unique_ptr<Getter_setter_keyword_block> node(new Getter_setter_keyword_block());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1195:
            reinterpret_cast<Variable_declaration*>(topNode())->val1 = std::move(node);
            break;
        case 1654:
            reinterpret_cast<Protocol_property_declaration*>(topNode())->getter_setter_keyword_block_ = std::move(node);
            break;
        case 1684:
            reinterpret_cast<Protocol_subscript_declaration*>(topNode())->getter_setter_keyword_block_ = std::move(node);
            break;
        case 1771:
            reinterpret_cast<Subscript_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitGetter_keyword_clause(Swift5Parser::Getter_keyword_clauseContext * ctx) {
    std::unique_ptr<Getter_keyword_clause> node(new Getter_keyword_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1256:
            reinterpret_cast<Getter_setter_keyword_block*>(topNode())->val0 = std::move(node);
            break;
        case 1261:
            reinterpret_cast<Getter_setter_keyword_block*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWillSet_didSet_block(Swift5Parser::WillSet_didSet_blockContext * ctx) {
    std::unique_ptr<WillSet_didSet_block> node(new WillSet_didSet_block());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1187:
            reinterpret_cast<Variable_declaration*>(topNode())->willSet_didSet_block_ = std::move(node);
            break;
        case 1193:
            reinterpret_cast<Variable_declaration*>(topNode())->val1 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWillSet_clause(Swift5Parser::WillSet_clauseContext * ctx) {
    std::unique_ptr<WillSet_clause> node(new WillSet_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1284:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val0 = std::move(node);
            break;
        case 1289:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val1 = std::move(node);
            break;
        case 1290:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val1 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDidSet_clause(Swift5Parser::DidSet_clauseContext * ctx) {
    std::unique_ptr<DidSet_clause> node(new DidSet_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1285:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val1 = std::move(node);
            break;
        case 1286:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val1 = std::move(node);
            break;
        case 1288:
            reinterpret_cast<WillSet_didSet_block*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTypealias_declaration(Swift5Parser::Typealias_declarationContext * ctx) {
    std::unique_ptr<Typealias_declaration> node(new Typealias_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1106:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1648:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTypealias_name(Swift5Parser::Typealias_nameContext * ctx) {
    std::unique_ptr<Typealias_name> node(new Typealias_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1321:
            reinterpret_cast<Typealias_declaration*>(topNode())->typealias_name_ = std::move(node);
            break;
        case 1693:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->typealias_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTypealias_assignment(Swift5Parser::Typealias_assignmentContext * ctx) {
    std::unique_ptr<Typealias_assignment> node(new Typealias_assignment());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1325:
            reinterpret_cast<Typealias_declaration*>(topNode())->typealias_assignment_ = std::move(node);
            break;
        case 1697:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->typealias_assignment_ = std::move(node);
            break;
        case 1698:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->typealias_assignment_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_declaration(Swift5Parser::Function_declarationContext * ctx) {
    std::unique_ptr<Function_declaration> node(new Function_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1107:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_head(Swift5Parser::Function_headContext * ctx) {
    std::unique_ptr<Function_head> node(new Function_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1332:
            reinterpret_cast<Function_declaration*>(topNode())->function_head_ = std::move(node);
            break;
        case 1656:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->function_head_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_name(Swift5Parser::Function_nameContext * ctx) {
    std::unique_ptr<Function_name> node(new Function_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1333:
            reinterpret_cast<Function_declaration*>(topNode())->function_name_ = std::move(node);
            break;
        case 1657:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->function_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_signature(Swift5Parser::Function_signatureContext * ctx) {
    std::unique_ptr<Function_signature> node(new Function_signature());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1337:
            reinterpret_cast<Function_declaration*>(topNode())->function_signature_ = std::move(node);
            break;
        case 1661:
            reinterpret_cast<Protocol_method_declaration*>(topNode())->function_signature_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_result(Swift5Parser::Function_resultContext * ctx) {
    std::unique_ptr<Function_result> node(new Function_result());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1363:
            reinterpret_cast<Function_signature*>(topNode())->function_result_ = std::move(node);
            break;
        case 1364:
            reinterpret_cast<Function_signature*>(topNode())->function_result_ = std::move(node);
            break;
        case 2245:
            reinterpret_cast<Closure_signature*>(topNode())->function_result_ = std::move(node);
            break;
        case 2246:
            reinterpret_cast<Closure_signature*>(topNode())->function_result_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_body(Swift5Parser::Function_bodyContext * ctx) {
    std::unique_ptr<Function_body> node(new Function_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1341:
            reinterpret_cast<Function_declaration*>(topNode())->function_body_ = std::move(node);
            break;
        case 1342:
            reinterpret_cast<Function_declaration*>(topNode())->function_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitParameter_clause(Swift5Parser::Parameter_clauseContext * ctx) {
    std::unique_ptr<Parameter_clause> node(new Parameter_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1356:
            reinterpret_cast<Function_signature*>(topNode())->parameter_clause_ = std::move(node);
            break;
        case 1669:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->parameter_clause_ = std::move(node);
            break;
        case 1707:
            reinterpret_cast<Initializer_declaration*>(topNode())->parameter_clause_ = std::move(node);
            break;
        case 1784:
            reinterpret_cast<Subscript_head*>(topNode())->parameter_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitParameter_list(Swift5Parser::Parameter_listContext * ctx) {
    std::unique_ptr<Parameter_list> node(new Parameter_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1375:
            reinterpret_cast<Parameter_clause*>(topNode())->parameter_list_ = std::move(node);
            break;
        case 1376:
            reinterpret_cast<Parameter_clause*>(topNode())->parameter_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitParameter(Swift5Parser::ParameterContext * ctx) {
    std::unique_ptr<Parameter> node(new Parameter());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1380:
            reinterpret_cast<Parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1382:
            reinterpret_cast<Parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExternal_parameter_name(Swift5Parser::External_parameter_nameContext * ctx) {
    std::unique_ptr<External_parameter_name> node(new External_parameter_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1391:
            reinterpret_cast<Parameter*>(topNode())->external_parameter_name_ = std::move(node);
            break;
        case 1392:
            reinterpret_cast<Parameter*>(topNode())->external_parameter_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLocal_parameter_name(Swift5Parser::Local_parameter_nameContext * ctx) {
    std::unique_ptr<Local_parameter_name> node(new Local_parameter_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1394:
            reinterpret_cast<Parameter*>(topNode())->local_parameter_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDefault_argument_clause(Swift5Parser::Default_argument_clauseContext * ctx) {
    std::unique_ptr<Default_argument_clause> node(new Default_argument_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1396:
            reinterpret_cast<Parameter*>(topNode())->default_argument_clause_ = std::move(node);
            break;
        case 1397:
            reinterpret_cast<Parameter*>(topNode())->default_argument_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitEnum_declaration(Swift5Parser::Enum_declarationContext * ctx) {
    std::unique_ptr<Enum_declaration> node(new Enum_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1108:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum(Swift5Parser::Union_style_enumContext * ctx) {
    std::unique_ptr<Union_style_enum> node(new Union_style_enum());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1415:
            reinterpret_cast<Enum_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum_members(Swift5Parser::Union_style_enum_membersContext * ctx) {
    std::unique_ptr<Union_style_enum_members> node(new Union_style_enum_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1434:
            reinterpret_cast<Union_style_enum*>(topNode())->union_style_enum_members_ = std::move(node);
            break;
        case 1435:
            reinterpret_cast<Union_style_enum*>(topNode())->union_style_enum_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum_member(Swift5Parser::Union_style_enum_memberContext * ctx) {
    std::unique_ptr<Union_style_enum_member> node(new Union_style_enum_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1439:
            reinterpret_cast<Union_style_enum_members*>(topNode())->union_style_enum_members_.push_back(std::move(node));
            break;
        case 1440:
            reinterpret_cast<Union_style_enum_members*>(topNode())->union_style_enum_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case_clause(Swift5Parser::Union_style_enum_case_clauseContext * ctx) {
    std::unique_ptr<Union_style_enum_case_clause> node(new Union_style_enum_case_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1445:
            reinterpret_cast<Union_style_enum_member*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnion_style_enum_case_list(Swift5Parser::Union_style_enum_case_listContext * ctx) {
    std::unique_ptr<Union_style_enum_case_list> node(new Union_style_enum_case_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1456:
            reinterpret_cast<Union_style_enum_case_clause*>(topNode())->union_style_enum_case_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_element_list(Swift5Parser::Tuple_element_listContext * ctx) {
    std::unique_ptr<Tuple_element_list> node(new Tuple_element_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2333:
            reinterpret_cast<Tuple_expression*>(topNode())->tuple_element_list_ = std::move(node);
            break;
        case 2839:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        case 2857:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_element(Swift5Parser::Tuple_elementContext * ctx) {
    std::unique_ptr<Tuple_element> node(new Tuple_element());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2331:
            reinterpret_cast<Tuple_expression*>(topNode())->tuple_element_ = std::move(node);
            break;
        case 2338:
            reinterpret_cast<Tuple_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2340:
            reinterpret_cast<Tuple_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2837:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        case 2855:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWildcard_expression(Swift5Parser::Wildcard_expressionContext * ctx) {
    std::unique_ptr<Wildcard_expression> node(new Wildcard_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2100:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_expression(Swift5Parser::Key_path_expressionContext * ctx) {
    std::unique_ptr<Key_path_expression> node(new Key_path_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2101:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_components(Swift5Parser::Key_path_componentsContext * ctx) {
    std::unique_ptr<Key_path_components> node(new Key_path_components());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2360:
            reinterpret_cast<Key_path_expression*>(topNode())->key_path_components_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_component(Swift5Parser::Key_path_componentContext * ctx) {
    std::unique_ptr<Key_path_component> node(new Key_path_component());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2362:
            reinterpret_cast<Key_path_components*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2364:
            reinterpret_cast<Key_path_components*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_postfixes(Swift5Parser::Key_path_postfixesContext * ctx) {
    std::unique_ptr<Key_path_postfixes> node(new Key_path_postfixes());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2371:
            reinterpret_cast<Key_path_component*>(topNode())->key_path_postfixes_ = std::move(node);
            break;
        case 2372:
            reinterpret_cast<Key_path_component*>(topNode())->key_path_postfixes_ = std::move(node);
            break;
        case 2374:
            reinterpret_cast<Key_path_component*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_postfix(Swift5Parser::Key_path_postfixContext * ctx) {
    std::unique_ptr<Key_path_postfix> node(new Key_path_postfix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2377:
            reinterpret_cast<Key_path_postfixes*>(topNode())->key_path_postfixs_.push_back(std::move(node));
            break;
        case 2378:
            reinterpret_cast<Key_path_postfixes*>(topNode())->key_path_postfixs_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRaw_value_style_enum(Swift5Parser::Raw_value_style_enumContext * ctx) {
    std::unique_ptr<Raw_value_style_enum> node(new Raw_value_style_enum());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1416:
            reinterpret_cast<Enum_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKey_path_string_expression(Swift5Parser::Key_path_string_expressionContext * ctx) {
    std::unique_ptr<Key_path_string_expression> node(new Key_path_string_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2103:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPostfix_expression(Swift5Parser::Postfix_expressionContext * ctx) {
    std::unique_ptr<Postfix_expression> node(new Postfix_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2042:
            reinterpret_cast<Prefix_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2317:
            reinterpret_cast<Implicit_member_expression*>(topNode())->postfix_expression_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_call_suffix(Swift5Parser::Function_call_suffixContext * ctx) {
    std::unique_ptr<Function_call_suffix> node(new Function_call_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2406:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInitializer_suffix(Swift5Parser::Initializer_suffixContext * ctx) {
    std::unique_ptr<Initializer_suffix> node(new Initializer_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2407:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExplicit_member_suffix(Swift5Parser::Explicit_member_suffixContext * ctx) {
    std::unique_ptr<Explicit_member_suffix> node(new Explicit_member_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->Decimal_digits_, ctx->Decimal_digits());
    }
    switch(getState(ctx)) {
        case 2408:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2440:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPostfix_self_suffix(Swift5Parser::Postfix_self_suffixContext * ctx) {
    std::unique_ptr<Postfix_self_suffix> node(new Postfix_self_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2409:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSubscript_suffix(Swift5Parser::Subscript_suffixContext * ctx) {
    std::unique_ptr<Subscript_suffix> node(new Subscript_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2410:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitForced_value_suffix(Swift5Parser::Forced_value_suffixContext * ctx) {
    std::unique_ptr<Forced_value_suffix> node(new Forced_value_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2411:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStruct_name(Swift5Parser::Struct_nameContext * ctx) {
    std::unique_ptr<Struct_name> node(new Struct_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1537:
            reinterpret_cast<Struct_declaration*>(topNode())->struct_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStruct_body(Swift5Parser::Struct_bodyContext * ctx) {
    std::unique_ptr<Struct_body> node(new Struct_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1547:
            reinterpret_cast<Struct_declaration*>(topNode())->struct_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStruct_members(Swift5Parser::Struct_membersContext * ctx) {
    std::unique_ptr<Struct_members> node(new Struct_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1552:
            reinterpret_cast<Struct_body*>(topNode())->struct_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStruct_member(Swift5Parser::Struct_memberContext * ctx) {
    std::unique_ptr<Struct_member> node(new Struct_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1555:
            reinterpret_cast<Struct_members*>(topNode())->struct_members_.push_back(std::move(node));
            break;
        case 1556:
            reinterpret_cast<Struct_members*>(topNode())->struct_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClass_declaration(Swift5Parser::Class_declarationContext * ctx) {
    std::unique_ptr<Class_declaration> node(new Class_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1110:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClass_name(Swift5Parser::Class_nameContext * ctx) {
    std::unique_ptr<Class_name> node(new Class_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1581:
            reinterpret_cast<Class_declaration*>(topNode())->class_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClass_body(Swift5Parser::Class_bodyContext * ctx) {
    std::unique_ptr<Class_body> node(new Class_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1591:
            reinterpret_cast<Class_declaration*>(topNode())->class_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClass_members(Swift5Parser::Class_membersContext * ctx) {
    std::unique_ptr<Class_members> node(new Class_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1596:
            reinterpret_cast<Class_body*>(topNode())->class_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClass_member(Swift5Parser::Class_memberContext * ctx) {
    std::unique_ptr<Class_member> node(new Class_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1599:
            reinterpret_cast<Class_members*>(topNode())->class_members_.push_back(std::move(node));
            break;
        case 1600:
            reinterpret_cast<Class_members*>(topNode())->class_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_declaration(Swift5Parser::Protocol_declarationContext * ctx) {
    std::unique_ptr<Protocol_declaration> node(new Protocol_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1111:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_name(Swift5Parser::Protocol_nameContext * ctx) {
    std::unique_ptr<Protocol_name> node(new Protocol_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1616:
            reinterpret_cast<Protocol_declaration*>(topNode())->protocol_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_body(Swift5Parser::Protocol_bodyContext * ctx) {
    std::unique_ptr<Protocol_body> node(new Protocol_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1625:
            reinterpret_cast<Protocol_declaration*>(topNode())->protocol_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_members(Swift5Parser::Protocol_membersContext * ctx) {
    std::unique_ptr<Protocol_members> node(new Protocol_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1630:
            reinterpret_cast<Protocol_body*>(topNode())->protocol_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_member(Swift5Parser::Protocol_memberContext * ctx) {
    std::unique_ptr<Protocol_member> node(new Protocol_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1633:
            reinterpret_cast<Protocol_members*>(topNode())->protocol_members_.push_back(std::move(node));
            break;
        case 1634:
            reinterpret_cast<Protocol_members*>(topNode())->protocol_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_member_declaration(Swift5Parser::Protocol_member_declarationContext * ctx) {
    std::unique_ptr<Protocol_member_declaration> node(new Protocol_member_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1639:
            reinterpret_cast<Protocol_member*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_property_declaration(Swift5Parser::Protocol_property_declarationContext * ctx) {
    std::unique_ptr<Protocol_property_declaration> node(new Protocol_property_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1643:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_method_declaration(Swift5Parser::Protocol_method_declarationContext * ctx) {
    std::unique_ptr<Protocol_method_declaration> node(new Protocol_method_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1644:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_initializer_declaration(Swift5Parser::Protocol_initializer_declarationContext * ctx) {
    std::unique_ptr<Protocol_initializer_declaration> node(new Protocol_initializer_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1645:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_subscript_declaration(Swift5Parser::Protocol_subscript_declarationContext * ctx) {
    std::unique_ptr<Protocol_subscript_declaration> node(new Protocol_subscript_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1646:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_associated_type_declaration(Swift5Parser::Protocol_associated_type_declarationContext * ctx) {
    std::unique_ptr<Protocol_associated_type_declaration> node(new Protocol_associated_type_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1647:
            reinterpret_cast<Protocol_member_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInitializer_declaration(Swift5Parser::Initializer_declarationContext * ctx) {
    std::unique_ptr<Initializer_declaration> node(new Initializer_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1112:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInitializer_head(Swift5Parser::Initializer_headContext * ctx) {
    std::unique_ptr<Initializer_head> node(new Initializer_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1665:
            reinterpret_cast<Protocol_initializer_declaration*>(topNode())->initializer_head_ = std::move(node);
            break;
        case 1703:
            reinterpret_cast<Initializer_declaration*>(topNode())->initializer_head_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInitializer_body(Swift5Parser::Initializer_bodyContext * ctx) {
    std::unique_ptr<Initializer_body> node(new Initializer_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1714:
            reinterpret_cast<Initializer_declaration*>(topNode())->initializer_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDeinitializer_declaration(Swift5Parser::Deinitializer_declarationContext * ctx) {
    std::unique_ptr<Deinitializer_declaration> node(new Deinitializer_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1113:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExtension_declaration(Swift5Parser::Extension_declarationContext * ctx) {
    std::unique_ptr<Extension_declaration> node(new Extension_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1114:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExtension_body(Swift5Parser::Extension_bodyContext * ctx) {
    std::unique_ptr<Extension_body> node(new Extension_body());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1748:
            reinterpret_cast<Extension_declaration*>(topNode())->extension_body_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExtension_members(Swift5Parser::Extension_membersContext * ctx) {
    std::unique_ptr<Extension_members> node(new Extension_members());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1751:
            reinterpret_cast<Extension_body*>(topNode())->extension_members_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExtension_member(Swift5Parser::Extension_memberContext * ctx) {
    std::unique_ptr<Extension_member> node(new Extension_member());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1754:
            reinterpret_cast<Extension_members*>(topNode())->extension_members_.push_back(std::move(node));
            break;
        case 1755:
            reinterpret_cast<Extension_members*>(topNode())->extension_members_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSubscript_declaration(Swift5Parser::Subscript_declarationContext * ctx) {
    std::unique_ptr<Subscript_declaration> node(new Subscript_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1115:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSubscript_head(Swift5Parser::Subscript_headContext * ctx) {
    std::unique_ptr<Subscript_head> node(new Subscript_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1679:
            reinterpret_cast<Protocol_subscript_declaration*>(topNode())->subscript_head_ = std::move(node);
            break;
        case 1764:
            reinterpret_cast<Subscript_declaration*>(topNode())->subscript_head_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSubscript_result(Swift5Parser::Subscript_resultContext * ctx) {
    std::unique_ptr<Subscript_result> node(new Subscript_result());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1680:
            reinterpret_cast<Protocol_subscript_declaration*>(topNode())->subscript_result_ = std::move(node);
            break;
        case 1765:
            reinterpret_cast<Subscript_declaration*>(topNode())->subscript_result_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperator_declaration(Swift5Parser::Operator_declarationContext * ctx) {
    std::unique_ptr<Operator_declaration> node(new Operator_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1116:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrefix_operator_declaration(Swift5Parser::Prefix_operator_declarationContext * ctx) {
    std::unique_ptr<Prefix_operator_declaration> node(new Prefix_operator_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1792:
            reinterpret_cast<Operator_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPostfix_operator_declaration(Swift5Parser::Postfix_operator_declarationContext * ctx) {
    std::unique_ptr<Postfix_operator_declaration> node(new Postfix_operator_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1793:
            reinterpret_cast<Operator_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInfix_operator_declaration(Swift5Parser::Infix_operator_declarationContext * ctx) {
    std::unique_ptr<Infix_operator_declaration> node(new Infix_operator_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1794:
            reinterpret_cast<Operator_declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInfix_operator_group(Swift5Parser::Infix_operator_groupContext * ctx) {
    std::unique_ptr<Infix_operator_group> node(new Infix_operator_group());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1808:
            reinterpret_cast<Infix_operator_declaration*>(topNode())->infix_operator_group_ = std::move(node);
            break;
        case 1809:
            reinterpret_cast<Infix_operator_declaration*>(topNode())->infix_operator_group_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_declaration(Swift5Parser::Precedence_group_declarationContext * ctx) {
    std::unique_ptr<Precedence_group_declaration> node(new Precedence_group_declaration());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1117:
            reinterpret_cast<Declaration*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_attributes(Swift5Parser::Precedence_group_attributesContext * ctx) {
    std::unique_ptr<Precedence_group_attributes> node(new Precedence_group_attributes());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1817:
            reinterpret_cast<Precedence_group_declaration*>(topNode())->precedence_group_attributes_ = std::move(node);
            break;
        case 1818:
            reinterpret_cast<Precedence_group_declaration*>(topNode())->precedence_group_attributes_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_attribute(Swift5Parser::Precedence_group_attributeContext * ctx) {
    std::unique_ptr<Precedence_group_attribute> node(new Precedence_group_attribute());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1822:
            reinterpret_cast<Precedence_group_attributes*>(topNode())->precedence_group_attributes_.push_back(std::move(node));
            break;
        case 1823:
            reinterpret_cast<Precedence_group_attributes*>(topNode())->precedence_group_attributes_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_relation(Swift5Parser::Precedence_group_relationContext * ctx) {
    std::unique_ptr<Precedence_group_relation> node(new Precedence_group_relation());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1827:
            reinterpret_cast<Precedence_group_attribute*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_assignment(Swift5Parser::Precedence_group_assignmentContext * ctx) {
    std::unique_ptr<Precedence_group_assignment> node(new Precedence_group_assignment());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1828:
            reinterpret_cast<Precedence_group_attribute*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_associativity(Swift5Parser::Precedence_group_associativityContext * ctx) {
    std::unique_ptr<Precedence_group_associativity> node(new Precedence_group_associativity());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1829:
            reinterpret_cast<Precedence_group_attribute*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_names(Swift5Parser::Precedence_group_namesContext * ctx) {
    std::unique_ptr<Precedence_group_names> node(new Precedence_group_names());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1834:
            reinterpret_cast<Precedence_group_relation*>(topNode())->precedence_group_names_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrecedence_group_name(Swift5Parser::Precedence_group_nameContext * ctx) {
    std::unique_ptr<Precedence_group_name> node(new Precedence_group_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1812:
            reinterpret_cast<Infix_operator_group*>(topNode())->precedence_group_name_ = std::move(node);
            break;
        case 1815:
            reinterpret_cast<Precedence_group_declaration*>(topNode())->precedence_group_name_ = std::move(node);
            break;
        case 1844:
            reinterpret_cast<Precedence_group_names*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1846:
            reinterpret_cast<Precedence_group_names*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDeclaration_modifier(Swift5Parser::Declaration_modifierContext * ctx) {
    std::unique_ptr<Declaration_modifier> node(new Declaration_modifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1883:
            reinterpret_cast<Declaration_modifiers*>(topNode())->declaration_modifiers_.push_back(std::move(node));
            break;
        case 1884:
            reinterpret_cast<Declaration_modifiers*>(topNode())->declaration_modifiers_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDeclaration_modifiers(Swift5Parser::Declaration_modifiersContext * ctx) {
    std::unique_ptr<Declaration_modifiers> node(new Declaration_modifiers());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1163:
            reinterpret_cast<Constant_declaration*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1164:
            reinterpret_cast<Constant_declaration*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1206:
            reinterpret_cast<Variable_declaration_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1207:
            reinterpret_cast<Variable_declaration_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1347:
            reinterpret_cast<Function_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1348:
            reinterpret_cast<Function_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1719:
            reinterpret_cast<Initializer_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1720:
            reinterpret_cast<Initializer_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1777:
            reinterpret_cast<Subscript_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        case 1778:
            reinterpret_cast<Subscript_head*>(topNode())->declaration_modifiers_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAccess_level_modifier(Swift5Parser::Access_level_modifierContext * ctx) {
    std::unique_ptr<Access_level_modifier> node(new Access_level_modifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1317:
            reinterpret_cast<Typealias_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1318:
            reinterpret_cast<Typealias_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1412:
            reinterpret_cast<Enum_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1413:
            reinterpret_cast<Enum_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1533:
            reinterpret_cast<Struct_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1534:
            reinterpret_cast<Struct_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1568:
            reinterpret_cast<Class_declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1569:
            reinterpret_cast<Class_declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1575:
            reinterpret_cast<Class_declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1576:
            reinterpret_cast<Class_declaration*>(topNode())->val0 = std::move(node);
            break;
        case 1612:
            reinterpret_cast<Protocol_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1613:
            reinterpret_cast<Protocol_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1689:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1690:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1737:
            reinterpret_cast<Extension_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1738:
            reinterpret_cast<Extension_declaration*>(topNode())->access_level_modifier_ = std::move(node);
            break;
        case 1879:
            reinterpret_cast<Declaration_modifier*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitMutation_modifier(Swift5Parser::Mutation_modifierContext * ctx) {
    std::unique_ptr<Mutation_modifier> node(new Mutation_modifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1231:
            reinterpret_cast<Getter_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1232:
            reinterpret_cast<Getter_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1241:
            reinterpret_cast<Setter_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1242:
            reinterpret_cast<Setter_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1270:
            reinterpret_cast<Getter_keyword_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1271:
            reinterpret_cast<Getter_keyword_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1278:
            reinterpret_cast<Setter_keyword_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1279:
            reinterpret_cast<Setter_keyword_clause*>(topNode())->mutation_modifier_ = std::move(node);
            break;
        case 1880:
            reinterpret_cast<Declaration_modifier*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPattern(Swift5Parser::PatternContext * ctx) {
    std::unique_ptr<Pattern> node(new Pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 368:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 666:
            reinterpret_cast<For_in_statement*>(topNode())->pattern_ = std::move(node);
            break;
        case 693:
            reinterpret_cast<Case_condition*>(topNode())->pattern_ = std::move(node);
            break;
        case 697:
            reinterpret_cast<Optional_binding_condition*>(topNode())->pattern_ = std::move(node);
            break;
        case 755:
            reinterpret_cast<Case_item_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 760:
            reinterpret_cast<Case_item_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 872:
            reinterpret_cast<Catch_pattern*>(topNode())->pattern_ = std::move(node);
            break;
        case 1177:
            reinterpret_cast<Pattern_initializer*>(topNode())->pattern_ = std::move(node);
            break;
        case 1900:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1903:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1911:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1916:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1918:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1926:
            reinterpret_cast<Value_binding_pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1928:
            reinterpret_cast<Value_binding_pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1950:
            reinterpret_cast<Tuple_pattern_element*>(topNode())->pattern_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitWildcard_pattern(Swift5Parser::Wildcard_patternContext * ctx) {
    std::unique_ptr<Wildcard_pattern> node(new Wildcard_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1897:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIdentifier_pattern(Swift5Parser::Identifier_patternContext * ctx) {
    std::unique_ptr<Identifier_pattern> node(new Identifier_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1898:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1960:
            reinterpret_cast<Optional_pattern*>(topNode())->identifier_pattern_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitValue_binding_pattern(Swift5Parser::Value_binding_patternContext * ctx) {
    std::unique_ptr<Value_binding_pattern> node(new Value_binding_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1905:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_pattern(Swift5Parser::Tuple_patternContext * ctx) {
    std::unique_ptr<Tuple_pattern> node(new Tuple_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1899:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1957:
            reinterpret_cast<Enum_case_pattern*>(topNode())->tuple_pattern_ = std::move(node);
            break;
        case 1958:
            reinterpret_cast<Enum_case_pattern*>(topNode())->tuple_pattern_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_pattern_element_list(Swift5Parser::Tuple_pattern_element_listContext * ctx) {
    std::unique_ptr<Tuple_pattern_element_list> node(new Tuple_pattern_element_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1932:
            reinterpret_cast<Tuple_pattern*>(topNode())->tuple_pattern_element_list_ = std::move(node);
            break;
        case 1933:
            reinterpret_cast<Tuple_pattern*>(topNode())->tuple_pattern_element_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_pattern_element(Swift5Parser::Tuple_pattern_elementContext * ctx) {
    std::unique_ptr<Tuple_pattern_element> node(new Tuple_pattern_element());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1937:
            reinterpret_cast<Tuple_pattern_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1939:
            reinterpret_cast<Tuple_pattern_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitEnum_case_pattern(Swift5Parser::Enum_case_patternContext * ctx) {
    std::unique_ptr<Enum_case_pattern> node(new Enum_case_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1906:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOptional_pattern(Swift5Parser::Optional_patternContext * ctx) {
    std::unique_ptr<Optional_pattern> node(new Optional_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1907:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExpression_pattern(Swift5Parser::Expression_patternContext * ctx) {
    std::unique_ptr<Expression_pattern> node(new Expression_pattern());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1910:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAttribute(Swift5Parser::AttributeContext * ctx) {
    std::unique_ptr<Attribute> node(new Attribute());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1984:
            reinterpret_cast<Attributes*>(topNode())->attributes_.push_back(std::move(node));
            break;
        case 1985:
            reinterpret_cast<Attributes*>(topNode())->attributes_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAttribute_name(Swift5Parser::Attribute_nameContext * ctx) {
    std::unique_ptr<Attribute_name> node(new Attribute_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1966:
            reinterpret_cast<Attribute*>(topNode())->attribute_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAttribute_argument_clause(Swift5Parser::Attribute_argument_clauseContext * ctx) {
    std::unique_ptr<Attribute_argument_clause> node(new Attribute_argument_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1967:
            reinterpret_cast<Attribute*>(topNode())->attribute_argument_clause_ = std::move(node);
            break;
        case 1968:
            reinterpret_cast<Attribute*>(topNode())->attribute_argument_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAttributes(Swift5Parser::AttributesContext * ctx) {
    std::unique_ptr<Attributes> node(new Attributes());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 748:
            reinterpret_cast<Case_label*>(topNode())->attributes_ = std::move(node);
            break;
        case 749:
            reinterpret_cast<Case_label*>(topNode())->attributes_ = std::move(node);
            break;
        case 769:
            reinterpret_cast<Default_label*>(topNode())->attributes_ = std::move(node);
            break;
        case 770:
            reinterpret_cast<Default_label*>(topNode())->attributes_ = std::move(node);
            break;
        case 1137:
            reinterpret_cast<Import_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1138:
            reinterpret_cast<Import_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1160:
            reinterpret_cast<Constant_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1161:
            reinterpret_cast<Constant_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1203:
            reinterpret_cast<Variable_declaration_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1204:
            reinterpret_cast<Variable_declaration_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1228:
            reinterpret_cast<Getter_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1229:
            reinterpret_cast<Getter_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1238:
            reinterpret_cast<Setter_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1239:
            reinterpret_cast<Setter_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1267:
            reinterpret_cast<Getter_keyword_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1268:
            reinterpret_cast<Getter_keyword_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1275:
            reinterpret_cast<Setter_keyword_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1276:
            reinterpret_cast<Setter_keyword_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1296:
            reinterpret_cast<WillSet_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1297:
            reinterpret_cast<WillSet_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1305:
            reinterpret_cast<DidSet_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1306:
            reinterpret_cast<DidSet_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1314:
            reinterpret_cast<Typealias_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1315:
            reinterpret_cast<Typealias_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1344:
            reinterpret_cast<Function_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1345:
            reinterpret_cast<Function_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1367:
            reinterpret_cast<Function_result*>(topNode())->attributes_ = std::move(node);
            break;
        case 1368:
            reinterpret_cast<Function_result*>(topNode())->attributes_ = std::move(node);
            break;
        case 1388:
            reinterpret_cast<Parameter*>(topNode())->attributes_ = std::move(node);
            break;
        case 1389:
            reinterpret_cast<Parameter*>(topNode())->attributes_ = std::move(node);
            break;
        case 1409:
            reinterpret_cast<Enum_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1410:
            reinterpret_cast<Enum_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1449:
            reinterpret_cast<Union_style_enum_case_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1450:
            reinterpret_cast<Union_style_enum_case_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1504:
            reinterpret_cast<Raw_value_style_enum_case_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1505:
            reinterpret_cast<Raw_value_style_enum_case_clause*>(topNode())->attributes_ = std::move(node);
            break;
        case 1530:
            reinterpret_cast<Struct_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1531:
            reinterpret_cast<Struct_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1565:
            reinterpret_cast<Class_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1566:
            reinterpret_cast<Class_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1609:
            reinterpret_cast<Protocol_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1610:
            reinterpret_cast<Protocol_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1686:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1687:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1716:
            reinterpret_cast<Initializer_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1717:
            reinterpret_cast<Initializer_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1728:
            reinterpret_cast<Deinitializer_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1729:
            reinterpret_cast<Deinitializer_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1734:
            reinterpret_cast<Extension_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1735:
            reinterpret_cast<Extension_declaration*>(topNode())->attributes_ = std::move(node);
            break;
        case 1774:
            reinterpret_cast<Subscript_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1775:
            reinterpret_cast<Subscript_head*>(topNode())->attributes_ = std::move(node);
            break;
        case 1787:
            reinterpret_cast<Subscript_result*>(topNode())->attributes_ = std::move(node);
            break;
        case 1788:
            reinterpret_cast<Subscript_result*>(topNode())->attributes_ = std::move(node);
            break;
        case 2540:
            reinterpret_cast<Type_annotation*>(topNode())->attributes_ = std::move(node);
            break;
        case 2541:
            reinterpret_cast<Type_annotation*>(topNode())->attributes_ = std::move(node);
            break;
        case 2587:
            reinterpret_cast<Function_type*>(topNode())->attributes_ = std::move(node);
            break;
        case 2588:
            reinterpret_cast<Function_type*>(topNode())->attributes_ = std::move(node);
            break;
        case 2614:
            reinterpret_cast<Function_type_argument*>(topNode())->attributes_ = std::move(node);
            break;
        case 2615:
            reinterpret_cast<Function_type_argument*>(topNode())->attributes_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBalanced_tokens(Swift5Parser::Balanced_tokensContext * ctx) {
    std::unique_ptr<Balanced_tokens> node(new Balanced_tokens());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1979:
            reinterpret_cast<Attribute_argument_clause*>(topNode())->balanced_tokens_ = std::move(node);
            break;
        case 1980:
            reinterpret_cast<Attribute_argument_clause*>(topNode())->balanced_tokens_ = std::move(node);
            break;
        case 1995:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        case 1996:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        case 2000:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        case 2001:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        case 2005:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        case 2006:
            reinterpret_cast<Balanced_token*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBalanced_token(Swift5Parser::Balanced_tokenContext * ctx) {
    std::unique_ptr<Balanced_token> node(new Balanced_token());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1989:
            reinterpret_cast<Balanced_tokens*>(topNode())->balanced_tokens_.push_back(std::move(node));
            break;
        case 1990:
            reinterpret_cast<Balanced_tokens*>(topNode())->balanced_tokens_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBalanced_token_punctuation(Swift5Parser::Balanced_token_punctuationContext * ctx) {
    std::unique_ptr<Balanced_token_punctuation> node(new Balanced_token_punctuation());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2013:
            reinterpret_cast<Balanced_token*>(topNode())->val1 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExpression(Swift5Parser::ExpressionContext * ctx) {
    std::unique_ptr<Expression> node(new Expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 640:
            reinterpret_cast<Statement*>(topNode())->val0 = std::move(node);
            break;
        case 668:
            reinterpret_cast<For_in_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 687:
            reinterpret_cast<Condition*>(topNode())->val0 = std::move(node);
            break;
        case 703:
            reinterpret_cast<Repeat_while_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 728:
            reinterpret_cast<Switch_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 778:
            reinterpret_cast<Where_expression*>(topNode())->expression_ = std::move(node);
            break;
        case 837:
            reinterpret_cast<Return_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 838:
            reinterpret_cast<Return_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 841:
            reinterpret_cast<Throw_statement*>(topNode())->expression_ = std::move(node);
            break;
        case 1182:
            reinterpret_cast<Initializer*>(topNode())->expression_ = std::move(node);
            break;
        case 1407:
            reinterpret_cast<Default_argument_clause*>(topNode())->expression_ = std::move(node);
            break;
        case 1963:
            reinterpret_cast<Expression_pattern*>(topNode())->expression_ = std::move(node);
            break;
        case 2031:
            reinterpret_cast<Expression_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2033:
            reinterpret_cast<Expression_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2074:
            reinterpret_cast<Conditional_operator*>(topNode())->expression_ = std::move(node);
            break;
        case 2143:
            reinterpret_cast<Array_literal_item*>(topNode())->expression_ = std::move(node);
            break;
        case 2163:
            reinterpret_cast<Dictionary_literal_item*>(topNode())->expression_ = std::move(node);
            break;
        case 2165:
            reinterpret_cast<Dictionary_literal_item*>(topNode())->expression1_ = std::move(node);
            break;
        case 2171:
            reinterpret_cast<Playground_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2175:
            reinterpret_cast<Playground_literal*>(topNode())->expression_ = std::move(node);
            break;
        case 2179:
            reinterpret_cast<Playground_literal*>(topNode())->expression1_ = std::move(node);
            break;
        case 2183:
            reinterpret_cast<Playground_literal*>(topNode())->expression11_ = std::move(node);
            break;
        case 2190:
            reinterpret_cast<Playground_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2197:
            reinterpret_cast<Playground_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2297:
            reinterpret_cast<Capture_list_item*>(topNode())->expression_ = std::move(node);
            break;
        case 2325:
            reinterpret_cast<Parenthesized_expression*>(topNode())->expression_ = std::move(node);
            break;
        case 2351:
            reinterpret_cast<Tuple_element*>(topNode())->expression_ = std::move(node);
            break;
        case 2397:
            reinterpret_cast<Selector_expression*>(topNode())->expression_ = std::move(node);
            break;
        case 2402:
            reinterpret_cast<Key_path_string_expression*>(topNode())->expression_ = std::move(node);
            break;
        case 2482:
            reinterpret_cast<Function_call_argument*>(topNode())->val0 = std::move(node);
            break;
        case 2579:
            reinterpret_cast<Tuple_type_element*>(topNode())->expression_ = std::move(node);
            break;
        case 2836:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        case 2854:
            reinterpret_cast<Interpolated_string_literal*>(topNode())->val1.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExpression_list(Swift5Parser::Expression_listContext * ctx) {
    std::unique_ptr<Expression_list> node(new Expression_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrefix_expression(Swift5Parser::Prefix_expressionContext * ctx) {
    std::unique_ptr<Prefix_expression> node(new Prefix_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2027:
            reinterpret_cast<Expression*>(topNode())->prefix_expression_ = std::move(node);
            break;
        case 2054:
            reinterpret_cast<Binary_expression*>(topNode())->prefix_expression_ = std::move(node);
            break;
        case 2063:
            reinterpret_cast<Binary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIn_out_expression(Swift5Parser::In_out_expressionContext * ctx) {
    std::unique_ptr<In_out_expression> node(new In_out_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2043:
            reinterpret_cast<Prefix_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTry_operator(Swift5Parser::Try_operatorContext * ctx) {
    std::unique_ptr<Try_operator> node(new Try_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2024:
            reinterpret_cast<Expression*>(topNode())->try_operator_ = std::move(node);
            break;
        case 2025:
            reinterpret_cast<Expression*>(topNode())->try_operator_ = std::move(node);
            break;
        case 2060:
            reinterpret_cast<Binary_expression*>(topNode())->try_operator_ = std::move(node);
            break;
        case 2061:
            reinterpret_cast<Binary_expression*>(topNode())->try_operator_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBinary_expression(Swift5Parser::Binary_expressionContext * ctx) {
    std::unique_ptr<Binary_expression> node(new Binary_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2068:
            reinterpret_cast<Binary_expressions*>(topNode())->binary_expressions_.push_back(std::move(node));
            break;
        case 2069:
            reinterpret_cast<Binary_expressions*>(topNode())->binary_expressions_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBinary_expressions(Swift5Parser::Binary_expressionsContext * ctx) {
    std::unique_ptr<Binary_expressions> node(new Binary_expressions());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2028:
            reinterpret_cast<Expression*>(topNode())->binary_expressions_ = std::move(node);
            break;
        case 2029:
            reinterpret_cast<Expression*>(topNode())->binary_expressions_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitConditional_operator(Swift5Parser::Conditional_operatorContext * ctx) {
    std::unique_ptr<Conditional_operator> node(new Conditional_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2057:
            reinterpret_cast<Binary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_casting_operator(Swift5Parser::Type_casting_operatorContext * ctx) {
    std::unique_ptr<Type_casting_operator> node(new Type_casting_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2065:
            reinterpret_cast<Binary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrimary_expression(Swift5Parser::Primary_expressionContext * ctx) {
    std::unique_ptr<Primary_expression> node(new Primary_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2405:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitUnqualified_name(Swift5Parser::Unqualified_nameContext * ctx) {
    std::unique_ptr<Unqualified_name> node(new Unqualified_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2086:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLiteral_expression(Swift5Parser::Literal_expressionContext * ctx) {
    std::unique_ptr<Literal_expression> node(new Literal_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2092:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArray_literal(Swift5Parser::Array_literalContext * ctx) {
    std::unique_ptr<Array_literal> node(new Array_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2114:
            reinterpret_cast<Literal_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArray_literal_items(Swift5Parser::Array_literal_itemsContext * ctx) {
    std::unique_ptr<Array_literal_items> node(new Array_literal_items());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2127:
            reinterpret_cast<Array_literal*>(topNode())->array_literal_items_ = std::move(node);
            break;
        case 2128:
            reinterpret_cast<Array_literal*>(topNode())->array_literal_items_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArray_literal_item(Swift5Parser::Array_literal_itemContext * ctx) {
    std::unique_ptr<Array_literal_item> node(new Array_literal_item());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2132:
            reinterpret_cast<Array_literal_items*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2134:
            reinterpret_cast<Array_literal_items*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDictionary_literal(Swift5Parser::Dictionary_literalContext * ctx) {
    std::unique_ptr<Dictionary_literal> node(new Dictionary_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2115:
            reinterpret_cast<Literal_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDictionary_literal_items(Swift5Parser::Dictionary_literal_itemsContext * ctx) {
    std::unique_ptr<Dictionary_literal_items> node(new Dictionary_literal_items());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2146:
            reinterpret_cast<Dictionary_literal*>(topNode())->dictionary_literal_items_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDictionary_literal_item(Swift5Parser::Dictionary_literal_itemContext * ctx) {
    std::unique_ptr<Dictionary_literal_item> node(new Dictionary_literal_item());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2152:
            reinterpret_cast<Dictionary_literal_items*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2154:
            reinterpret_cast<Dictionary_literal_items*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPlayground_literal(Swift5Parser::Playground_literalContext * ctx) {
    std::unique_ptr<Playground_literal> node(new Playground_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2116:
            reinterpret_cast<Literal_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelf_pure_expression(Swift5Parser::Self_pure_expressionContext * ctx) {
    std::unique_ptr<Self_pure_expression> node(new Self_pure_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2093:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2299:
            reinterpret_cast<Capture_list_item*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelf_method_expression(Swift5Parser::Self_method_expressionContext * ctx) {
    std::unique_ptr<Self_method_expression> node(new Self_method_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2093:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2299:
            reinterpret_cast<Capture_list_item*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelf_subscript_expression(Swift5Parser::Self_subscript_expressionContext * ctx) {
    std::unique_ptr<Self_subscript_expression> node(new Self_subscript_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2093:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2299:
            reinterpret_cast<Capture_list_item*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelf_initializer_expression(Swift5Parser::Self_initializer_expressionContext * ctx) {
    std::unique_ptr<Self_initializer_expression> node(new Self_initializer_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2093:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2299:
            reinterpret_cast<Capture_list_item*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSuperclass_method_expression(Swift5Parser::Superclass_method_expressionContext * ctx) {
    std::unique_ptr<Superclass_method_expression> node(new Superclass_method_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2094:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSuperclass_subscript_expression(Swift5Parser::Superclass_subscript_expressionContext * ctx) {
    std::unique_ptr<Superclass_subscript_expression> node(new Superclass_subscript_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2094:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSuperclass_initializer_expression(Swift5Parser::Superclass_initializer_expressionContext * ctx) {
    std::unique_ptr<Superclass_initializer_expression> node(new Superclass_initializer_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2094:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClosure_expression(Swift5Parser::Closure_expressionContext * ctx) {
    std::unique_ptr<Closure_expression> node(new Closure_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2095:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2486:
            reinterpret_cast<Trailing_closures*>(topNode())->closure_expression_ = std::move(node);
            break;
        case 2497:
            reinterpret_cast<Labeled_trailing_closure*>(topNode())->closure_expression_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClosure_signature(Swift5Parser::Closure_signatureContext * ctx) {
    std::unique_ptr<Closure_signature> node(new Closure_signature());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2230:
            reinterpret_cast<Closure_expression*>(topNode())->closure_signature_ = std::move(node);
            break;
        case 2231:
            reinterpret_cast<Closure_expression*>(topNode())->closure_signature_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClosure_parameter_clause(Swift5Parser::Closure_parameter_clauseContext * ctx) {
    std::unique_ptr<Closure_parameter_clause> node(new Closure_parameter_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2241:
            reinterpret_cast<Closure_signature*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClosure_parameter_list(Swift5Parser::Closure_parameter_listContext * ctx) {
    std::unique_ptr<Closure_parameter_list> node(new Closure_parameter_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2256:
            reinterpret_cast<Closure_parameter_clause*>(topNode())->closure_parameter_list_ = std::move(node);
            break;
        case 2257:
            reinterpret_cast<Closure_parameter_clause*>(topNode())->closure_parameter_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitClosure_parameter(Swift5Parser::Closure_parameterContext * ctx) {
    std::unique_ptr<Closure_parameter> node(new Closure_parameter());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2263:
            reinterpret_cast<Closure_parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2265:
            reinterpret_cast<Closure_parameter_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCapture_list(Swift5Parser::Capture_listContext * ctx) {
    std::unique_ptr<Capture_list> node(new Capture_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2238:
            reinterpret_cast<Closure_signature*>(topNode())->capture_list_ = std::move(node);
            break;
        case 2239:
            reinterpret_cast<Closure_signature*>(topNode())->capture_list_ = std::move(node);
            break;
        case 2250:
            reinterpret_cast<Closure_signature*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCapture_list_items(Swift5Parser::Capture_list_itemsContext * ctx) {
    std::unique_ptr<Capture_list_items> node(new Capture_list_items());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2279:
            reinterpret_cast<Capture_list*>(topNode())->capture_list_items_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCapture_list_item(Swift5Parser::Capture_list_itemContext * ctx) {
    std::unique_ptr<Capture_list_item> node(new Capture_list_item());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2282:
            reinterpret_cast<Capture_list_items*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2284:
            reinterpret_cast<Capture_list_items*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCapture_specifier(Swift5Parser::Capture_specifierContext * ctx) {
    std::unique_ptr<Capture_specifier> node(new Capture_specifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2290:
            reinterpret_cast<Capture_list_item*>(topNode())->capture_specifier_ = std::move(node);
            break;
        case 2291:
            reinterpret_cast<Capture_list_item*>(topNode())->capture_specifier_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitImplicit_member_expression(Swift5Parser::Implicit_member_expressionContext * ctx) {
    std::unique_ptr<Implicit_member_expression> node(new Implicit_member_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2099:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitParenthesized_operator(Swift5Parser::Parenthesized_operatorContext * ctx) {
    std::unique_ptr<Parenthesized_operator> node(new Parenthesized_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2096:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitParenthesized_expression(Swift5Parser::Parenthesized_expressionContext * ctx) {
    std::unique_ptr<Parenthesized_expression> node(new Parenthesized_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2097:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_expression(Swift5Parser::Tuple_expressionContext * ctx) {
    std::unique_ptr<Tuple_expression> node(new Tuple_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2098:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelector_expression(Swift5Parser::Selector_expressionContext * ctx) {
    std::unique_ptr<Selector_expression> node(new Selector_expression());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2102:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOptional_chaining_suffix(Swift5Parser::Optional_chaining_suffixContext * ctx) {
    std::unique_ptr<Optional_chaining_suffix> node(new Optional_chaining_suffix());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2412:
            reinterpret_cast<Postfix_expression*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_call_argument_clause(Swift5Parser::Function_call_argument_clauseContext * ctx) {
    std::unique_ptr<Function_call_argument_clause> node(new Function_call_argument_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2424:
            reinterpret_cast<Function_call_suffix*>(topNode())->function_call_argument_clause_ = std::move(node);
            break;
        case 2425:
            reinterpret_cast<Function_call_suffix*>(topNode())->function_call_argument_clause_ = std::move(node);
            break;
        case 2428:
            reinterpret_cast<Function_call_suffix*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_call_argument_list(Swift5Parser::Function_call_argument_listContext * ctx) {
    std::unique_ptr<Function_call_argument_list> node(new Function_call_argument_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2208:
            reinterpret_cast<Self_subscript_expression*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        case 2221:
            reinterpret_cast<Superclass_subscript_expression*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        case 2386:
            reinterpret_cast<Key_path_postfix*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        case 2455:
            reinterpret_cast<Subscript_suffix*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        case 2465:
            reinterpret_cast<Function_call_argument_clause*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        case 2466:
            reinterpret_cast<Function_call_argument_clause*>(topNode())->function_call_argument_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_call_argument(Swift5Parser::Function_call_argumentContext * ctx) {
    std::unique_ptr<Function_call_argument> node(new Function_call_argument());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2470:
            reinterpret_cast<Function_call_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2472:
            reinterpret_cast<Function_call_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLabeled_trailing_closures(Swift5Parser::Labeled_trailing_closuresContext * ctx) {
    std::unique_ptr<Labeled_trailing_closures> node(new Labeled_trailing_closures());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2487:
            reinterpret_cast<Trailing_closures*>(topNode())->labeled_trailing_closures_ = std::move(node);
            break;
        case 2488:
            reinterpret_cast<Trailing_closures*>(topNode())->labeled_trailing_closures_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLabeled_trailing_closure(Swift5Parser::Labeled_trailing_closureContext * ctx) {
    std::unique_ptr<Labeled_trailing_closure> node(new Labeled_trailing_closure());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2490:
            reinterpret_cast<Labeled_trailing_closures*>(topNode())->labeled_trailing_closures_.push_back(std::move(node));
            break;
        case 2491:
            reinterpret_cast<Labeled_trailing_closures*>(topNode())->labeled_trailing_closures_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArgument_names(Swift5Parser::Argument_namesContext * ctx) {
    std::unique_ptr<Argument_names> node(new Argument_names());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2108:
            reinterpret_cast<Unqualified_name*>(topNode())->argument_names_ = std::move(node);
            break;
        case 2434:
            reinterpret_cast<Initializer_suffix*>(topNode())->argument_names_ = std::move(node);
            break;
        case 2444:
            reinterpret_cast<Explicit_member_suffix*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArgument_name(Swift5Parser::Argument_nameContext * ctx) {
    std::unique_ptr<Argument_name> node(new Argument_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2478:
            reinterpret_cast<Function_call_argument*>(topNode())->argument_name_ = std::move(node);
            break;
        case 2479:
            reinterpret_cast<Function_call_argument*>(topNode())->argument_name_ = std::move(node);
            break;
        case 2499:
            reinterpret_cast<Argument_names*>(topNode())->argument_names_.push_back(std::move(node));
            break;
        case 2500:
            reinterpret_cast<Argument_names*>(topNode())->argument_names_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType(Swift5Parser::TypeContext * ctx) {
    std::unique_ptr<Type> node(new Type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 522:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 1086:
            reinterpret_cast<Same_type_requirement*>(topNode())->val0 = std::move(node);
            break;
        case 1101:
            reinterpret_cast<Generic_argument*>(topNode())->type_ = std::move(node);
            break;
        case 1330:
            reinterpret_cast<Typealias_assignment*>(topNode())->type_ = std::move(node);
            break;
        case 1370:
            reinterpret_cast<Function_result*>(topNode())->type_ = std::move(node);
            break;
        case 1470:
            reinterpret_cast<Union_style_enum_case*>(topNode())->val1 = std::move(node);
            break;
        case 1790:
            reinterpret_cast<Subscript_result*>(topNode())->type_ = std::move(node);
            break;
        case 1909:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 1915:
            reinterpret_cast<Pattern*>(topNode())->val0 = std::move(node);
            break;
        case 2084:
            reinterpret_cast<Type_casting_operator*>(topNode())->type_ = std::move(node);
            break;
        case 2356:
            reinterpret_cast<Key_path_expression*>(topNode())->type_ = std::move(node);
            break;
        case 2357:
            reinterpret_cast<Key_path_expression*>(topNode())->type_ = std::move(node);
            break;
        case 2518:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2521:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2532:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2534:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2536:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2546:
            reinterpret_cast<Type_annotation*>(topNode())->type_ = std::move(node);
            break;
        case 2575:
            reinterpret_cast<Tuple_type_element*>(topNode())->val0 = std::move(node);
            break;
        case 2595:
            reinterpret_cast<Function_type*>(topNode())->type_ = std::move(node);
            break;
        case 2620:
            reinterpret_cast<Function_type_argument*>(topNode())->val0 = std::move(node);
            break;
        case 2632:
            reinterpret_cast<Array_type*>(topNode())->type_ = std::move(node);
            break;
        case 2636:
            reinterpret_cast<Dictionary_type*>(topNode())->type_ = std::move(node);
            break;
        case 2638:
            reinterpret_cast<Dictionary_type*>(topNode())->type1_ = std::move(node);
            break;
        case 2656:
            reinterpret_cast<Opaque_type*>(topNode())->type_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_annotation(Swift5Parser::Type_annotationContext * ctx) {
    std::unique_ptr<Type_annotation> node(new Type_annotation());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1189:
            reinterpret_cast<Variable_declaration*>(topNode())->val1 = std::move(node);
            break;
        case 1395:
            reinterpret_cast<Parameter*>(topNode())->type_annotation_ = std::move(node);
            break;
        case 1653:
            reinterpret_cast<Protocol_property_declaration*>(topNode())->type_annotation_ = std::move(node);
            break;
        case 1902:
            reinterpret_cast<Pattern*>(topNode())->type_annotation_ = std::move(node);
            break;
        case 2272:
            reinterpret_cast<Closure_parameter*>(topNode())->type_annotation_ = std::move(node);
            break;
        case 2573:
            reinterpret_cast<Tuple_type_element*>(topNode())->type_annotation_ = std::move(node);
            break;
        case 2622:
            reinterpret_cast<Function_type_argument*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_identifier(Swift5Parser::Type_identifierContext * ctx) {
    std::unique_ptr<Type_identifier> node(new Type_identifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1056:
            reinterpret_cast<Generic_parameter*>(topNode())->val0 = std::move(node);
            break;
        case 1077:
            reinterpret_cast<Conformance_requirement*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 1079:
            reinterpret_cast<Conformance_requirement*>(topNode())->val0 = std::move(node);
            break;
        case 1083:
            reinterpret_cast<Same_type_requirement*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 1085:
            reinterpret_cast<Same_type_requirement*>(topNode())->val0 = std::move(node);
            break;
        case 1741:
            reinterpret_cast<Extension_declaration*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 1952:
            reinterpret_cast<Enum_case_pattern*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 1953:
            reinterpret_cast<Enum_case_pattern*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 2512:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        case 2553:
            reinterpret_cast<Type_identifier*>(topNode())->type_identifier_ = std::move(node);
            break;
        case 2641:
            reinterpret_cast<Protocol_composition_type*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2643:
            reinterpret_cast<Protocol_composition_type*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2665:
            reinterpret_cast<Type_inheritance_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2667:
            reinterpret_cast<Type_inheritance_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_name(Swift5Parser::Type_nameContext * ctx) {
    std::unique_ptr<Type_name> node(new Type_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1054:
            reinterpret_cast<Generic_parameter*>(topNode())->type_name_ = std::move(node);
            break;
        case 2548:
            reinterpret_cast<Type_identifier*>(topNode())->type_name_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_type(Swift5Parser::Tuple_typeContext * ctx) {
    std::unique_ptr<Tuple_type> node(new Tuple_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1468:
            reinterpret_cast<Union_style_enum_case*>(topNode())->val1 = std::move(node);
            break;
        case 2513:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_type_element_list(Swift5Parser::Tuple_type_element_listContext * ctx) {
    std::unique_ptr<Tuple_type_element_list> node(new Tuple_type_element_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2559:
            reinterpret_cast<Tuple_type*>(topNode())->tuple_type_element_list_ = std::move(node);
            break;
        case 2560:
            reinterpret_cast<Tuple_type*>(topNode())->tuple_type_element_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTuple_type_element(Swift5Parser::Tuple_type_elementContext * ctx) {
    std::unique_ptr<Tuple_type_element> node(new Tuple_type_element());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2564:
            reinterpret_cast<Tuple_type_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2566:
            reinterpret_cast<Tuple_type_element_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitElement_name(Swift5Parser::Element_nameContext * ctx) {
    std::unique_ptr<Element_name> node(new Element_name());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2572:
            reinterpret_cast<Tuple_type_element*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_type(Swift5Parser::Function_typeContext * ctx) {
    std::unique_ptr<Function_type> node(new Function_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2508:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_type_argument_clause(Swift5Parser::Function_type_argument_clauseContext * ctx) {
    std::unique_ptr<Function_type_argument_clause> node(new Function_type_argument_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2590:
            reinterpret_cast<Function_type*>(topNode())->function_type_argument_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_type_argument_list(Swift5Parser::Function_type_argument_listContext * ctx) {
    std::unique_ptr<Function_type_argument_list> node(new Function_type_argument_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2598:
            reinterpret_cast<Function_type_argument_clause*>(topNode())->function_type_argument_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitFunction_type_argument(Swift5Parser::Function_type_argumentContext * ctx) {
    std::unique_ptr<Function_type_argument> node(new Function_type_argument());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2606:
            reinterpret_cast<Function_type_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2608:
            reinterpret_cast<Function_type_argument_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArgument_label(Swift5Parser::Argument_labelContext * ctx) {
    std::unique_ptr<Argument_label> node(new Argument_label());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2621:
            reinterpret_cast<Function_type_argument*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArray_type(Swift5Parser::Array_typeContext * ctx) {
    std::unique_ptr<Array_type> node(new Array_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2090:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2509:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDictionary_type(Swift5Parser::Dictionary_typeContext * ctx) {
    std::unique_ptr<Dictionary_type> node(new Dictionary_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2091:
            reinterpret_cast<Primary_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2510:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitProtocol_composition_type(Swift5Parser::Protocol_composition_typeContext * ctx) {
    std::unique_ptr<Protocol_composition_type> node(new Protocol_composition_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1057:
            reinterpret_cast<Generic_parameter*>(topNode())->val0 = std::move(node);
            break;
        case 1080:
            reinterpret_cast<Conformance_requirement*>(topNode())->val0 = std::move(node);
            break;
        case 2511:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitTrailing_composition_and(Swift5Parser::Trailing_composition_andContext * ctx) {
    std::unique_ptr<Trailing_composition_and> node(new Trailing_composition_and());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2649:
            reinterpret_cast<Protocol_composition_type*>(topNode())->trailing_composition_and_ = std::move(node);
            break;
        case 2650:
            reinterpret_cast<Protocol_composition_type*>(topNode())->trailing_composition_and_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOpaque_type(Swift5Parser::Opaque_typeContext * ctx) {
    std::unique_ptr<Opaque_type> node(new Opaque_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1466:
            reinterpret_cast<Union_style_enum_case*>(topNode())->val0 = std::move(node);
            break;
        case 2514:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAny_type(Swift5Parser::Any_typeContext * ctx) {
    std::unique_ptr<Any_type> node(new Any_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2515:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSelf_type(Swift5Parser::Self_typeContext * ctx) {
    std::unique_ptr<Self_type> node(new Self_type());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2516:
            reinterpret_cast<Type*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_inheritance_clause(Swift5Parser::Type_inheritance_clauseContext * ctx) {
    std::unique_ptr<Type_inheritance_clause> node(new Type_inheritance_clause());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1427:
            reinterpret_cast<Union_style_enum*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1428:
            reinterpret_cast<Union_style_enum*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1486:
            reinterpret_cast<Raw_value_style_enum*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1541:
            reinterpret_cast<Struct_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1542:
            reinterpret_cast<Struct_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1585:
            reinterpret_cast<Class_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1586:
            reinterpret_cast<Class_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1619:
            reinterpret_cast<Protocol_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1694:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1695:
            reinterpret_cast<Protocol_associated_type_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1742:
            reinterpret_cast<Extension_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        case 1743:
            reinterpret_cast<Extension_declaration*>(topNode())->type_inheritance_clause_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitType_inheritance_list(Swift5Parser::Type_inheritance_listContext * ctx) {
    std::unique_ptr<Type_inheritance_list> node(new Type_inheritance_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2663:
            reinterpret_cast<Type_inheritance_clause*>(topNode())->type_inheritance_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIdentifier(Swift5Parser::IdentifierContext * ctx) {
    std::unique_ptr<Identifier> node(new Identifier());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Identifier())) {
        assign_text(node->str0, ctx->Identifier());
    }
    if(!isEmpty(ctx->Identifier())) {
        assign_text(node->str0, ctx->Identifier());
    }
    switch(getState(ctx)) {
        case 817:
            reinterpret_cast<Label_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 911:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 977:
            reinterpret_cast<Module_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 979:
            reinterpret_cast<Module_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1156:
            reinterpret_cast<Import_path_identifier*>(topNode())->val0 = std::move(node);
            break;
        case 1211:
            reinterpret_cast<Variable_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1252:
            reinterpret_cast<Setter_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1327:
            reinterpret_cast<Typealias_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1352:
            reinterpret_cast<Function_name*>(topNode())->val0 = std::move(node);
            break;
        case 1402:
            reinterpret_cast<External_parameter_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1404:
            reinterpret_cast<Local_parameter_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1477:
            reinterpret_cast<Enum_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1479:
            reinterpret_cast<Enum_case_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1549:
            reinterpret_cast<Struct_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1593:
            reinterpret_cast<Class_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1627:
            reinterpret_cast<Protocol_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 1852:
            reinterpret_cast<Precedence_group_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1854:
            reinterpret_cast<Precedence_group_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1923:
            reinterpret_cast<Identifier_pattern*>(topNode())->identifier_ = std::move(node);
            break;
        case 1945:
            reinterpret_cast<Tuple_pattern_element*>(topNode())->identifier_ = std::move(node);
            break;
        case 1970:
            reinterpret_cast<Attribute_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 1972:
            reinterpret_cast<Attribute_name*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2009:
            reinterpret_cast<Balanced_token*>(topNode())->val1 = std::move(node);
            break;
        case 2047:
            reinterpret_cast<In_out_expression*>(topNode())->identifier_ = std::move(node);
            break;
        case 2106:
            reinterpret_cast<Unqualified_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 2205:
            reinterpret_cast<Self_method_expression*>(topNode())->identifier_ = std::move(node);
            break;
        case 2218:
            reinterpret_cast<Superclass_method_expression*>(topNode())->identifier_ = std::move(node);
            break;
        case 2271:
            reinterpret_cast<Closure_parameter*>(topNode())->identifier_ = std::move(node);
            break;
        case 2293:
            reinterpret_cast<Capture_list_item*>(topNode())->val0 = std::move(node);
            break;
        case 2312:
            reinterpret_cast<Implicit_member_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2346:
            reinterpret_cast<Tuple_element*>(topNode())->identifier_ = std::move(node);
            break;
        case 2370:
            reinterpret_cast<Key_path_component*>(topNode())->val0 = std::move(node);
            break;
        case 2441:
            reinterpret_cast<Explicit_member_suffix*>(topNode())->identifier_ = std::move(node);
            break;
        case 2481:
            reinterpret_cast<Function_call_argument*>(topNode())->val0 = std::move(node);
            break;
        case 2495:
            reinterpret_cast<Labeled_trailing_closure*>(topNode())->identifier_ = std::move(node);
            break;
        case 2504:
            reinterpret_cast<Argument_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 2556:
            reinterpret_cast<Type_name*>(topNode())->identifier_ = std::move(node);
            break;
        case 2582:
            reinterpret_cast<Element_name*>(topNode())->identifiers_.push_back(std::move(node));
            break;
        case 2583:
            reinterpret_cast<Element_name*>(topNode())->identifiers_.push_back(std::move(node));
            break;
        case 2626:
            reinterpret_cast<Argument_label*>(topNode())->identifiers_.push_back(std::move(node));
            break;
        case 2627:
            reinterpret_cast<Argument_label*>(topNode())->identifiers_.push_back(std::move(node));
            break;
        case 2674:
            break;
        case 2677:
            break;
        case 2684:
            reinterpret_cast<Identifier_list*>(topNode())->val0.push_back(std::move(node));
            break;
        case 2686:
            reinterpret_cast<Identifier_list*>(topNode())->val0.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitIdentifier_list(Swift5Parser::Identifier_listContext * ctx) {
    std::unique_ptr<Identifier_list> node(new Identifier_list());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2260:
            reinterpret_cast<Closure_parameter_clause*>(topNode())->identifier_list_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitKeyword(Swift5Parser::KeywordContext * ctx) {
    std::unique_ptr<Keyword> node(new Keyword());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2010:
            reinterpret_cast<Balanced_token*>(topNode())->val1 = std::move(node);
            break;
        case 2313:
            reinterpret_cast<Implicit_member_expression*>(topNode())->val0 = std::move(node);
            break;
        case 2676:
            reinterpret_cast<Identifier*>(topNode())->keyword_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitAssignment_operator(Swift5Parser::Assignment_operatorContext * ctx) {
    std::unique_ptr<Assignment_operator> node(new Assignment_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2056:
            reinterpret_cast<Binary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitNegate_prefix_operator(Swift5Parser::Negate_prefix_operatorContext * ctx) {
    std::unique_ptr<Negate_prefix_operator> node(new Negate_prefix_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2778:
            reinterpret_cast<Numeric_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2779:
            reinterpret_cast<Numeric_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2782:
            reinterpret_cast<Numeric_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2783:
            reinterpret_cast<Numeric_literal*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompilation_condition_AND(Swift5Parser::Compilation_condition_ANDContext * ctx) {
    std::unique_ptr<Compilation_condition_AND> node(new Compilation_condition_AND());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 922:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompilation_condition_OR(Swift5Parser::Compilation_condition_ORContext * ctx) {
    std::unique_ptr<Compilation_condition_OR> node(new Compilation_condition_OR());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 923:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompilation_condition_GE(Swift5Parser::Compilation_condition_GEContext * ctx) {
    std::unique_ptr<Compilation_condition_GE> node(new Compilation_condition_GE());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 945:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitCompilation_condition_L(Swift5Parser::Compilation_condition_LContext * ctx) {
    std::unique_ptr<Compilation_condition_L> node(new Compilation_condition_L());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 946:
            reinterpret_cast<Platform_condition*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitArrow_operator(Swift5Parser::Arrow_operatorContext * ctx) {
    std::unique_ptr<Arrow_operator> node(new Arrow_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1366:
            reinterpret_cast<Function_result*>(topNode())->arrow_operator_ = std::move(node);
            break;
        case 1786:
            reinterpret_cast<Subscript_result*>(topNode())->arrow_operator_ = std::move(node);
            break;
        case 2017:
            reinterpret_cast<Balanced_token_punctuation*>(topNode())->arrow_operator_ = std::move(node);
            break;
        case 2594:
            reinterpret_cast<Function_type*>(topNode())->arrow_operator_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitRange_operator(Swift5Parser::Range_operatorContext * ctx) {
    std::unique_ptr<Range_operator> node(new Range_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1399:
            reinterpret_cast<Parameter*>(topNode())->range_operator_ = std::move(node);
            break;
        case 2273:
            reinterpret_cast<Closure_parameter*>(topNode())->range_operator_ = std::move(node);
            break;
        case 2274:
            reinterpret_cast<Closure_parameter*>(topNode())->range_operator_ = std::move(node);
            break;
        case 2599:
            reinterpret_cast<Function_type_argument_clause*>(topNode())->range_operator_ = std::move(node);
            break;
        case 2600:
            reinterpret_cast<Function_type_argument_clause*>(topNode())->range_operator_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitSame_type_equals(Swift5Parser::Same_type_equalsContext * ctx) {
    std::unique_ptr<Same_type_equals> node(new Same_type_equals());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1084:
            reinterpret_cast<Same_type_requirement*>(topNode())->same_type_equals_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBinary_operator(Swift5Parser::Binary_operatorContext * ctx) {
    std::unique_ptr<Binary_operator> node(new Binary_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2053:
            reinterpret_cast<Binary_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPrefix_operator(Swift5Parser::Prefix_operatorContext * ctx) {
    std::unique_ptr<Prefix_operator> node(new Prefix_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2039:
            reinterpret_cast<Prefix_expression*>(topNode())->prefix_operator_ = std::move(node);
            break;
        case 2040:
            reinterpret_cast<Prefix_expression*>(topNode())->prefix_operator_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitPostfix_operator(Swift5Parser::Postfix_operatorContext * ctx) {
    std::unique_ptr<Postfix_operator> node(new Postfix_operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2418:
            reinterpret_cast<Postfix_expression*>(topNode())->postfix_operators_.push_back(std::move(node));
            break;
        case 2419:
            reinterpret_cast<Postfix_expression*>(topNode())->postfix_operators_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperator(Swift5Parser::OperatorContext * ctx) {
    std::unique_ptr<Operator> node(new Operator());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 1157:
            reinterpret_cast<Import_path_identifier*>(topNode())->val0 = std::move(node);
            break;
        case 1353:
            reinterpret_cast<Function_name*>(topNode())->val0 = std::move(node);
            break;
        case 1799:
            reinterpret_cast<Prefix_operator_declaration*>(topNode())->operator_ = std::move(node);
            break;
        case 1803:
            reinterpret_cast<Postfix_operator_declaration*>(topNode())->operator_ = std::move(node);
            break;
        case 1807:
            reinterpret_cast<Infix_operator_declaration*>(topNode())->operator_ = std::move(node);
            break;
        case 2012:
            reinterpret_cast<Balanced_token*>(topNode())->val1 = std::move(node);
            break;
        case 2321:
            reinterpret_cast<Parenthesized_operator*>(topNode())->operator_ = std::move(node);
            break;
        case 2483:
            reinterpret_cast<Function_call_argument*>(topNode())->val0 = std::move(node);
            break;
        case 2729:
            reinterpret_cast<Binary_operator*>(topNode())->operator_ = std::move(node);
            break;
        case 2732:
            reinterpret_cast<Prefix_operator*>(topNode())->operator_ = std::move(node);
            break;
        case 2735:
            reinterpret_cast<Postfix_operator*>(topNode())->operator_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperator_head(Swift5Parser::Operator_headContext * ctx) {
    std::unique_ptr<Operator_head> node(new Operator_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Operator_head_other())) {
        assign_text(node->Operator_head_other_, ctx->Operator_head_other());
    }
    switch(getState(ctx)) {
        case 2737:
            reinterpret_cast<Operator*>(topNode())->val0 = std::move(node);
            break;
        case 2747:
            break;
        case 2750:
            reinterpret_cast<Operator_character*>(topNode())->operator_head_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperator_character(Swift5Parser::Operator_characterContext * ctx) {
    std::unique_ptr<Operator_character> node(new Operator_character());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Operator_following_character())) {
        assign_text(node->Operator_following_character_, ctx->Operator_following_character());
    }
    switch(getState(ctx)) {
        case 2751:
            break;
        case 2755:
            reinterpret_cast<Operator_characters*>(topNode())->operator_characters_.push_back(std::move(node));
            break;
        case 2763:
            reinterpret_cast<Dot_operator_character*>(topNode())->operator_character_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitOperator_characters(Swift5Parser::Operator_charactersContext * ctx) {
    std::unique_ptr<Operator_characters> node(new Operator_characters());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2738:
            reinterpret_cast<Operator*>(topNode())->operator_characters_ = std::move(node);
            break;
        case 2739:
            reinterpret_cast<Operator*>(topNode())->operator_characters_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDot_operator_head(Swift5Parser::Dot_operator_headContext * ctx) {
    std::unique_ptr<Dot_operator_head> node(new Dot_operator_head());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2741:
            reinterpret_cast<Operator*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDot_operator_character(Swift5Parser::Dot_operator_characterContext * ctx) {
    std::unique_ptr<Dot_operator_character> node(new Dot_operator_character());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2767:
            reinterpret_cast<Dot_operator_characters*>(topNode())->dot_operator_characters_.push_back(std::move(node));
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitDot_operator_characters(Swift5Parser::Dot_operator_charactersContext * ctx) {
    std::unique_ptr<Dot_operator_characters> node(new Dot_operator_characters());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2742:
            reinterpret_cast<Operator*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitLiteral(Swift5Parser::LiteralContext * ctx) {
    std::unique_ptr<Literal> node(new Literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2011:
            reinterpret_cast<Balanced_token*>(topNode())->val1 = std::move(node);
            break;
        case 2113:
            reinterpret_cast<Literal_expression*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitNumeric_literal(Swift5Parser::Numeric_literalContext * ctx) {
    std::unique_ptr<Numeric_literal> node(new Numeric_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Floating_point_literal())) {
        assign_text(node->Floating_point_literal_, ctx->Floating_point_literal());
    }
    switch(getState(ctx)) {
        case 1525:
            reinterpret_cast<Raw_value_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2772:
            reinterpret_cast<Literal*>(topNode())->val0 = std::move(node);
            break;
        case 2785:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitBoolean_literal(Swift5Parser::Boolean_literalContext * ctx) {
    std::unique_ptr<Boolean_literal> node(new Boolean_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 912:
            reinterpret_cast<Compilation_condition*>(topNode())->val0 = std::move(node);
            break;
        case 1527:
            reinterpret_cast<Raw_value_literal*>(topNode())->val0 = std::move(node);
            break;
        case 1838:
            reinterpret_cast<Precedence_group_assignment*>(topNode())->boolean_literal_ = std::move(node);
            break;
        case 2774:
            reinterpret_cast<Literal*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitNil_literal(Swift5Parser::Nil_literalContext * ctx) {
    std::unique_ptr<Nil_literal> node(new Nil_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2775:
            reinterpret_cast<Literal*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInteger_literal(Swift5Parser::Integer_literalContext * ctx) {
    std::unique_ptr<Integer_literal> node(new Integer_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Decimal_digits())) {
        assign_text(node->str0, ctx->Decimal_digits());
    }
    if(!isEmpty(ctx->Decimal_literal())) {
        assign_text(node->str0, ctx->Decimal_literal());
    }
    if(!isEmpty(ctx->Binary_literal())) {
        assign_text(node->str0, ctx->Binary_literal());
    }
    if(!isEmpty(ctx->Octal_literal())) {
        assign_text(node->str0, ctx->Octal_literal());
    }
    if(!isEmpty(ctx->Hexadecimal_literal())) {
        assign_text(node->str0, ctx->Hexadecimal_literal());
    }
    switch(getState(ctx)) {
        case 618:
            break;
        case 2781:
            reinterpret_cast<Numeric_literal*>(topNode())->integer_literal_ = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitString_literal(Swift5Parser::String_literalContext * ctx) {
    std::unique_ptr<String_literal> node(new String_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    switch(getState(ctx)) {
        case 2773:
            reinterpret_cast<Literal*>(topNode())->val0 = std::move(node);
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitExtended_string_literal(Swift5Parser::Extended_string_literalContext * ctx) {
    std::unique_ptr<Extended_string_literal> node(new Extended_string_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Multi_line_extended_string_open())) {
        assign_text(node->str0, ctx->Multi_line_extended_string_open());
    }
    if(!isEmpty(ctx->Quoted_multi_line_extended_text())) {
        assign_text(node->str1, ctx->Quoted_multi_line_extended_text());
    }
    if(!isEmpty(ctx->Quoted_multi_line_extended_text())) {
        assign_text(node->str1, ctx->Quoted_multi_line_extended_text());
    }
    if(!isEmpty(ctx->Multi_line_extended_string_close())) {
        assign_text(node->Multi_line_extended_string_close_, ctx->Multi_line_extended_string_close());
    }
    if(!isEmpty(ctx->Single_line_extended_string_open())) {
        assign_text(node->str0, ctx->Single_line_extended_string_open());
    }
    if(!isEmpty(ctx->Quoted_single_line_extended_text())) {
        assign_text(node->str1, ctx->Quoted_single_line_extended_text());
    }
    if(!isEmpty(ctx->Quoted_single_line_extended_text())) {
        assign_text(node->str1, ctx->Quoted_single_line_extended_text());
    }
    if(!isEmpty(ctx->Single_line_extended_string_close())) {
        assign_text(node->str0, ctx->Single_line_extended_string_close());
    }
    switch(getState(ctx)) {
        case 2794:
            reinterpret_cast<String_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2799:
            break;
        case 2800:
            break;
        case 2801:
            break;
        case 2805:
            break;
        case 2806:
            break;
        case 2807:
            break;
        case 2808:
            break;
        case 2812:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitStatic_string_literal(Swift5Parser::Static_string_literalContext * ctx) {
    std::unique_ptr<Static_string_literal> node(new Static_string_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Quoted_single_line_text())) {
        assign_text(node->str0, ctx->Quoted_single_line_text());
    }
    if(!isEmpty(ctx->Quoted_single_line_text())) {
        assign_text(node->str0, ctx->Quoted_single_line_text());
    }
    if(!isEmpty(ctx->Quoted_multi_line_text())) {
        assign_text(node->str0, ctx->Quoted_multi_line_text());
    }
    if(!isEmpty(ctx->Quoted_multi_line_text())) {
        assign_text(node->str0, ctx->Quoted_multi_line_text());
    }
    switch(getState(ctx)) {
        case 1003:
            reinterpret_cast<File_name*>(topNode())->static_string_literal_ = std::move(node);
            break;
        case 1010:
            reinterpret_cast<Diagnostic_message*>(topNode())->static_string_literal_ = std::move(node);
            break;
        case 1526:
            reinterpret_cast<Raw_value_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2796:
            reinterpret_cast<String_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2816:
            break;
        case 2817:
            break;
        case 2824:
            break;
        case 2825:
            break;
        default:
            break;
    }
    return true;
}

std::any AstBuilder::visitInterpolated_string_literal(Swift5Parser::Interpolated_string_literalContext * ctx) {
    std::unique_ptr<Interpolated_string_literal> node(new Interpolated_string_literal());
    pushNode(node.get());
    visitChildren(ctx);
    popNode();
    if(!isEmpty(ctx->Quoted_single_line_text())) {
        assign_text(node->str0, ctx->Quoted_single_line_text());
    }
    if(!isEmpty(ctx->Quoted_multi_line_text())) {
        assign_text(node->str0, ctx->Quoted_multi_line_text());
    }
    switch(getState(ctx)) {
        case 2795:
            reinterpret_cast<String_literal*>(topNode())->val0 = std::move(node);
            break;
        case 2834:
            break;
        case 2852:
            break;
        default:
            break;
    }
    return true;
}
