//List.h
//Lab 4 part 1

using namespace std;
#include <cstdlib>
#include <iostream>
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



List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddPerson(string addFName, string addLName){
    nodePtr n = new node;
    n->next = NULL;
    n->fName = addFName;
    n->lName = addLName;
    
    if (head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}

void List::DeletePerson(string delFName, string delLName){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->fName != delFName && curr->lName != delLName){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << delFName << " " << delLName <<" was not already in the list of people" <<endl;
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The Name " << delFName << " " << delLName<< " was deleted"<< endl;
        
    }
    cout << "\n";
}
void List::EditPerson(string currFName, string currLName, string editFName, string editLName){
    nodePtr editPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->fName != currFName && curr->lName != currLName){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << currFName << " " << currLName <<" was not already in the list of people" <<endl;
        delete editPtr;
    }
    else{
        editPtr = curr;
        curr = curr->next;
        cout << "The Name: " << currFName << " " << currLName << "\n"
        << "Was changed to: "<< editFName << " " << editLName << endl;
        editPtr->fName = editFName;
        editPtr->lName = editLName;
    }
    cout << "\n";
}

void List::PrintList(){
    curr = head;
    cout << "The current list of people include:\n";
    while (curr != NULL)
    {
        cout << curr->fName << " " << curr->lName << endl;
        curr = curr->next;
    }
    cout << "\n";
}
