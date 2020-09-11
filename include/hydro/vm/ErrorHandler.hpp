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

#ifndef __h3o_ErrorHandler__
#define __h3o_ErrorHandler__

#include <cstdlib>

#include "VM_Type.hpp"

namespace hydro
{

struct ErrorHandler
{
    std::string name;
    int32_t errorSlot;
    uint32_t fromAddr;
    uint32_t toAddr;
    uint32_t startAddr;
    VM_Type *type;
};

} // namespace hydro

#endif /* __h3o_ErrorHandler__ */
