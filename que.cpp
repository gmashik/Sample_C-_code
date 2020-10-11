#include<iostream>
#include<queue>
//First in first out structure
using namespace std;
void print(queue<double> d){
	while(!d.empty()){
		cout<<d.front()<<endl;
		d.pop();
	}
}
int main(){
	queue<double> q;
	q.push(32.4);
	q.push(43.43);
	q.push(334.56);
	print(q);
	return 0;
}
