//
// Created by Luci on 12/31/2017.
//

#include "os.h"
#include "hope.h"

int numArgs;
const char** args;

void osSetArguments(int argc, const char* argv[]){
    numArgs = argc;
    args = argv;
}

