//Time_Complex  :O(n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {-2, 3, 4, -1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int i=0;
    int j=n-1;
    while(1)
    {
        while(a[i]>0 && i<j)
        {
            i++;
        }
        while(a[j]<0 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
        else
        break;
    }
    cout<<"Rearrange positive and negative separate :"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    int k = 0;
    while (k < n && i < n)
    {
        // swap next positive 
        // element at even position
        // from next negative element.
        swap(a[k], a[i]);
        i = i + 1;
        k = k + 2;
    }
    cout<<"\nRearrange positive and negative alternate :"<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

