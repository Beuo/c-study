#include<stdio.h>//#include包含某个库,stdio:standard input output

int num1 = 100;//定义全局变量num1，定义在代码块（{}）之外的变量就被称为全局变量，在代码块内部的是局部变量
int main()//主函数-程序的入口，main函数有且仅有一个,int是整型的意思，mian前的int表示int函数调用返回一个整数值
{
	printf("hello,world!\n");//在屏幕上输出hello，world！printf函数是一个打印函数。
	int num1 = 10;//定义局部变量num1
	printf("num1 is %d\n", num1);
	//局部变量和全局变量的名字建议不要相同，容易产生错误，当局部变量和全局变量名字相同时，局部变量优先
	//这里打印输出的是局部变量num1=10
	char ch = 'A';//定义ch自变量为char类型，并将“A”赋值给ch
	int age = 20;//定义age自变量为int类型，并将20赋值给age
	printf("ch的值为%c\n", ch);//以字符形式打印变量ch的值
	printf("age的值为%d\n", age);//以整型打印age的值
	//查看每个字符类型占用的字节数
	printf("size of char is %d\n", (int)sizeof(char));//(int)sizeof(char)),这里不加前面的(int)会有警告，但不会影响代码，也不会报错。
	printf("size of int is %d\n", (int)sizeof(int));
	printf("size of short is %d\n", (int)sizeof(short));
	printf("size of long is %d\n", (int)sizeof(long));
	printf("size of long long is %d\n", (int)sizeof(long long));
	printf("size of float is %d\n", (int)sizeof(float));
	printf("size of double is %d\n", (int)sizeof(double));
	printf("\n");


	return 0;//返回0
}
//数据类型
//char			字符型			%c
//int			整型			%d
//short int		短整型			%d
//long			长整型			%d
//long long		更长的长整型	%d
//float			单精度浮点型	%f
//double		双精度浮点型	%f
// %p以地址形式打印
// &x打印16进制数字
