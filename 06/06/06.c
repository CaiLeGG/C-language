#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = { "I LOVE YOU" };
//	char arr2[] = { "**********" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		printf("%s", arr2);
//		left++;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", arr2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		if (i = 5)
//		{
//			printf("%d", i);//5的循环
//		}
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	case 4:b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d", func(1));//0
//	return 0;
//}
//F10-逐语句
//F11-逐过程

//写个代码将三个整数按大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		int tmp = a;//把小的放到变量里面
//		a = b;//把大的放到a里面
//		b = tmp;//再把小的放到b里面
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印1-100之间3的倍数
//int main()
//{
//	int i = 0;
//	//打印1-100
//	//for (i = 1;i <= 100;i++)
//	//{
//	//	//判断i是否能被3整除
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for (i = 3;i <= 100;i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//找出两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	//输入两个数
//	scanf("%d%d", &m, &n);//24 18
//	//假设最大公约数max就是m和n的较小值
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数为:%d\n", max);
//			break;
//		}
//		max--;
//	}
//	//最小公倍数 = m*n/最大公约数
//	int min = 0;
//	min = m * n / max;
//	printf("最小公倍数为:%d", min);//72
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数为:%d\n", n);
//	return 0;
//}

//找出1000-2000年之间的闰年
//1.能被四整除，不能被100整除的是闰年
//2.能被400整除的是闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y <= 2000;y++)
//	{
//		/*if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}*/
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400==0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//输出100-200之间的素数
//素数-只能被1和他本身整除
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//判断是否为素数
//		//用2->i-1之间的数字去除i，看看能不能被整除
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)//能整除的不是素数，不能的则是素数
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//	return 0;
//}

//方法二：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//判断i是否为素数
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数(为假)
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//方法三:
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//m = a * b
//	//a和b中一定至少有一个数字是 <= 开平方m的
//	//16 = 2 * 8 = 4 * 4
//
//	//sqrt - 是开平方的库函数 - math.h
//	for (i = 101;i <= 200;i+=2)
//	{
//		//判断i是否为素数
//		//2->开平方m之间的数字去试除i，看能不能整除
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数(为假)
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//go to 语句
//int main()
//{
//	flag:
//	printf("haha\n");
//	printf("hehe\n");
//	goto flag;//死循环
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机
//C语言提供了一个函数：system()  -执行系统命令的--用stdlib.h来引用头函数
//两个字符串比较strcmp()-用string.h来引用头函数
//system("shutdown -s -t 60") -- 60秒内电脑关机
//system("shutdown -a") -- 取消程序

//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };//存放输入信息
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//当两个字符串进行比较的时候，只能用strcmp()，不能用input == "我是猪"
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}//可以用while(1)循环break来代替goto语句

//goto语句只能在一个函数内执行
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//int main()
//{
//	goto flag;//报错，flag不能定义，跳不了
//	return 0;
//}

//库函数
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);//复制函数--将arr2存到arr1里面
	printf("%s ", arr1);
	return 0;
}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//内存设置---将arr字符数组的前5个字符用x来设置
//	printf("%s\n", arr);
//	return 0;
//}