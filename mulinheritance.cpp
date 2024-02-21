#include<iostream>
using namespace std;
class arithmetic{
	public:
		int add(int a,int b){
			return a+b;
		}
		int sub(int a,int b){
			return a-b;
		}
};
class multiplication{
	public:
		int multiply(int a,int b){
			return a*b;
		}
};
class division{
	public:
		float divide(float a,float b){
			return a/b;
		}
};
class calculate:public arithmetic,public multiplication,public division{
	public:
		void performoperations(int a,int b){
			cout<<"Addition:"<<add(a,b)<<endl;
			cout<<"Subtraction:"<<sub(a,b)<<endl;
			cout<<"Multiplication:"<<multiply(a,b)<<endl;
			cout<<"Division:"<<divide(a,b)<<endl;
		}
};
int main(){
	int num1,num2;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	calculate c;
	c.performoperations(num1,num2);
	return 0;
}
