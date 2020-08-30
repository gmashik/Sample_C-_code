#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>


using namespace std;

int comp(string a1,string a2){ //This function will do compare two strings
	string t1=a1;
	string t2=a2;
	if(t1.size()!=t2.size()) return 1;
	transform(t1.begin(), t1.end(), t1.begin(), ::tolower); //to avoid error in case of Peter/ peter since they are 
	transform(t2.begin(), t2.end(), t2.begin(), ::tolower); // same person
	int count=0;
	for(int i=0;i<t1.size();i++) {
		if (t1[i]!=t2[i]) return 1;
		else count++;
	}
	if(count==t1.size()) return 0;
	return 1;
}

int main(){
	vector<string>s1,s2;

	int n;
	// This part is for taking input from console
	/*string temp;
	cout<<"number of elements in List A: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		s1.push_back(temp);
	}
	cout<<"number of elements in List B: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		s2.push_back(temp);
	}*/
	//Console input ends
	s1.push_back("Allison");
	s1.push_back("Brian");
	s1.push_back("Peter");
	s2.push_back("Jason");
	s2.push_back("Peter");
	s2.push_back("Sara");
	cout<<"  1st list  : [ ";
	for(int i=0;i<s1.size();i++) {
		cout<<s1[i]<<" ";
		if(i!=s1.size()-1) cout<<", ";
		if(i==s1.size()-1) cout<<"]\n ";
	}
	cout<<" 2nd list  : [ ";
	for(int i=0;i<s2.size();i++){
		cout<<s2[i]<<" ";
		if(i!=s2.size()-1) cout<<", ";
		if(i==s2.size()-1) cout<<"]\n ";
	} 
	for(int i=0;i<s2.size();i++){
		int c=0;
		for(int j=0;j<s1.size();j++){
			if(comp(s2[i],s1[j])==0) break;
			c=c+comp(s2[i],s1[j]);
		}
		if(c==s1.size()) s1.push_back(s2[i]);
	}
	cout<<" \n  Mergerd list  : [ ";
	for(int i=0;i<s1.size();i++) {
		cout<<s1[i]<<" ";
		if(i!=s1.size()-1) cout<<", ";
		if(i==s1.size()-1) cout<<"]\n ";
	}
	
	return 0;
}
