#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//��λȡ��
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//	//int a = 1;
//	//int b = a++;//����++����ʹ�ã���++
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//	//int a =(int) 3.14;//ǿ������ת��
//	//printf("%d\n", a);
//
//	int a = 1;
//	int b = 2;
//	int c = a && b;//&&����
//	printf("%d\n", c);//1
//
//	int d = 0;
//	int e = 0;
//	int f = d || e;//����
//	printf("%d\n", f);//0
//	/*if (a && b)
//	{
//
//	}*/
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;//��ľ������
//	//���a>b�������� a���㣬��a���
//	//���a>b����������b���㣬��b���
//
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (b=a+2,c=b-1,a=b+1);
//	//���ű��ʽ���Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//�±����ò�����[]
//	printf("%d\n", arr[5]);//6
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("%d\n",100);//�������ò�����()
//	return 0;
//}

//C�����ṩ�Ĺؼ���
//1. C�����ṩ�ģ������Լ������ؼ���
//2. �����������ǹؼ���
//int main()
//{
//	//int charr;
//	return 0;
//}

//int main()
//{
//	//����/Ƶ����ʹ�õ����ݣ������ڼĴ����У����Ч��
//	register int num = 100;//���齫num��ֵ�����ڼĴ�����
//	return 0;
//}

//tepydef-�����ض���
//tepydef unsigned int u_int;
////����-С��
//int main()
//{
//	tepydef unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;//a�Ǿֲ�����
//	printf("%d ",a);//2 2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static-��̬��
//1. static���ξֲ�����
//2. static����ȫ�ֱ���
//3. static���κ���

//void test()
//{
//	static int a = 1;//static���ε��Ǿֲ��������ı��˾ֲ���������������(�����Ǹı��˱����Ĵ洢����)
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//����һ��
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;//100
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;//err
//}

//����һ��
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;//30
//}
// 
//define ��һ��Ԥ����ָ��
//1.define�������
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
////2.define�����
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));//20
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-4���ֽ�
//	printf("%p\n", &a);//%pר��������ŵ�ַ����C�����н�ָ�����
//
//	int* pa = &a;
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	char*pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa=&a;
//	*pa = 20;//*�����ò�����*pa��ͨ��pa����ĵ�ַ�����ҵ�a
//	printf("%d\n", a);//20
//	return 0;
//}
//
//int main()
//{
//	//����ָ��������͵��ֽ�
//	printf("%d\n", sizeof(char*));//4-32λ
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	return 0;
//}

//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��������

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
		printf("1:%s %d %lf\n",s.name,s.age,s.score);//�ṹ�����.��Ա����

		struct Stu* ps = &s;//ָ�����
		printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//*ps������Ϊs

		printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
	return 0;
}