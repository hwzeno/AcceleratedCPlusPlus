#include<iostream>
#include<string>
/*
using namespace std;
*/

using std::cout;
using std::endl;
using std::cin;

int main()
{
	  int val = 0;
		int row = 0;
		cout << "Input the height of trangle:";
		cin >> val;
			      

		while(row <= val)
		{
		   int col;
		   for(col = 1;col < row ; col++)
			 {
			    cout << "*";
			 }   
			  cout << endl;
			  row++;
		}
return 0;
}
