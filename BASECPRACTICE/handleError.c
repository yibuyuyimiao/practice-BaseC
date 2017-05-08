//
//  handleError.c
//  baseC
//
//  Created by kalian on 2017/5/8.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

void handleError(){

    FILE *pf;
    
    int errnum;
    
    pf = fopen("unexist.txt", "rb");

    if (pf == NULL) {
        
        errnum = errno;
        
        fprintf(stderr, "错误号： %d\n",errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误 ： %s\n",strerror(errnum));
    }
    else{
    
        fclose(pf);
    
    }
    
 


}
