//
// Max Downs
// Student ID: 61949
// max.m.downs@gmail.com
// C2A2E4
// C2A2E4_OpenFile.cpp
// 04/21/2013
// Windows 8
// Visual Studios 10.0
// C/C++ Programming 2, 094094, Ray Mitchell
// Description: The purpose of this function is to determine if the file opens successfully, and if not
//              to output and error message
//

#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace  std;

void OpenFile(const char *fileName, ifstream &inFile)
{
    // open the file name passed as a parameter
    inFile.open(fileName);

    // error catch if the file does not open correctly
    if (!inFile.is_open())
    {
        // print error message
        cerr << "Error!  " << fileName << " did not open.\n";
        perror(fileName);
        exit(EXIT_FAILURE);
    }

    // return statement unnecessary
}
