//
//  main.c
//  c练习实例98
//
//  Created by ls on 2017/6/23.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//  题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    FILE *fp = NULL;
    char str[50];
    int i,len;
    printf("输入一个字符串：\n");
    fgets(str, (sizeof(str)/sizeof(str[0])), stdin);
    len = (int)strlen(str);
    for (i = 0; i<len; i++) {
        if (str[i] <= 'z'&&str[i] >='a') {
            
            str[i] -= 32;
        }
        
    }
    // 文件生成路径 在菜单 Xcode >> Preferences >> Build Location 里可以设置一下 /用户/ls/资源库/Developer/Xcode/DerivedData/工程名／Build/Products/Debug/
    //
    if ((fp = fopen("abcdefg.txt", "w"))== NULL) {
        
        printf("error: cannot open file!\n");
        exit(0);
        
    }
    fprintf(fp, "%s",str);
    
    fclose(fp);
    
  //  system("pause");
    
    
    
    
    
    
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
