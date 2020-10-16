#include<iostream>
#include<thread>
#include<algorithm>
#include<chrono>
using namespace std::chrono;
using namespace std;
class Base{
	public:
		void func(int x){
			while(x-->0){
				cout<<x<<endl;
			}
		}
};
int main(){
	/*int x=10;
	while(x-->0){
		cout<<x<<endl;
	}*/
	//Lambda function
	/*auto fun=[](int x){
		while (x-->0){
			cout<<x<<endl;
		}
	};
	thread t1(fun,15);*/
	Base b;
	thread t2(&Base::func,&b,10);
	t2.join();
	return 0;
}
