//
//  ManagerAlloc.c
//  baseC
//
//  Created by kalian on 2017/5/8.
//  Copyright © 2017年 kalian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ManagerAlloc(){

    char name[100];
    char *description;
    
    strcpy(name,"Zara Ali");
    
    
    description = malloc(200*sizeof(char));
    
    if (description == NULL) {
        
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }else{
    
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    

    printf("Name = %s\n", name );
    printf("Description: %s\n", description );


}
