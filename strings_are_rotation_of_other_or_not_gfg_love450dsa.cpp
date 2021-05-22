
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 , str2;
    cout<<"1st String :"<<endl;
    cin>>str1;
    cout<<"2nd String :"<< endl;
    cin>>str2;
    
    int l1 = str1.length();
    int l2 = str2.length();
    
    if(l1 != l2){
        cout<<"No"<<endl;
    }
    else{
        string temp = str1+str1;
        if(temp.find(str2) != string::npos){
            cout<<"Strings are rotations of each other"<<endl;
        }
        else{
            cout<<"Strings are not rotations of each other"<<endl;
        }
    }

    return 0;
}

