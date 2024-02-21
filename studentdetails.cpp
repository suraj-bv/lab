#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int rollnumber;
int markssubject1;
int markssubject2;
public:
void setdetails(const string &studentname,int studentrollnumber,int subject1marks,int subject2marks)
{
name=studentname;
rollnumber=studentrollnumber;
markssubject1=subject1marks;
markssubject2=subject2marks;
}
void displaydetails()
{
cout<<"Student name: "<<name<<endl;
cout<<"Roll number: "<<rollnumber<<endl;
cout<<"Marks in subject 1: "<<markssubject1<<endl;
cout<<"Marks in subject 2: "<<markssubject2<<endl;
int totalscore=markssubject1+markssubject2;
cout<<"Total score:"<<totalscore<<endl;
}
};
int main(){
student student;
student.setdetails("John Doe",1234,85,92);
student.displaydetails();
return 0;
}
