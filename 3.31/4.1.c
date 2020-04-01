#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个函数可以交换两个整形变量内容
//void Swap1(int x, int y)
//{
//int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1=%d num2=%d\n", num1, num2);
//	Swap2(&num1,&num2);
//	printf("Swap2::num1=%d num2=%d\n", num1, num2);
//	return 0;
//}
//函数的嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//		return 0;
//}
//输入两个整数，要求输出最大者；用函数来找大数
//int Max(int x, int y)
//{
//	int z = 0;
//	z = x > y ? x : y;
//	return z;
//}
//int main()
//{
//	int Max(int x, int y);m
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &b);
//	c = Max(a, b);
//	printf("Max=%d\n", c);
//	return 0;
//}
//用函数求出两个实数的和
//float sum(float x,float y)
//{
//	float z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	printf("请输入两个实数：");
//	scanf("%f%f", &a, &b);
//	c = sum(a, b);
//	printf("sum=%f\n", c);
//	return 0;
//}
//输入四个整数，找出其中最大数
//int max1(int a, int b)
//{
//	if (a >= b)
//	    return a;
//	else
//		return b;
//}
//int max2(int a, int b, int c, int d)
//{
//	int m = 0;
//	 m = max1(a, b);
//	 m = max1(m,c);
//     m = max1(m, d);
//	 return m;
//}
//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0; int max = 0;
//	printf("请输入四个整数:");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	max =max2 (a, b, c, d);
//	printf("max=%d\n", max);
//	return 0;
//}
//输入四个整数，找出其中最大数
//int max1(int a, int b)
//{
//	return(a > b ? a : b);
//}
//int max2(int a, int b, int c, int d)
//{
//	return max1(max1(max1(a, b),c), d);
//}
//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0; int max = 0;
//	printf("请输入四个整数:");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	max =max2 (a, b, c, d);
//	printf("max=%d\n", max);
//	return 0;
//}

