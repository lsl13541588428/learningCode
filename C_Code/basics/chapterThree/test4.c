/*
 * @explain: Copyright (c) 2020 WEI.ZHOU. All rights reserved.
 * The following code is only used for learning and communication, not for
 * illegal and commercial use. If the code is used, no consent is required, but
 * the author has nothing to do with any problems and consequences.
 *
 * In case of code problems, feedback can be made through the following email
 * address. <xiaoandx@gmail.com>
 *
 * @Description:
 * @Author: WEI.ZHOU
 * @Date: 2020-10-21 22:31:58
 * @Version: V1.0
 * @LastEditTime: 2020-10-24 10:44:50
 * @LastEditors: WEI.ZHOU
 * @Others:
 */
#include <stdio.h>

#define PI 3.14159

int main() {
    int r;
    printf("请输入圆的半径bair（0-10000）：");
    scanf("%d", &r);
open:
    if (r > 0 && r <= 10000) {
        // %.2f 控制输出结果保留两位小数
        printf("半径为%d的圆面积为：%.2f\n", r, PI * r * r);
    } else {
        printf("输入半径值错误,值需在0-10000之内重新输入:");
        scanf("%d", &r);
        goto open;
    }
    return 0;
}