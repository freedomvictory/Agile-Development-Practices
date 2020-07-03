#include <check.h>
#include "a_recentage_interpreter.h"
#include <stdlib.h>





START_TEST(test_find_command)
{
    ck_assert_int_eq(find_command('S', '2'), 5);
}
END_TEST

Suite *domain_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Domain");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_find_command);
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


