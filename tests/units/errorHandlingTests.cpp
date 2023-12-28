#include <criterion/criterion.h>
#include "../../includes/errorHandling.hpp"

Test(errorHandlingTest, return_0)
{
    int argc = 5;
    char **argv;
    cr_assert_eq(0, errorHandling(argc, argv));
}

Test(errorHandlingTest, return_84)
{
    int argc = 2;
    char **argv;
    cr_assert_eq(84, errorHandling(argc, argv));
}
