#include "Text.h"

// Default constructor
Text::Text()
{
	str = "";  // Initialize 'str' to an empty string
}

// Parameterized constructor
Text::Text(string str)
{
	this->str = str;  // Assign the provided string to 'str'
}

// Setter for the 'str' member
void Text::setStr(string str)
{
	this->str = str;  // Update the value of 'str'
}

// Getter for the 'str' member
string Text::getStr()
{
	return str;  // Return the value of 'str'
}


// Overloaded multiplication (*) operator function for Text class
Text Text::operator*(Text b)
{
	Text temp;  // Create a temporary Text object to store the result

	// Nested loops to compare characters in both strings
	for (int i = 0; i < this->str.length(); i++)
	{
		for (int j = 0; j < b.str.length(); j++)
		{
			// If characters match, add them to the temporary Text object
			if (this->str[i] == b.str[j])
			{
				temp.str += this->str[i];  // Concatenate the common character
			}
		}
	}

	return temp;  // Return the resulting Text object containing common characters
}