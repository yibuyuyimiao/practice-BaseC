//
//  main.c
//  c语言经典100例
//
//  Created by ls on 2017/6/23.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
 
    int i,j,k,TLen,Plen,count = 0;
    
    char T[50],P[10];
    
    printf("请输入两个字符串，以回车隔开，母串在前，子串在后：\n");
    fgets(T,(sizeof(T)/sizeof(T[0])), stdin);
    fgets(P, (sizeof(P)/sizeof(P[0])), stdin);
    TLen = (int)strlen(T);
    Plen = (int)strlen(P);
    
    for (i = 0; i<TLen ; i++) {
        
//        for (j = 0,k = i; j < Plen&&P[j]==T[k]; j++,k++) ;
//        if (j == Plen)
//            count++;
//        
//        printf("%d\n",count);
        
        for (j = 0; j < Plen; j++) {
            if (P[j] == T[i]) {
                
                count++;
            }
            
            
        }
        
    }
    /*  T  abcde  P a
       
        i  0 1 2 3     
     
        i  0  j = 0 k = 0
     
        i  1  j = 0 k = 1
     */
    
    printf("%d\n",count);
    
   // system("pasuse");
    
    
    
    return 0;
}
