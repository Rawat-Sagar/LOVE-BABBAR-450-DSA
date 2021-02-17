// Time Complexity  : O(n)
// Space Complexity : O(1)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {1 ,4 ,45 ,6 ,10 ,8};
    int arr[] = {1 ,2 ,4 ,3 ,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // int X = 14;
    int X = 10;
    int ans = 0;
    sort(arr,arr+size);
    for(int i=0 ; i<size-2; i++)
    {
        int l = i+1;
        int r= size-1;
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r] == X)
            {
                ans = 1;
                break;
            }
            else if(arr[i]+arr[l]+arr[r] < X)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if(ans ==1)
        {
            break;
        }
    }
    cout<< ans <<endl;
   return 0;
}
