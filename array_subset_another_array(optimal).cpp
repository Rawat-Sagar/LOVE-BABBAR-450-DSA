// Time Complexity : O(n)
// Space Coplexity : O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1,3,7,4,8,12};
    int m = 6;
    int arr2[] = {3,4,7};
    int n = 3;
    
    unordered_map<int,int> hash;
    
    for(int i=0 ; i<m ; i++)
    {
        hash[arr1[i]] = 1;
    }
    
    bool is_subset = true;
    for(int i=0 ; i<n ; i++)
    {
        if(hash[arr2[i]]!=1)
        {
            is_subset = false;
            break;
        }
    }
    
    if(is_subset)
    {
        std::cout << "Yes, array is subsest of another array" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
