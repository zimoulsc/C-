/*
 * @Author: your name
 * @Date: 2020-12-22 09:55:49
 * @LastEditTime: 2022-01-06 19:36:17
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \share\练习\44猜数字游戏.c
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
		printf("请选择>: \n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	}while(input);
	return 0;	
}

void menu()
{
	printf("*************************\n");
	printf("输入 1 start，输入 0 quit\n");
	printf("*************************\n");
}

void game()
{
	int res = 0;
	int guess = 0;
	res = rand()%100 + 1;// 生成1到100 的随机数
	while(1)
	{
		printf("请输入要猜的数字: \n");
		scanf("%d", &guess);// 输入你猜的数字 
		if(res < guess)
			printf("猜大了\n");
		else if(res > guess)
			printf("猜小了\n");
		else 
		{
			printf("猜对了\n");
			break;
		}
		
	}
}
