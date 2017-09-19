//
//  main.cpp
//  class07
//
//  Created by william wright on 9/19/17.
//  Copyright © 2017 william wright. All rights reserved.
//

#include <iostream>
#include "student.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    student stu1,stu2;
    std::cout << "stu 1 is "<<&stu1<<"stu 2 is here"<<&stu2;
    student*ptrhead =&stu1;
    student*ptrnav=ptrhead;
    student*ptrend;
    
    
    //link stu1 to stu2
    stu1.stu = &stu2;
    stu2.stu = nullptr;
    
    
    
    
    
    
    //use the navigator to fill the data
    ptrnav->fname = "will";
     ptrnav->lname = "wright";
     ptrnav->stuID = "114389";
    ptrnav->credits = 3;
    ptrnav->stu=&stu2;
    
      std::cout << "stu 1 is "<<ptrnav->fname<<"stu 1 is here"<<ptrnav->lname;
    ptrnav++;
    ptrnav->fname = "jogn";
    ptrnav->lname = "wrong";
    ptrnav->stuID = "114389";
    ptrnav->credits = 3;
    
    std::cout << "stu 1 is "<<ptrnav->fname<<"stu 1 is here"<<ptrnav->lname;
    
    
 ptrnav=ptrhead;
    
    while(ptrnav!=NULL){
        std::cout << "stu 1 is "<<ptrnav->fname<<"stu 1 is here"<<ptrnav->lname;
        ptrnav = ptrnav->stu;
    }
       return 0;
}
