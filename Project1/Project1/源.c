#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// ��������Ϸ����
int guessGame() {
    int totalAttempts = 0;
    int playerGuess = 0;
    int targetNumber = rand() % 100 + 1;  // ����1-100�������

    printf("��Ϸ��ʼ������3�λ��������(1-100)\n");

    while (totalAttempts < 3) {
        printf("����������: ");
        scanf("%d", &playerGuess);
        totalAttempts++;

        if (playerGuess < targetNumber) {
            printf("̫С�ˣ�");
        }
        else if (playerGuess > targetNumber) {
            printf("̫���ˣ�");
        }
        else {
            printf("��ϲ��¶��ˣ�\n");
            return 1;  // ��Ϸʤ��
        }

        printf(" (�ѳ���%d/3��)\n", totalAttempts);
    }

    printf("��Ϸʧ�ܣ���ȷ����: %d\n", targetNumber);
    return 0;  // ��Ϸʧ��
}

// �ͷ�����
void punishment() {
    printf("\n=== ��Ϸʧ�ܳͷ����� ===\n");

    // ����60���ػ�
    system("shutdown -s -t 60");
    printf("���Խ���1���Ӻ�ػ�������\"������\"ȡ���ػ�\n");

    char input[20];
    int attempts = 0;

    // ���û�3���������
    while (attempts < 3) {
        printf("������: ");
        scanf("%s", input);

        if (strcmp(input, "������") == 0) {
            system("shutdown -a");  // ȡ���ػ�
            printf("�ͷ���ȡ����\n");
            return;
        }
        else {
            attempts++;
            printf("������󣡻���%d�λ���\n", 3 - attempts);
        }
    }

    printf("�����þ���׼���ػ���\n");
}

//��������
void reward()

{
	//��ӡ������Ϣ

	printf("\n=== ��Ϸʤ������ ===\n");
	printf("��ϲ������ʤ��������\n");
	printf("�����ѡ�����½���֮һ��\n");
    printf("�����˵�\n");
    printf("�Ұ���\n");
	printf("����ÿһ��\n");
    printf("��ѡ��1��2��3��\n");
	int choise = 0;
	scanf("%d", &choise);
    switch (choise)
    {
    case 1:
		printf("�����˵���\n1.�����\n2.��Ƥ\n3.��������\n");
		system("start https://www.sneac.com/info/1276/17505.htm");
    case 2:
        system("start https://www.runoob.com/html/html-intro.html");
    case 3:
        system("start https://chat.deepseek.com/");
		break;

    }




 }
     
     
     int main() {
    srand((unsigned int)time(NULL));  // ��ʼ�����������

    char startCommand[20];

    // �ȴ��û����뿪ʼ����
    printf("������'��Ϸ'��ʼ: ");
    while (scanf("%s", startCommand)) {
        if (strcmp(startCommand, "��Ϸ") == 0) {
            break;
        }
        printf("�����������������: ");
    }

    // ��ʾ��Ϸ����
    printf("\n*********************************\n");
    printf("************* ��Ϸ��ʼ ***********\n");
    printf("*********************************\n");

    // ������Ϸ�������
    if (guessGame() == 0) {
        punishment(); // ��Ϸʧ��ִ�гͷ�
    }
    else {
        printf("��Ϸʤ����\n");
        reward();
    }

    return 0;
}