//student.h
#include<fstream>
#include <iostream>
using namespace std;

class Student {
private:
    string stuID;
    string fName;
    string lName;
    int credits;
    Student* stu;
public:
    //utilities
    //fill an array of students
    Student();
    Student(string ,string ,string ,int ,Student* );
  void setID(string);
    void setName(string,string);
    void setcredits(int);
    void nextstudent(Student* stu);
    Student* getnexrstudent();
    void getInfo();
    string getFName();
     string getlname();
    string getstuid();
    int getcredits();
};
//class implamation
Student::Student(){
     stuID="";
     fName="";
     lName="";
     credits=0;
     stu=NULL;
}
string Student:: getFName(){
    return fName;
}
string Student:: getlname(){
    return fName;
}
Student::Student(string id,string fn,string ln,int cred,Student* st){
    stuID="";
    fName="";
    lName="";
    credits=0;
    stu=NULL;
}
string Student::getstuid(){
    return stuID;
}
void Student::setID(string id){
    stuID =id;
}
int Student::getcredits(){
    return credits;
}
void Student::setName(string i, string k){
    fName = i;
    lName = k;
}
void Student::setcredits(int c){
    credits =c;
}
void Student::nextstudent(Student* su){
    stu = su;
}
Student* Student::getnexrstudent(){
    return stu;
}
void Student::getInfo(){
    cout<<"Student ID: "<<stuID<<endl;
    cout<<"Student first name is: "<<fName<<endl;
    cout<<"Student last name is: "<<lName<<endl;
    cout<<"Student credit number is: "<<credits<<endl;
}

