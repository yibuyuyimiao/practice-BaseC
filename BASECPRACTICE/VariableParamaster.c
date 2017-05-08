//
//  VariableParamaster.c
//  baseC
//
//  Created by kalian on 2017/5/8.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>


double VariableParamaster(int num,...){

    va_list valist;
    double sum = 0.0;
    int i ;
    
    va_start(valist, num);
    
    for (i = 0; i < num; i++) {
        
        sum += va_arg(valist, int);
    }


    va_end(valist);
    
    return sum/num;

}
