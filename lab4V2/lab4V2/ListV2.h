//List.h
//Lab 4 part 2
#ifndef LISTV2_H
#define LISTV2_H
using namespace std;
 
class List{
   private:
      typedef struct node{
          std::string fName, lName;
          node* next;
      }* nodePtr;
      
      nodePtr head;
      nodePtr curr;
      nodePtr temp;
 
   public:
      List();
      void AddPerson(string addFName, string addLName);
      void DeletePerson(string delFName, string delLName);
      void EditPerson(string currFName, string currLName, string editFName, string editLName);
      void PrintList();
};
 
#endif // ListV2_H
