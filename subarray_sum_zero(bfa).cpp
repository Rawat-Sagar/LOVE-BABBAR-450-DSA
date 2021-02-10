// Time Complexity : O(n**2)
#include <iostream>
using namespace std;
int main() {
    // int arr[] = {4 ,2 ,0 ,1 ,6};
    int arr[] = {4 ,2, -3 ,1 ,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int flag = 0;
    for(int i=0 ; i<n; i++)
    {
        int s = 0;
        for(int j=i ; j<n ; j++)
        {
            s = s+arr[j];
            if(s==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
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
