/*
 * @Author: your name
 * @Date: 2021-01-19 14:26:17
 * @LastEditTime: 2021-03-01 10:58:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \练习\01-100以内的奇数和.cpp
 */
// #include <stdio.h>

// int main()
// {
//     // printf("hello world\n");
//     // int sum = 0;
//     // for(int i = 0; i < 101; i++)
//     // {
//     //      if(i % 2 == 1)
//     //      sum += i;   
//     // }
//     // printf("sum=%d\n", sum);     
//     // return 0;
    
//     int i = 0, s = 0;
//     while (i <= 100) //当i = 101 时，退出循环
//     {
//         s += i;
//         i++;
//     }
//     printf("s = %d", s);
        
// }

#include <stdio.h>

int main()
{
    int sum;
    int i;
    // for (i = 0; i < 101; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         sum += i;
    //     }
    // }
    // printf("sum = %d\n", sum);
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
}