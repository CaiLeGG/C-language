#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行
//写代码
//1.写出主函数(main主函数)
//100-500 代码
//如何执行呢？-C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口
//int是整型

//写个代码，在屏幕上打印：比特
//printf-库函数-在屏幕打印信息的
//printf的使用，也得打招呼(引用头文件 stdio.h)

#include <stdio.h>

int main()
{
	printf("比特");
	return 0;
}

//编译+链接+运行代码
//快捷键：ctrl+f5
//
//一个工程中有且仅有一个main函数
//1.一个工程中可以有多个.c文件
//2.但是多个.c文件中只能有一个main函数
 
//数据类型
//计算机语言-写程序-解决生活问题
//必须有能力来描述生活中的问题！
//购物商城-上架商品，价格15.6元-小数 1.56*10^1
//年龄-50
//C语言-浮点数
//     -整型

//a
//'a'-字符

int main()
{
	//字符类型
	char ch = 'a';
	//整型
	int age = 20;
	//短整型
	short num = 10;
	//long
	//long long

	//单精度浮点型
	float weigt = 55.5;
	//双精度浮点型
	double d = 0.0;

	return 0;
}

	int main()
{
	//printf("hehe\n");
	//printf("比特\n");
	//printf("%d\n",100);//打印一个整数-%d
	//sizof-关键字-操作符-计算机类型或者变量所占空间的大小

		printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2
		printf("%d\n", sizeof(int));//4
		printf("%d\n", sizeof(long));//4
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
	return 0;
}

#include <stdio.h>
int main()
{
	//创建的一个变量
	//类型  变量的名字=0；
	int age = 20;
	double weight = 75.3;
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);//21
	printf("%lf\n", weight);//65,300000

	return 0;
}

//%d-整型
//%f-float
//%lf-double

#include<stdio.h>
//全局变量-{}外部定义的
int a = 100;

int main()
{
	//局部变量-{}内部定义
	//当局部变量和全局变量名字冲突的情况下，局部优先
	int a = 10;

	printf("%d\n", a);//10
	return 0;
}

//输入两个数，使sum等于这两个数之和
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//源文件的第一行加上#define_CRT_SECURE_NO_WARNINGS 1
