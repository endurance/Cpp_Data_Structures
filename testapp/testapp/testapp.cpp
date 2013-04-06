// testapp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "IntCell.h"
using namespace std;

int main(){

	IntCell m;

	m.write(5);
	cout<< "Cell contents: " << m.read() << endl;

	system("pause");
	return 0;
}


