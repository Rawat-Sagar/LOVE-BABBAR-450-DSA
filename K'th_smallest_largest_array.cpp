// solution1 : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
// solution2 : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-2-expected-linear-time/
// solution3 : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-3-worst-case-linear-time/?ref=rp


#include <iostream>
#include <algorithm>
using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[] , int n,int k)
{
    // Sort the given array
    sort(arr,arr + n);

    //Return k'th element in the sorted arrray
    return arr[k-1];
}
int main() {
    int arr[] = {12, 3, 5, 7, 19 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<"Kth Smallest / Largest element is: "<<kthSmallest(arr,n,k)<<endl;
    return 0;
}
