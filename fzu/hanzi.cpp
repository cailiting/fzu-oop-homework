//�ж���λ���� ����0-10����С�ڵ���100�� 
#include <stdio.h>
#include <string.h>
int change(char num[]);
void out(int shu);
int main()
{
	char place[100];
	printf("�������ַ��\n");
	scanf("%s",&place);
	freopen(place,"r",stdin); 
	int n,v=0,i=1;
	char a[50],b[50],c[50],d[50];
	printf("����ĺ�����������-ʮ֮�䣺\n");
	scanf("%s %s %s %s",&a,&b,&c,&d);
	if(strcmp("����",a)==0)
	{
		if(strcmp("����",c)==0)
		{
			n=change(d);
			while(1)
			{
			scanf("%s",&a);
			 if(strcmp("����",a)==0)
        	break;
        	scanf("%s %s",&b,&c);
			if(strcmp("����",b)==0)
			{
				
				n+=change(c);//�� 
			}
			if(strcmp("����",b)==0)
			n-=change(c);	//�� 
			if(strcmp("����",b)!=0&&strcmp("����",b)!=0)
			{
				printf("��������ӻ���ٴ���������\n"); 
			}
	}
	scanf("%s",&b);
	if(strcmp("����", a)==0)
	{
		if(n<=10)//��<=10 
		out(n);
		if(n>10&&n<20)//10-20
		{
			printf("ʮ");
			out(n%10); 
		}
		if(n>=20&&n<100)//20-99 
		{
			int q=0;
			if(n%10==0)//��ʮ 
			{
				out(n/10);
				printf("ʮ");
			}
			else
			{
				out(n/10);
				printf("ʮ"); 
				out(n%10);
			}
		}
		if(n==100)
		printf("һ��"); 
		if(n>100)
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
