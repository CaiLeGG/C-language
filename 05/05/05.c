#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������
//�ж��Ƿ�ȷ�ϳɹ�
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//ֻ�ܴ���һ���ַ�������'\n'
//	int tmp = 0;
//	while (tmp = getchar() !='\n')
//	{
//		;
//	}//������������Ķ���ַ�
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//whileѭ����forѭ��������
//��ӡ1-10������
//int main()
//{
//	int i = 1;//��ʼֵ
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������
//	}
//	return 0;
//}

//forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)//��ʼֵ���жϲ��֣���������
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
//	for (i = 0;i < 10;i++)//����ҿ������õ���ȷ�����ӡ10��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//do whileѭ��
//��ӡ1-10������
//int main()
//{
//	int i = 1;
//	do//����ѭ��һ��
//	{
//		//if (i == 5)
//		//{
//		//	break;//1 2 3 4 
//		//}
//
//		if (i == 5)
//		{
//			continue;//1 2 3 4 ����ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//�������ж�
//	return 0;
//}

//while for do whileѭ��

//����n�Ľ׳�
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

//����1!+2!+3!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//for (n = 1;n <= 3;n++)
//	//{
//	//	ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
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

//��������������Ҿ�ȷ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������
//	int k = 7;//Ҫ���ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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
//			printf("�ҵ���:%d\n",mid);//6
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//�����໥�����˸
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
//		Sleep(1000);//˯��1��(��д)
//		system("cls");//�����Ļ
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ���������룬ֻ���������Σ�������ȷ��ɹ�
//#include<string.h>
////strcmp-�Ƚ��ַ���
////strlen-����
////����#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	//������ȷ���������ַ�����123456��
//	for (i = 0;i < 3;i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if(password=="123456")//err-�����ַ����Ƚϣ�������==��ֻ����strcmp
//		if (strcmp(password, "123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

//дһ����������Ϸ
//1.����һ��1-100֮��������
//2.������
//ʱ��-ʱ���

void menu()//�˵����� 
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
	//������һ�������
	//randֻ������һ��0-32767֮�������
	int ret = rand() % 100 + 1;//%100��������0-99��+1����0-100
	//printf("%d\n",&ret);
	//������
	int guess = 0;
	while(1)
	{
		printf("���һ������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
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
		menu();//��һ���˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)//switch��䣬�ж�input��ֵ
		{
		case 1:
			game();//ִ����Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}