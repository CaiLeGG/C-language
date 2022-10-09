#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//字符串逆序-普通方法（非递归）
//比如abcdef -> fedcba

//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;	
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名是数组arr首元素的地址
//	printf("%s ", arr);//fedcba
//	return 0;
//}

//字符串逆序-递归实现
//比如abcdef -> fedcba
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int tmp = *str;//1先拿出来放到tmp里面
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2把最后的f放在第一的a的位置
//	*(str + len - 1) = '\0';//3最后的位置用\0填充
//	//判断条件
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);//4开始递归
//	}
//	*(str + len - 1) = tmp;//5最后将拿出来的tmp放到最后的位置
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名是数组arr首元素的地址
//	printf("%s ", arr);//fedcba
//	return 0;
//}

//计算一个数的每一位之和-递归实现DigiSum()
//比如输入1729，输出19（1+7+2+9）
//int DigiSum(int n)
//{
//	if (n > 9)
//	{
//		return DigiSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigiSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n",ret);
//	return 0;
//}

//一维数组
//#include<string.h>
//int main()
//{
//	//int arr[8];//8-数组里面有8个元素
//	//char ch[5];//char-为数组里面元素的类型
//
//	//int n = 8;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr[10] = { 1,2,3,4,5, };//不完全初始化
//	//int arr1[] = { 1,2,3,4,5, };//[]-默认有5个元素
//
//	char ch1[5] = "bit";//b i t \0 0  --  [5]--识别字符串之后用0填充数组元素
//	char ch2[] = "bit";//b i t \0  --  []--直接识别字符串
//
//	char ch3[] = "bit";
//	//[b i t \0]--字符串
//	char ch4[] = { 'b','i','t' };
//	//[b i t]--数组元素
//
//	//printf("%d\n", strlen(ch3));//3  --  strlen是计算字符串的长度
//	//printf("%d\n", strlen(ch4));//随机值 不是字符串，而是元素
//
//	//printf("%s\n", ch3);//bit
//	//printf("%s\n", ch4);//bit烫烫烫..
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//首元素用0赋值，然后用0来填充
//	//用5来赋值给第五个元素
//	arr[4] = 5;//[]--下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//printf("%x\n", 0x12);//12
//	//printf("%p\n", 0x12);//0000000000000012
//
//	//打印每个数组元素下标的地址
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//每个中间相差4--一个字节
//	}
//	return 0;
//}

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);//1 2 3 4 5 6 7 8 9 10
//		p++;
//	}
//	return 0;
//}