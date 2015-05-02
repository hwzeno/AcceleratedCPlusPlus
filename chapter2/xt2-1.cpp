#include<iostream>
#include<string>
int main()
{
	std::cout << "Please enter your name:";
	std::string name;
	std::cin >> name;

	/*构造问候语*/
	const std::string greeting = "Hello," + name + "!";
	
  /*控制总行数*/
	const int rows =30;
  /*总列数*/
	const std::string::size_type cols = greeting.size()  + 2;

	std::cout << std::endl;

	for(int r = 1; r <= rows; ++r)
	{
		std::string::size_type c = 0;
		

		while(c != cols)
		{
			if(r == rows/2 + 1)
			{
				if(c == 0 || c == cols - 1)
				{
				   std::cout << "*";
				   c++;
				}
				else
				{
				  std::cout << greeting;
				  c += greeting.size();
				}

			}
			else
			{
				std::cout << "*";
				c++;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
