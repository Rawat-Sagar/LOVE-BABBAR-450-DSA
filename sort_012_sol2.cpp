// Sort an array of 0s, 1s and 2s
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
// Approach: Count the number of 0s, 1s and 2s in the given array. Then store all the 0s in the beginning followed by all the 1s then all the 2s.
// Algorithm:
// 1.Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
// 2.Traverse through the array and increase the count of c0 is the element is 0,increase the count of c1 is the element is 1 and increase the count of c2 is the element is 2
// 3.Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2.

// Complexity Analysis:
// Time Complexity: O(n).
// Only two traversals of the array is needed.
// Space Complexity: O(1).
// As no extra space is required.

#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[],int arr_size){
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
}
void sortArr(int arr[],int arr_size){
    int i = 0 , cnt0 = 0 , cnt1 = 0, cnt2 = 0;
    for(i = 0;i<arr_size;i++){
        switch (arr[i]){
            case 0:
            cnt0++;
            break;

            case 1:
            cnt1++;
            break;

            case 2:
            cnt2++;
            break;
        }
    }
    // Update the array
    i =0;
    while(cnt0>0){
        arr[i++]=0;
        cnt0--;
    }
    while(cnt1>0){
        arr[i++]=1;
        cnt1--;
    }
    while(cnt2>0){
        arr[i++]=2;
        cnt2--;
    }

}

int main(){
    int arr[]={1,0,0,2,1,0,0,2,2,1,1};
    int arr_size = sizeof(arr)/sizeof(arr_size);
    sortArr(arr,arr_size);
    cout<<"Array after Segregation :"<<endl;
    printArr(arr,arr_size);
   return 0;
}
