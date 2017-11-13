#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>
#define SIZE 45
/*类型定义*/
struct film {
	char title[45];
	int rating;
};

typedef struct film Item;

struct node {
	Item item;
	struct node * next;
};

typedef struct node Node;

typedef Node * List;

/*
函数定义
*/
/*初始化*/
void InitializeList(List * plist);

/*判断是否为空*/
bool ListIsEmpty(const List * plist);

/*列表是否已满*/
bool ListIsFull(const List * plist);

/*返回列表中的项目个数*/
unsigned int ListItemCount(const List * plist);

/*尾部添加Item*/
bool addItem(Item item, List * plist);

/*遍历*/
void Traverse(const List * plist, void (* pfun)(Item item));

/*清空列表*/
void EmptyTheList(List * plist);


#endif












































