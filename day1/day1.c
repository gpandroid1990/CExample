//
// Created by tibbytang on 2024/10/29.
//

#include "day1.h"
#include <stdio.h>

// 介绍自己 实现函数
void introduceYourSelf() {
    // 身高变量
    float userHeight = 0.0f;
    // 体重变量
    float userWeight = 0.0f;
    // 姓名变量
    char userName[50] = {};
    printf("这是一个自我介绍程序\n");

    printf("请输入你的身高:单位为米\n");
    // 从控制台输入用户身高
    scanf("%f", &userHeight);

    printf("请输入你的体重:单位为千克\n");
    // 从控制台输入用户体重
    scanf("%f", &userWeight);

    printf("请输入你的姓名:\n");
    // 从控制台输入用户姓名
    scanf("%s", userName);

    printf("你的身高是:%.2f(米)\n你的体重是:%.2f(kg)\n你的姓名是:%s\n", userHeight, userWeight, userName);
}