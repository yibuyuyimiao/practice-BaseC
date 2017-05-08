//
//  Recursion.c
//  baseC
//
//  Created by kalian on 2017/5/8.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include <stdio.h>
int fibonaci (int i){
    
    if (i == 0) {
        
        return 0;
    }
    
    if (i == 1) {
        
        return 1;
    }

    return fibonaci(i - 1) + fibonaci(i - 2);
}
