// Time Complexity :O(n**2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1 ,2 ,3 , 8 , 4 ,5 ,6};
    int arr2[] = {1 ,2 ,4,8};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int count = 0;
    for(int j = 0 ; j<n2 ; j++)
    {
        for(int i = 0 ; i<n1 ; i++)
        {
            if(arr1[i] == arr2[j])
            {
                count += 1;
            }
        }
    }
    if(count == n2)
    {
        cout<<"Yes , array subset of another array : ";
    }
    cout<<count;
    return 0;
}
