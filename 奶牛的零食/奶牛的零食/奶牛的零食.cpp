
// 奶牛的零食.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;
int arr[1024], n;
int max_ = -1;
void dfs(int start, int end, int value, int day) {
	if (day == n + 1)
	{
		if (value > max_)
			max_ = value;
		return;
	}
	dfs(start + 1, end, value + arr[start] * day, day + 1);
	dfs(start, end - 1, value + arr[end] * day, day + 1);
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	dfs(1, n, 0, 1);
	cout << max_;
	system("pause");
	return 0;
}
