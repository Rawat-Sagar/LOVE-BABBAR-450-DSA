// Time complexity = O(n)
#include <bits/stdc++.h>
using namespace std;

int main(){
//   int arr[] = {6, -3, -10, 0, 2};
   int arr[] = {2, 3, 4, 5, -1, 0};
   int arr_size = sizeof(arr)/sizeof(arr[0]);
   
   int max_overall = arr[0];
   int max_ending_here = arr[0] , min_ending_here = arr[0];
   for(int i=1;i<arr_size;i++)
   {
       int tmp = max_ending_here;
       max_ending_here = max({arr[i] , arr[i]*max_ending_here , arr[i]*min_ending_here});
       min_ending_here = min({arr[i] , arr[i]*tmp , arr[i]*min_ending_here});
       max_overall = max(max_overall , max_ending_here);
   } 
cout<<"Maximum product subarray : "<<max_overall;
return 0;
}
