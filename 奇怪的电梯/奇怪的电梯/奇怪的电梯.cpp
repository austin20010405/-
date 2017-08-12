// 奇怪的电梯.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<stdio.h>
#include<stdbool.h>
#include<cstdlib>
int n, a, b, k[1024], z = 0, c = -1;
int min_ = 0x7ffffff; 
bool book[1024];
void han(int step,int floor)
{
	if (book[floor])
	{
		return;
	}
	if (floor == b)
	{
		if (step < min_)
		{
			min_ = step;
			return;
		}
	}
	if (floor + k[floor] <= n)
	{
		book[floor] = true;
		han(step + 1, floor + k[floor]);
		book[floor] = false;
	}
	if (floor - k[floor] >0)
	{
		book[floor] = true;
		han(step + 1, floor - k[floor]);
		book[floor] = false;
	}
}
int main()
{
	scanf("%d%d%d", &n, &a, &b);
	k[0] = -1; 
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&k[i]);
		if (k[i] == 0)
		{
			z++;
		}
	}
	if (z == n)
	{
		printf("%d", c);
		return 0;
	}
	han(0, a);
	if (a == b)
	{
		printf("%d", z);
		return 0;
	}
	if (min_ == 0x7ffffff)
	{
		printf("%d", c);
		return 0;
	}
	else
	{
		printf("%d", min_);
	}
	system("pause");
	return 0;
}