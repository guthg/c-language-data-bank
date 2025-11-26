//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main() {
//    int n, i,  a, j;
//    scanf("%d", &n);
//    if (1 <= n && n <= 100000)
//    {
//        for (i = 1; i <= n - 2; i++)
//        {
//            int ch = 0;
//            for (j = 1; j <= i; j++)
//            {
//                if (i % j == 0)
//                {
//                    ch++;
//                }
//            }
//
//			int sh = 0;
//            for (a = 1; a <= i + 2; a++)
//            {
//                if ((i+2) % a == 0)
//                {
//                    sh++;
//                }
//            }
//
//            if (ch == 2 && sh == 2)
//            {
//                printf("%d %d\n", i,i+2);
//            }
//
//        }
//    }
//
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////在400--500之间求一个数,它被2除余1,被5除余3,被9除余1,这个数是多少?
//
//int main()
//{
//	for(int n=400;n<=500;n++)
//	{
//		if(n%2==1 && n%5==3 && n%9==1)
//		{
//			printf("这个数是:%d\n",n);
//		}
//	}
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。例如：153是一个水仙花数，因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
//
//int main()
//{
//	int i, a, b, c;
//	for (int i = 100; i < 999; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>	
////斐波那契数列指的是这样一个数列：1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
////这个数列从第三项开始，每一项都等于前两项之和。
//
////输入项数n，输出斐波那契数列第n项的值。(1 <= n <= 4000)
//int main()
//{
//	int str1[4000] = { 1, 1 };
//	int n = 0;
//	for (int a=1;a<4;a++)
//	{
//
//		scanf("%d", &n);
//
//		if (n >= 1 && n <= 4000)
//		{
//			for (int i = 2; i < n; i++)
//			{
//				str1[i] = str1[i - 1] + str1[i - 2];
//			}
//			printf("%d\n", str1[n - 1]);
//		}
//		else
//		{
//			printf("输入的n不在有效范围内！\n");
//		}
//
//	}
//}
//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    // 处理a=0的情况（一次方程）
//    if (a == 0) {
//        if (b == 0) {
//            if (c == 0) {
//                // 0=0，无穷多解，输出0
//                printf("0.000\n");
//            }
//            else {
//                // c≠0，无解
//                printf("NOANSWER\n");
//            }
//        }
//        else {
//            // bx+c=0，解为x=-c/b
//            double x = -c * 1.0 / b;
//            printf("%.3lf\n", x);
//        }
//    }
//    else {
//        // 一元二次方程
//        double delta = b * b - 4.0 * a * c;
//
//        if (delta < 0) {
//            // 无实数解
//            printf("NOANSWER\n");
//        }
//        else if (delta == 0) {
//            // 有一个重根
//            double x = -b / (2.0 * a);
//            printf("%.3lf\n", x);
//        }
//        else {
//            // 有两个不同实根
//            double sqrt_delta = sqrt(delta);
//            double x1 = (-b + sqrt_delta) / (2.0 * a);
//            double x2 = (-b - sqrt_delta) / (2.0 * a);
//
//            // 按从小到大顺序输出
//           
//                printf("%.3lf %.3lf\n", x1, x2);
//            
//          
//        }
//    }
//
//  
//}


//#include <stdio.h>
//
//int main() {
//    int x, y, z;
//    for (x = 25; x >= 0; x--) {
//        if ((200 - 8 * x) % 5 == 0) {
//            y = (200 - 8 * x) / 5;
//            z = 100 - x - y;
//            if (z >= 0 && z % 3 == 0) {
//                printf("公鸡%d只, 母鸡%d只, 小鸡%d只\n", x, y, z);
//            }
//        }
//    }
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	int a, b, c, num;
//	scanf("%d %d %d", &a, &b, &c);
//	for (num = 10; num < 100; num++)
//	{
//
//		if(num%3==a&&num%5==b&&num%7==c)
//		{
//			printf("%d", num);
//			break;
//		}
//		else if(num==99)
//		{
//			printf("No answer");
//		}
//	}
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int n, i;
//    int arr[100] = { 0 };
//
//    // 使用循环处理多组测试数据
//    while (scanf("%d", &n) != EOF) {
//        int sum = 0;
//
//        // 读取n个学生的年龄
//        for (i = 0; i < n; i++) {
//            scanf("%d", &arr[i]);
//            sum = sum + arr[i];
//        }
//
//        // 使用浮点数除法计算平均值
//        double ch = (double)sum / n;
//        printf("%.2f\n", ch);
//    }
//
//    return 0;
//}

