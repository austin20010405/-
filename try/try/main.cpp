
#include <stdio.h>  

int main()
{
	char a[100], b[100];//����������ø�������顣  
	int i = 0, j = 1;
	int cf = 0, fi = 1;//cfΪ�ж��Ƿ��н�λ fiΪfirst����д������ʹ���λ+1������  
	int n; //Ϊ��ŵ���ĸ���������ѭ������  

	a[0] = '7';
	a[1] = '\0';
	printf("Please enter the number of the Tower of Hanoi��3-?����");
	scanf("%d", &n);
	n -= 3;
	while (n--) {
		i = 0; j = 1; fi = 1; cf = 0;   //ÿѭ��һ�Σ����¸�ֵ�����ȱ  

		while (b[j++] = a[i++]);//������a�е����ݸ��Ƶ�b������  
		b[j] = '\0';//��β��\0��β��  
		i -= 2;
		while (i != -1) {
			if (5 > a[i] - '0') {
				b[i + 1] = (a[i] - '0') * 2 + cf + fi + '0';//-��0��Ϊ�˰���ĸת�������ֽ�����Ӧ����  
				cf = 0;                                 //+��0��ʹ�����±����ĸ  
			}
			else {
				b[i + 1] = (a[i] - '0') * 2 % 10 + cf + fi + '0';
				cf = 1;
			}
			--i;
			fi = 0;
		}
		if (cf) {   //�����������������b�е�ֵ��������a�С�ʹ���ظ�ѭ����  
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
	printf("The minimum number of moves��%s\n", a);
	return 0;
}