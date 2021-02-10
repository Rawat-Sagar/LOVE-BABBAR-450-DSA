// Time Complexity : O(n)
// Space Complexity : O(n)
#include <bits/stdc++.h>
using namespace std;
int main(){
// int arr[] = {4 ,2, -3 ,1 ,6};
    int arr[] = {4 ,2 ,0 ,1 ,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int flag = 0;
    int s = 0;
    unordered_map<int,int> m;
    for(int i=0 ; i<n; i++)
    {
        s=s+arr[i];
        if(s==0 or m[s] or arr[i]==0)
        {
            flag=1;
            break;
        }
        else
        {
            m[s]=1;
        }
    }
    
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
