#include<iostream>
int main(int argc, char* argv[])
{
	
	std::cout << "Hello world!" << std::endl;/* << : operator; others : operand*/
	/*type of std::cout is std::ostream*/
	/*第一个<<的左操作数是std::cout,右操作数是"Hello, world!"；
	第二个<<的左操作数是 std::cout << "Hello,world!",右操作数是std::endl;*/
	/*std::endl is a manipulator(控制器)*/
	return 0;
}
