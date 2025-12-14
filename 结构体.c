/*选举

有一次选举活动，要从候选人中选出得票最多的若干人选。定义一个结构体，描述候选人的信息，可参考如下：

struct candidate {

    char name[20];  //姓名

    int poll;               //所得票数

};从键盘输入两个整数n (1 <= n < = 100)和m(1<=m<=1000)，
表示有n位候选人，要从中选出得票最多的一位候选人，
m表示收集到的有效选票数（每张选票上有一位候选人的名字）。
再输入n名候选人的名单，每个人占一行。最后输入m行数据，
分别代表有效选票上的候选人姓名。现在要统计并输出得票最多的一位候选人的姓名。
如果有并列的人选，要把所有并列的人选输出，每行上输入一位得票最多的人选。*/

#include <stdio.h>
#include <string.h>


struct candidate {
    char name[20];
    int poll;
};

int main() {
    int n, m;

    scanf("%d %d", &n, &m);


    struct candidate candidates[100];


    for (int i = 0; i < n; i++) {
        scanf("%s", candidates[i].name);
        candidates[i].poll = 0;
    }

    for (int i = 0; i < m; i++) {
        char vote_name[20];
        scanf("%s", vote_name);


        for (int j = 0; j < n; j++) {
            if (strcmp(candidates[j].name, vote_name) == 0) {
                candidates[j].poll++;
                break;
            }
        }
    }

    int max_poll = 0;
    for (int i = 0; i < n; i++) {
        if (candidates[i].poll > max_poll) {
            max_poll = candidates[i].poll;
        }
    }


    for (int i = 0; i < n; i++) {
        if (candidates[i].poll == max_poll) {
            printf("%s\n", candidates[i].name);
        }
    }

    return 0;
}