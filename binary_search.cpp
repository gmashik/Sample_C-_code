#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int bs(vector<int> v,int n){
	int start=0;
	int end=v.size()-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(v[mid]==n) return 1;
		if(v[mid]<n) start=mid+1;
		else if(v[mid]>n) end=mid-1;
	}
	return 0;
}
int main(){
	vector<int> v;
	int n=51;
	v.push_back(2);
	v.push_back(34);
	v.push_back(37);
	v.push_back(40);
	v.push_back(51);
	v.push_back(36);
	sort(v.begin(),v.end()); 
	if(bs(v,n)==1)cout<<n<<" is in the list\n";
	if(bs(v,n)==0)cout<<n<<" is in not the list\n";
	return 0;
}
