// 行走路径.cpp : 定义控制台应用程序的入口点。
//
/*2、给定一个矩阵m，从左上角开始每次只能向右走或者向下走，最后达到右下角的位置，路径中所有数字累加起来就是路径和，
返回所有路径的最小路径和，如果给定的m如下，那么路径1,3,1,0,6,1,0就是最小路径和，返回12.
1 3 5 9
8 1 3 4
5 0 6 1
8 8 4 0
*/
#include "stdafx.h"
# include <stdio.h>   
  
int count = 0,p;  
int a[10],v[10]={0};  
  
void dfs(int n);  
void jude(void);  
int sum(int x,int y);  
  
int main(void)  
{  
    scanf("%d",&p);  
    dfs(1);  
    printf("%d ",count);  
      
    return 0;  
}     
  
void dfs(int n)  
{  
    int i;   
      
    if(n>9)  
        jude();  
          
    for(i=1;i<10;i++)  
    {  
        if(!v[i])  
        {  
            v[i] = 1;  
            a[n] = i;  
            dfs(n+1);    
            v[i] = 0;  
        }  
    }   
}  
  
void jude(void)  
{  
    int x,y,z;  
    int i,j;  
      
    for(i=0;i<8;i++)   
        for(j=i+1;j<9;j++)  
        {  
            x = sum(1,i);  
            y = sum(i+1,j);  
            z = sum(j+1,9);   
            if((p-x)*z==y)  
                count++;  
        }  
}  
  
int sum(int x,int y)  
{  
    int s = 0;  
      
    if(y==0)  
        return 0;  
          
    for(x;x<=y;x++)  
    {  
        s = s*10+a[x];  
    }  
    return s;  
}  