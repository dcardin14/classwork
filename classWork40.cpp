/* 
Name:     		Gia Rivera
Date: 			Feb 27 2021
Assignment #:	classWork40
Status: 		Completed
Language:		C++
-------------------------------------------------------------------------
Comments
also hint for project 3 on lines 22-24
*/

#include <iostream>				// for cin, cout, endl
#include <string>
using namespace std;

int main()
{
	char cmd;
	float tAmount;
	
	// lines 22-24 are needed for project 3
	cin >> cmd; // reads the first character
	cin.ignore(); // jumps over one space
	cin >> tAmount; // reads the float
	
	cout << cmd << "      " << tAmount << endl;
	
	system("PAUSE");
    return 0;
} // end of main()

