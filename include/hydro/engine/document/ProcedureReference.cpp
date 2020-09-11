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

#include "ProcedureReference.hpp"

namespace hydro::engine
{
ProcedureReference::ProcedureReference(ProcedureClass *_class) : SimpleReference{ _class }
{
}

ProcedureReference::~ProcedureReference()
{
}

} // namespace hydro::engine
