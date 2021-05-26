
#include <bits/stdc++.h>
using namespace std;
int spiltSubstring(string s){
    int len = s.length();
    int x=0,y=0,c=0;
    for(int i=0;i<len;i++){
        if(s[i]== '0'){
            x++;
        }
        else{
            y++;
        }
        if(x==y){
            c++;
        }
        
    }
    if(x!=y) {
            return -1;
        }
    return c;
}
int main()
{
    string s = "0100110101";
    cout<<spiltSubstring(s);
    return 0;
}
