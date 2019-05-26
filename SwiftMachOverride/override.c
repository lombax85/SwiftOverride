//
//  override.c
//  SwiftMachOverride
//
//  Created by Fabio Lombardo on 26/05/2019.
//  Copyright © 2019 Fabio Lombardo. All rights reserved.
//

#include <stdio.h>
#include <dlfcn.h>
#include "mach_override.h"

void override()
{
    void (*landing)(void * par);
    void (*originalFunctionAddress)(void * par);
    const void (*overrideFunctionAddress)(void * par);
    
    *(void **) (&originalFunctionAddress) = dlsym(RTLD_DEFAULT, "$s17SwiftMachOverride8originalyyF");
    *(void **) (&overrideFunctionAddress) = dlsym(RTLD_DEFAULT, "$s17SwiftMachOverride9exchangedyyF");
    
    mach_override_ptr(originalFunctionAddress, overrideFunctionAddress, (void**)&landing);
}

void override_instance_method()
{
    void (*landing)(void * par);
    void (*originalFunctionAddress)(void * par);
    const void (*overrideFunctionAddress)(void * par);
    
    *(void **) (&originalFunctionAddress) = dlsym(RTLD_DEFAULT,"$s17SwiftMachOverride9TestClassC8originalyyF");
    *(void **) (&overrideFunctionAddress) = dlsym(RTLD_DEFAULT,"$s17SwiftMachOverride9TestClassC9exchangedyyF");
    
    mach_override_ptr(originalFunctionAddress, overrideFunctionAddress, (void**)&landing);
}
