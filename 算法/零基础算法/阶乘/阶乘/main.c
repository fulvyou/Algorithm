//
//  main.c
//  阶乘
//
//  Created by fly on 17/4/15.
//  Copyright © 2017年 fly. All rights reserved.
//

#include <stdio.h>

int fact(int n)
{
    if (n>=1) {
        return n*fact(n-1);
    }else
    {
        return 1;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    
    while (1) {
        printf("请输入一个递归数：");
        int n = 0;
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        int rs = fact(n);
        
        printf("%d的递归结果:%d\n", n, rs);
    }
    
    
    return 0;
}
