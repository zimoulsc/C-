#include <stdio.h>

int main()
{
	char res;
	char password[20] = {0};
	char ch;
	printf("����������: "); 
	scanf("%s" , password);
	while((ch = getchar()) != '\n')
	{
		 
	}
	printf("��ȷ�ϣ�Y/N����");
	 res = getchar();
	if (res == 'Y')
	printf("ȷ�ϳɹ�\n");
	else 
	printf("����ȷ��\n"); 
}
