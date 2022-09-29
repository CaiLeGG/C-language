#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数--函数名，函数参数，函数的返回类型
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//目的地，源头
//	printf("%s\n", arr1);
//	return 0;
//}

//输入一个函数，比较两个整型变量的最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z--返回最大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//写一个函数，交换两个整型变量的值
//这个函数出bug了
// Swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
// 改变的是形参，不能改变实参
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = x;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a = %d, b = %d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}

//应用指针变量来实现整型的改变
//int main()
//{
//	int a = 10;//4个字节的空间
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//	printf("a = %d", a);
//	return 0;
//}

//应用指针变量来修改
//Swap2能实现，是应为形参能和实参构建联系，实现转换
//void Swap2(int *pa,int *pb)//在函数内改变函数外的参数是用地址来传
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a = %d, b = %d\n", a, b);
//	Swap2(&a, &b);//用地址来交换--传址调用
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}

//用一个函数打印100-200的素数
//int is_prime(int n)
//{
//	int j = 0;//2->i-1去除
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//		{ 
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//用一个函数写出1000-2000年之间的闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//用一个函数来打印数组中其中一个数的下标
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = a[mid] - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = a[mid] + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}

//用一个函数，每调用一次这个函数，就将num的值+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}

//函数的嵌套调用和链式访问\
//嵌套调用
//void test_2()
//{
//	printf("hehe\n");
//}
//int test_1()
//{
//	test_2();
//}
//int main()
//{
//	test_1();
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	//链式访问
//	printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	//链式访问
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//函数返回的是打印在屏幕上的字符个数
//	return 0;
//}

//加法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(a, b);//函数声明一下-告知
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)//函数的定义
//{
//	return x + y;
//}

//做一个计算器
//加减乘除
//#include"add.h"
#include "Sub.h"
//导入静态库
#pragma comment(lib, "Sub.lib")
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);//30
	int c = Sub(a, b);//-10
	printf("%d", c);
	return 0;
}