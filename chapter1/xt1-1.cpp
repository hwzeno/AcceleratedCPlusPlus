#include<iostream>
#include<string>
int main()
{
	const std::string hello = "Hello!";
	const std::string message = hello + ", world" + "!";/*why can const be used here?*/
	return 0;
}
