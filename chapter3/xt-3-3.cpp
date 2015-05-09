#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int count = 1;
	string e = "\0";
	vector<string> str1;
	while(cin >> e)
	{
		str1.push_back(e);
	}
	sort(str1.begin(), str1.end());
	for(int i = 0; i < str1.size(); i++)
	{
		if(str1[i] == str1[i + 1])
		{
			count += 1;
			cout << str1[i] << "出现了:" << count << "次" << endl;
		}
		else
		{
			if(str1[i] != str1[i - 1])
			{
				cout << str1[i] << "出现了:" << count << "次" << endl;
			}
			count = 1;
		}
	//	cout << str1[i] << endl;
	}
	return 0;
}
