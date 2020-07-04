#include <check.h>
#include "a_recentage_interpreter.h"
#include <stdlib.h>





START_TEST(test_find_command_normal)
{
    ck_assert_int_eq(find_command('P', '2'), 0);
    ck_assert_int_eq(find_command('U', 0), 1);
    ck_assert_int_eq(find_command('D', 0), 2);
    ck_assert_int_eq(find_command('N', '2'), 3);
    ck_assert_int_eq(find_command('E', '3'), 4);
    ck_assert_int_eq(find_command('W', '4'), 5);
    ck_assert_int_eq(find_command('S', '4'), 6);
}
END_TEST

START_TEST(test_find_command_abnormal)
{
    /*first situation 
     * type is not right*/

    ck_assert_int_eq(find_command('A', '2'), -1);
    ck_assert_int_eq(find_command('B', 0), -1);

    /*second situation
     * type is right, but arg is wrong!*/
    ck_assert_int_eq(find_command('P', 0), -1);
    ck_assert_int_eq(find_command('U', '2'), -1);

}
END_TEST

START_TEST(test_interpreter_normal)
{
    char *argv_P[] = {"./a.out", "P", "2"};
    ck_assert_int_eq(interpreter(3, argv_P), 0);

    char *argv_D[] = {"./a.out", "D"};
    ck_assert_int_eq(interpreter(2, argv_D), 0);
            


}
END_TEST

START_TEST(test_interpreter_abnormal)
{
    char *argv_p_ab[] = {"./a.out", "PW", "2"};
    ck_assert_int_eq(interpreter(3, argv_p_ab), -1);


    char *argv_d_ab[] = {"./a.out", "D", "2", "33", "44"};
    ck_assert_int_eq(interpreter(3, argv_d_ab), -1);

}
END_TEST

Suite *domain_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Domain");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_find_command_normal);
    tcase_add_test(tc_core, test_find_command_abnormal);
    tcase_add_test(tc_core, test_interpreter_normal);
    tcase_add_test(tc_core, test_interpreter_abnormal);

    suite_add_tcase(s, tc_core);
        
    return s;
}

int main(void)
{

    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = domain_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


