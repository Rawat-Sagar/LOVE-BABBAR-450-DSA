// Reverse String
#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<string>&v)
{
    int right = v.size()-1;
    int left = 0;
    while(left<right){
        string c = v[left];
        v[left] = v[right];
        v[right] = c;
        
        left+=1;
        right-=1;
    }
}

void printVector(vector<string> &v)
{
	cout<<"Size :"<<v.size()<<endl; //v.size() -> O(1)
	for (int i=0 ; i<v.size() ; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
    std::vector<string> v;
    v = {"h","e","l","l","o"};
    printVector(v);
    reverseString(v);
    printVector(v);
    return 0;
}
