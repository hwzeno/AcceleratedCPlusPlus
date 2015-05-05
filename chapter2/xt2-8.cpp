#include<iostream>
using namespace std;
int main()
{
	int i = 1, sum = 1;
	for(; i < 10; i++ )
	{
		sum *= i;
	}
	cout << sum << endl;
	return 0;
}
