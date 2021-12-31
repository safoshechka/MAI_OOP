// main.cpp

#include <iostream>
#include "Complex.h"

using namespace std;

Complex operator "" _i(long double i)
{
    return Complex(0,i);
};

Complex readFromConsole()
{
	double r;
	double j;
	cin>>r;
	cin>>j;
	return Complex(r,j);
}

void help()
{
    cout<< "Supported commands:\n"
    "a r1 j1 r2 j2 (add two complex numbers)\n"
    "s r1 j1 r2 j2 (sub two complex numbers)\n"
    "m r1 j1 r2 j2 (mul two complex numbers)\n"
    "d r1 j1 r2 j2 (div two complex numbers)\n"
    "e r1 j1 r2 j2 (check equality of two complex numbers)\n"
    "c r1 j1 (get conjugacy complex number)\n"
    "r r1 j1 r2 j2 (comparison by real part)\n"
    "q (quit program)\n";
}

void Test1()
{
	Complex arg1 = 1.0_i + 0.5;
	Complex arg2 = 0.5_i + 0.25;
	Complex res = arg1.Add(arg2);
	cout<<'('<<res.r<<','<<res.j<<')'<<endl;
}

int main(int argc,char *argv[])
{
	Test1();
	help();
	char run=1;
	while(run)
	{
		cout<<"> ";
		char cmd;
		cin>>cmd;
		switch(cmd)
		{
			case 'a':
			{
				Complex res = readFromConsole().Add(readFromConsole());
				cout<<'('<<res.r<<','<<res.j<<')'<<endl;
				break;
			}
			case 's':
			{
				Complex res = readFromConsole().Sub(readFromConsole());
				cout<<'('<<res.r<<','<<res.j<<')'<<endl;
				break;
			}
			case 'm':
			{
				Complex res = readFromConsole().Mul(readFromConsole());
				cout<<'('<<res.r<<','<<res.j<<')'<<endl;
				break;
			}
			case 'd':
			{
				Complex res = readFromConsole().Div(readFromConsole());
				cout<<'('<<res.r<<','<<res.j<<')'<<endl;
				break;
			}
			case 'e':
			{
				char res = readFromConsole().Equ(readFromConsole());
				cout<<(res ? "equals":"not equals")<<endl;
				break;
			}
			case 'c':
			{
				Complex res = readFromConsole().Conj();
				cout<<'('<<res.r<<','<<res.j<<')'<<endl;
				break;
			}
			case 'r':
			{
				char res = readFromConsole().EquR(readFromConsole());
				cout<<(res ? "equals":"not equals")<<endl;
				break;
			}
			case 'q':
			{
				run=0;
				break;
			}
			default:
			{
				cout<<"There is no such command\n"<<endl;
                help();
			}
		}
	}
	return 0;
}

