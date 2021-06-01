// Edit Distance Brute Force Method
#include <bits/stdc++.h>
using namespace std;

int editDist(int i,int j, string str1, string str2){
    if(i==str1.length()) return str2.size()-j;
    if(j==str2.length()) return str1.size()-i;
    
    if(str1[i] == str2[j]){
        return editDist(i+1,j+1,str1,str2);
    }
    else{
        // if both are not same
        int left = 1+editDist(i,j+1,str1,str2);  //insert
        int mid = 1+editDist(i+1,j,str1,str2);   //remove
        int right = 1+editDist(i+1,j+1,str1,str2);  //replace
        return min(left,min(mid,right));
        
    }
}

int main()
{
    string str1,str2;
    cout<<"Enter the String 1:"<<endl;
    cin>>str1;
    cout<<"Enter the String 2:"<<endl;
    cin>>str2;
    int len1 = str1.length();
    int len2 = str2.length();
    
    cout<<editDist(0,0,str1,str2);
    

    return 0;
}
