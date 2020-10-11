#include<iostream>
#include<vector>
#include<functional>
#include<set>
using namespace std;

int main(){
	set<int> s1={1,3,4,5,6};

	for (const auto& i:s1){
		cout<<i<<endl;
	}
	return 0;
}
