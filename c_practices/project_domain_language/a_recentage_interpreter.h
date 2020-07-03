//
// Created by Administrator on 6/19/2020.
//

#ifndef C_PRACTICES_A_RECENTAGE_INTERPRETER_H
#define C_PRACTICES_A_RECENTAGE_INTERPRETER_H







typedef struct {
    char m_cmd_type;
    int m_arg;          //if no arg , arg = 0, if not,  arg = 1
    void (*func)(char, char);
}InputCmd;

enum IsHasArg{
    ARG,
    NO_ARG
};

void do_select_pen(char type, char pen_id);
void do_pen_down(char type, char no_arg);
void do_pen_up(char type ,char no_arg);
void do_pen_dir(char type, char distance);

/*return: If fail, return -1, If success return array index
 * arguments: type -> command type, arg -> command arguments (if arg = 0, it represent ,No arg)
 * */
int find_command(char type, char arg);


int judge_cmd_type_illegal(char type);
int judge_cmd_arg_illegal(char arg);
int judge_cmd_effective(int argc, char *argv[]);


int interpreter(int argc, char* argv[]);







#endif //C_PRACTICES_A_RECENTAGE_INTERPRETER_H
