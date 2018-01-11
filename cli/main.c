#include <stdio.h>
#include <string.h>
#include "hope.h"
#include "os.h"
int main (int argc, const char* argv[]){

    /*
     *  Written by Suman Dey & Chiranjit Dey
     *
     *  Where set --help method or --Version method
     *
     *  First check operating system
     */

    if(argc == 2 && strcmp(argv[1], "--help") == 0)
    {

        printf("Usage: wren [file] [arguments...]\n");
        printf("  --help  Show command line usage\n");
        return 0;

    }


    if (argc == 2 && strcmp(argv[1], "--version") == 0)
    {
        printf("Hope say i am is %s\n", HOPE_VERSION_STRING);
        return 0;
    }

    osSetArguments(argc, argv);

    return 0;
}
