#include <stdlib.h>
#include <stdio.h>
#include "list.h"

static void CopyToNode(Item item, Node * node);

void InitializeList(List * plist){
    * plist = NULL;
}

bool ListIsEmpty(const List * plist){
    if(* plist == NULL){
        return true;
    } else {
        return false;
    }
}


bool ListIsFull(const List * plist){
    Node * temp;
    bool isFull;
    temp = malloc(sizeof(Node));
    if(temp == NULL){
        isFull = true;
    } else {
        isFull = false;
    }
    free(temp);
    return isFull;
}

unsigned int ListItemCount(const List * plist){
    unsigned int i = 0;
    List pt = *plist;
    while(pt != NULL){
        i++;
        pt = pt->next;
    }
    return i;
}

bool addItem(Item item, List * plist){
    Node * pt;
    pt = (Node *) malloc(sizeof(Node));
    if(pt == NULL){
        return false;
    }
    pt -> next = NULL;
    CopyToNode(item, pt);
    if(*plist == NULL){
        *plist = pt;
    } else {
        while((*plist)->next != NULL){
            *plist = (*plist)->next;
        }
        (*plist)->next = pt;
    }
    return true;
}

void Traverse(const List * plist, void (* pfun)(Item item)){
    Node * temp = *plist;
    while(temp != NULL){
        (* pfun)(temp -> item);
        temp = temp->next;
    }
}

void EmptyTheList(List * plist){
    Node * psave;
    while(*plist != NULL){
        psave = (*plist)->next;
        free(*plist);
        *plist = psave;
    }
}


void CopyToNode(Item item, Node * node){
    node->item = item;
}