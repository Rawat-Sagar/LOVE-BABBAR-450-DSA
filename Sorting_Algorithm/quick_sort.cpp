// Quick Sort Complexity :
// Depends on pivot.
// 1.In best case , pivot would be median element.
// T(n) = 2T(n/2) + (n)
// The solution of above recurrence is O(nLogn). It can be solved using case 2 of Master Theorem.
// 2.In worst case , pivot would be end element.
// T(n) = T(n-1) + n
// The solution of above recurrence is O(n**2).
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[] , int i , int  j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int  partition(int arr[] , int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    
    for(int j=l ; j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[] , int l, int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
int main()
{
    int arr[] = {2,3,5,8,4,6,9,7,1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    // r = size(n) - 1 ; 
    quickSort(arr,0,n-1);
    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

