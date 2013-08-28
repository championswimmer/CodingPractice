/*
 * SimpleSorts.cpp
 *
 *  Created on: 28-Aug-2013
 *      Author: championswimmer
 */

#include <iostream>
#include "Sort.h"
#include "Array_IO.h"
using namespace std;

void selectionSort (int l, int arr[100]) {
	int i,j, min;
	for (i=0; i<l; i++) {
		min=arr[i];
		for (j=i; j<l; j++) {
			if (arr[j]<min) {
				min=arr[j];
				swap(arr[i], arr[j]);
				cout << "\n"; showArray(l, arr);
			}
		}

	}

}


