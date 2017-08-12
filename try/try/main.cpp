
#include <stdio.h>  

int main()
{
	char a[100], b[100];//如溢出，则换用更大的数组。  
	int i = 0, j = 1;
	int cf = 0, fi = 1;//cf为判定是否有进位 fi为first的缩写。用来使最后位+1操作。  
	int n; //为汉诺塔的个数。控制循环次数  

	a[0] = '7';
	a[1] = '\0';
	printf("Please enter the number of the Tower of Hanoi（3-?）：");
	scanf("%d", &n);
	n -= 3;
	while (n--) {
		i = 0; j = 1; fi = 1; cf = 0;   //每循环一次，重新赋值，变回缺  

		while (b[j++] = a[i++]);//把数组a中的数据复制到b数组中  
		b[j] = '\0';//结尾加\0结尾符  
		i -= 2;
		while (i != -1) {
			if (5 > a[i] - '0') {
				b[i + 1] = (a[i] - '0') * 2 + cf + fi + '0';//-‘0’为了把字母转换成数字进行相应运算  
				cf = 0;                                 //+‘0’使其重新变回字母  
			}
			else {
				b[i + 1] = (a[i] - '0') * 2 % 10 + cf + fi + '0';
				cf = 1;
			}
			--i;
			fi = 0;
		}
		if (cf) {   //以下语句用来把数组b中的值赋到数组a中。使其重复循环。  
			i = j = 1;
			while (a[i++] = b[j++]);
			a[i] = '\0';
			a[0] = '1';
		}
		else {
			i = 0;
			j = 1;
			while (a[i++] = b[j++]);
			a[i] = '\0';
		}
	}
	printf("The minimum number of moves：%s\n", a);
	return 0;
}