/*
 Write a program that displays the dimensions of a letter-size (8.5 × 11 inches) sheet of paper in millimeters. There are 25.4 millimeters per inch. Use constants and comments in your program.
 */

#include <iostream>

using namespace std;

int main()
{
    const float sheet_width = 8.5;
    const float sheet_length = 11;
    const float millimeters_to_inch = 25.4;
    cout << "The dimensions of a letter-size (8.5 x 11 inches) sheet of paper in millimeters is" << endl;
    cout << sheet_width * millimeters_to_inch << " x " << sheet_length * millimeters_to_inch << endl;
    
    return 0;
}
