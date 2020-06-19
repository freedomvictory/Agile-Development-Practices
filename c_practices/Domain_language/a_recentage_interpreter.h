//
// Created by Administrator on 6/19/2020.
//

#ifndef C_PRACTICES_A_RECENTAGE_INTERPRETER_H
#define C_PRACTICES_A_RECENTAGE_INTERPRETER_H






typedef struct {
    char m_cmd_type;
    int m_arg;          //if no arg , arg = -1
    void *handler;
}InputCmd;

enum IsHasArg{
    ARG,
    NO_ARG
};

void do_select_pen(int pen_id);
void do_pen_down(void);
void do_pen_up(void);
void do_pen_dir(char dir, int distance);

InputCmd find_command(char type);
int interpreter(int argc, char* argv[]);






#endif //C_PRACTICES_A_RECENTAGE_INTERPRETER_H
