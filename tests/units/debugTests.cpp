#include  <criterion/criterion.h>
#include <sstream>
#include <iostream>
#include <vector>
#include "../../includes/debug.hpp"

// Test(displayInput, display_good_input)
// {
//     std::vector<int> v = {10, 8, 98};
//     std::streambuf* originalCoutStreamBuf = std::cout.rdbuf();
//     std::ostringstream capturedOutput;

//     std::cout.rdbuf(capturedOutput.rdbuf());

//     displayInput(v);

//     std::cout.rdbuf(originalCoutStreamBuf);

//     cr_assert_eq(capturedOutput.str().c_str(), "Input : \n10\n8\n98\n", "The output was not as expected");
// }

// Test(displayKey, display_good_key)
// {
//     std::vector<char> v = {'a', 'b', 'c', 'd', 'e'};
//     cr_assert_eq(0, testTestsGUI());
// }