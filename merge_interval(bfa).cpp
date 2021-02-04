//Intervals given is sorted or not 
//If not then provide brute force approach
//Sort all the interval and linearly iterate and check the merging 
//Time Complexity :O(N log N) Space Complexity :O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of pairs :"<<endl;
	cin>>size;
	vector<pair<int ,int> > interval;
	for(int i=0 ; i<size ; i++){
		int x, y ; 
		cin>>x>>y;
		interval.push_back({x,y});
	}
	sort(interval.begin() , interval.end());  //Sort the elements if not
	// Stack to store the merge intervals
	stack<pair<int ,int> > container;
	container.push({interval[0].first,interval[0].second});
	for(int i=1 ; i<size ; i++){
		int start1 = container.top().first;
		int end1 = container.top().second;
		int start2 = interval[i].first;
		int end2 = interval[i].second;
		
      //Compare the end1 to start2 i.e if (1,4) (5,8)
      if(end1 < start2)
      {
      	container.push({start2,end2});
	  }
	  
	  else
	  {
	  	container.pop();
	  	end1 = max(end1,end2);
	  	container.push({start1,end1});
	  }
	  	
	}
	
	cout<<"The merge elements are :"<<endl;
	while(!container.empty())
	{
		cout<<container.top().first<<" "<<container.top().second<<endl;
		container.pop();
	}
	return 0;
}
