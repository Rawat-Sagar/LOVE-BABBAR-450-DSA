//Time_Complex  :O(n**2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7,1,5,3,6,4};
    // int arr[] = {7,6,4,3,1}; //ans :0
    int size = sizeof(arr)/sizeof(arr[0]);
    
   
    int profit = 0;
    
    for(int i = 0 ; i<size-1 ; i++){
        for(int j = i+1 ; j<size ; j++)
        {
            if(arr[i]<arr[j])
            {
                profit = max(profit,arr[j] - arr[i]);
            }
        }
    }
    
    cout<<"Best Time to Buy and Sell Stock is :"<<profit;

    return 0;
}
