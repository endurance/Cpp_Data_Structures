// testapp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "IntCell.h"
using namespace std;

int main(){

	int **p;
	int *j = new int (5);
	
	p = &j;

	cout<< **p << endl;
	system("pause");
	return 0;
}


