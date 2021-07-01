#include<iostream>
#include<array>
using namespace std;

#define pi 3.14159
#define newline '\n'

int main()
{
cout<< "newline \n carriage return \r tab \t vertical tab \v" <<endl;
cout<< "from here its new" << endl;
cout<< "backspace \b form feed \f alert \a single quote \' double quote \"" <<endl;
cout<< "question mark \? backslash \\";
double r=5.0;
double circle;
circle=2*pi*r;
cout<< circle;
cout<< newline;
cout<< circle<<endl;
int i;
float f=3.542;
i=(int)f;
float x=5.87;
int y=sizeof(x);
cout<< y;
cout<< i;
cout<<"\n";
cout<<"\n";
array<int,3> ar{};
for(int i : ar)
{
	cout<<i;
}
int a;
cout<<*&a<<endl;
}