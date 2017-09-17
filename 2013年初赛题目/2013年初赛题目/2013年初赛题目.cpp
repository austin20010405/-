// 2013年初赛题目.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<cstdlib>
#include<iostream>
using namespace std;
void gcd(int a, int b)
{
	if (a%b == 0)
	{
		printf("%d\n", b);
	}
	else
	{
		return;
	}
}
int main()
{
	int n, i, ans;
	cin >> n;
	ans = 0;
	for (i = 1; i <= n; i++)
	{
		gcd(n, i);
	}
	cout << ans;
	system("pause");
    return 0;
}

