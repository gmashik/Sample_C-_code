#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int main(){
	map<string,double> m;
	m["boka"]=37.67;
	m["soka"]=87.38;
	m.insert(make_pair("goru",732.4));
	for(auto &it:m){
		cout<<it.first<<"  "<<it.second<<endl;
	}
	return 0;
}
