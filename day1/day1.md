## 介绍自己程序

掌握输入函数 **scanner** 的使用

掌握输出函数 **printf** 的使用

**#include <stdio.h>** 导入标准头文件输入输出库
> \n 为换行符 \t为空格

#### 用户输入自己的身高，体重和姓名，然后打印出用户的个人信息

身高为浮点型数据 float 单位为米

体重为浮点型数据 float 单位为千克

姓名为字符串数组 char[]

**scanner** 不会读取包含空格的字符串，如果输入中包含空格，会从包含空格处截断       
```C
void test() {
    char name[50];

    printf("请输入您的姓名: ");
    scanf("%49s", name);  // %49s 限制输入最多 49 个字符，留一个字符给 `\0`

    printf("您好, %s!\n", name);
}

```
#### 在 C 语言中，可以使用 scanf 或 fgets 函数来输入姓名。使用 fgets 更为安全，因为它允许你指定最大读取字符数，从而避免缓冲区溢出。
**fgets** 可以读取包含空格的名字，适合输入全名。

```C
    char name[10];

    printf("请输入您的姓名: ");
    fgets(name, sizeof(name), stdin);

    printf("移除前%lu\n", strlen(name));
//     去除换行符（fgets 会在末尾包含换行符）
    name[strcspn(name, "\n")] = '\0';
    printf("移除后%lu\n", strlen(name));
    printf("您好, %s!\n", name);

```

说明

    %49s：在 scanf 中限制输入的字符数，以避免缓冲区溢出。
    fgets：从标准输入读取字符串，sizeof(name) 确保最多读取 49 个字符（最后一个字符保留给空字符 \0）。
    strcspn(name, "\n")：去掉 fgets 捕获的换行符，以确保输出格式更整洁。

使用 fgets 更为安全，也能处理更复杂的输入情境。