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

#ifndef __h3o_IfStmt__
#define __h3o_IfStmt__

#include "Stmt.hpp"
#include "Expr.hpp"

namespace hydro
{

class ElseStmt : public Stmt
{
private:
	ast_stmt _body;

public:
	ElseStmt(lex_token token, ast_stmt body);
	virtual ~ElseStmt();
	ast_stmt body() const { return _body; }
};

typedef ElseStmt *ast_else;

class IfStmt : public Stmt
{
private:
	ast_expr _cond;
	ast_stmt _body;
	ast_else _elseStmt;

public:
	IfStmt(lex_token token, ast_expr cond, ast_stmt body, ast_else elseStmt = nullptr);
	virtual ~IfStmt();
	ast_expr cond() const { return _cond; }
	ast_stmt body() const { return _body; }
	ast_else elseStmt() const { return _elseStmt; }
	bool hasElse() const { return _elseStmt != nullptr; }
};

typedef IfStmt *ast_if;

} // namespace hydro

#endif /* __h3o_IfStmt__ */
