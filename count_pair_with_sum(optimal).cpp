//Time_Complex  :O(n)
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
    
    unordered_map<int,int> m;
    for(int i=0 ; i<size ; i++)
    {
        int x = number - arr[i];
        
        if(m[x]== 0)
        {
            m[arr[i]]++;
        }
        else
        {
            count+= m[x];
            m[arr[i]]++;
        }
    }
    
    cout<<"Count pairs with given sum  :"<<count;

    return 0;
}
