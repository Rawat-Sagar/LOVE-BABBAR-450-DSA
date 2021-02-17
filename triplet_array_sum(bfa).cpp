// Time Complexity  : O(n**3)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {1 ,4 ,45 ,6 ,10 ,8};
    int arr[] = {1 ,2 ,4 ,3 ,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // int X = 14;
    int X = 10;
    for(int i=0 ; i<size; i++)
    {
        for(int j = i+1 ; j<size; j++)
        {
            for(int k = j+1 ; k<size; k++)
            {
                if(arr[i]+arr[j]+arr[k] == X)
                {
                    cout<<1<<endl;
                }
            }
        }
    }
   return 0;
}
