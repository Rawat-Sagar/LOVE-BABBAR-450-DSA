// Time Complexity: O(n2). 
// There are two nested loops traversing the array, So time Complexity is O(n2).
// Space Complexity: O(1). 
// No extra space required.
#include <bits/stdc++.h>
using namespace std;
int maxWater(int arr[]  , int n)
{
    int store = 0;
    
    for(int i = 1; i <n-1; i++)
    {
        int left = arr[i];
        for(int j=0 ; j<i ; j++)
        {
            left = max(left , arr[j]);
        }
        
        int right = arr[i];
        for(int j=i+1; j<n; j++)
        {
            right = max(right,arr[j]);
        }
        
        store = store + (min(left,right)-arr[i]);
    }
    return store;
}
int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Trapping Rain Water sum is :" <<endl;
    cout<< maxWater(arr,n);

    return 0;
}
