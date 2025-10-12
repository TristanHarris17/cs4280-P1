#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenGroup {
    KEYWORD,
    NUMBER,
    OPERATOR,
    IDENTIFIER,
    END_OF_FILE,
};

struct Token {
    TokenGroup group;
    std::string instance;
    int line;
};

inline const char* tokenGroupName(TokenGroup g) {
    switch (g) {
        case TokenGroup::KEYWORD: return "Keywords";
        case TokenGroup::NUMBER: return "Numbers";
        case TokenGroup::OPERATOR: return "Operators";
        case TokenGroup::IDENTIFIER: return "Identifiers";
        case TokenGroup::END_OF_FILE: return "EOF";
    }
    return "Unknown";
}

#endif // TOKEN_H
