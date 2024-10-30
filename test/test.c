//
// Created by tibbytang on 2024/10/30.
//

#include "test.h"
#include <stdio.h>
#include <string.h>

void test() {
//    char name[50];
//    printf("请输入您的姓名: ");
//    scanf("%49s", name);  // %49s 限制输入最多 49 个字符，留一个字符给 `\0`
//    printf("您好, %s!\n", name);

    char name[10];

    printf("请输入您的姓名: ");
    fgets(name, sizeof(name), stdin);

    printf("移除前%lu\n", strlen(name));
//     去除换行符（fgets 会在末尾包含换行符）
    name[strcspn(name, "\n")] = '\0';
    printf("移除后%lu\n", strlen(name));
    printf("您好, %s!\n", name);

}