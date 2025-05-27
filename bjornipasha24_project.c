#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
///data
int ID; //->4 bytes
double avg; //->8 bytes
char name[20]; //->20 bytes
///link
struct Node *next; //->8 bytes
///->self referential structure
};
int main()
{
struct Node *head=NULL, *newNode=NULL, *newNode2=NULL;
///~~~~~NODE 1
///allocate memory for one node: struct Node
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("Address of Node 1: %d\n", newNode);
head=newNode;
///assign data in each member of the node
newNode->ID=5;
newNode->avg=5.3;
strcpy(newNode->name, "Name1");
newNode->next=NULL;

printf("\nData first: %d %lf %s %d", newNode->ID, newNode->avg, newNode->name, newNode->next);

///~~~~~NODE 2
///allocate memory for one node: struct Node
newNode2=(struct Node*)malloc(sizeof(struct Node));
printf("\n\nAddress of Node 2: %d\n", newNode2);
newNode2->ID=4;
newNode2->avg=2.3;
strcpy(newNode2->name, "Name2");
newNode2->next=NULL;
///connecting nodes
newNode->next=newNode2;
printf("\nData after connecting: %d %lf %s %d", newNode->ID, newNode->avg, newNode->name,
newNode->next);
printf("\nSecond node: %d %lf %s %d", newNode2->ID, newNode2->avg, newNode2->name,
newNode2->next);

return 0;
}