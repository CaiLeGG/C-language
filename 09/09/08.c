#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ַ�������-��ͨ�������ǵݹ飩
//����abcdef -> fedcba

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
//	reverse_string(arr);//������������arr��Ԫ�صĵ�ַ
//	printf("%s ", arr);//fedcba
//	return 0;
//}

//�ַ�������-�ݹ�ʵ��
//����abcdef -> fedcba
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
//	int tmp = *str;//1���ó����ŵ�tmp����
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2������f���ڵ�һ��a��λ��
//	*(str + len - 1) = '\0';//3����λ����\0���
//	//�ж�����
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);//4��ʼ�ݹ�
//	}
//	*(str + len - 1) = tmp;//5����ó�����tmp�ŵ�����λ��
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������������arr��Ԫ�صĵ�ַ
//	printf("%s ", arr);//fedcba
//	return 0;
//}

//����һ������ÿһλ֮��-�ݹ�ʵ��DigiSum()
//��������1729�����19��1+7+2+9��
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

//�ݹ�ʵ��n��k�η�
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

//һά����
//#include<string.h>
//int main()
//{
//	//int arr[8];//8-����������8��Ԫ��
//	//char ch[5];//char-Ϊ��������Ԫ�ص�����
//
//	//int n = 8;//��ʼ��
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	//int arr[10] = { 1,2,3,4,5, };//����ȫ��ʼ��
//	//int arr1[] = { 1,2,3,4,5, };//[]-Ĭ����5��Ԫ��
//
//	char ch1[5] = "bit";//b i t \0 0  --  [5]--ʶ���ַ���֮����0�������Ԫ��
//	char ch2[] = "bit";//b i t \0  --  []--ֱ��ʶ���ַ���
//
//	char ch3[] = "bit";
//	//[b i t \0]--�ַ���
//	char ch4[] = { 'b','i','t' };
//	//[b i t]--����Ԫ��
//
//	//printf("%d\n", strlen(ch3));//3  --  strlen�Ǽ����ַ����ĳ���
//	//printf("%d\n", strlen(ch4));//���ֵ �����ַ���������Ԫ��
//
//	//printf("%s\n", ch3);//bit
//	//printf("%s\n", ch4);//bit������..
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//��Ԫ����0��ֵ��Ȼ����0�����
//	//��5����ֵ�������Ԫ��
//	arr[4] = 5;//[]--�±����ò�����
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
//	//��ӡÿ������Ԫ���±�ĵ�ַ
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//ÿ���м����4--һ���ֽ�
//	}
//	return 0;
//}

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);//1 2 3 4 5 6 7 8 9 10
//		p++;
//	}
//	return 0;
//}