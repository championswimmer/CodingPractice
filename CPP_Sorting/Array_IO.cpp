/*
 * Array_IO.cpp
 *
 *  Created on: 25-Aug-2013
 *      Author: championswimmer
 */

#include "Array_IO.h"

using namespace std;
void insertArray(int l, int arr[100]) {
	puts("Enter elements (space separated");
	int i=0, input;
	while( i < l )
	{
		cin >> arr[i]; i++;
	}
}

void showArray (int arr[100]) {
	int i=0;
	while (arr[i] != '\0')
		cout << arr[i++] << " ";
}



