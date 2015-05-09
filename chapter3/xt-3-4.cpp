#include<iostream>
//#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int min,max = 0;
	string e = "\0";
	vector<string> str1;
	while(cin >> e)
	{
		str1.push_back(e);
	}
	min = max = str1[0].size();
	for(int i = 0; i < str1.size(); i++)
	{
		if(str1[i].size() < min)
		{
			min = str1[i].size();
		}
		if(str1[i].size() > max)
		{
			max = str1[i].size();
		}
	}
	cout << "最短单词长度为：" << min << endl;
	cout << "最长单词长度为：" << max << endl;

	return 0;
}
