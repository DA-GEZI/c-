#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
数组的创建
1-100都是整形
元素类型 数组名[数组大小-常量]
数组必须初始化才能确定大小
int main()
{
	/*int a = 0;
	int b = 2;
	int c = 3;
	.....*/
	int arr1[10] = {1,2,3};//数组的不完全初始化，剩余的初始化为0
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr3[] = { 1, 2, 3 };//不指定大小时，数组大小由后面的初始化数字决定
	char arr4[] = { 'a', 'b', 'c' };
	char arr5[] = { 'a', 98, 'c' };//98也用字符表述出来98-c,ascii码值
	char arr6[] = "abc";//不是数组，为字符串
	printf("%d\n", sizeof(arr5));//3*sizeof(char)=3
	printf("%d\n", sizeof(arr6));//4*sizeof(char)=4
	printf("%d\n", sizeof(arr1));//10 * 4sizeof(int) = 40
	printf("%d\n", sizeof(arr3));//3 * 4sizeof(int) = 12
	printf("%d\n", strlen(arr5));//结束语为\0，所以为随机值
	printf("%d\n", strlen(arr6));//长度单位为字节，所以为3
	return 0;
}
数组定义必须为常量
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	              0  1  2  3  4  5  6  7  8  9
	数组用下标访问，下标从零开始
	int i = 0;
				  计算元素个数
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);//访问某个元素数组可以为变量
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr=[%d]=%p\n",i, &arr[i]);//%p打印p的地址
	}
	return 0;
}
//数组在一维空间中是连续存放,匀速递增,中间整形地址也是差四个字节
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int*p = arr;//p存放第一个元素地址arr[0]=1
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", *p);//第一次打印*p=arr[0]=1
		p++;//第二个元素arr[1]=2
	}
	return 0;
}
三行四列的二维空间
二维空间可省略行，不可省略列
int main()
{
	int arr[][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//三行四列
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
递归方式实现打印一个整数的每一位
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
	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//三行四列
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
打印每个元素的地址
int main()
{
	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };//三行四列
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
写一个冒泡排序函数，将数组arr排成升序
两两相邻的元素比较
10个数字需要9趟
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