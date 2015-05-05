#include<iostream>
#include<string>
/*
using namespace::std::cout
using namespace::std::endl
using namespace::std::cin*/
int main()
{
	  int val = 0;
		int row = 0;
		std::cout << "Input the height of trangle:";
		std::cin >> val;
			      

		while(row <= val)
		{
		   int col;
		   for(col = 1;col < row ; col++)
			 {
			    std::cout << "*";
			 }   
			  std::cout << std::endl;
			  row++;
		}
return 0;
}
