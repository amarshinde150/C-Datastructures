
//Under Development

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *START=NULL;

void display()
{


    struct node *ptr=NULL;
    ptr=START;
    printf("The values are :");
    while(ptr->next!=START)
    {
        printf(" %d",ptr->data);
        ptr=ptr->next;
    }
    printf(" %d",ptr->data);
    printf("\n");

}
void insertAtBeg(void)
{
    int n;
    printf("Enter the element to be inserted\n");
    scanf("%d",&n);
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=n;
    newNode->next=NULL;
    if(START==NULL)
    {
        START=newNode;
        newNode->next=START;
    }
    else
    {
        struct node *ptr=START;
        while(ptr->next!=START)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->next=START;
        START=newNode;
    }
}
int main()
{
    int i=0;
    while(i!=5)
    {
        printf("1.Insert At Begining\n2.Insert At End\n3.Delete at Begining\n4.Delete at End\n5.Exit\n");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            //insertAtEnd();
            break;
        case 3:
            //deleteAtBeg();
            break;
        case 4:
            // deleteAtEnd();
            break;
        case 5:
            printf("Exit\n");
            break;
        default :
            printf("Invalid Argument\n");
            break;
        }

        display();
    }
}
