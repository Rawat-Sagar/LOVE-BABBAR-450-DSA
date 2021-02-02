// C++ program to print largest contiguous array sum 
// Time Complexity: O(n)
// Algorithmic Paradigm: Dynamic Programming
#include<iostream> 
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_so_far = 0, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		
		if (max_ending_here < 0) 
			max_ending_here = 0; 
			
		else if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 
	} 
	return max_so_far; 
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 
	int max_sum = maxSubArraySum(arr, arr_size); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 
