/*
 * BubbleSort.h
 *
 *  Created on: 25-Aug-2013
 *      Author: championswimmer
 */
#include <iostream>
#include "Sort.h"
#include "Array_IO.h"
using namespace std;

void bubbleSort (int l, int arr[100]) {
	int t, i, j;
	for (i=l-1; i>0; i--) {
		for (j=0; j<i; j++) {
			if (arr[j]>arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
			cout << "\n"; showArray(l, arr);
		}
	}
}


