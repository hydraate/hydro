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

#ifndef __h3o_engine_StringLiteral__
#define __h3o_engine_StringLiteral__

#include <string>

#include "Expression.hpp"

namespace hydro::engine
{
/**
 *
 */
class StringLiteral final : public Expression
{
public:
    /**
     *
     */
    StringLiteral(compiler::Token token);

    /**
     *
     */
    virtual ~StringLiteral();
    
    /**
     * Accepts a visitor allowing the visitor to visit the string expression.
     * @param visitor The visitor to accept.
     */
    virtual void accept(DocumentVisitor *visitor) override { visitor->visit(this); }
};

} // namespace hydro::engine

#endif /* __h3o_engine_StringLiteral__ */
