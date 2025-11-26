/*小红在一个游戏里杀怪。这是个回合制游戏，小红和两只怪物相遇了。
第一只怪物有
a
a 血量，第二只怪物有
b
b 血量。
小红有两个技能：
第一个技能叫火球术，效果是对单体怪物造成
x
x 伤害。
第二个技能叫烈焰风暴，效果是对每只怪物造成
y
y 伤害。
小红想知道，自己最少使用多少次技能，可以击杀这两只怪物？（当怪物血量小于等于0时，视为被击杀）
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void game(int a, int b, int x, int y)
{
    int min_turns = 1000; // 初始化为一个很大的数

    // 暴力枚举所有可能的组合
    for (int i = 0; i <= 20; i++) // 火球术总次数
    {
        for (int j = 0; j <= 20; j++) // 烈焰风暴次数
        {
            // 尝试所有可能的火球术分配方式
            for (int k = 0; k <= i; k++) // k个火球术打第一个怪物
            {
                int l = i - k; // 剩下的火球术打第二个怪物

                // 计算对两只怪物造成的伤害
                int damage_a = k * x + j * y;
                int damage_b = l * x + j * y;

                // 检查是否足够杀死两只怪物
                if (damage_a >= a && damage_b >= b) {
                    int total_turns = i + j;
                    if (total_turns < min_turns) {
                        min_turns = total_turns;
                    }
                }
            }
        }
    }

    printf("%d", min_turns);
}

int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    game(a, b, x, y);
    return 0;
}