#include<iostream>
#include<string>
int main()
{
	{
		const std::string s = "a string";
		{
			const std::string x = s + ", really";
			std::cout << s << std::endl;
		}
		std::cout << x << std::endl;/*xt1-5.cpp:11:16: error: ‘x’ was not declared in this scope*/
	}
	return 0;
}
