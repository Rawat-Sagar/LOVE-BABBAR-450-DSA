//Time_Complex  :O(n**3)
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n1 = 6 ;
   int A[] = {1, 5, 10, 20, 40, 80};
   int n2 = 5 ;
   int B[] = {6, 7, 20, 80, 100};
   int n3 = 8 ;
   int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
   
   int i , j , k , flag = 0;
   
   for(i = 0; i<n1 ; i++)
   {
       for(j = 0; j<n2 ; j++)
       {
           if(A[i]==B[j])
           {
               for(k = 0 ; k<n3 ; k++)
               {
                   flag=1;
                   cout<<A[i]<<" ";
                   break;
               }
           }
       }
   }
   
   if(flag==0)
   {
       cout<<"No such values present";
   }
    
    return 0;
}
