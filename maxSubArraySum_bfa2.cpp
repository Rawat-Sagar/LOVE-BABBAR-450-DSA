// Time complexity = O(n**2)
#include <iostream>
using namespace std;

int main(){
   int arr_size ;
   cout<<"Array size :";
   cin>>arr_size;
   int arr[arr_size];
   for(int i=1;i<=arr_size;i++) cin>>arr[i];
   int max = INT8_MIN;
   for(int i=1;i<=arr_size;i++){
      int s=0;
     for(int j=i;j<=arr_size;j++){
       s=s+arr[j];
       if(s>max){
         max = s;
       }
     }
   }
cout<<max;
return 0;
}
