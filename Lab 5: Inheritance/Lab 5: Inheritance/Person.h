//person.h
//superclass
#ifndef PERSON_H
#define PERSON_H

#include <string>
class Person
{
  public:
    Person();
    Person(std::string);
    void setName(std::string, std::string);
    void setID(std::string);
    void setEmail(std::string);
    void setTitle(std::string);
    void setStartDate(std::string);
    void setTerminationDate(std::string);
    void setDateOfBorth(std::string);
    void printPersonnelInfo();
    void printPersonnelInfo(std::string newID);
    void printPersonnelInfo(std::string newFName, std::string newLName, std::string newID);

  private:
    std::string fname;
    std::string lname;
    std::string id;
    std::string email;
    std::string dob;
    std::string date_hired;
    std::string termination_date;
    std::string title;
};
#endif
