//Time_Complex  :O(n**2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 5, 7, 1};
    int number = 6;
    
    //Edge Case :
    // int arr[] = {1, 1, 1, 1};
    // int number = 2;
    
    // Answer :
    // Count pairs with given sum  :6


    int size = sizeof(arr)/sizeof(arr[0]);
    
   
   
    
    int count = 0;
    
    for(int i = 0 ; i<size-1 ; i++){
        for(int j = i+1 ; j<size ; j++)
        {
            if(arr[i]+arr[j] == number)
            {
                count = count + 1 ;
            }
        }
    }
    
    cout<<"Count pairs with given sum  :"<<count;

    return 0;
}
