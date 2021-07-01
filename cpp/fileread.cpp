#include "iostream"
#include "fstream"
#include "bits/stdc++.h"
using namespace std;

void read()
{
	ifstream fin;
	string line;
	fin.open("med.csv");
	while(!fin.eof())
	{
		fin>>line;
		//cout<<line<<"\n"<<endl;
		vector<string> v;
		stringstream ss(line);
		while(ss.good()){
			string substr;
			getline(ss, substr, ',');
			v.push_back(substr);
		}
		cout << v[2]<<endl;
	}
}

void write()
{
	fstream fout;
	fout.open("med2.csv",ios::out | ios::app);
	cout<<"enter details :"
	<<"id,age,gender"<<endl;
	int id , age;
	string gender;
	for(int i= 0; i<3;i++)
	{
		cin >> id
			>>age
			>> gender;
		fout<<id <<","
			<<age<<","
			<<gender<<","
			<<"\n";
			
	}	
}
int get_index()
{
	ifstream csv_file;
	csv_file.open("med.csv");
	string line;
	int i=0;
	while(!csv_file.eof())
	{
		csv_file >> line;
		//cout << line <<endl;
		//cout << i <<endl;
		i++;
	}
	//cout << "index range:[0-"<<i <<"]"<<endl;
	return i;
}

int main()
{
	//read();
	//write();
	int x=get_index();
	cout<< "index range:[0-"<<x <<"]"<<endl;
	return 0;
}

