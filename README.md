# c-
学习c语言的笔记
#include<stdio.h>////#include包含某个库,stdio:standard input output

int main()//主函数-程序的入口，main函数有且仅有一个,int是整型的意思，mian前的int表示int函数调用返回一个整数值
{
	printf("hello,world!\n");//在屏幕上输出hello，world！printf函数是一个打印函数。
	char ch = 'A';//定义ch自变量为char类型，并将“A”赋值给ch
	int age = 20;//定义age自变量为int类型，并将20赋值给age
	printf("ch的值为%c\n", ch);//以字符形式打印变量ch的值
	printf("age的值为%d\n", age);//以整型打印age的值
	//查看每个字符类型占用的字节数
	printf("size of char is %d\n", sizeof(char));
	printf("size of int is %d\n", sizeof(int));
	printf("size of short is %d\n", sizeof(short));
	printf("size of long is %d\n", sizeof(long));
	printf("size of long long is %d\n", sizeof(long long));
	printf("size of float is %d\n", sizeof(float));
	printf("size of double is %d\n", sizeof(double));
	
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

//计算机中的存储单位
// bit	比特
// byte	字节
// kb
// mb
// gb
// tb
// pb
//
