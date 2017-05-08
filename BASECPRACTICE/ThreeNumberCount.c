//
//  ThreeNumberCount.c
//  baseC
//
//  Created by kalian on 2017/5/5.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include <stdio.h>

extern void ThreeNumberCount(){

//    int tempArray[64];
//    int h = 0;
    
    for (int i = 1; i< 5; i++) {
        
        for (int j = 1; j<5; j++) {
            
            for (int k = 1; k < 5 ; k++) {
                
                if (i!=k&&i!=j&&j!=k) {
                    printf("%d,%d,%d\n",i,j,k);
                }
                
//                int tempInt = i*100 + j*10 +k;
//                tempArray[h] = tempInt;
//                h++;
                
            }
        }
    }
    
//    for (int i = 0; i < 64; i++) {
//        for (int j = i; j < 64; j++) {
//            
//            
//        }
//    }
    
    

}
