#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	string::size_type val = 0;
	cout << "Input the length of the square's side: ";
	cin >> val;
	string stars(val, '*');
	for(int i = 0; i < val; i++)
	{
		cout << stars << endl;
	}


	return 0;
}
