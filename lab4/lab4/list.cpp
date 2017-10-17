//
//  list.cpp
//  lab4
//
//  Created by william wright on 10/17/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//


//List.cpp
#include <cstdlib>
#include <iostream>


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
    
    
}

void List::PrintList(){
    curr = head;
    cout << "The current list of people include:\n";
    while (curr != NULL)
    {
        cout << curr->fName << " " << curr->lName << endl;
        curr = curr->next;
    }
}
