#include<iostream>
#include<string>
int main()
{
	std::cout << "Please enter your name:";
	std::string name;
	std::cin >> name;

	/*构造问候语*/
	const std::string greeting = "Hello," + name + "!";
	
	/*空格行数*/
	const int pad = 5;
	int flag = 0;
	const int rows = pad * 2 +3;
	const std::string::size_type cols = greeting.size() + pad * 2 + 2;

	std::cout << std::endl;

	for(int r = 0; r < rows; ++r)
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
				if(r <= pad + 1)
				{
				/*打印上边图案*/
					if(c < cols/2 - r || c > cols/2 + r)
					{
						std::cout << "*";
						c++;
					}
					else
					{
						std::cout << " ";
						c++;
					}
					flag = 


				}
				else
				{
				/*打印下半边图案*/
					if(c > cols - r || c > cols/2 + r)
					{
						std::cout << " ";
						c++;
					}
					else
					{
						std::cout << "*";
						++c;
					}
				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
