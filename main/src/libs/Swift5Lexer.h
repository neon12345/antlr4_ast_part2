#include "SwiftSupportLexer.h"

// Generated from Swift5Lexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  Swift5Lexer : public SwiftSupportLexer {
public:
  enum {
    AS = 1, ALPHA = 2, BREAK = 3, CASE = 4, CATCH = 5, CLASS = 6, CONTINUE = 7, 
    DEFAULT = 8, DEFER = 9, DO = 10, GUARD = 11, ELSE = 12, ENUM = 13, FOR = 14, 
    FALLTHROUGH = 15, FUNC = 16, IN = 17, IF = 18, IMPORT = 19, INTERNAL = 20, 
    FINAL = 21, OPEN = 22, PRIVATE = 23, PUBLIC = 24, WHERE = 25, WHILE = 26, 
    LET = 27, VAR = 28, PROTOCOL = 29, GET = 30, SET = 31, WILL_SET = 32, 
    DID_SET = 33, REPEAT = 34, SWITCH = 35, STRUCT = 36, RETURN = 37, THROW = 38, 
    THROWS = 39, RETHROWS = 40, INDIRECT = 41, INIT = 42, DEINIT = 43, ASSOCIATED_TYPE = 44, 
    EXTENSION = 45, SUBSCRIPT = 46, PREFIX = 47, INFIX = 48, LEFT = 49, 
    RIGHT = 50, NONE = 51, PRECEDENCE_GROUP = 52, HIGHER_THAN = 53, LOWER_THAN = 54, 
    ASSIGNMENT = 55, ASSOCIATIVITY = 56, POSTFIX = 57, OPERATOR = 58, TYPEALIAS = 59, 
    OS = 60, ARCH = 61, SWIFT = 62, COMPILER = 63, CAN_IMPORT = 64, TARGET_ENVIRONMENT = 65, 
    CONVENIENCE = 66, DYNAMIC = 67, LAZY = 68, OPTIONAL = 69, OVERRIDE = 70, 
    REQUIRED = 71, STATIC = 72, WEAK = 73, UNOWNED = 74, SAFE = 75, UNSAFE = 76, 
    MUTATING = 77, NONMUTATING = 78, FILE_PRIVATE = 79, IS = 80, TRY = 81, 
    SUPER = 82, ANY = 83, FALSE = 84, RED = 85, BLUE = 86, GREEN = 87, RESOURCE_NAME = 88, 
    TRUE = 89, NIL = 90, INOUT = 91, SOME = 92, TYPE = 93, PRECEDENCE = 94, 
    SELF = 95, SELF_BIG = 96, MAC_OS = 97, I_OS = 98, OSX = 99, WATCH_OS = 100, 
    TV_OS = 101, LINUX = 102, WINDOWS = 103, I386 = 104, X86_64 = 105, ARM = 106, 
    ARM64 = 107, SIMULATOR = 108, MAC_CATALYST = 109, I_OS_APPLICATION_EXTENSION = 110, 
    MAC_CATALYST_APPLICATION_EXTENSION = 111, MAC_OS_APPLICATION_EXTENSION = 112, 
    SOURCE_LOCATION = 113, FILE = 114, LINE = 115, ERROR = 116, WARNING = 117, 
    AVAILABLE = 118, HASH_IF = 119, HASH_ELSEIF = 120, HASH_ELSE = 121, 
    HASH_ENDIF = 122, HASH_FILE = 123, HASH_FILE_ID = 124, HASH_FILE_PATH = 125, 
    HASH_LINE = 126, HASH_COLUMN = 127, HASH_FUNCTION = 128, HASH_DSO_HANDLE = 129, 
    HASH_SELECTOR = 130, HASH_KEYPATH = 131, HASH_COLOR_LITERAL = 132, HASH_FILE_LITERAL = 133, 
    HASH_IMAGE_LITERAL = 134, GETTER = 135, SETTER = 136, Identifier = 137, 
    DOT = 138, LCURLY = 139, LPAREN = 140, LBRACK = 141, RCURLY = 142, RPAREN = 143, 
    RBRACK = 144, COMMA = 145, COLON = 146, SEMI = 147, LT = 148, GT = 149, 
    UNDERSCORE = 150, BANG = 151, QUESTION = 152, AT = 153, AND = 154, SUB = 155, 
    EQUAL = 156, OR = 157, DIV = 158, ADD = 159, MUL = 160, MOD = 161, CARET = 162, 
    TILDE = 163, HASH = 164, BACKTICK = 165, DOLLAR = 166, BACKSLASH = 167, 
    Operator_head_other = 168, Operator_following_character = 169, Binary_literal = 170, 
    Octal_literal = 171, Decimal_digits = 172, Decimal_literal = 173, Hexadecimal_literal = 174, 
    Floating_point_literal = 175, WS = 176, HASHBANG = 177, Block_comment = 178, 
    Line_comment = 179, Multi_line_extended_string_open = 180, Single_line_extended_string_open = 181, 
    Multi_line_string_open = 182, Single_line_string_open = 183, Interpolataion_single_line = 184, 
    Single_line_string_close = 185, Quoted_single_line_text = 186, Interpolataion_multi_line = 187, 
    Multi_line_string_close = 188, Quoted_multi_line_text = 189, Single_line_extended_string_close = 190, 
    Quoted_single_line_extended_text = 191, Multi_line_extended_string_close = 192, 
    Quoted_multi_line_extended_text = 193
  };

  enum {
    SingleLine = 1, MultiLine = 2, SingleLineExtended = 3, MultiLineExtended = 4
  };

  explicit Swift5Lexer(antlr4::CharStream *input);

  ~Swift5Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void LPARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void RPARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void Interpolataion_single_lineAction(antlr4::RuleContext *context, size_t actionIndex);
  void Interpolataion_multi_lineAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};
