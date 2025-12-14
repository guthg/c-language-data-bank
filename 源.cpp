#include <stdio.h>
#include <string.h>
// 统计选票结果
// 定义候选人结构体
struct candidate {
    char name[20];  // 姓名
    int poll;       // 所得票数
};

int main() {
    int n, m;

    // 读取候选人数量 n 和选票数量 m
    scanf("%d %d", &n, &m);

    // 定义候选人数组
    struct candidate candidates[100];

    // 读取候选人名单并初始化票数为0
    for (int i = 0; i < n; i++) {
        scanf("%s", candidates[i].name);
        candidates[i].poll = 0;
    }

    // 读取选票并统计票数
    for (int i = 0; i < m; i++) {
        char vote_name[20];
        scanf("%s", vote_name);

        // 遍历候选人数组，找到对应的候选人并增加票数
        for (int j = 0; j < n; j++) {
            if (strcmp(candidates[j].name, vote_name) == 0) {
                candidates[j].poll++;
                break;
            }
        }
    }

    // 找出最高票数
    int max_poll = 0;
    for (int i = 0; i < n; i++) {
        if (candidates[i].poll > max_poll) {
            max_poll = candidates[i].poll;
        }
    }

    // 输出所有得票最多的候选人
    for (int i = 0; i < n; i++) {
        if (candidates[i].poll == max_poll) {
            printf("%s\n", candidates[i].name);
        }
    }

    return 0;
}