//
//  main.c
//  josaph project
//
//  Created by william wright on 11/5/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a;
    printf("Please input a time value in seconds");
    scanf("%d", &a);
    printf("You entered: %d\n", a);
    if(a>86400){
        //dsys
        int b = a%86400;
        a = a/86400;
         printf("total amount of days %d ", a);
        printf("and %d extra secconds",b);
    }else if (a>3600){
        //hours
        int b = a%3600;
        a = a/3600;
        printf("total amount of hours %d ", a);
        printf("and %d extra secconds",b);
    }else if(a>60){
        //minute
        int b = a%60;
        a = a/60;
        printf("total amount of minites %d ", a);
        printf("and %d extra secconds",b);
    }
    return 0;
}
