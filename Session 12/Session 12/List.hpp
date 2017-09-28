//
//  List.hpp
//  Session 12
//
//  Created by william wright on 9/28/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#include <stdio.h>

typedef float ItemType; //Type for component
struct NodeType;  //forward declaration

class List
{
public:
    List(); //default constructor
    void Insert(ItemType item);
    bool IsEmpty() const;
    bool HasNext() const;
    void ResetList();
    ItemType GetNextItem();
    void Delete(ItemType item);
private:
    
    NodeType* dataPtr;//pointer for first node
    NodeType* currentPos;//pointer to current position
    NodeType* lastPtr;//pointer to tail
    int length;
    
    
};

typedef NodeType* NodePtr;
struct NodeType
{
    ItemType component;  //payload
    NodePtr link; //pointer for next
};

List::List()
{
    length = 0;
    dataPtr = NULL;
    currentPos = NULL;
    lastPtr = NULL;
}
void List::Insert(ItemType item)
{
    NodePtr newNodePtr = new NodeType;
    newNodePtr -> component = item;
    newNodePtr -> link = NULL;
    if (lastPtr == NULL)
        dataPtr = newNodePtr;
    else
        lastPtr -> link = newNodePtr;
    lastPtr = newNodePtr;
    length++;
}
void List::ResetList()
{
    currentPos = dataPtr;
}
ItemType List::GetNextItem()
{
    ItemType item;
    item = currentPos->component;
    currentPos = currentPos -> link;
    return item;
}
bool List::HasNext() const
{
    return (currentPos != NULL);
}

bool List::IsEmpty() const
{
    return (dataPtr == NULL);
}
void List::Delete(ItemType item)
{
    NodePtr prevPtr = NULL;
    NodePtr currPtr = dataPtr;
    while (currPtr != NULL && currPtr->component != item)
    {
        prevPtr = currPtr;
        currPtr = currPtr -> link;
    }
    if (currPtr != NULL)
    {
        //item is found
        if (currPtr == dataPtr)
            dataPtr = currPtr -> link; //first node
        else
            prevPtr -> link = currPtr -> link;
        
        
        if (currPtr == lastPtr)
            lastPtr = prevPtr;  //last node
        
        delete currPtr;
        length --;
    }
}
