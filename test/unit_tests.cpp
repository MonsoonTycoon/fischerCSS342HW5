#include "gtest/gtest.h"
#include "possible_parentheses.h"

void showResult(std::list<std::string> & result) {
    for (std::list<std::string>::iterator i = result.begin(); i!=result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

//this function is used to calculate the nth catalan number in the series
//compared with the results from pp.h, 
// this ensures that there are an equal number of matched parentheses as the nth catalan #
//taken straight from https://www.geeksforgeeks.org/program-nth-catalan-number/
// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1) return 1;

    // catalan(n) is sum of catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);

    return res;
}

TEST(test_recursive, 1) {
    std::list<std::string> result;
    possibleParenthesis(1, result);

    // homework: add verification
    EXPECT_EQ(result.size(), catalan( 1 ));
}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);

    // homework: add verification
    EXPECT_EQ(result.size(), catalan( 2 ));
}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);

    // homework: add verification
    EXPECT_EQ(result.size(), catalan( 3 ));
}

// and more

TEST(test_recursive, 4) {
    std::list<std::string> result;
    possibleParenthesis(4, result);

    // homework: add verification
    EXPECT_EQ(result.size(), catalan( 4 ));
}

TEST(test_recursive, 5) {
    std::list<std::string> result;
    possibleParenthesis(5, result);

    // homework: add verification
    EXPECT_EQ(result.size(), catalan( 5 ));
}
