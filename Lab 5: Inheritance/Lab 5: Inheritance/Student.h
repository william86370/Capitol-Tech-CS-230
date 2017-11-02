//Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Staff.h"
class Student : public Person
{

  private:
    double gpa;
    int credits;
    std::string start_date;
    std::string graduation_date;
};
#endif
