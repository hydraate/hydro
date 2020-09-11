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

#ifndef __h3o_engine_LogicalORExpression__
#define __h3o_engine_LogicalORExpression__

#include "BinaryExpression.hpp"

namespace hydro::engine
{

/**
 * The LogicalORExpression represents a logical OR expression in a Performance document.
 */
class LogicalORExpression final : public BinaryExpression
{
public:
    /**
     * Creates a LogicalORExpression object with a left expression and a right expression.
     * @param lhs The left expression.
     * @param rhs The right expression.
     */
    LogicalORExpression(Expression *lhs, Expression *rhs);
    
    /**
     * Destroys the LogicalORExpression object.
     */
    virtual ~LogicalORExpression();
    
    /**
     * Accepts a visitor allowing the visitor to visit the logical OR expression.
     * @param visitor The visitor to accept.
     */
    virtual void accept(DocumentVisitor *visitor) override { visitor->visit(this); }
};

} // namespace hydro::engine

#endif /* __h3o_engine_LogicalORExpression__ */
