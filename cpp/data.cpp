#include<iostream>
#include<sqlite3.h>
using namespace std;
int main(int argc, char** argv)
{
	sqlite3* DB;
	int exit = 0;
	exit = sqlite3_open("test.db", &DB);
	
	if (exit) {
		cerr << "ERROR Open DB" <<sqlite3_errmsg(DB) <<endl;
		return (-1);
	}
	else
		cout<<"Opened Database Suceessfully !"<< endl;
	sqlite3_close(DB);
	return (0);
}