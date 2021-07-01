#include "iostream"
#include "fstream"
#include "bits/stdc++.h"
using namespace std;
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
	int x=get_index();
	cout<< "index range:[0-"<<x <<"]"<<endl;
	return 0;
}