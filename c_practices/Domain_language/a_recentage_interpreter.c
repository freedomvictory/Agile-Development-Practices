
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


#include "a_recentage_interpreter.h"
#include <stdio.h>
#include <string.h>


static const InputCmd cmd_list[] = {
        { 'P', ARG, do_select_pen},
        { 'U', NO_ARG, do_pen_up},
        { 'D', NO_ARG, do_pen_down},
        { 'N', ARG, do_pen_dir},
        { 'E', ARG, do_pen_dir},
        { 'W', ARG, do_pen_dir},
        { 'S', ARG, do_pen_dir}
 };
 static int Cmd_list_len = sizeof(cmd_list) / sizeof(InputCmd);

 static const char no_arg_cmd_type_list[] = {'D', 'U'};
 static int no_arg_cmd_type_number = sizeof(no_arg_cmd_type_list) / sizeof(char);

 static const char have_arg_cmd_type_list[] = {'P', 'W', 'N', 'E'};
 static int have_arg_type_number = sizeof(have_arg_cmd_type_list) / sizeof(char);



int find_command(char type, char arg)
{
    int i = 0;

    for( i; i < Cmd_list_len; i++)
    {
        if(type == cmd_list[i].m_cmd_type)
        {
            if((arg == 0 && cmd_list[i].m_arg == NO_ARG) || (arg = 1 && cmd_list[i].m_arg == ARG))
                return i;
            else
                goto ERROR;
        }
    }


    ERROR:
    {
        fprintf(stderr, "[%s] Fail to find command, the command type or arg is not right! \n", __func__);
        return -1;
    }

}

int judge_cmd_type_illegal(char type)
{
    return  (type >= 'A' && type <= 'Z');
}



int judge_cmd_arg_illegal(char arg)
{
    return (arg >= '0' && arg <= '9');
}
int judge_cmd_effective(int argc, char *argv[])
{
    char temp_cmd_type;
    char temp_cmd_arg;

    if(argc == 2)
    {
        temp_cmd_type = argv[1][0];
        if(strlen(argv[1]) == 1 && judge_cmd_type_illegal(temp_cmd_type) )
            return 1;
        else
            goto ERROR;
    }
    else if(argc == 3)
    {
        temp_cmd_type = argv[1][0];
        temp_cmd_arg = argv[2][0];
        if(strlen(argv[1]) == 1 && strlen(argv[2]) == 1 && judge_cmd_type_illegal(temp_cmd_type) && judge_cmd_arg_illegal(temp_cmd_arg))
            return 1;
        else
            goto ERROR;
    }
    else
        goto ERROR;
    ERROR:
    {
        fprintf(stderr, "[%s] unknown cmd type or arg, Please check it!\n", __func__);
        return -1;
    }

}
int interpreter(int argc, char* argv[])
{
    int find_ret = 0;

    if(judge_cmd_effective(argc, argv) == 1)
    {
        if(argc == 2)
        {
            if((find_ret = find_command(argv[1][0], 0)) > -1)
            {
                cmd_list[find_ret].func(argv[1][0], 0);
                return 0;
            }
            else
                goto ERROR;
        }
        else
        {
            if((find_ret = find_command(argv[1][0], 1)) > -1)
            {
                cmd_list[find_ret].func(argv[1][0], argv[2][0]);
                return 0;
            }
            else
                goto ERROR;
        }
    }
    else
        goto ERROR;

    ERROR:
    fprintf(stderr, "Fail to call interpreter\n");
    return -1;


}

void do_select_pen(char type, char pen_id)
{
    fprintf(stdout, "[%s]: handle it \n", __func__);
}
void do_pen_down(char type, char no_arg)
{
    fprintf(stdout, "[%s]: handle it \n", __func__);
}
void do_pen_up(char type ,char no_arg)
{
    fprintf(stdout, "[%s]: handle it \n", __func__);
}
void do_pen_dir(char type, char distance)
{
    fprintf(stdout, "[%s]: handle it, dir: %c, distance %c cm \n", __func__, type, distance);
}
