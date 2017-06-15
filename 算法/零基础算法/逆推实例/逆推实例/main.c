//
//  main.c
//  逆推实例
//
//  Created by fly on 17/3/22.
//  Copyright © 2017年 fly. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define lilv 0.0171f
#define totalMonth 48

void getMoney()
{

    const float lastMonthMoney = 1000.0f;
    float money[48] = {0.0f};
    money[47] = lastMonthMoney;
 
    for (int i=totalMonth-2; i>=0; i--) {
        
        money[i] = (money[i+1]+1000.0f)/(1+lilv/12);
        printf("%d month money:%f\n", i, money[i]);
    }
    
}

int main(int argc, const char * argv[]) {

    getMoney();
    return 0;
}
