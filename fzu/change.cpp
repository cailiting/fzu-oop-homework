#include <stdio.h>
#include <string.h>
int main()
{
	char num[20];
	printf("����ĺ�����������-ʮ֮�䣺\n");
	scanf("%s",&num);
	int h=0;
	if(strcmp("һ",num)==0)
	h=1;
	if(strcmp("��",num)==0)
	h=2;
	if(strcmp("��",num)==0)
	h=3;
	if(strcmp("��",num)==0)
	h=4;
	if(strcmp("��",num)==0)
	h=5;
	if(strcmp("��",num)==0)
	h=6;
	if(strcmp("��",num)==0)
	h=7;
	if(strcmp("��",num)==0)
	h=8;
	if(strcmp("��",num)==0)
	h=9;
	if(strcmp("ʮ",num)==0)
	h=10;
	printf("%d\n",h);
	return 0;
}
