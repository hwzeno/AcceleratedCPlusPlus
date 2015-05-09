#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
	int e = 0;
	int sz = 0;
	std::vector<int> depart;
	while(std::cin>>e)
	{
		depart.push_back(e);
	}
	std::sort(depart.begin(), depart.end());
	sz = depart.size();
	if(sz % 4 == 0)
	{
		for(int i = sz - 1; i >= 0; i--)
		{
			std::cout << depart[i] << std::endl;
			if(i % (sz / 4) == 0)
				std::cout << std::endl;
		}
	}
	else
	{
		std::cout << "请输入4的倍数个数据" << std::endl;
		return -1;
	}
	return 0;

}



