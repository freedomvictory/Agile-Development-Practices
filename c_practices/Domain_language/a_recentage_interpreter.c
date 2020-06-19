
/*created by gavin 2020/06/19
 * a simple interpreter that using explaining one language which can draw rectangle
 /*
  P 2 #select pen 2
  D # pen down
  W 2 # draw west 2cm
  N 1 # then north 1
  E 2
  S 1
  U
  */
 * */

#include "a_recentage_interpreter.h"
#include <stdio.h>
#include <string.h>


static InputCmd cmd_list[] = {
        { 'P', ARG, do_select_pen},
        { 'U', NO_ARG, do_pen_up},
        { 'D', NO_ARG, do_pen_down},
        { 'N', ARG, do_pen_dir},
        { 'E', ARG, do_pen_dir},
        { 'W', ARG, do_pen_dir},
        { 'S', ARG, do_pen_dir}
 };

 static int Cmd_list_len = sizeof(cmd_list) / sizeof(InputCmd);

int find_command(char type, InputCmd* out_cmd)
{
    int i = 0;
    for( i; i < Cmd_list_len; i++)
    {
        if(type == cmd_list[i])
        {
            return &cmd_list[i];
        }
    }

    return NULL;
}
int interpreter(int argc, char* argv[])
{
    if(strlen(argv[1]) > 1)
    {

    }
    char cmd_type = argv[1][0];
    if(find_command(cmd_type))
    {

    }
    else
    {

    }
    ERROR:
    {
        fprintf(stderr, "unknown type!")
        return -1;
    }

}


