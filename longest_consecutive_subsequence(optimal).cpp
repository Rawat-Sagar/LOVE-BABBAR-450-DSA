// Hash set is used , Time Complexity :O(n)
// Space Complexity : O(n)
//  5 4 3 2 1 
//  5  -1   4  X
//  4  -1   3  X
//  3  -1   2  X
//  2  -1   1  X
//  1  -1   0  yes this is a way:)
#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{    //{5,4,3,2,1};
    std::set<int> hashSet;
    for(auto num : nums)
    {
        hashSet.insert(num);
    }
    
    int longest_subarray = 0;
    
    for(auto num :nums){
        // int c = hashSet.count(num-1);
        if(!hashSet.count(num-1))
        {
            int currentNum = num;
            int currentStreak = 1;
            
            // int d = hashSet.count(currentNum+1);
            while (hashSet.count(currentNum+1)){
                currentNum +=1;
                currentStreak +=1;
            }
            
            longest_subarray = max(longest_subarray , currentStreak);
        }
    }
    return longest_subarray;
}
int main()
{
    std::vector<int> nums ;
    nums = {5,4,3,2,1};
    int result = longestConsecutive(nums);
    cout<<"The longest consecutive subarray is : "<<result<<endl;
    return 0;
}
