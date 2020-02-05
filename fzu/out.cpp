#include <stdio.h>
#include <string.h>
int main()
{
	int shu;
	printf("输入的数字在0-10之间：\n");
	scanf("%d",&shu);
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
	return 0;
}
