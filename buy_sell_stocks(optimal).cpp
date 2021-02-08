//Time_Complex  :O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7,1,5,3,6,4};
    // int arr[] = {7,6,4,3,1}; //ans :0
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int lsf = INT_MAX;
    int PIST = 0;
    int profit = 0;
    
    for(int i = 0 ; i<size ; i++){
        if(arr[i]<lsf)
        {
            lsf = arr[i];
        }
        int PIST = arr[i] - lsf;
        if(PIST >profit)
        {
            profit = PIST;
        }
    }
    
    cout<<"Best Time to Buy and Sell Stock is :"<<profit;

    return 0;
}
