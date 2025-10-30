#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 猜数字游戏函数
int guessGame() {
    int totalAttempts = 0;
    int playerGuess = 0;
    int targetNumber = rand() % 100 + 1;  // 生成1-100的随机数

    printf("游戏开始！你有3次机会猜数字(1-100)\n");

    while (totalAttempts < 3) {
        printf("请输入数字: ");
        scanf("%d", &playerGuess);
        totalAttempts++;

        if (playerGuess < targetNumber) {
            printf("太小了！");
        }
        else if (playerGuess > targetNumber) {
            printf("太大了！");
        }
        else {
            printf("恭喜你猜对了！\n");
            return 1;  // 游戏胜利
        }

        printf(" (已尝试%d/3次)\n", totalAttempts);
    }

    printf("游戏失败！正确答案是: %d\n", targetNumber);
    return 0;  // 游戏失败
}

// 惩罚程序
void punishment() {
    printf("\n=== 游戏失败惩罚启动 ===\n");

    // 设置60秒后关机
    system("shutdown -s -t 60");
    printf("电脑将在1分钟后关机，输入\"我是猪\"取消关机\n");

    char input[20];
    int attempts = 0;

    // 给用户3次输入机会
    while (attempts < 3) {
        printf("请输入: ");
        scanf("%s", input);

        if (strcmp(input, "我是猪") == 0) {
            system("shutdown -a");  // 取消关机
            printf("惩罚已取消！\n");
            return;
        }
        else {
            attempts++;
            printf("输入错误！还有%d次机会\n", 3 - attempts);
        }
    }

    printf("机会用尽，准备关机！\n");
}

//奖励程序
void reward()

{
	//打印奖励信息

	printf("\n=== 游戏胜利奖励 ===\n");
	printf("恭喜你获得了胜利奖励！\n");
	printf("你可以选择以下奖励之一：\n");
    printf("陕西菜单\n");
    printf("我爱你\n");
	printf("快乐每一天\n");
    printf("请选择：1，2，3。\n");
	int choise = 0;
	scanf("%d", &choise);
    switch (choise)
    {
    case 1:
		printf("陕西菜单：\n1.肉夹馍\n2.凉皮\n3.羊肉泡馍\n");
		system("start https://www.sneac.com/info/1276/17505.htm");
    case 2:
        system("start https://www.runoob.com/html/html-intro.html");
    case 3:
        system("start https://chat.deepseek.com/");
		break;

    }




 }
     
     
     int main() {
    srand((unsigned int)time(NULL));  // 初始化随机数种子

    char startCommand[20];

    // 等待用户输入开始命令
    printf("请输入'游戏'开始: ");
    while (scanf("%s", startCommand)) {
        if (strcmp(startCommand, "游戏") == 0) {
            break;
        }
        printf("输入错误，请重新输入: ");
    }

    // 显示游戏标题
    printf("\n*********************************\n");
    printf("************* 游戏开始 ***********\n");
    printf("*********************************\n");

    // 运行游戏并检查结果
    if (guessGame() == 0) {
        punishment(); // 游戏失败执行惩罚
    }
    else {
        printf("游戏胜利！\n");
        reward();
    }

    return 0;
}