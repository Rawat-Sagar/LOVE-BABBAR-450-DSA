// Move all negative numbers to beginning and positive to
//  end with constant extra space
// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
// A C++ program to put all negative
// numbers before positive numbers
#include <iostream>

using namespace std;
 
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
 
// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}
