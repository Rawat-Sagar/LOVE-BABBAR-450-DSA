// METHOD 3 (Compare in Pairs) 
// If n is odd then initialize min and max as first element. 
// If n is even then initialize min and max as minimum and maximum of the first two elements respectively. 
// For rest of the elements, pick them in pairs and compare their 
// maximum and minimum with max and min respectively. 

// Time Complexity: O(n)

// Total number of comparisons: Different for even and odd n, see below: 

//        If n is odd:    3*(n-1)/2  
//        If n is even:   1 Initial comparison for initializing min and max, 
//                            and 3(n-2)/2 comparisons for rest of the elements  
//                       =  1 + 3*(n-2)/2 

#include<iostream>
using namespace std;

// Structure is use to return
// Two values from minMax()

struct Pair
{
    int min , max;     
};

struct Pair getMinMax(int arr[] , int n)
{
    struct Pair minmax;
    int i;

    // If array has even number of elemnts
    // then initilaize the first two elements 
    // as minimum and maximum

    if(n%2==0)
    {
        if (arr[0]>arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];   
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }

        // Set the starting index of loop
        i = 2;

        // If array has odd number of elements 
    // then initialize the first element as 
    // minimum and maximum 
    
    }

    else
    { 
        minmax.min = arr[0]; 
        minmax.max = arr[0]; 
         
        // Set the starting index for loop 
        i = 1; 
    } 

    // In the while loop ,pick elements in pair and compare the pair with max
    // and min so far
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>minmax.max)
            minmax.max = arr[i];

            if(arr[i+1]<minmax.min)
            minmax.min = arr[i+1];
        }
        else
        {
            if(arr[i+1]>minmax.max)
            minmax.max = arr[i+1];

            if(arr[i]<minmax.min)
            minmax.min = arr[i];
        }
        // Increment the index by 2 as 
        // two elements are processed in loop 
        i+=2;
    }

    return minmax;
};

int main(){
    int arr[] = {1,4,3,2};
    int arr_size = 4;
    Pair minmax = getMinMax(arr,arr_size);
    cout<<"Maximum element is"<<minmax.max<<endl;
        cout<<"Minimum element is"<<minmax.min<<endl;
    return 0;
}
