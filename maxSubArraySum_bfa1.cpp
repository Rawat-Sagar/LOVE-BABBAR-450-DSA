// Time complexity = O(n***3)
#include<iostream> 
using namespace std; 

int main(){
   int arr_size ;
   cout<<"Array size :";
   cin>>arr_size;
   int arr[arr_size];
   for(int i=1;i<=arr_size;i++) cin>>arr[i];
   
   int max = INT8_MIN;
   for(int i=1;i<=arr_size;i++){
     for(int j=i;j<=arr_size;j++){
       int s=0;
       for(int k=i;k<=j;k++){
         s=s+arr[k];
       }
       if(s>max){
         max = s;
       }
     }
   }
cout<<max;
}

//STDIN
//5
//1 2 3 -2 5
