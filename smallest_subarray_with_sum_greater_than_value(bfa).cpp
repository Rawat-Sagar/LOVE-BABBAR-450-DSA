// Time Complexity :O(n**2)
// Space Complexity :O(1)
# include <iostream>
using namespace std;

// Returns length of smallest subarray with sum greater than x.
// If there is no subarray with given sum, then returns n+1
int smallestSubWithSum(int arr[], int n, int x)
{
	// Initilize length of smallest subarray as n+1
	int min_len = n + 1;

	// Pick every element as starting point
	for (int start=0; start<n; start++)
	{
		// Initialize sum starting with current start
		int curr_sum = arr[start];

		// If first element itself is greater
		if (curr_sum > x) return 1;

		// Try different ending points for curremt start
		for (int end=start+1; end<n; end++)
		{
			// add last element to current sum
			curr_sum += arr[end];

			// If sum becomes more than x and length of
			// this subarray is smaller than current smallest
			// length, update the smallest length (or result)
			if (curr_sum > x && (end - start + 1) < min_len)
				min_len = (end - start + 1);
		}
	}
	return min_len;
}

/* Driver program to test above function */
int main()
{
	int arr1[] = {1, 4, 45, 6, 10, 19};
	int x = 55;
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int res1 = smallestSubWithSum(arr1, n1, x);
// 	(res1 == n1+1)? cout << "Not possible\n" :
					cout << res1 << endl;

	return 0;
}
