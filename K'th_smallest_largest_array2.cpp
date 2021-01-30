
#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;
int main(){
    int size , k;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;

   int arr[size];
   cout<<"Enter the elements :"<<endl;
   for(int i=0 ; i<size ;i++){
       cin>>arr[i];
       }

   cout<<"Enter the kth position :"<<endl;
   cin>>k;

   priority_queue<int, vector<int> ,greater<int>> p;
   for(int i=0 ; i<size ; i++){
       p.push(arr[i]);
       }

    int ans , i=1;

    while(!p.empty()){
        if(i==k)
        {
            ans = p.top();
            break;
            }
            i++;
            p.pop();
        }
    cout<<ans<<endl;
    return 0;
}
