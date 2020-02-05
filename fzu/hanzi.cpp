//判断两位数的 输入0-10；和小于等于100； 
#include <stdio.h>
#include <string.h>
int change(char num[]);
void out(int shu);
int main()
{
	char place[100];
	printf("请输入地址：\n");
	scanf("%s",&place);
	freopen(place,"r",stdin); 
	int n,v=0,i=1;
	char a[50],b[50],c[50],d[50];
	printf("输入的汉字数字在零-十之间：\n");
	scanf("%s %s %s %s",&a,&b,&c,&d);
	if(strcmp("整数",a)==0)
	{
		if(strcmp("等于",c)==0)
		{
			n=change(d);
			while(1)
			{
			scanf("%s",&a);
			 if(strcmp("看看",a)==0)
        	break;
        	scanf("%s %s",&b,&c);
			if(strcmp("增加",b)==0)
			{
				
				n+=change(c);//加 
			}
			if(strcmp("减少",b)==0)
			n-=change(c);	//减 
			if(strcmp("增加",b)!=0&&strcmp("减少",b)!=0)
			{
				printf("输入的增加或减少错误，请重输\n"); 
			}
	}
	scanf("%s",&b);
	if(strcmp("看看", a)==0)
	{
		if(n<=10)//和<=10 
		out(n);
		if(n>10&&n<20)//10-20
		{
			printf("十");
			out(n%10); 
		}
		if(n>=20&&n<100)//20-99 
		{
			int q=0;
			if(n%10==0)//整十 
			{
				out(n/10);
				printf("十");
			}
			else
			{
				out(n/10);
				printf("十"); 
				out(n%10);
			}
		}
		if(n==100)
		printf("一百"); 
		if(n>100)
		{
		printf("超出运算范围"); 
		}	
	}
	}
	else
	printf("ERROR");
	}
	else
	printf("ERROR");
	return 0;
}
int change(char num[])
{
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
	return h;
 } 
 void out(int shu)
 {
 	switch(shu)
	{
 	case 0:	printf("零");break;
 	case 1: printf("一");break;
	case 2:	printf("二");break;
	case 3:	printf("三");break;
	case 4:	printf("四");break;
	case 5:	printf("五");break;
	case 6:	printf("六");break;
	case 7:	printf("七"); break;
	case 8:	printf("八"); break;
	case 9:	printf("九"); break;
	case 10: printf("十"); break;
	}
 }
