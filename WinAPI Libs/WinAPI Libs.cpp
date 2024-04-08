// WinAPI Libs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Windows.h"
#include <iostream>
#include <string>

using namespace std;

int OutputMainMenu()
{
	system("cls");
	cout << "Enter number command" << endl;
	cout << "0 - Name the computer and username" << endl;
	cout << "1 - Path os system directoy" << endl;
	cout << "2 - Version operation system" << endl;
	cout << "3 - Two random system metrics" << endl;
	cout << "4 - Two random system parameters" << endl;
	cout << "5 - System Colors" << endl;
	cout << "6 - Time function" << endl;
	cout << "7 - API function" << endl;
	cout << endl << "8 - Exit" << endl;

	cout << endl << "Enter command num : ";

	int num = 0;
	cin >> num;

	return num;
}

void main()
{
	//std::cout << "Hello World!\n";
	//UpdateMenu();
	int num = OutputMainMenu();

	cout << endl << "num = " << num << endl;

	/*
	while (1)
	{
		//Navigation();
		OutputMainMenu();
		//UpdateMenu();
	}
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
