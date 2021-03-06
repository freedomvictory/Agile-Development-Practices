//
// Created by gavin on 6/19/2020.
//

#include "a_recentage_interpreter.h"

#include <stdio.h>
#include <string.h>



/*
 * reference book page : The Pragmatic Programmer -->  p226 exercise 5
 * */

int main(int argc, char* argv[])
{
    if(argc == 0)
    {
        fprintf(stderr, "usage: -help \n");
        return -1;
    }

    if(argc == 2 && !strcmp(argv[1], "-help") )
    {
        fprintf(stderr, "usage: ./main <CMD_TYPE> <OPTION_ARG> \n");
        return -1;
    }

    interpreter(argc, argv);


    return  0;
}
