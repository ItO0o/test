//
//  0511_02_if2.c
//  prg2017
//
//  Created by k17014kk on 2017/05/11.
//  Copyright © 2017年 k17014kk. All rights reserved.
//

#include <stdio.h>
int main(int argc,const char * argv [])
{
    int a,b;
    printf("a?");
    scanf("%d",&a);
    printf("b?");
    scanf("%d",&b);
    if (a==b)
    {
        printf("aとbは等しいです");
    }
    printf("計算終了");
    return 0;
    
    
}
