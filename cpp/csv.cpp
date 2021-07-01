#include "iostream"
#include "fstream"
#include "bits/stdc++.h"
using namespace std;
int index();
void get_element();
void print_table();

int main()
{
	
	int range = index();
	cout<< "index range:[0-"<<range <<"]"<<endl;
	print_table();
	get_element();
}

int index()
{	
	ifstream csv_file;
	csv_file.open("med.csv");
	string line;
	int i;
	while(!csv_file.eof())
	{
		csv_file >> line;
		i++;
	}
	return i;
}

void get_element()
{
	ifstream csv_file;
	csv_file.open("med.csv");
	string line;
	int row;
	int column;
	cout <<"row:";
	cin >> row;
	cout <<"column";
	cin >> column;
	int i=0;
	while(i<=column)
	{	
		i++;
		csv_file >> line;
	}
	cout<<line<<endl;
	vector<string> v;
	stringstream ss(line);
	while(ss.good())
	{
		string substr;
		getline(ss, substr, ',');
		v.push_back(substr);
	}
	cout << "element at row : "<<row <<" column: "<<column <<" is "<<v[row];
	
}

void print_table()
{
	ifstream csv_file;
	csv_file.open("med.csv");
	string line;
	int i=0;
	int range=index();
	while(i<32)
	{
		csv_file >> line;
		//cout << line <<endl;
		vector<string> v;
		stringstream ss(line);
		
		while(ss.good()){
			string substr;
			getline(ss, substr, ',');
			v.push_back(substr);
		}
		
		for(int j=0;j<7;j++)
		{	
		if(j==0){
			cout <<i<<")";
			cout <<"|"<<v[j]  <<"\t\t";
		}
		else
			cout<<"| ["<<v[j]<<"]"  <<"\t\t";
		}
		cout<< "\n";
		if(i==0)
		{
			for(int k=0;k<7;k++)
			{
				cout<<"---------------+";
			}
			cout<<"\n";
		}
		i++;
	}
}










