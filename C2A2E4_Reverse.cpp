//
// Max Downs
// Student ID: 61949
// max.m.downs@gmail.com
// C2A2E4
// C2A2E4_Reverse.cpp
// 04/21/2013
// Windows 8
// Visual Studios 10.0
// C/C++ Programming 2, 094094, Ray Mitchell
// Description: The purpose of this function is to determine if a character in a file is a punctuator
// or separator and to use recursion to reverse the order of text words
//

#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;

// define what is punctuation and separator
static bool IsPunctOrSep(int select)
{
    return(select == EOF || select == ';' || select == ':' || select == '!' || 
        select == '?' || isspace(select) || select == ',' || select == '.');
}

int Reverse(ifstream &inFile, int level)
{
    int current, separator;

    // current gets the next character in the text file
    current = inFile.get();

    // if the next character is puncation or a separator
    if (IsPunctOrSep(current))
    {
        // store it in separator
        separator = current;
    }
    else
    {
        // Recursion, if it is not a separator, move on to the next character
        separator = Reverse(inFile, level + 1);

        // this determines if the this is the last character for that level, if  so, capitalize it
        cout.put(char(level == 1 ? toupper(current) : current));
    }

    return separator;
}
