#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ĵݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//ջ���

//����һ������ֵ(�޷���)������˳���ӡ����ÿһλ�����磺���룺1234�������1 2 3 4
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
//	//�ݹ�-�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//void test(int n)
//{
//	if (n < 1000)
//	{
//		test(n + 1);//ջ���
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//д�ݹ�����ʱ��
//1.�������ݹ飬��������������ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��

//��һ���������ַ�������
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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//�ú����ݹ�ʵ��
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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//�ݹ������
//��n�Ľ׳�-����
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

//�ú����ĵݹ���ʵ��
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
//}//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�

//���n��쳲�������-�����������ǰ������֮�ͣ�n>2��-�����ĵݹ�
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

//����
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

//��д����дһ��1��100�����������г��ֶ��ٴ�����9
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

//����1/1-1/2+1/3-1/4......+1/99-1/100��ֵ����ӡ���
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

//�򵥷���
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

//��10�����е����ֵ
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

//дһ��9*9�˷���
//1*1
//1*2 2*2
//1*3 2*3 3*3 
//1*4 2*4 3*4 4*4
//...
//1*9 2*9 3*9 4*9 ...9*9
int main()
{
	int i = 1;
	//����
	for (i = 1;i <= 9;i++)
	{
		//��ӡһ��
		int j = 1;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}