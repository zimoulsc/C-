#include <stdio.h>

int main()
{
	char res;
	char password[20] = {0};
	char ch;
	printf("请输入密码: "); 
	scanf("%s" , password);
	while((ch = getchar()) != '\n')
	{
		 
	}
	printf("请确认（Y/N）：");
	 res = getchar();
	if (res == 'Y')
	printf("确认成功\n");
	else 
	printf("放弃确认\n"); 
}
