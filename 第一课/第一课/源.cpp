#define _CRT_SECURE_NO_WARNINGS 1
//���ڴ���ĵ�һ��
//д����
//1.д��������(main������)
//100-500 ����
//���ִ���أ�-C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����C���Դ����е���main����-���
//int������

//д�����룬����Ļ�ϴ�ӡ������
//printf-�⺯��-����Ļ��ӡ��Ϣ��
//printf��ʹ�ã�Ҳ�ô��к�(����ͷ�ļ� stdio.h)

#include <stdio.h>

int main()
{
	printf("����");
	return 0;
}

//����+����+���д���
//��ݼ���ctrl+f5
//
//һ�����������ҽ���һ��main����
//1.һ�������п����ж��.c�ļ�
//2.���Ƕ��.c�ļ���ֻ����һ��main����
 
//��������
//���������-д����-�����������
//���������������������е����⣡
//�����̳�-�ϼ���Ʒ���۸�15.6Ԫ-С�� 1.56*10^1
//����-50
//C����-������
//     -����

//a
//'a'-�ַ�

int main()
{
	//�ַ�����
	char ch = 'a';
	//����
	int age = 20;
	//������
	short num = 10;
	//long
	//long long

	//�����ȸ�����
	float weigt = 55.5;
	//˫���ȸ�����
	double d = 0.0;

	return 0;
}

	int main()
{
	//printf("hehe\n");
	//printf("����\n");
	//printf("%d\n",100);//��ӡһ������-%d
	//sizof-�ؼ���-������-��������ͻ��߱�����ռ�ռ�Ĵ�С

		printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2
		printf("%d\n", sizeof(int));//4
		printf("%d\n", sizeof(long));//4
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
	return 0;
}

#include <stdio.h>
int main()
{
	//������һ������
	//����  ����������=0��
	int age = 20;
	double weight = 75.3;
	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);//21
	printf("%lf\n", weight);//65,300000

	return 0;
}

//%d-����
//%f-float
//%lf-double

#include<stdio.h>
//ȫ�ֱ���-{}�ⲿ�����
int a = 100;

int main()
{
	//�ֲ�����-{}�ڲ�����
	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
	int a = 10;

	printf("%d\n", a);//10
	return 0;
}

//������������ʹsum������������֮��
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//Դ�ļ��ĵ�һ�м���#define_CRT_SECURE_NO_WARNINGS 1
