#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//栈溢出

//接收一个整型值(无符号)，按照顺序打印它的每一位。例如：输入：1234，输出：1 2 3 4
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归-函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//void test(int n)
//{
//	if (n < 1000)
//	{
//		test(n + 1);//栈溢出
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//写递归代码的时候
//1.不能死递归，都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深

//用一个函数求字符串长度
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "bit";
//	//['b']['i']['t']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//用函数递归实现
//#include<string.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = "bit";
//	//['b']['i']['t']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//递归与迭代
//求n的阶乘-迭代
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//用函数的递归来实现
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}//有一些功能：可以使用迭代的方式实现，也可以使用递归

//求第n个斐波那契数-后面的数等于前两个数之和（n>2）-函数的递归
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//迭代
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//编写程序写一下1到100的所有整数中出现多少次数字9
//9 19 29 39 49 59 69 79 89 99
//91 92 93 94 95 96 97 98 99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4......+1/99-1/100的值，打印结果
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//简单方法
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个数中的最大值
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//写一个9*9乘法表
//1*1
//1*2 2*2
//1*3 2*3 3*3 
//1*4 2*4 3*4 4*4
//...
//1*9 2*9 3*9 4*9 ...9*9
int main()
{
	int i = 1;
	//行数
	for (i = 1;i <= 9;i++)
	{
		//打印一行
		int j = 1;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}