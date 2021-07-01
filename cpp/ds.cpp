#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//creating structure
struct movies_list{
	string title;
	int year;
};
int main ()
{
  string mystr;

  movies_list amovie;
  movies_list * pmovie;
  pmovie = &amovie;

  cout << "Enter title: ";
  getline (cin, pmovie->title);
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  return 0;
}