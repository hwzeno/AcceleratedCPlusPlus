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
	const int pad = 10;

	const int rows = pad * 2 +3;
	const std::string::size_type cols = greeting.size() + pad * 2 + 2;
	const std::string space1(cols - 2, ' ');
	const std::string space2((cols - 2 - greeting.size()) / 2, ' ');
	const std::string line1 = "*" + space1 + "*"; 
	const std::string line2 = "*" + space2 +  greeting + space2 + "*";
	std::cout << std::endl;

	for(int r = 0; r < rows; ++r)
	{
		std::string::size_type c = 0;
		
			if(r == pad + 1 )
			{
				std::cout << line2;
				//c += greeting.size();
			}
			else
			{
				
				if(r == 0 || r == rows - 1)
				{
					while(c != cols)
					{
						std::cout << "*";
					  c++;	
					}
				}
				else
				{
					std::cout << line1 ;
				}
			}
		
		std::cout << std::endl;
	}
	return 0;
}
