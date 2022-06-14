#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {

//	int temp = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}

}


int main() {

	int arr[] = { -2,3,4,-1,5,-12,6,1,3 };
	int n = sizeof(arr) / sizeof(int);
	bubble_sort(arr, n);

	for (int x : arr) {
		cout << x << " ";
	}

	return 0;
}