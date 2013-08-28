//============================================================================
// Name        : CPP_Sorting.cpp
// Author      : Arnav Gupta
// Version     :
// Copyright   : Copyright (c) 2013 Arnav Gupta, under GNU GPLv3
// Description : Hello World in C, Ansi-style
//============================================================================
#include "Array_IO.h"
#include "Sort.h"

using namespace std;

int arr[100], l;

int main(void) {
	puts("Enter size of array");
	cin >> l;
	insertArray(l, arr);
	showArray (l, arr);
	cout << "\n\n"; selectionSort(l,arr);

	cout << "\n\n"; showArray(l, arr);

	return EXIT_SUCCESS;
}
