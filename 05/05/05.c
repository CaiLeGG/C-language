#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入密码
//判断是否确认成功
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//只能处理一个字符，处理'\n'
//	int tmp = 0;
//	while (tmp = getchar() !='\n')
//	{
//		;
//	}//清理缓冲区里面的多个字符
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//while循环和for循环的区别
//打印1-10的数字
//int main()
//{
//	int i = 1;//初始值
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)//初始值；判断部分；调整部分
//	{
//		//if (i == 5)
//		//{
//		//	break;//1 2 3 4
//		//}
//
//		if (i == 5)
//		{
//			continue;//1 2 3 4 6 7 8 9 10
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)//左闭右开，更好的明确数组打印10次
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//do while循环
//打印1-10的数字
//int main()
//{
//	int i = 1;
//	do//至少循环一次
//	{
//		//if (i == 5)
//		//{
//		//	break;//1 2 3 4 
//		//}
//
//		if (i == 5)
//		{
//			continue;//1 2 3 4 无限循环
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//先做再判断
//	return 0;
//}

//while for do while循环

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("%d ", ret);
//	return 0;
//}

//计算1!+2!+3!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//for (n = 1;n <= 3;n++)
//	//{
//	//	ret = 1;//计算n的阶乘之前，把ret初始为1
//	//    for (i = 1;i <= n;i++)
//	//    {
//	//	ret *= i;
//	//    }
//	//	sum += ret;
//	//}
//	for (n = 1;n <= 3;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}

//在有序的数组中找精确的数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
//	int k = 7;//要查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了:%d\n",mid);//6
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//左右相互填充闪烁
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒(大写)
//		system("cls");//清空屏幕
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//模仿输入密码，只能输入三次，输入正确则成功
//#include<string.h>
////strcmp-比较字符串
////strlen-长度
////都用#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	//假设正确的密码是字符串“123456”
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if(password=="123456")//err-两个字符串比较，不能用==，只能用strcmp
//		if (strcmp(password, "123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}

//写一个猜数字游戏
//1.生成一个1-100之间的随机数
//2.猜数字
//时间-时间戳

void menu()//菜单封面 
{
	printf("********************\n");
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
	printf("********************\n");
}

void game()
{
	//先生成一个随机数
	//rand只能生成一个0-32767之间的数字
	int ret = rand() % 100 + 1;//%100的余数是0-99，+1就是0-100
	//printf("%d\n",&ret);
	//猜数字
	int guess = 0;
	while(1)
	{
		printf("请猜一个数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//做一个菜单函数
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)//switch语句，判断input的值
		{
		case 1:
			game();//执行游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}