#define _CRT_SECURE_NO_WARNINGS 1
//�ú������Ƚ��������Ĵ�С
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

//�ô������ж�һ������m�Ƿ��ܱ�5��������˵YES������˵NO
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
//		printf("����");
//	else if (age >= 18 && age < 26)
//		printf("����");
//	else if (age >= 26 && age < 40)
//		printf("����");
//	else if (age >= 40 && age < 60)
//		printf("׳��");
//	else if (age >= 60 && age < 100)
//		printf("����");
//	else 
//		printf("�ϲ���");
//
//
//
//	/*int age = 20;
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else
//	{
//		printf("����");
//	}*/
//
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("δ����");
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
//		else//�������if���ִ��
//		{
//			printf("haha\n");//����ӡ
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (num == 5)
//	if (5 == num)//���������ͱ������бȽϵ�ʱ�򣬰ѳ����������
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1);
//	printf("����");
//	return 0;
//}

//���1-100֮�������
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
//{//���뼸��������ڼ�
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//��֧���
//	{
//	case 1:
//		printf("����1");
//	case 2:
//		printf("����2");
//	case 3:
//		printf("����3");
//	case 4:
//		printf("����4");
//	case 5:
//		printf("����5");
//	case 6:
//		printf("����6");
//	case 7:
//		printf("����7");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://���
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;//����
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//    default ://Ĭ������
//      break;
//	}
//	return 0;
//}

//��whileѭ������ӡ1-10����
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
//			continue;//����continue����Ĵ��룬�ټ���ִ��ѭ���ж�
//		}
//		printf("%d ", i);//1 2 3 4 ��ѭ��
//		i++;
//	}
//
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;//��������ѭ��
//		}
//		printf("%d ", i);//1 2 3 4 
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//contrl + z--getchar��ȡ����
//	//getchar�õ�һ���ַ�
//	//putchar���һ���ַ�
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}