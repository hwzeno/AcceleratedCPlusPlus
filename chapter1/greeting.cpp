#include<iostream>
#include<string>
int main()
{
	std::string name;
	std::cout << "Input your name:";
	std::cin >> name;
	/*构造出要输出的信息*/
	const std::string greeting = "Hello," + name + "!";
  const std::string spaces(greeting.size(), ' ');
	const std::string second = "*  " + spaces + "  *";
	const std::string first(second.size(), '*');
	/*输出问候框*/
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "*  " <<  greeting << "  *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;
}
