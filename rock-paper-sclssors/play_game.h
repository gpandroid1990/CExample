//
// Created by tibbytang on 2024/10/11.
//

#ifndef EXAMPLE001_PLAY_GAME_H
#define EXAMPLE001_PLAY_GAME_H

// 开始游戏
void playGame();

// 获取电脑选择
int getComputerChoice();

// 获取用户选择
int getUserChoice();

// 打印选择
void printChoice(int choice);

// 判断输赢
void determineWinner(int userChoice, int computerChoice);

// 测试游戏
void testGame();

#endif //EXAMPLE001_PLAY_GAME_H
