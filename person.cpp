#include<iostream>
using namespace std;
class person
{
	char name[50];
	int age;
	public:
	void getdata(void);
	void displaydata(void);
};
void person::getdata(void)
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter age:"<<endl;
	cin>>age;
}
void person::displaydata(void)
{
	cout<<"\nName:"<<name<<endl;
	cout<<"\nAge:"<<age<<endl;
}
int main()
{
	person P;
	P.getdata();
	P.displaydata();
	return 0;
}
