// Time Complexity :O(n)
// Space Complexity :O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {3,5,0,1,4};
    int n = sizeof(a)/sizeof(a[0]);
    int dp[n];
    for(int i=0; i<n ; i++)
    {
        dp[i] = 0;
    }
    int ma = a[n-1];
    int mi = a[0];
    for(int i=n-2 ; i>=0 ; i--)
    {
        int k = a[i];
        if(a[i]>ma)
        {
            ma = a[i];
        }
        int dpn = dp[i+1];
        int mapt = ma-a[i];
        dp[i] = max(dp[i+1],ma-a[i]);
    }
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]<mi)
        {
            mi = a[i];
        }
        int dpp = dp[i-1];
        int mipt = a[i]-mi;
        int cuur = dp[i];
        dp[i] = max(dp[i-1],dp[i]+(a[i]-mi));
    }
    
    cout<<"Maximium profit by buying and selling a share atmost twice :"<<endl;
    cout<<dp[n-1];
    return 0;
}
