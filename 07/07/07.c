#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����--�����������������������ķ�������
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//Ŀ�ĵأ�Դͷ
//	printf("%s\n", arr1);
//	return 0;
//}

//����һ���������Ƚ��������ͱ��������ֵ
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//		z = x;
//	else
//		z = y;
//	return z;//����z--�������ֵ
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//дһ�������������������ͱ�����ֵ
//���������bug��
// Swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
// �ı�����βΣ����ܸı�ʵ��
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
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	Swap1(a, b);//��ֵ����
//	printf("������:a = %d, b = %d\n", a, b);
//	return 0;
//}

//Ӧ��ָ�������ʵ�����͵ĸı�
//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//	int* pa = &a;//pa����һ��ָ�����
//	*pa = 20;
//	printf("a = %d", a);
//	return 0;
//}

//Ӧ��ָ��������޸�
//Swap2��ʵ�֣���ӦΪ�β��ܺ�ʵ�ι�����ϵ��ʵ��ת��
//void Swap2(int *pa,int *pb)//�ں����ڸı亯����Ĳ������õ�ַ����
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
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	Swap2(&a, &b);//�õ�ַ������--��ַ����
//	printf("������:a = %d, b = %d\n", a, b);
//	return 0;
//}

//��һ��������ӡ100-200������
//int is_prime(int n)
//{
//	int j = 0;//2->i-1ȥ��
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

//��һ������д��1000-2000��֮�������
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

//��һ����������ӡ����������һ�������±�
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//��һ��������ÿ����һ������������ͽ�num��ֵ+1
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

//������Ƕ�׵��ú���ʽ����\
//Ƕ�׵���
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
//	//��ʽ����
//	printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	//��ʽ����
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//�������ص��Ǵ�ӡ����Ļ�ϵ��ַ�����
//	return 0;
//}

//�ӷ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(a, b);//��������һ��-��֪
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)//�����Ķ���
//{
//	return x + y;
//}

//��һ��������
//�Ӽ��˳�
//#include"add.h"
#include "Sub.h"
//���뾲̬��
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