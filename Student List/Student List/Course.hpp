using namespace std;
class Course {
private:
    std::string crsID;
    std::string crsName;
    int crsCred;
    Course* cor;
public:
    //utilities
    //fill an array of Students
    Course();
    Course(string,string,int );
    void setID(string);
    void setname(string,string);
    void setcredits(int);
    void nexrtCourse(Course* stu);
    Course* getnextCourse();
    void getinfo();
    string getname();
    
    string getcrsid();
};
//class implamation
Course::Course(){
    stuID="";
    fname="";
    lname="";
    credits=0;
    stu=NULL;
}
string Course:: getfname(){
    return fname;
}
string Course:: getlname(){
    return fname;
}
Course::Course(string id,string name,int cred,Course* st){
    crsID = id;
    crsName = name;
    crsCred = cred;
    cor= st;
}
string Course::getstuid(){
    return stuID;
}
void Course::setID(string id){
    stuID =id;
}
void Course::setname(string name2){
    name = name2;
}
void Course::setcredits(int c){
    credits =c;
}
void Course::nextcourse(Student* su){
    stu = su;
}
Course* Course::getnextcourse(){
    return stu;
}
void Course::getinfo(){
    cout<<"Student ID: "<<crsID<<endl;
    cout<<"Student first name is: "<<name<<endl;
    
    cout<<"Student credit number is: "<<crsCred<<endl;
}


