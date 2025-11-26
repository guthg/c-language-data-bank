#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
      //两个相差为2的素数称为素数对，如5和7，17和19等，本题目要求找出所有两个数均不大于n的素数对。
int main()
{
    int n = 0;
  
       scanf("%d", &n);
        if(0<n&&n<100001)
        {
            for (int i=2; i < n; i++)
            {
                if(i%2!=0&&i%3!=0&&i%5!=0)
                {
                    printf("%d", i);
                }
            }
        }
   }

   
