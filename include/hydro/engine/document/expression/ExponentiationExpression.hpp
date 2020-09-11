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

#ifndef __h3o_engine_ExponentiationExpression__
#define __h3o_engine_ExponentiationExpression__

#include "BinaryExpression.hpp"

namespace hydro::engine
{

/**
 * The ExponentiationExpression represents a exponentiation expression in a Performance document.
 */
class ExponentiationExpression final : public BinaryExpression
{
public:
    /**
     * Creates a ExponentiationExpression object with a left expression and a right expression.
     * @param lhs The left expression.
     * @param rhs The right expression.
     */
    ExponentiationExpression(Expression *lhs, Expression *rhs);
    
    /**
     * Destroys the ExponentiationExpression object.
     */
    virtual ~ExponentiationExpression();
    
    /**
     * Accepts a visitor allowing the visitor to visit the exponentiation expression.
     * @param visitor The visitor to accept.
     */
    virtual void accept(DocumentVisitor *visitor) override { visitor->visit(this); }
};

} // namespace hydro::engine

#endif /* __h3o_engine_ExponentiationExpression__ */
