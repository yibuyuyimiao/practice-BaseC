//
//  main.c
//  baseC
//
//  Created by kalian on 2017/5/4.
//  Copyright © 2017年 kalian. All rights reserved.体会学习知识  思考
//  http://blog.csdn.net/szchtx/article/details/10396149 str[]
//  http://blog.csdn.net/myhelperisme/article/details/49689033  mac下使用自带的vim编辑器编辑文件
#include <stdio.h>
#include <float.h>

// 错误处理
extern void handleError();

// 递归
extern int fibonaci (int i);

// 可变参数
extern double VariableParamaster(int num,...);

// 内存管理
extern void ManagerAlloc();


//输入三个整数x,y,z，请把这三个数由小到大输出
extern void ThreeNumberFromSmall();


// 这个数是多少
extern  void   WhatIsTheNumber();


// 1234 组成的无重复三位数
extern void ThreeNumberCount();

// 奖金利润
void EnterpriseBonusProfit();


// 查找100内的质数
void demo2(void);


void demo();

// 变量声明
extern int a, b;
extern int c;
extern float f;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'


void demo1(void);
static int count = 10;




int  practiceExtent;
extern void practiceExtent_extern();

static void delete_string(char str[],char ch);
int main(int argc, const char * argv[]) {
    
    //    extern void enter (char str[]);
    //    extern void print (char str[]);
    //    char c, str[100];
    //    enter(str);
    //    scanf("%c",&c);
    //    delete_string(str,c);
    //    print(str);
    //
    //
    //
    //    demo2();
    //
    //    demo();
    //
    //    while (count--) {
    //
    //        demo1();
    //    }
    
    //    practiceExtent = 5 ;
    //    practiceExtent_extern();
    //
    
    //    ThreeNumberCount();
    
    //    WhatIsTheNumber();
    
    //    ThreeNumberFromSmall();
    
    //    ManagerAlloc();
    //
    //    printf("Average of 2, 3, 4, 5 = %f\n", VariableParamaster(4, 2,3,4,5));
    //    printf("Average of 5, 10, 15 = %f\n", VariableParamaster(3, 5,10,15));
    
    //    int i ;
    //
    //    for (i = 0; i < 10; i++) {
    //
    //        printf("%d\t\n",fibonaci(i));
    //    }
    
    handleError();
    
    
    return 0;
}

static void delete_string(char str[],char ch)//内部函数
{
    int i,j;
    for(i=j=0;str[i]!='\0';i++)
        if(str[i]!=ch)
            str[j++]=str[i];
    str[j]='\0';
}









#pragma mark -- static

void demo1(void){
    
    
    static int thingy = 5;
    thingy++;
    printf(" thingy 为%d , count 为 %d\n",thingy,count);
    
    
}

#pragma mark -- 常量的定义
void demo(){
    
    const int  LENGTHOS = 10;
    const int  WIDTHOS  = 5;
    const char NEWLINEOS = '\n';
    int areaos;
    
    areaos = LENGTHOS * WIDTHOS;
    printf("value of area : %d", areaos);
    printf("%c", NEWLINEOS);
    
    // insert code here...
    printf("Hello, World!\n");
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );
    
    /* 变量定义 */
    int a, b;
    int c;
    float f;
    
    /* 初始化 */
    a = 10;
    b = 20;
    
    c = a + b;
    printf("value of c : %d \n", c);
    
    f = 70.0/3.0;
    printf("value of f : %f \n", f);
    
    printf("Hello\tWorld\n\n");
    
    int area;
    
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    
}

#pragma mark -- 求质数
void demo2(){
    
    /* 局部变量定义 */
    int i, j;
    //
    for(i=2; i<100; i++) {
        // 找除数的范围  i / j 求的是 i ／ j得到的最大除数
        for(j=2; j <= (i/j); j++){
            printf("%d---%d是质数\n", i/j,j);
            if(!(i%j)) break;
        }
        // 出for循环 ；如果找到，则不是质数
        if(j > (i/j)) printf("%d %d是质数\n", i,j);
        
    }
    
    
}
