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
//			printf("%d", i);//5��ѭ��
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
//F10-�����
//F11-�����

//д�����뽫������������С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		int tmp = a;//��С�ķŵ���������
//		a = b;//�Ѵ�ķŵ�a����
//		b = tmp;//�ٰ�С�ķŵ�b����
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
//	//���
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//��ӡ1-100֮��3�ı���
//int main()
//{
//	int i = 0;
//	//��ӡ1-100
//	//for (i = 1;i <= 100;i++)
//	//{
//	//	//�ж�i�Ƿ��ܱ�3����
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

//�ҳ������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	//����������
//	scanf("%d%d", &m, &n);//24 18
//	//�������Լ��max����m��n�Ľ�Сֵ
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ:%d\n", max);
//			break;
//		}
//		max--;
//	}
//	//��С������ = m*n/���Լ��
//	int min = 0;
//	min = m * n / max;
//	printf("��С������Ϊ:%d", min);//72
//	return 0;
//}

//շת�����
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
//	printf("���Լ��Ϊ:%d\n", n);
//	return 0;
//}

//�ҳ�1000-2000��֮�������
//1.�ܱ������������ܱ�100������������
//2.�ܱ�400������������
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

//���100-200֮�������
//����-ֻ�ܱ�1������������
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//�ж��Ƿ�Ϊ����
//		//��2->i-1֮�������ȥ��i�������ܲ��ܱ�����
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)//�������Ĳ������������ܵ���������
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);//����
//		}
//	}
//	return 0;
//}

//��������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������(Ϊ��)
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", i);//����
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//������:
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//m = a * b
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2 * 8 = 4 * 4
//
//	//sqrt - �ǿ�ƽ���Ŀ⺯�� - math.h
//	for (i = 101;i <= 200;i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->��ƽ��m֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������(Ϊ��)
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//����
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//go to ���
//int main()
//{
//	flag:
//	printf("haha\n");
//	printf("hehe\n");
//	goto flag;//��ѭ��
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�
//C�����ṩ��һ��������system()  -ִ��ϵͳ�����--��stdlib.h������ͷ����
//�����ַ����Ƚ�strcmp()-��string.h������ͷ����
//system("shutdown -s -t 60") -- 60���ڵ��Թػ�
//system("shutdown -a") -- ȡ������

//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };//���������Ϣ
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�������ַ������бȽϵ�ʱ��ֻ����strcmp()��������input == "������"
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}//������while(1)ѭ��break������goto���

//goto���ֻ����һ��������ִ��
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//int main()
//{
//	goto flag;//����flag���ܶ��壬������
//	return 0;
//}

//�⺯��
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);//���ƺ���--��arr2�浽arr1����
	printf("%s ", arr1);
	return 0;
}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//�ڴ�����---��arr�ַ������ǰ5���ַ���x������
//	printf("%s\n", arr);
//	return 0;
//}