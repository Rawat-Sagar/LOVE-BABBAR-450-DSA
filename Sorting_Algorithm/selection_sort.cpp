// Selection Sort : O(n2) time complexity
// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
// 1) The subarray which is already sorted.
// 2) Remaining subarray which is unsorted.
// In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {5 , 2 , 3 , 7 , 6};
    int size = sizeof(arr)/sizeof(arr[0]); 
   
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0 ; i<size-1; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
     cout<<"Print the sorted Array  :"<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//5 2 3 7 6 
//Print the sorted Array  :
//2 3 5 6 7 
