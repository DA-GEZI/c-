#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
����Ĵ���
1-100��������
Ԫ������ ������[�����С-����]
��������ʼ������ȷ����С
int main()
{
	/*int a = 0;
	int b = 2;
	int c = 3;
	.....*/
	int arr1[10] = {1,2,3};//����Ĳ���ȫ��ʼ����ʣ��ĳ�ʼ��Ϊ0
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr3[] = { 1, 2, 3 };//��ָ����Сʱ�������С�ɺ���ĳ�ʼ�����־���
	char arr4[] = { 'a', 'b', 'c' };
	char arr5[] = { 'a', 98, 'c' };//98Ҳ���ַ���������98-c,ascii��ֵ
	char arr6[] = "abc";//�������飬Ϊ�ַ���
	printf("%d\n", sizeof(arr5));//3*sizeof(char)=3
	printf("%d\n", sizeof(arr6));//4*sizeof(char)=4
	printf("%d\n", sizeof(arr1));//10 * 4sizeof(int) = 40
	printf("%d\n", sizeof(arr3));//3 * 4sizeof(int) = 12
	printf("%d\n", strlen(arr5));//������Ϊ\0������Ϊ���ֵ
	printf("%d\n", strlen(arr6));//���ȵ�λΪ�ֽڣ�����Ϊ3
	return 0;
}
���鶨�����Ϊ����
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	              0  1  2  3  4  5  6  7  8  9
	�������±���ʣ��±���㿪ʼ
	int i = 0;
				  ����Ԫ�ظ���
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);//����ĳ��Ԫ���������Ϊ����
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr=[%d]=%p\n",i, &arr[i]);//%p��ӡp�ĵ�ַ
	}
	return 0;
}
//������һά�ռ������������,���ٵ���,�м����ε�ַҲ�ǲ��ĸ��ֽ�
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int*p = arr;//p��ŵ�һ��Ԫ�ص�ַarr[0]=1
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", *p);//��һ�δ�ӡ*p=arr[0]=1
		p++;//�ڶ���Ԫ��arr[1]=2
	}
	return 0;
}
�������еĶ�ά�ռ�
��ά�ռ��ʡ���У�����ʡ����
int main()
{
	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//��������
	//char ch[3][5];
	return 0;
}
int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}
int main()
{
	int n = 2;
		printf("%d\n", Fun(2));
	return 0;
}
�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
int main()
{
	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//��������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
��ӡÿ��Ԫ�صĵ�ַ
int main()
{
	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//��������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n ",i,j,&arr[i][j]);
		}
	}
	return 0;
}
дһ��ð����������������arr�ų�����
�������ڵ�Ԫ�رȽ�
10��������Ҫ9��
void Bubblesort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void printArr(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr,sz);
	printArr(arr,sz);
	printArr(arr, sz);
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	printf("%p\n", *arr);
	return 0;
}