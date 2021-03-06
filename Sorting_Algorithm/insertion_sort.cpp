// Insertion Sort
// The array is virtually split into a sorted and an unsorted part. 
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
// Time Complexity: O(n*2)
// Auxiliary Space: O(1)
// Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.
// Algorithmic Paradigm: Incremental Approach
// Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.


// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
    cout<<"Sorted array :"<<endl;
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

/* Driver code */
int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
} 

//Answer :
//Sorted array :
//5 6 11 12 13 
// A utility function to print an array of size n 
