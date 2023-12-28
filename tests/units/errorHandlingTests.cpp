#include <criterion/criterion.h>
#include "../../includes/errorHandling.hpp"

Test(errorHandling, return_0)
{
    int argc = 3;
    char **argv;
    cr_assert_eq(0, errorHandling(argc, argv));
}