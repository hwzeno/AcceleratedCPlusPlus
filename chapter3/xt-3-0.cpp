#include<iostream>
#include<string>
#include<ios>/*定义了一个类型streamsize,输入\输出库就是用这个类型来表示长度的*/
#include<iomanip>/*定义了控制器setprecision,它可以让哦我们指明输出所包含的有效位数*/
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision;
using std::streamsize;
//using std::precision;
int main()
{
	/*请求输入并读入学生的姓名*/
	cout << "Please enter your first name:";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	/*请求输入并读入其中和期末成绩*/
	cout << "Please enter your midterm and final exam grades:";
	double midterm, final;
	cin >> midterm >> final;
	/*请求输入家庭作业成绩*/
	cout << "Enter all your homework grades, "
					"followed by end-of-file:";

	/*到目前为止，读到的家庭作业成绩的个数及总和*/
	int count = 0;
	double sum = 0;
	/*把家庭作业成绩读到变量X中*/
	double x;

	/*不变式：*/
	/*到目前为止，我们已经读到了count个家庭作业成绩，
	而且sum等于头count个成绩的总和*/
	while(cin >> x)
	{
		++count;
		sum += x;
	}
	/*输出结果*/
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
			 << 0.2 * midterm + 0.4 * final + 0.4 * sum /count
			 << setprecision(prec)
			 << endl;


	return 0;
}
