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
	printf("���Խ���10���رգ�����ȡ���������������룺GJA\n");
	scanf("%s", cancel);
    if (strcmp(cancel, "GJA") == 0) {
        system("shutdown -a");
        printf("��ȡ���ػ�\n");
    }
    else {
        printf("������󣬵��Խ���10���ر�\n");
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
            printf("�����������������\n");
        }
    }
}

int main()
{
    printf("��������Ҫʲô������\n");
    printf("1.deepseek\n2.GitHub\n3.У��\n4.ѧϰ����\n5.����\n6.�ػ�\n");

    help();
    return 0;
}