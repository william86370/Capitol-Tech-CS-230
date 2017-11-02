//Faculty.h
#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
class Faculty : public Person
{
  public:
    Faculty() : Person() {};

  private:
    std::string academic_dpt;
    std::string office_number;
};
#endif
