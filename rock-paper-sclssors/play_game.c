//
// Created by tibbytang on 2024/10/11.
//

#include "play_game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playGame() {
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    printf("你选择了: ");
    printChoice(userChoice);
    printf("电脑选择了: ");
    printChoice(computerChoice);

    determineWinner(userChoice, computerChoice);
}

int getComputerChoice() {
    return rand() % 3;  // 生成 0, 1 或 2
}

int getUserChoice() {
    int choice;
    printf("请输入您的选择 (0: 剪刀, 1: 石头, 2: 布): ");
    scanf("%d", &choice);
    while (choice < 0 || choice > 2) {
        printf("无效选择，请重新输入 (0: 剪刀, 1: 石头, 2: 布): ");
        scanf("%d", &choice);
    }
    return choice;
}

void printChoice(int choice) {
    switch (choice) {
        case 0:
            printf("剪刀\n");
            break;
        case 1:
            printf("石头\n");
            break;
        case 2:
            printf("布\n");
            break;
    }
}

void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("平局！\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("你赢了！\n");
    } else {
        printf("电脑赢了！\n");
    }
}

void testGame(){
    srand(time(0));  // 初始化随机数种子
    char playAgain = 'y';

    printf("欢迎来到剪刀石头布游戏！\n");

    while (playAgain == 'y') {
        playGame();
        printf("\n想再玩一次吗？(y/n): ");
        scanf(" %c", &playAgain);
    }

    printf("感谢您的参与！\n");
}