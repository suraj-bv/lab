#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void writetimetofile(const string& filename){
	ofstream file(filename, ios::binary);
	if(file.is_open()){
		time_t currenttime=time(nullptr);
		file.write((char*)&currenttime, sizeof(time_t));
		file.close();
		cout<<"Time has been written to the file."<<endl;
	}else{
		cout<<"Failed to open the file for writting."<<endl;
	}
}
void readtimefromfile(const string& filename){
	ifstream file(filename, ios::binary);
	if(file.is_open()){
		time_t storedTime;
		file.read((char*)&storedTime, sizeof(time_t));
		if(file){
			string timeString=ctime(&storedTime);
			cout<<"Time read from the file:"<<timeString<<endl;
		}
		else{
			cout<<"Failed to read the time from the file."<<endl;
		}
		file.close();
	}
	else{
		cout<<"Failed to open the file for reading."<<endl;
	}
}
int main(){
	string filename="time.bin";
	writetimetofile(filename);
	readtimefromfile(filename);
	return 0;
}


