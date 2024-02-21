#include<iostream>
using namespace std;
int main(){
	try{
		int arr[5]={1,2,3,4,5};
		int index=10;
		if(index>=0 && index<5){
			cout<<"Value at index "<<index<<":"<<arr[index]<<endl;
		}else{
			throw out_of_range("Index is out of bounds!");
		}
	}catch(const out_of_range& e){
		cout<<"Exception caught:"<<e.what()<<endl;
	}
return 0;
}
