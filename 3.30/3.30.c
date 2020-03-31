#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
字符串函数
strcpy--string copy-字符串拷贝
char*strcpy(char*destination,const char*source);
#include <string.h>
int main()
{
    char arr1[20] = "*******";//目的地
	char arr2[] = "bit";      //源头
	strcpy(arr1, arr2);       //strcpy需要定义
	printf("%s\n", arr1);     //bit\0结束后面一切
	return 0;
}
#include <string.h>
int main()
{
  char str1[] = "sample string";
 char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3,"copy successful");
	printf("str1:%s\nstr2:%s\nstr3:%s\n", str1, str2, str3);
	return 0;
}
memset-内存set-设置
void*memset(void*ptr,int value,size_t num);
int main()
{
      char arr[]="hello bit";//****8 bit
	    memset(arr, '*', 5);//第一个位置放字符串的起始地址
		return 0;
}
get_max必须使用有效值
int get_max(int x, int y)
{
	//return (x > y ? x : y);
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
交换两个函数
int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n",a,b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
形式参数
把实参传给形参的时
形参是实参的一份临时拷贝
对形参的修改不会影响实参
void swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	//实际参数
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);
	return 0;
//}
int main()
{
	int a = 10;
	int *pa = &a;//拿到a的地址
	*pa = 20;
	printf("a=%d\n", a);
	return 0;
}
交换两个数正确做法
void swap2(int *pa, int *pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	//实际参数
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
写一个函数判断素数
int is_prime(int n)
{
	//判断n是否为素数
	//2->n-1;
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return 0;
	}
	//是素数
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
打印1000-2000之间的闰年
int is_leap_year()
{
	/*int year = 0;
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));*/
	int year = 0;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			count++;
			printf("%d ", year);
		}
     }
	printf("count=%d\n ", count);
	return 0;
}
实现一个整形有序数组的二分查找
int binary_search(int arr[],int k,int sz)
{
	int lift = 0;
	int right = sz - 1;
	while (lift <= right)
	{
		int mid = (lift + right) / 2;
		if (arr[mid] < k)
		{
			lift = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	//数组传参时候，传过去一个数组名，本质上传过去的是数组的首元素的地址&arr[0]
	int ret=binary_search(arr,k,sz);//找到了返回下标，找不到返回-1
	//数组传参会发生降级变成首元素地址
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n",ret);
     }
  return 0;
}
每次调用一次这个函数，就会将num值增加1
void Add(int *p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}

int main()
{
	//1
	int len = strlen("bit");
	printf("len=%d\n", len);
	//2
	printf("len=%d\n",strlen("bit"));
	return 0;
}
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//返回的是字符
	return 0;
}
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = x - y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int c = Sub(a, b);
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
