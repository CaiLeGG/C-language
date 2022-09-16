#define _CRT_SECURE_NO_WARNINGS 1
//用函数来比较两个数的大小
#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//用代码来判断一个整数m是否能被5整除，能说YES，不能说NO
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("少年");
//	else if (age >= 18 && age < 26)
//		printf("青年");
//	else if (age >= 26 && age < 40)
//		printf("中年");
//	else if (age >= 40 && age < 60)
//		printf("壮年");
//	else if (age >= 60 && age < 100)
//		printf("老年");
//	else 
//		printf("老不死");
//
//
//
//	/*int age = 20;
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else
//	{
//		printf("成年");
//	}*/
//
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("未成年");
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else//离最近的if语句执行
//		{
//			printf("haha\n");//不打印
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (num == 5)
//	if (5 == num)//当两个整型变量进行比较的时候，把常量放在左边
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1);
//	printf("奇数");
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	for (i = 1 ; i <= 100 ; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{//输入几，输出星期几
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//分支语句
//	{
//	case 1:
//		printf("星期1");
//	case 2:
//		printf("星期2");
//	case 3:
//		printf("星期3");
//	case 4:
//		printf("星期4");
//	case 5:
//		printf("星期5");
//	case 6:
//		printf("星期6");
//	case 7:
//		printf("星期7");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://入口
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//出口
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//    default ://默认其他
//      break;
//	}
//	return 0;
//}

//用while循环来打印1-10的数
//int main()
//{
//	int i = 1;
//	while ( i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;//跳过continue后面的代码，再继续执行循环判断
//		}
//		printf("%d ", i);//1 2 3 4 死循环
//		i++;
//	}
//
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;//跳出所在循环
//		}
//		printf("%d ", i);//1 2 3 4 
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//contrl + z--getchar读取结束
//	//getchar得到一个字符
//	//putchar输出一个字符
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}