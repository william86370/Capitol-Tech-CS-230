//List.h
//Lab 4 part 1
#ifndef LIST_H
#define LIST_H
using namespace std;
 
class List{
   private:
      typedef struct node{
          string fName, lName;
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
 
#endif // List_H
