#include<iostream>
using namespace std;
double divide(int numerator,int denominator){
	if(denominator==0){
		throw"Division by zero error";
	}
	return numerator/denominator;
}
int main(){
	int numerator,denominator;
	cout<<"Enter numerator : ";
	cin>>numerator;
	cout<<"Enter denominator : ";
	cin>>denominator;
	try{
		double result=divide(numerator,denominator);
		cout<<"Result of division: "<<result<<endl;
	}catch(const char* errormessage){
		cerr<<"Error :"<<errormessage<<endl;
	}
	return 0;
}

