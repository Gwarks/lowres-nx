//
// Copyright 2017 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef token_h
#define token_h

#include <stdio.h>
#include "rcstring.h"

enum TokenType {
    TokenUndefined,
    
    TokenIdentifier,
    TokenStringIdentifier,
    TokenLabel,
    TokenFloat,
    TokenString,
    
    // Signs
    TokenColon,
    TokenComma,
    TokenSemicolon,
    TokenEol,
    
    // Operators
    TokenEq,
    TokenGrEq,
    TokenLeEq,
    TokenUneq,
    TokenGr,
    TokenLe,
    TokenBracketOpen,
    TokenBracketClose,
    TokenPlus,
    TokenMinus,
    TokenMul,
    TokenDiv,
    TokenPow,
    TokenAND,
    TokenNOT,
    TokenOR,
    TokenXOR,
    
    // Commands/Functions
    TokenABS,
    TokenASC,
    TokenATN,
    TokenATRB,
    TokenBG,
    TokenBIN,
    TokenBUTTON,
    TokenCELL,
    TokenCHAR,
    TokenCHR,
    TokenCLS,
    TokenCLW,
    TokenCOLOR,
    TokenCOPY,
    TokenCOS,
    TokenDATA,
    TokenDIM,
    TokenDISPLAY,
    TokenDOWN,
    TokenDO,
    TokenELSE,
    TokenEND,
    TokenEXP,
    TokenFILL,
    TokenFONT,
    TokenFOR,
    TokenGOSUB,
    TokenGOTO,
    TokenHEX,
    TokenIF,
    TokenINKEY,
    TokenINPUT,
    TokenINSTR,
    TokenINT,
    TokenKEY,
    TokenLEFTStr,
    TokenLEFT,
    TokenLENGTH,
    TokenLEN,
    TokenLET,
    TokenLOCATE,
    TokenLOG,
    TokenLOOP,
    TokenMAX,
    TokenMID,
    TokenMIN,
    TokenMOD,
    TokenMOUSE,
    TokenNEXT,
    TokenNUMBER,
    TokenON,
    TokenPALETTE,
    TokenPEEK,
    TokenPI,
    TokenPOKE,
    TokenPRINT,
    TokenRANDOMIZE,
    TokenRASTER,
    TokenREAD,
    TokenREM,
    TokenREPEAT,
    TokenRESTORE,
    TokenRETURN,
    TokenRIGHTStr,
    TokenRIGHT,
    TokenRND,
    TokenSCROLL,
    TokenSGN,
    TokenSIN,
    TokenSIZE,
    TokenSOURCE,
    TokenSPRITE,
    TokenSQR,
    TokenSTART,
    TokenSTEP,
    TokenSTR,
    TokenSWAP,
    TokenTAN,
    TokenTAP,
    TokenTEXT,
    TokenTHEN,
    TokenTIMER,
    TokenTO,
    TokenUNTIL,
    TokenUP,
    TokenVAL,
    TokenVBL,
    TokenWAIT,
    TokenWEND,
    TokenWHILE,
    TokenWINDOW,
    
    // Reserved Keywords
    Token_reserved,
    TokenCALL,
    TokenDEF,
    TokenSHARED,
    TokenSUB,
    TokenUBOUND,
    
    Token_count
};

struct Token {
    enum TokenType type;
    union {
        float floatValue;
        struct RCString *stringValue;
        int symbolIndex;
        struct Token *jumpToken;
    };
    int sourcePosition;
};

extern const char *TokenStrings[];

#endif /* token_h */
