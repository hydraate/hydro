//
//                 __  __            __           
//                / / / /__  __ ____/ /_____ ____ 
//               / /_/ // / / // __  // ___// __ \
//              / __  // /_/ // /_/ // /   / /_/ /
//             /_/ /_/ \__, / \__,_//_/    \____/ 
//                    /____/                      
//
//              The Hydro Programming Language
//

#ifndef __h3o_Nested__
#define __h3o_Nested__

#include "Expr.hpp"

namespace hydro
{

class Nested : public Expr
{
private:
	ast_expr _expr;

public:
	Nested(lex_token token, ast_expr expr);
	Nested(ast_expr expr);
	virtual ~Nested();
	ast_expr expr() const { return _expr; }
};

typedef Nested *ast_nested;

} // namespace hydro

#endif /* __h3o_Nested__ */
