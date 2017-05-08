//
//  ThreeNumberFromSmall.c
//  baseC
//
//  Created by kalian on 2017/5/5.
//  Copyright © 2017年 kalian. All rights reserved.
/*
        题目：输入三个整数x,y,z，请把这三个数由小到大输出。
        程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
        程序源代码：
 
 */

#include <stdio.h>

void ThreeNumberFromSmall(){

//    int x,y,z;
//    
//    printf("\n请输入三个数字：\n");
//    scanf("%d%d%d",&x,&y,&z);
//    
//    printf("\n %d %d %d \n",x,y,z);
//    if (x > y) {
//        
//        if (z >= x) {
//            
//            printf("\n %d %d %d \n",y,x,z);
//        }
//        if (z > y && z <= x) {
//            
//            printf("\n %d %d %d \n",y,z,x);;
//        }
//        
//        if (z <= y) {
//            
//            printf("\n %d %d %d \n",z,y,x);
//        }
//    }else if(x < y){
    
        // x < y
//        if (y <= z) {
//            
//            printf("\n %d %d %d \n",x,y,z);
//        }
//        
//        if (x >= z) {
//            
//            printf("\n %d %d %d \n",z,x,y);
//            // printf("%d%d%d",z,x,y);
//        }
//        
//        if (z< y && z > x) {
//            printf("\n %d %d %d \n",x,z,y);
//        }
//    
//    }else{
//    
//        if (x > z) {
//            
//           printf("\n %d %d %d \n",z,y,x);
//            
//        }
//        if (x == z) {
//            
//            printf("\n %d %d %d \n",x,y,z);
//        }
//        
//        if (x < z) {
//            
//            printf("\n %d %d %d \n",x,y,z);
//        }
//        
//    
//    
//    }

    int x,y,z,t;
    printf("\n请输入三个数字:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) { /*交换x,y的值*/
        t=x;x=y;y=t;
    }
    if(x>z) { /*交换x,z的值*/
        t=z;z=x;x=t;
    }
    if(y>z) { /*交换z,y的值*/
        t=y;y=z;z=t;
    }
    printf("从小到大排序: %d %d %d\n",x,y,z);
    
    

}

