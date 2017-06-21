//
//  main.m
//  c指针
//
//  Created by ls on 2017/6/20.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>

static const int MAX = 3;
//指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明

void demo1();
void demo();
void demo2();
void demo3();
void demo4();
void demo5();


void getSeconds(unsigned long *par);

double getAverage(int *arr,int size);

int * getRandom(){
    
    static int r[10];
    int i;
    
    
    srand((unsigned)time(NULL));
    
    for ( i = 0; i < 10; ++i) {
        
        r[i] = rand();
        printf("%d\n",r[i]);
        
    }

    return r;


}


int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
        
    //    demo();
        
     //   demo1();
        
      //  demo2();
      //  demo3();
     //   demo4();
        
        demo5();
        
    }
    return 0;
}

#pragma mark -- 从函数返回指针

void demo5(){

    int *p;
    int i;
    
    p = getRandom();
    
    for (i = 0; i < 10; i++) {
        
        printf("*(p+[%d]): %d\n",i,*(p+i));
    }


}



#pragma mark -- 传递指针给函数

void demo4(){

//    unsigned long sec;
//    
//    getSeconds(&sec);
//    printf("Number of seconds:%ld\n",sec);
    
 
    int balance[5] = {1000,2,3,17,50};
    double avg;
    
    
    // 传递一个指向数组的指针做参数
    avg = getAverage(balance, 5);
    
    printf("Average value is : %f\n",avg);
    
}


double getAverage(int *arr,int size){

    int i,sum = 0;
    
    double avg;
    
    for (i = 0; i < size; ++i) {
        
        sum += arr[i];
    }

    avg = (double)sum / size;
    
    return avg;

}



void getSeconds(unsigned long *par){


    *par = time(NULL);
    
    return;
    
    
}


#pragma mark -- 指向指针的指针
void demo3(){

  //  int **var;

    int var;
    int *ptr;
    int **pptr;
    
    var = 3000;
    
    ptr = &var;
    
    pptr = &ptr;
    
    printf("Value of var = %d\n",var);
    printf("Value available at *ptr = %d\n",*ptr);
    printf("Value available at **pptr = %d\n",**pptr);
    
}


#pragma mark -- c指针数组
void demo2(){

//    int var[] = {10,100,200};
//    
//    int i;
//    
//    for (i = 0; i< MAX; i++) {
//        
//        printf("Value of var[%d] = %d\n",i,var[i]);
//    }
    
    
//    int var[] = {10,100,200};
//    
//    int i,*ptr[MAX];
//    
//    for (i = 0; i< MAX; i++) {
//        
//        printf("Value of var[%d] = %d\n",i,var[i]);
//    }

    
    char *names[] = {"Zara Ali","Hina Ali","Nuha Ali","Sara Ali"};
    
    int i = 0 ;
    for (i = 0; i < 4; i++) {
        
        printf("Value of names[%d] = %s\n",i,names[i]);
    }
    
    


}



#pragma c指针
void demo(){

            int var1;
            char var2[10];
    
            printf("var1 变量的地址 ： %x\n",&var1);
             printf("var2 变量的地址 ： %x\n",&var2);
    
            int var = 20;
            int *ip;
    
            ip = &var;
            printf("Address stored in ip variable : %x\n",ip);
            printf("Address stored in var variable : %x\n",&var);
            printf("Value of *ip variable : %d\n",*ip);
    
            int *ptr = NULL;
            ptr++;
            printf("ptr 的值时%x\n",ptr);
            if (ptr) {
    
            }
            if (!ptr) {
                
            }





}



#pragma mark  c执政的算数运算
void demo1(){

    //        int var[] = {10,100,200};
    //        int i,*ptr;
    //
    //        ptr = var;
    //        for (i = 0; i < MAX; i++) {
    //
    //            printf("存储地址：var[%d] = %x\n",i,ptr);
    //            printf("存储值：var[%d] = %d\n",i,*ptr);
    //
    //            ptr++;
    //
    //
    //
    //
    //        }
    
    
    //        int var[] = {10,100,200};
    //        int i,*ptr;
    //
    //        ptr = &var[MAX-1];
    //        for (i = MAX; i >0 ; i--) {
    //
    //            printf("存储地址：var[%d] = %x\n",i-1,ptr);
    //            printf("存储值：var[%d] = %d\n",i-1,*ptr);
    //
    //            ptr--;
    //
    //
    //
    //
    //        }
    
    int var[] = {10,100,200};
    int i,*ptr;
    
    ptr = var;
    i = 0;
    
    while (ptr <= &var[MAX - 1]) {
        
        printf("存储地址：var[%d] = %x\n",i,ptr);
        printf("存储值：var[%d] = %d\n",i,*ptr);
        
        ptr++;
        i++;
    }


}
