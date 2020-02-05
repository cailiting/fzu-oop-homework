#include <stdio.h>
#include <string.h>
int main()
{
	char num[20];
	printf("输入的汉字数字在零-十之间：\n");
	scanf("%s",&num);
	int h=0;
	if(strcmp("一",num)==0)
	h=1;
	if(strcmp("二",num)==0)
	h=2;
	if(strcmp("三",num)==0)
	h=3;
	if(strcmp("四",num)==0)
	h=4;
	if(strcmp("五",num)==0)
	h=5;
	if(strcmp("六",num)==0)
	h=6;
	if(strcmp("七",num)==0)
	h=7;
	if(strcmp("八",num)==0)
	h=8;
	if(strcmp("九",num)==0)
	h=9;
	if(strcmp("十",num)==0)
	h=10;
	printf("%d\n",h);
	return 0;
}
