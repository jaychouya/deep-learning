#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>nums,res;
int main(){
	int st=-2e9,ed=-2e9;
	int n;
	cin>>n;
	while(n--){
		int l,r;
		cin>>l>>r;
		nums.push_back({l,r});
	}
	sort(nums.begin(),nums.end());
	for(auto num:nums){
		if(ed<num.first)
		{
			if(ed!=-2e9) res.push_back({st,ed}) ; 
            st=num.first,ed=num.second ;   
		}
		 else if(ed<num.second)  
         ed=num.second ;   
	}
	res.push_back({st,ed});
	cout<<res.size();
	return 0;
}