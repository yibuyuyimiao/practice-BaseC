//
//  main.m
//  c机构体
//
//  Created by ls on 2017/6/21.
//  Copyright © 2017年 yibuyimiao. All rights reserved.
//

#import <Foundation/Foundation.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
} book;

// 函数声明
void printBook(struct Books book);

void printBook1(struct Books *book);


int main(int argc, const char * argv[]) {
    @autoreleasepool {
       
        struct Books Book1;
        struct Books Book2;
        
        
        strcpy(Book1.title, "C propramming Tutorial");
        strcpy(Book1.author, "Nuha Ali");
        strcpy(Book1.subject, "C Programming Tutorial");
        Book1.book_id = 6495407;
        
        
        strcpy(Book2.title, "Telecom Billing");
        strcpy(Book2.author, "zara Ali");
        strcpy(Book2.subject, "Telecom Billing Tutorial");
        Book2.book_id = 6495700;
        
//        printf("Book 1 title :%s\n",Book1.title);
//        printf("Book 1 author : %s\n",Book1.author);
//        printf("Book 1 subject : %s\n",Book1.subject);
//        printf("Book 1 book_id : %d\n",Book1.book_id);
//        
//        printf("\n");
//        
//        printf("Book 2 title :%s\n",Book2.title);
//        printf("Book 2 author : %s\n",Book2.author);
//        printf("Book 2 subject : %s\n",Book2.subject);
//        printf("Book 2 book_id : %d\n",Book2.book_id);

//        printBook(Book1);
//        
//        printBook(Book2);
        
//        struct Books *struct_pointer;
//        
//        struct_pointer = &Book1;
//        
//        struct_pointer->title;
//
        
        printBook1(&Book1);
        printBook1(&Book2);
        
    }
    return 0;
}


// 结构体作为参数
void printBook(struct Books book){

    

    printf("Book  title :%s\n",book.title);
    printf("Book author : %s\n",book.author);
    printf("Book subject : %s\n",book.subject);
    printf("Book book_id : %d\n",book.book_id);

    printf("\n");


}
// 结构题指针

void printBook1(struct Books *book){


    printf("Book  title :%s\n",book->title);
    printf("Book author : %s\n",book->author);
    printf("Book subject : %s\n",book->subject);
    printf("Book book_id : %d\n",book->book_id);
    
    printf("\n");





}



