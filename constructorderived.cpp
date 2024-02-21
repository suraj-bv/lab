#include<iostream>
using namespace std;
class base{
	protected:
		int alpha;
	public:
		base(int a){
			alpha=a;
			cout<<"Base class constructor called"<<endl;
		}
};
class derived:public base{
	protected:
		int beta;
		int gamma;
	public:
		derived(int a,int b, int c):base(a){
			beta=b;
			gamma=c;
			cout<<"Derived class constructor called"<<endl;
		}
		void displayvalues(){
			cout<<"Alpha:"<<alpha<<endl;
			cout<<"Beta:"<<beta<<endl;
			cout<<"Gamma:"<<gamma<<endl;
		}
};
int main(){
	derived obj(1,2,3);
	obj.displayvalues();
	return 0;
}
