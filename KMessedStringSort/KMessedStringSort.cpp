#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;



vector<int> sortKMessedArray(const vector<int>& arr, int k)
{

	vector<int> resultArray(arr.size());
	vector<int> inputArray = arr;


	if (k == 0) {
		return arr;
	}

	for (int i = k; i < arr.size(); i++) { //i = 3
		for (int j = i; j >= (i - k); j--) {
			if (j == 0 || !(inputArray[j] < inputArray[j - 1])) {
				//do nothing
				continue;
			}
			else {
				//swap the elements
				int temp = inputArray[j - 1];
				inputArray[j - 1] = inputArray[j];
				inputArray[j] = temp;
			}

		}
	}
	for (int i = 0; i < inputArray.size(); i++) {
		cout << inputArray[i] << ", ";
	}
	cout << endl;
	return inputArray;
}


int main() {
	vector<int> arr = { 1, 4, 5, 2, 3, 7, 8, 6, 10, 9 };
	int k = 2;
	sortKMessedArray(arr, k);
	return 0;
}
