#include <iostream>
using namespace std;

void three_max(int &refnum1, int &refnum2, int &refnum3) {
	int max = refnum1 > refnum2 ? (refnum1 > refnum3 ? refnum1 : refnum3) : (refnum2 > refnum3) ? refnum2 : refnum3;
	refnum1 = refnum2 = refnum3 = max;
}


template <typename T>
void show_arr(T arr[], const int length) {
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

template <typename T>  
T& first_negative(T arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			return arr[i];
		}
	return arr[0];
}

void same_elements(int arr1[], const int length1, int arr2[], const int length2) {
	for (int* parr1 = arr1; parr1 < arr1 + length1; parr1++) 
		for (int* parr2 = arr2; parr2 < arr2 + length2; parr2++)
			if (*parr2 == *parr1)
				*parr2 = 0;
	
}

int main() {
	int n, m, k;

	//Task 23. 1
	cout << "Task 23.1\nEnter three numbers:\n";
	cin >> n >> m >> k;
	three_max(n, m, k);
	cout << n << ' ' << m << ' ' << k << '\n';
	

	//Task 23.2
	cout << "\nTask 23.2\nInitial array:\n";
	const int size = 5;
	int arr[size]{ 5,-8,2,-4,10 };
	show_arr(arr, size);
	cout << "First negative element (or first element of array if there is no negative elements) = " << first_negative(arr, size) <<'\n';
	

	//Task 23.3
	cout << "\nTask 23.3\nTwo arrays.\n\n";
	const int size1 = 6;
	int arr1[size1]{ 15,1,3,7,4,10 };
	cout << "First array:\n";
	show_arr(arr1, size1);
	cout << "\n";
	const int size2 = 6;
	int arr2[size2]{ 4,16,3,57,1,12 };
	cout << "Second array:\n";
	show_arr(arr2, size2);
	same_elements(arr1, size1, arr2, size2);
	cout << "Second array after function call:\n";
	show_arr(arr2, size2);
	
	
	return 0;
}