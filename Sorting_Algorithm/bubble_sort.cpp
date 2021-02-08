// Bubble Sort is the simplest sorting algorithm that 
// works by repeatedly swapping the adjacent elements if they are in wrong order.
// Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
// Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
// Auxiliary Space: O(1)
// Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted

#include <iostream>
using namespace std;
int main()
{
    
    int arr[] = {5 , 2 , 3 , 7 , 6};
    int size = sizeof(arr)/sizeof(arr[0]); 
   
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int cntr = 1;
    if(cntr<size)
    {
        for(int i =0; i<size-cntr;i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        cntr++;
    }
    cout<<"Print the sorted Array  :"<<endl;
    for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//Answer :
//5 2 3 7 6 
//Print the sorted Array  :
//2 3 5 6 7
