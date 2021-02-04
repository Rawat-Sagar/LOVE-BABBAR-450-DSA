// C++ program to merge overlapping Intervals in 
// O(n Log n) time and O(1) extra space. 
#include<bits/stdc++.h> 
using namespace std; 

// An Interval 
struct Interval 
{ 
	int start, end; 
}; 

// Function used in sort 
bool mycomp(Interval a, Interval b) 
{ return a.start < b.start; } 

void mergeIntervals(Interval arr[], int n) 
{ 
	// Sort Intervals in increasing order of 
	// start time 
	sort(arr, arr+n, mycomp); 

	int index = 0; // Stores index of last element 
	// in output array (modified arr[]) 

	// Traverse all input Intervals 
	for (int i=1; i<n; i++) 
	{ 
		// If this is not first Interval and overlaps 
		// with the previous one 
		if (arr[index].end >= arr[i].start) 
		{ 
			// Merge previous and current Intervals 
			arr[index].end = max(arr[index].end, arr[i].end); 
			arr[index].start = min(arr[index].start, arr[i].start); 
		} 
		else { 
			index++; 
			arr[index] = arr[i]; 
		}	 
	} 

	// Now arr[0..index-1] stores the merged Intervals 
	cout << "\n The Merged Intervals are: "; 
	for (int i = 0; i <= index; i++) 
		cout << "[" << arr[i].start << ", " << arr[i].end << "] "; 
} 

// Driver program 
int main() 
{ 
	Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	mergeIntervals(arr, n); 
	return 0; 
} 
