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

#ifndef __h3o_VM_Type__
#define __h3o_VM_Type__

#include "hvalue.hpp"

namespace hydro
{

class VM_Type
{
public:
    virtual bool typeCheck(const hvalue &value) = 0;
};

} // namespace hydro

#endif /* __h3o_VM_Type__ */
