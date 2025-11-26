
//
//int game1() {
//    int a[5000];
//    int n, i, j, temp;
//
//    // 输入要排序的数字个数
//    
//    scanf("%d", &n);
//
//    // 输入n个数字
//    
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    // 使用冒泡排序从小到大排序
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (a[j] < a[j + 1]) {
//                // 交换a[j]和a[j+1]
//                temp = a[j];
//                a[j] = a[j + 1];
//				a[j + 1] = temp;
//            }
//        }
//    }
//
//    // 从小到大输出
//   
//    for (i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//
//    return 0;
//}