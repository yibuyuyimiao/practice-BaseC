//
//  externalFunctionPractice.c
//  baseC
//
//  Created by kalian on 2017/5/4.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include "externalFunctionPractice.h"



void enter(char str[100]) // 定义外部函数 enter
{
    fgets(str, 100, stdin); // 向字符数组输入字符串
}
