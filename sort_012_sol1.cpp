// Sort an array of 0s, 1s and 2s
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
// Dutch Flag Algorithm :

// Complexity Analysis:
// Time Complexity: O(n).
// Only one traversal of the array is needed.
// Space Complexity: O(1).
// No extra space is required.

#include <bits/stdc++.h>
using namespace std;
void sort_012(int arr[] , int arr_size){
    int low = 0;
    int mid = 0;
    int high = arr_size-1;

    // Iterate till all the elements are sorted
    while(mid<=high){
        switch(arr[mid]){

            // if the element is 0
            case 0:
            swap(arr[low++],arr[mid++]);
            break;

            // if the element is 1
            case 1:
            mid++;
            break;

            // if the element is 2
            case 2:
            swap(arr[mid],arr[high--]);
            break;

        }
    }
}

void printArray(int arr[],int arr_size)
{
    for (int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {2,2,1,1,0,2,1,0,1,0,0,0,1,2,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    sort_012(arr,arr_size);
    cout<<"Array after Segregation : "<<endl;
    printArray(arr,arr_size);
    return 0;
}
