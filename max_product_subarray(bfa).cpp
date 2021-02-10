// Time complexity = O(n**2)
#include <iostream>
using namespace std;

int main(){
   int arr[] = {6, -3, -10, 0, 2};
   int arr_size = sizeof(arr)/sizeof(arr[0]);
   
   int max = 0;
   for(int i=0;i<arr_size;i++){
      int product = 1;
     for(int j=i;j<arr_size;j++){
       product=product*arr[j];
       if(product>max){
         max = product;
       }
     }
   }
cout<<"Maximum product subarray :"<<max;
return 0;
}
