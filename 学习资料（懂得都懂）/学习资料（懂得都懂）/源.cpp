#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>
#include <math.h>

void learning_materials()
{
    

    for (int i = 0; i < 2; i++) {
		system("start https://www.runoob.com/html/html-intro.html");
		Sleep(10000);
		
        
    }
}

void off()
{
    char cancel[] = { 0 };
    system("shutdown -s -t 10");
	printf("电脑将在10秒后关闭，如需取消请在命令行输入：GJA\n");
	scanf("%s", cancel);
    if (strcmp(cancel, "GJA") == 0) {
        system("shutdown -a");
        printf("已取消关机\n");
    }
    else {
        printf("输入错误，电脑将在10秒后关闭\n");
    }

}
void help()
{
    int ch = 0;

    while (1) {
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            system("start https://chat.deepseek.com/");
            break;
        case 2:
            system("start https://github.com/settings/copilot/features");
            break;
        case 3:
            system("start http://jwcmis.hnie.edu.cn/");
            break;
        case 4:

            learning_materials();
            break;
		case 5:
			system("start https://www.douyin.com/?recommend=1");
            break;
        case 6:
            off();
			break;
        default:
            printf("输入错误，请重新输入\n");
        }
    }
}

int main()
{
    printf("请问你需要什么帮助？\n");
    printf("1.deepseek\n2.GitHub\n3.校网\n4.学习资料\n5.抖音\n6.关机\n");

    help();
    return 0;
}