////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>	
////斐波那契数列指的是这样一个数列：1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
////这个数列从第三项开始，每一项都等于前两项之和。
//
////输入项数n，输出斐波那契数列第n项的值。(1 <= n <= 4000)
//int main()
//{
//	int str1[4000] = { 1, 1 };
//	int n = 0;
//
//
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 1 && n <= 4000)
//		{
//			for (int i = 2; i < n; i++)
//			{
//				str1[i] = str1[i - 1] + str1[i - 2];
//			}
//			printf("%d\n", str1[n - 1]);
//		}
//		else
//		{
//			printf("输入的n不在有效范围内！\n");
//		}
//
//
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
////某班有不超过30人（具体人数有键盘输入）参加期末考试，最多不会超过6门（具体门数由键盘输入）。
////定义数据类型，用结构体数组做函数参数，编程实现：录入每个学生的学号、姓名、和各科考试成绩。（要求用子函数）
//#define MAXSTU 30
//#define MAXSUB 6
//#include <stdio.h>
//#include <string.h>
//
//struct stu
//{
//	char stuhao[20];
//	char name[20];
//	int score[MAXSUB];
//};
//
//void shgsh(struct stu s[], int n, int m)
//{
//	printf("Input student's ID,name and score:");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", s[i].stuhao);
//			scanf("%s", s[i].name);
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", s[j].score);
//			}
//	}
//}
//
//int main()
//{
//	int n, m;
//	struct stu s[MAXSTU];
//
//	scanf("%d", &n);
//	scanf("%d", &m);
//	shgsh(s, n, m);
//
//
//}
//



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    long long int a, b;
//    float c;
//    char d[10] = { 0 };
//    char e[10000] = { 0 };
//    scanf("%d", &a);
//    scanf("%d", &b);
//    scanf("%f", &c);
//    scanf("%s", &d);
// 
//  
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//    int n;
//
//    while (scanf("%d", &n) == 1)
//    {
//        if (n <= 10&&n>=1)
//        {
//            int** shuzu = (int**)malloc(n * sizeof(int*));
//            for (int i = 0; i < n; i++)
//            {
//                shuzu[i] = (int*)malloc(n * sizeof(int));
//            }
//
//            int num = 1;
//            int shang = 0, xia = n - 1, zuo = 0, you = n - 1;
//
//            // 修正循环条件
//            while (num <= n * n)
//            {
//                // 从上到下填充最右列
//                for (int i = shang; i <= xia; i++)
//                {
//                    shuzu[i][you] = num++;
//                }
//                you--;
//
//                // 从右到左填充最下行
//                for (int i = you; i >= zuo; i--)
//                {
//                    shuzu[xia][i] = num++;
//                }
//                xia--;
//
//                // 从下到上填充最左列
//                for (int i = xia; i >= shang; i--)
//                {
//                    shuzu[i][zuo] = num++;
//                }
//                zuo++;
//
//                // 从左到右填充最上行
//                for (int i = zuo; i <= you; i++)
//                {
//                    shuzu[shang][i] = num++;
//                }
//                shang++;
//            }
//
//
//
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < n; j++)
//                {
//                    printf("%3d ", shuzu[i][j]);
//                }
//                printf("\n");
//            }
//            printf("\n"); // 添加空行分隔不同矩阵的输出
//        }
//    }
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int main() {
//    int n;
//    
//    while (scanf("%d", &n) == 1)
//    {
//        int** matrix = (int**)malloc(n * sizeof(int*));
//        for (int i = 0; i < n; i++)
//        {
//            matrix[i] = (int*)malloc(n * sizeof(int*));
//
//        }
//
//        int num = 1;
//        int top = 0, bottom = n - 1, left = 0, right = n - 1;
//
//        // 从右上角开始，按顺时针方向填充
//        while (num <= n * n) {
//            // 从上到下填充最右列
//            for (int i = top; i <= bottom; i++)
//                matrix[i][right] = num++;
//            right--;
//
//            // 从右到左填充最下行
//            for (int i = right; i >= left; i--)
//                matrix[bottom][i] = num++;
//            bottom--;
//
//            // 从下到上填充最左列
//            for (int i = bottom; i >= top; i--)
//                matrix[i][left] = num++;
//            left++;
//
//            // 从左到右填充最上行
//            for (int i = left; i <= right; i++)
//                matrix[top][i] = num++;
//            top++;
//        }
//
//        // 输出矩阵（每个数字占3位）
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%3d ", matrix[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    // 循环读取多组数据
//    while (scanf("%d", &n) != EOF)
//    {
//        // 分配内存
//        int** shuzu = (int**)malloc(n * sizeof(int*));
//        for (int i = 0; i < n; i++)
//        {
//            shuzu[i] = (int*)malloc(n * sizeof(int));
//        }
//
//        int num = 1;
//        int shang = 0, xia = n - 1, zuo = 0, you = n - 1;
//
//        // 螺旋填充矩阵
//        while (shang <= xia && zuo <= you)
//        {
//            // 从上到下填充最右边列
//            for (int i = shang; i <= xia; i++)
//            {
//                shuzu[i][you] = num++;
//            }
//            you--;
//
//            // 从右到左填充最底行
//            if (shang <= xia)
//            {
//                for (int i = you; i >= zuo; i--)
//                {
//                    shuzu[xia][i] = num++;
//                }
//                xia--;
//            }
//
//            // 从下到上填充最左边列
//            if (zuo <= you)
//            {
//                for (int i = xia; i >= shang; i--)
//                {
//                    shuzu[i][zuo] = num++;
//                }
//                zuo++;
//            }
//
//            // 从左到右填充最顶行
//            if (shang <= xia)
//            {
//                for (int i = zuo; i <= you; i++)
//                {
//                    shuzu[shang][i] = num++;
//                }
//                shang++;
//            }
//        }
//
//       
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("%3d", shuzu[i][j]);
//                if (j < n - 1) printf(" ");
//            }
//            printf("\n");
//        }
//
//        // 矩阵之间用空行分割
//        printf("\n");
//
//        // 释放内存
//        for (int i = 0; i < n; i++)
//        {
//            free(shuzu[i]);
//        }
//        free(shuzu);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int n;
//    int first = 1; 
//
//    while (scanf("%d", &n) != EOF) {
//        if (!first) {
//            printf("\n"); // 矩阵之间用空行分割
//        }
//        first = 0;
//
//        int matrix[10][10] = { 0 }; // N<10，最大9x9
//        int num = 1;
//        int x = 0, y = n - 1; // 起始位置：右上角
//
//        // 方向：下(0)、左(1)、上(2)、右(3)
//        int directions[4][2] = { {1,0}, {0,-1}, {-1,0}, {0,1} };
//        int dir = 0; // 初始方向：下
//
//        while (num <= n * n) {
//            matrix[x][y] = num++;
//
//            // 尝试按当前方向移动
//            int nx = x + directions[dir][0];
//            int ny = y + directions[dir][1];
//
//            // 如果下一个位置超出边界或已有数字，改变方向
//            if (nx < 0 || nx >= n || ny < 0 || ny >= n || matrix[nx][ny] != 0) {
//                dir = (dir + 1) % 4; // 改变方向
//                nx = x + directions[dir][0];
//                ny = y + directions[dir][1];
//            }
//
//            x = nx;
//            y = ny;
//        }
//
//        // 输出矩阵
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%3d", matrix[i][j]);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n > 0 && n < 10)
//        {
//            int** shuzu = (int**)malloc(n * sizeof(int*));
//            for (int i = 0; i < n; i++)
//            {
//                shuzu[i] = (int*)malloc(n * sizeof(int*));
//
//            }
//            int num = 1;
//            int shang = 0, xia = n - 1, zuo = 0, you = n - 1;
//            while (num < n * n)
//            {
//                for (int i = shang; i <= xia; i++)
//                {
//                    shuzu[i][you] = num++;
//                }
//                you--;
//                for (int i = you; i >= zuo; i--)
//                {
//                    shuzu[xia][i] = num++;
//                }
//                xia--;
//                for (int i = xia; i >= shang; i--)
//                {
//                    shuzu[i][zuo] = num++;
//                }
//                zuo++;
//                for (int i = zuo; i <= you; i++)
//                {
//                    shuzu[shang][i] = num++;
//                }
//                shang++;
//
//            }
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < n; j++)
//                {
//                    printf("%3d ", shuzu[i][j]);
//                }
//                printf("\n");
//            }
//
//        }
//    }.


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int n;
//    int first = 1; // 标记是否是第一个矩阵
//
//    while (scanf("%d", &n) != EOF) {
//        if (!first) {
//            printf("\n"); // 矩阵之间用空行分割0001
//        }
//        first = 0;
//        int shuzu[10][10] = { 0 };
//        int num = 1;
//        int shang = 0, xia = n - 1, zuo = 0, you = n - 1;
//
//         修正循环条件，确保中心点被填充
//        while (num <= n * n)
//        {
//             从上到下填充最右边列
//            for (int i = shang; i <= xia && num <= n * n; i++)
//            {
//                shuzu[i][you] = num++;
//            }
//            you--;
//
//             从右到左填充最底行
//            for (int i = you; i >= zuo && num <= n * n; i--)
//            {
//                shuzu[xia][i] = num++;
//            }
//            xia--;
//
//             从下到上填充最左边列
//            for (int i = xia; i >= shang && num <= n * n; i--)
//            {
//                shuzu[i][zuo] = num++;
//            }
//            zuo++;
//
//             从左到右填充最顶行
//            for (int i = zuo; i <= you && num <= n * n; i++)
//            {
//                shuzu[shang][i] = num++;
//            }
//            shang++;
//        
//        }
//
//         输出矩阵
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%3d", shuzu[i][j]);
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;


