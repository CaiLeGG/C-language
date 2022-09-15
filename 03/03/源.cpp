#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//按位取反
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = ++a;//前置++，先++，后使用
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//	//int a = 1;
//	//int b = a++;//后置++，先使用，后++
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//	//int a =(int) 3.14;//强制类型转换
//	//printf("%d\n", a);
//
//	int a = 1;
//	int b = 2;
//	int c = a && b;//&&并且
//	printf("%d\n", c);//1
//
//	int d = 0;
//	int e = 0;
//	int f = d || e;//或着
//	printf("%d\n", f);//0
//	/*if (a && b)
//	{
//
//	}*/
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;//三木操作符
//	//如果a>b成立，则 a计算，得a结果
//	//如果a>b不成立，则b计算，得b结果
//
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (b=a+2,c=b-1,a=b+1);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//下标引用操作符[]
//	printf("%d\n", arr[5]);//6
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("%d\n",100);//函数调用操作符()
//	return 0;
//}

//C语言提供的关键字
//1. C语言提供的，不能自己创建关键字
//2. 变量名不能是关键字
//int main()
//{
//	//int charr;
//	return 0;
//}

//int main()
//{
//	//大量/频繁被使用的数据，想存放在寄存器中，提高效率
//	register int num = 100;//建议将num的值储存在寄存器中
//	return 0;
//}

//tepydef-类型重定义
//tepydef unsigned int u_int;
////张三-小三
//int main()
//{
//	tepydef unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;//a是局部变量
//	printf("%d ",a);//2 2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static-静态的
//1. static修饰局部变量
//2. static修饰全局变量
//3. static修饰函数

//void test()
//{
//	static int a = 1;//static修饰的是局部变量，改变了局部变量的生命周期(本质是改变了变量的存储类型)
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//声明一下
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;//100
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;//err
//}

//声明一下
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;//30
//}
// 
//define 是一个预处理指令
//1.define定义符号
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
////2.define定义宏
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//20
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;//a在内存中要分配空间-4个字节
//	printf("%p\n", &a);//%p专门用来存放地址，在C语言中叫指针变量
//
//	int* pa = &a;
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char*pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa=&a;
//	*pa = 20;//*解引用操作，*pa是通过pa里面的地址，来找到a
//	printf("%d\n", a);//20
//	return 0;
//}
//
//int main()
//{
//	//计算指针变量类型的字节
//	printf("%d\n", sizeof(char*));//4-32位
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	return 0;
//}

//结构体可以让C语言创造新的类型出来

//创造一个学生的类型

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创造一个书的类型

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
		printf("1:%s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量

		struct Stu* ps = &s;//指针变量
		printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//*ps解引用为s

		printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
	return 0;
}