#include<iostream>
#include<vector>
#include<cstring>
#include <algorithm> 
#include<set>
#include<ctime>
using namespace std;


int main(){
	vector<string>s1,s2;
	set <string> s;
	set <string> ::iterator it;
	int n;
	clock_t begin = clock();
	s1.push_back("Allison");
	s1.push_back("Peter");
	s1.push_back("Brian");
	s1.push_back("Laura");
	s1.push_back("Kevin");
	s2.push_back("Jason");
	s2.push_back("Peter");
	s2.push_back("Sarah");
	s2.push_back("Laura");
	cout<<" 1st list  : ";
	for(int i=0;i<s1.size();i++) {
		cout<<s1[i]<<" ";
		if(i!=s1.size()-1) cout<<", ";
	}
	cout<<"\n";
	cout<<" 2nd list  : ";
	for(int i=0;i<s2.size();i++){
		cout<<s2[i]<<" ";
		if(i!=s2.size()-1) cout<<", ";
	} 
		cout<<"\n";
	for(int i=0;i<s2.size();i++) s1.push_back(s2[i]);
	//sort( s1.begin(), s1.end() );
	s1.erase( unique( s1.begin(), s1.end() ), s1.end() ); 
	
	/*for(int i=0;i<s1.size();i++){
		s.insert(s1[i]);
	}
	for (it=s.begin(); it !=s.end(); ++it) 
    { 
        cout << *it<<endl; 
    } */
    //for(int i=0;i<s1.size();i++) cout<<s1[i]<<endl;
    	clock_t end = clock();
    double req_time = double(end - begin) / CLOCKS_PER_SEC;
    cout<<"\n Required time :"<<req_time<<endl;
    cout<<" Mergerd list  : ";
	for(int i=0;i<s1.size();i++) {
		cout<<s1[i]<<" ";
		if(i!=s1.size()-1) cout<<", ";
	}
	return 0;
}
