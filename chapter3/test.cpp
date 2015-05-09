#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string e;
	vector<string> str;
	while(cin >> e)
	{
		str.push_back(e);
	}
	cout << str[2].size() << endl;
	return 0;
}
