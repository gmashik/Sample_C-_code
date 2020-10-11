#include<iostream>
#include<stack>
//Last in first out tructure
using namespace std;
void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}

int main(){
	stack<int> s1;
	s1.push(2);
	s1.push(3);
	s1.push(6);
	print(s1);
	
	return 0;
}
