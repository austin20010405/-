// 动态规划过河问题.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <iostream>  
//using std::cout;  
//using std::cin;  
#include <cstdlib>  
#include <cstdio>  
const long oo = 0x7fff0000;

long n;
long t[100002];
long f[100002];

int bigger(const void* a, const void* b)
{
	long aa = *(long*)a;
	long bb = *(long*)b;

	if (aa>bb)return 1;
	if (aa<bb)return -1;
	return 0;
}

void dp(long l)
{
	if (f[l]>0)
		return;
	if (l >= 4)
	{
		dp(l - 2);
		f[l] = f[l - 2] + fmax(t[l] + t[1] + t[l - 1] + t[1] ,t[l] + t[1] + t[2] + t[2]);
	}
}


int main()
{
	freopen("river.in", "r", stdin);
	freopen("river.out", "w", stdout);

	scanf("%ld", &n);
	for (long i = 1; i<n + 1; i++)
		scanf("%ld", t + i);
	qsort(t + 1, n, sizeof(long), &bigger);

	if (n == 0)
	{
		printf("0");
		return 0;
	}
	if (n == 1)
	{
		printf("%ld", t[1]);
		return 0;
	}
	if (n == 2)
	{
		printf("%ld", t[2]);
		return 0;
	}
	if (n == 3)
	{
		printf("%ld", t[1] + t[2] + t[3]);
		return 0;
	}
	f[2] = t[2];
	f[3] = t[1] + t[2] + t[3];
	dp(n);
	printf("%ld", f[n]);
	return 0;
}
