// 园的最长路径.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>;
#include<cstdlib>
#include<iostream>
using namespace std;
int a, b[2][1025], c, max_;//b[0]重量，b[1]价值
bool e[1025];

void han(int d,int he,int f)
{
	if (he > max_)
	{
		max_ = he;
	}
	if (d == a)
	{
		return;
	}
	else
	{
		for (int i = 1; i <= a; i++)
		{
			if (e[i])
			{
				continue;
			}
			if (f + b[0][i] > c)
			{
				return;
			}
			else
			{
				e[i] = true;
				he += b[1][i];
				f += b[0][i];
				han(d + 1, he, f);
				he -= b[1][i];
				f -= b[0][i];
			}
		}
	}
}

int main()
{
	max_ = -1;
	cin >> c;
	cin >> a;
	for (int k = 1; k <= a; k++)
	{
		cin >> b[0][k];
		cin >> b[1][k];
	}
	han(0, 0, 0);
	printf("%d", max_);
	system("pause");
    return 0;
}

