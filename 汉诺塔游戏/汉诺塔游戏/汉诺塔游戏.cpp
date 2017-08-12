// 汉诺塔游戏.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
int i = 0;
void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("Move disk %d from %c to %c.\n", n, A, C);
		i++;
	}
	else {
		hanoi(n - 1, A, C, B);
		printf("Move disk %d from %c to %c.\n", n, A, C);
		i++;
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n;
	printf("请输入n阶汉诺塔：\n");
	while (scanf("%d", &n) == 1) {
		hanoi(n, 'A', 'B', 'C');
		printf("共%d步.\n", i);
		i = 0;
		printf("请输入n阶汉诺塔：\n");
	}
	system("pause");
	return 0;
}

