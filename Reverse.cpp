// Write a program to reverse an array or string

#include <iostream>
using namespace std;
void reverseArray(int arr[] , int start , int end)
{
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // instead of above three lines you can use:
        //swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

/*Function to print an array*/
void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"sizeof(arr) : "<<sizeof(arr)<<endl;
    cout<<"sizeof(arr[0]) : "<<sizeof(arr[0])<<endl;
    cout<<"n : "<<n<<endl;
    // To print original array
    printArray(arr,n);

    // Reverse Function calling
    reverseArray(arr,0,n-1);
    cout<<"Reversed array is :"<<endl;

    // To print Reversed Array
    printArray(arr,n);

    return 0;
}

