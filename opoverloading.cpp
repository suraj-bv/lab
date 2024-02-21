#include<iostream>
using namespace std;
class number{
	private :
		int value;
	public:
		number(int val){
			value=val;
		}
		number operator-(){
			return number(-value);
		}
		void display(){
			cout<<"Value:"<<value<<endl;
		}
};
int main(){
	number num1(10);
	number num2=-num1;
	num1.display();
	num2.display();
	return 0;
}
