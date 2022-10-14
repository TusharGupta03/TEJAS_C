#include<stdio.h>
//Structure for Linked List Node
struct node
{
    int nData;
    struct node* pLink;
};
 
 
//Function to display Linked List
void displayLL(struct node* p)
{
  printf("Display The Link List:\n");   
  if(p)
  {
    do
    {
      printf(" %d", p->nData);
      p=p->pLink;
    }
    while(p);
  }
  else
    printf("Linked List is empty.");
}
 
int main()
{
  struct node* pNode1= NULL;
  struct node* pNode2= NULL;
  struct node* pNode3= NULL;
     
  //create node and assign data value
  pNode1 = (struct node *)malloc(sizeof(struct node *));
  pNode1->nData =10;
     
  pNode2 = (struct node *)malloc(sizeof(struct node *));
  pNode2->nData =20;
     
  pNode3 = (struct node *)malloc(sizeof(struct node *));
  pNode3->nData =30;
     
  //connecting nodes
  pNode1->pLink = pNode2;
  pNode2->pLink = pNode3;    
  pNode3->pLink = NULL;
     
  //Display Linked List if first node is not null
  if(pNode1)    
    displayLL(pNode1);
}