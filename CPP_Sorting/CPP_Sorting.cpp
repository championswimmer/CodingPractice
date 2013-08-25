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
	showArray (arr);
	cout << "\n\n"; bubbleSort(l,arr);

	cout << "\n\n"; showArray(arr);

	return EXIT_SUCCESS;
}
