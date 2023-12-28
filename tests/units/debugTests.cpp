#include  <criterion/criterion.h>
#include <sstream>

#include "../../includes/debug.hpp"

// Test(displayInputTests, display_good_input)
// {
//     std::vector<int> v = {};
//     std::streambuf* originalCoutStreamBuf = std::cout.rdbuf();
//     std::ostringstream capturedOutput;

//     std::cout.rdbuf(capturedOutput.rdbuf());

//     displayInput(v);

//     std::cout.rdbuf(originalCoutStreamBuf);

//     cr_assert_eq(capturedOutput.str().c_str(), "Input : ", "The output was not as expected");
// }

// Test(displayKey, display_good_key)
// {
//     std::vector<char> v = {'a', 'b', 'c', 'd', 'e'};
//     cr_assert_eq(0, testTestsGUI());
// }