// Add a function to the string class that creates a string containing the intersection of two strings, i.e., 
// the common characters of the two strings. For example, 
// the intersection of the strings 'sdqcg' and 'rgfas34' would result in the string 'sg'. 
// To implement the function, overload the '*' operator.
//

#include <iostream>
#include "Text.h"

using namespace std;

int main()
{
    // Creating two Text objects
    Text str1("lkjhgfd");
    Text str2("5tgb8ik,");

    // Using the overloaded operator* to concatenate common characters from str1 and str2
    Text str3 = str1 * str2;

    // Printing the concatenated result
    cout << str3.getStr();
}

