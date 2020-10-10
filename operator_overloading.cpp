#include<iostream>

using namespace std;

class Complex{
	private:
		int real,img;
	public:
		Complex(int r=0,int i=0):real{r},img{i}{}
		Complex operator +(Complex const obj){
			Complex res;
			res.real=real+obj.real;
			res.img=img+obj.img;
			return res;
}
		void print(){
			if ( img>=0)cout<<real<<"+"<<img<<"i"<<endl;
			else cout<<real<<""<<img<<"i"<<endl;
		}
	friend Complex operator - (Complex const &,Complex const &);
};
Complex operator - (Complex const &c1, Complex const &c2){
	return Complex(c1.real-c2.real,c1.img-c2.img);
}
int main(){
	Complex c1(1,3),c2(3,4);
	Complex c3=c1+c2;
	c3.print();
	Complex c4=c1-c2;
	c4.print();
}
