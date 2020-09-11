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

#include "SelfSelector.hpp"

namespace hydro::engine
{

SelfSelector::SelfSelector(compiler::Token token) : Selector{ token }
{
}

SelfSelector::~SelfSelector()
{
}

} // namespace hydro::engine
