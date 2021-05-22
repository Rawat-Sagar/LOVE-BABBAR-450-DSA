

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 , str2 ,res;
    cout<<"1st String :"<<endl;
    cin>>str1;
    cout<<"2nd String :"<< endl;
    cin>>str2;
    cout<<"Result String :"<<endl;
    cin>>res;
    
    
    int l1 = str1.length();
    int l2 = str2.length();
    int l3 = res.length();
    
    if(l1+l2 != l3){
        cout<<"No Operations Performed"<<endl;
    }
    else{
        int i=0,j=0,k=0;
        while(k != l3){
            if(i<l1 and str1[i] == res[k]){
                i++;
            }
            else if(j<l1 and str2[j] == res[k]){
                j++;
            }
            k++;
        }
        if(i<l1 or j<l2){
            cout<<"Not a Valid Shuffle"<<endl;
        }
        else{
            cout<<"Valid Shuffle"<<endl;
        }
    }

    return 0;
}

