/*
 * @Author: your name
 * @Date: 2020-12-22 09:55:49
 * @LastEditTime: 2022-01-06 19:36:17
 * @LastEditors: Please set LastEditors
 * @Description: ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \share\��ϰ\44��������Ϸ.c
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu();
void game();
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>: \n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	}while(input);
	return 0;	
}

void menu()
{
	printf("*************************\n");
	printf("���� 1 start������ 0 quit\n");
	printf("*************************\n");
}

void game()
{
	int res = 0;
	int guess = 0;
	res = rand()%100 + 1;// ����1��100 �������
	while(1)
	{
		printf("������Ҫ�µ�����: \n");
		scanf("%d", &guess);// ������µ����� 
		if(res < guess)
			printf("�´���\n");
		else if(res > guess)
			printf("��С��\n");
		else 
		{
			printf("�¶���\n");
			break;
		}
		
	}
}
