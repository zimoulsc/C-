/*
 * @Author: your name
 * @Date: 2021-01-26 09:05:29
 * @LastEditTime: 2021-01-26 10:08:36
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \20210125\焦文垚\在数组中查找数字_无序时.c
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 100

int main()
{
    srand(time(0));

    // 数组，n个数据
    int n;
    scanf("%d", &n);
    
    // 懒得输入，用随机数读入数组
    int w[N];
    for (int i = 0; i < n; i++)
    {
        w[i] = rand() % 100;
    }

    // 打印数组
    for (int i = 0; i < n; i++)
    {
        printf("%d ", w[i]);
    }
    printf("\n");

    int x;
    printf("输入你想查找的数字：");
    scanf("%d", &x);

    // 此时数组是无序的，遍历查找
    int ver = -1; // index 
    for (int i = 0; i < n; i++)
    {
        if (w[i] == x)
        {
            ver = i;
            break;
        }
    }
    if (ver == -1)
    {
        printf("当前数组没有你要查找的数字！！！\n");
    }
    else
    {
        printf("你要找的数字在下标为 %d 的位置\n", ver);
    }

    return 0;
}