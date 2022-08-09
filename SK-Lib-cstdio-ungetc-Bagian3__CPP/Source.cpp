#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	char filename[] = "program.cpp";

	int result = remove(filename);

	cout << "Hasilnya adalah " << result;

	_getch();
	return 0;
}