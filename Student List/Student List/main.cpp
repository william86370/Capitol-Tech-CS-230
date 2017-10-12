//
//  main.cpp
//  Student List
//
//  Created by william wright on 9/28/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#include <iostream>

#include "StudentList.hpp"
#include "CourseList.hpp"

int main(int argc, const char * argv[]) {
    StudentList *Stulist = new StudentList;
    Stulist->createStudent("11345", "william", "wright", 4);
    Stulist->createStudent("11347", "gladdy", "wright", 4);
    Stulist->displayStudent();
    
    
    
    
    return 0;
}
