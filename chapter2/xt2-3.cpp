#include<iostream>
#include<string>
int main()
{
	/*空格行数*/
	int pad = 0;
	std::cout << "Input padding:";
	std::cin >>pad ;
	/*获取空格行数*/
	std::cout << "Please enter your name:";
	std::string name;
	std::cin >> name;

	/*构造问候语*/
	const std::string greeting = "Hello," + name + "!";
	

	const int rows = pad * 2 +3;
	const std::string::size_type cols = greeting.size() + pad * 2 + 2;

	std::cout << std::endl;

	for(int r = 0; r != rows; ++r)
	{
		std::string::size_type c = 0;
		

		while(c != cols)
		{
			if(r == pad + 1 && c == pad + 1)
			{
				std::cout << greeting;
				c += greeting.size();
			}
			else
			{
				if(r == 0 || r == rows - 1 || c == 0 || c == cols -1)
					std::cout << "*";
				else
					std::cout << " ";
				++c;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
