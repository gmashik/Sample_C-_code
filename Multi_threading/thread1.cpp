#include<iostream>
#include<thread>
#include<algorithm>
#include<chrono>
 using namespace std::chrono;
using namespace std;
typedef unsigned long long ull;
ull odds=0;
ull evens=0;
void oddsum(ull start,ull end){
	for(ull i=start;i<=end;i++){
		if((i & 1)==1)  odds+=i;
	}
}
void evensum(ull start,ull end){
	for(ull i=start;i<=end;i++){
		if((i & 1)==0)  evens+=i;
	}
}

int main(){
	
	ull start=0,end=1900000000;
	auto starttime=high_resolution_clock::now();
	std::thread t1(oddsum,start,end);
	std::thread t2(evensum,start,end);
	t1.join();
	t2.join();
	oddsum(start,end);
	evensum(start,end);
	auto endtime=high_resolution_clock::now();
	auto duration=duration_cast<microseconds>(endtime-starttime);
	cout<<odds<<endl;
	cout<<evens<<endl;
	cout<<"Required Time: "<<duration.count()/1000000<<endl;
	return 0;
}
