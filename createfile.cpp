#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outfile("example.txt");
	if(outfile){
		cout<<"File created successfully!"<<std::endl;
		outfile<<"Hello World!!";
		outfile.close();
		ifstream infile("example.txt");
		string line;
		if(infile){
			cout<<"File opened successfully!"<<endl;
			while(getline(infile,line)){
				cout<<line<<endl;
			}
			infile.close();
		}
		else{
			cout<<"Error opening the file!"<<std::endl;
		}
	}
	else{
		cout<<"Error creating the file!"<<std::endl;
	}
	return 0;
}

