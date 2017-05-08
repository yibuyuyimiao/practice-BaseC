//
//  ForcedTypeConversion.c
//  BASECPRACTICE
//
//  Created by kalian on 2017/5/8.
//  Copyright © 2017年 kalian. All rights reserved.
/*
    其实用啥看啥就行了，多看一些面试题就OK了，剩下的有时间再学
    学这些需要功夫啊 还耽误你的专业时间
    学C就得懂LINUX系统，还有一摞书
*/

#include <stdio.h>


void ForcedTypeConversion(){

    int sum = 17, count = 5;
    
    double mean;
    
    mean = (double) sum/ count;
    
    printf("Value of mean : %f\n",mean);


    int i = 17;
    
    char c = 'c';
    
   // int sum1;
    
    float sum1;
    
    sum1 = i+c ;
    
   // printf("Value of sum : %d\n",sum1);
   // printf("Value of sum : %f\n",sum1);
    
    
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    
}
