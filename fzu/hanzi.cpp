#include <stdio.h>
#include <string.h>
#include <math.h>
int change(char num[]);
int fu_change(char num[]);
void out(int shu);
int main()
{
	char place[100];
	printf("�������ַ��\n");
    scanf("%s",&place);
    freopen(place,"r",stdin); 
	int n,v=0,i=1,l,f,g;
	char a[50],b[50],c[50],d[50];
	printf("����ĺ��������ڸ�ʮ-ʮ֮�䣺\n");
	scanf("%s %s %s %s",&a,&b,&c,&d);
	if(strcmp("����",a)==0)
	{
		if(strcmp("����",c)==0)
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
			 if(strcmp("����",a)==0)
        	break;
        	scanf("%s %s",&b,&c);
			l=strlen(c);
			if(strcmp("����",b)==0)
			{
				
				if(l==2)
				n+=change(c);//�� 
				else
				{
					f=abs(fu_change(c));
					n-=f;
				}
			}
			if(strcmp("����",b)==0)
			{
				if(l==2)
				n-=change(c);	//�� 
				else
				{
					f=abs(fu_change(c));
					n+=f;
				}
			}
			
			if(strcmp("����",b)!=0&&strcmp("����",b)!=0)
			{
				printf("��������ӻ���ٴ���������\n"); 
			}
	}
	scanf("%s",&b);
	if(strcmp("����", a)==0)
	{
		g=abs(n);
		if(n<0)
		printf("��");
		if(g<=10)//��<=10 
		out(g);
		if(g>10&&g<20)//10-20
		{
			printf("ʮ");
			out(g%10); 
		}
		if(g>=20&&g<100)//20-99 
		{
			int q=0;
			if(g%10==0)//��ʮ 
			{
				out(g/10);
				printf("ʮ");
			}
			else
			{
				out(g/10);
				printf("ʮ"); 
				out(g%10);
			}
		}
		if(g==100)
		printf("һ��"); 
		if(g>100)
		{
		printf("�������㷶Χ"); 
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
	return h;
 } 
 void out(int shu)
 {
 	switch(shu)
	{
 	case 0:	printf("��");break;
 	case 1: printf("һ");break;
	case 2:	printf("��");break;
	case 3:	printf("��");break;
	case 4:	printf("��");break;
	case 5:	printf("��");break;
	case 6:	printf("��");break;
	case 7:	printf("��"); break;
	case 8:	printf("��"); break;
	case 9:	printf("��"); break;
	case 10: printf("ʮ"); break;
	}
 }
 int fu_change(char num[])
 {
 	int h;
 	if(strcmp("��һ",num)==0)
 	h=-1;
 	if(strcmp("����",num)==0)
 	h=-2;
	if(strcmp("����",num)==0) 
	h=-3;
	if(strcmp("����",num)==0) 
	h=-4;
	if(strcmp("����",num)==0) 
	h=-5;
	if(strcmp("����",num)==0) 
	h=-6;
	if(strcmp("����",num)==0) 
	h=-7;
	if(strcmp("����",num)==0) 
	h=-8;
	if(strcmp("����",num)==0) 
	h=-9;
	if(strcmp("��ʮ",num)==0) 
	h=-10;
	return h; 
 }
