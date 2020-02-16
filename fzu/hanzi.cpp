#include <stdio.h>
#include <string.h>
#include <math.h>
int change(char num[]);
int fu_change(char num[]);
void out(int shu);
int main()
{
	char place[100];
	printf("请输入地址：\n");
    scanf("%s",&place);
    freopen(place,"r",stdin); 
	int n,v=0,i=1,l,f,g;
	char a[50],b[50],c[50],d[50];
	printf("输入的汉字数字在负十-十之间：\n");
	scanf("%s %s %s %s",&a,&b,&c,&d);
	if(strcmp("整数",a)==0)
	{
		if(strcmp("等于",c)==0)
		{
		//
			l=strlen(d);
			if(l==2)	
			n=change(d);
			else
			n=fu_change(d);
			while(1)
			{
			scanf("%s",&a);
			 if(strcmp("看看",a)==0)
        	break;
        	scanf("%s %s",&b,&c);
			l=strlen(c);
			if(strcmp("增加",b)==0)
			{
				
				if(l==2)
				n+=change(c);//加 
				else
				{
					f=abs(fu_change(c));
					n-=f;
				}
			}
			if(strcmp("减少",b)==0)
			{
				if(l==2)
				n-=change(c);	//减 
				else
				{
					f=abs(fu_change(c));
					n+=f;
				}
			}
			
			if(strcmp("增加",b)!=0&&strcmp("减少",b)!=0)
			{
				printf("输入的增加或减少错误，请重输\n"); 
			}
	}
	scanf("%s",&b);
	if(strcmp("看看", a)==0)
	{
		g=abs(n);
		if(n<0)
		printf("负");
		if(g<=10)//和<=10 
		out(g);
		if(g>10&&g<20)//10-20
		{
			printf("十");
			out(g%10); 
		}
		if(g>=20&&g<100)//20-99 
		{
			int q=0;
			if(g%10==0)//整十 
			{
				out(g/10);
				printf("十");
			}
			else
			{
				out(g/10);
				printf("十"); 
				out(g%10);
			}
		}
		if(g==100)
		printf("一百"); 
		if(g>100)
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
 int fu_change(char num[])
 {
 	int h;
 	if(strcmp("负一",num)==0)
 	h=-1;
 	if(strcmp("负二",num)==0)
 	h=-2;
	if(strcmp("负三",num)==0) 
	h=-3;
	if(strcmp("负四",num)==0) 
	h=-4;
	if(strcmp("负五",num)==0) 
	h=-5;
	if(strcmp("负六",num)==0) 
	h=-6;
	if(strcmp("负七",num)==0) 
	h=-7;
	if(strcmp("负八",num)==0) 
	h=-8;
	if(strcmp("负九",num)==0) 
	h=-9;
	if(strcmp("负十",num)==0) 
	h=-10;
	return h; 
 }
