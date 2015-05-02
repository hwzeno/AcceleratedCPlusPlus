#include<iostream>
#include<string>
int main()
{
/*第一次提示时就输入两个名字*/
	std::cout << "What's your name?";
	std::string name;
	std::cin >> name;
	std::cout << "Hello," << name
						<< std::endl << "And what's yours?";
	std::cin >> name;
	std::cout << "Hello," << name
						<< "; nice to meet you too!" << std::endl;
	return 0;						
}
