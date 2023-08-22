#pragma once
#include <iostream>
using namespace std;

class Text
{
private:
    string str;  // Private member variable to hold the text

public:
    // Default constructor
    Text();

    // Parameterized constructor
    Text(string);

    // Setter for the 'str' member
    void setStr(string);

    // Getter for the 'str' member
    string getStr();

    // Overloaded multiplication (*) operator function
	Text operator*(Text);

};

