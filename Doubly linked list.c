#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*start=NULL;
struct node*cur=NULL;

void create_DLL()
{

    struct node*nn;
    int ch;
    do
    {
        nn=(struct node*)malloc(1* sizeof(struct node)) ;
        nn->next=NULL;
        nn->prev=NULL;
        printf("Enter the data:");
        scanf("%d",&nn->data);

        if(start==NULL)
        {
            start=nn;
            cur=nn;
        }
        else
        {
        cur->next=nn;
        nn->prev=cur;
        cur=nn;
        }

    } while(ch==1);
}
void display()
{

    struct node*temp=start;

    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Doubly linked list:");

   while(temp!=NULL)
   {
       printf("%d->",temp->data);
       temp=temp->next;
   }
   printf("NULL\n");
}

void insertion_DLL_beg()
{
    struct node*nn;
    nn=(struct node*)malloc(1*sizeof(struct node));
    nn->next=NULL;
    nn->prev=NULL;
    printf("Enter the data:");
    scanf("%d",&nn->data);

    if(start==NULL)
    {
        start=nn;
        cur=nn;
    }
    else
    {
        nn->next=start;
        start->prev=nn;
        start=nn;
    }
}
void insertion_DLL_end()
{
    struct node*nn;
    nn=(struct node*)malloc(1*sizeof(struct node));
    nn->next=NULL;
    nn->prev=NULL;
    printf("Enter the data:");
    scanf("%d",&nn->data);

    if(start==NULL)
    {
        start=nn;
        cur=nn;
    }
    else
    {
        cur->next=nn;
        nn->prev=cur;
        cur=nn;
    }
}
void insertion_DLL_position()
{
    struct node*nn;
    struct node*temp;
    struct node*temp1;
    nn=(struct node*)malloc(1*sizeof(struct node));
    nn->next=NULL;
    nn->prev=NULL;
    printf("Enter the data:");
    scanf("%d",&nn->data);

    if(start==NULL)
    {
        start=nn;
        cur=nn;
    }
    else
    {
        temp1=temp->next;
        temp->next=nn;
        nn->prev=temp;
        nn->next=temp1;
        temp1->prev=nn;
    }
}
void deletion_DLL_beg()
{
    struct node*temp=start;
    if(start=NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        start=start->next;
        start->prev=NULL;
        free(temp);
    }
}
void deletion_DLL_end()
{
    struct node*temp=start;
    struct node*temp1;
    struct node*temp2;
    if(start=NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        cur=cur->prev;
        cur->next=NULL;
        free(temp);
    }
}
void deletion_DLL_position()
{
    struct node*temp;
    struct node*temp1;
    struct node*temp2;
    if(start=NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        temp1 = temp->prev;
        temp2 = temp->next;
        temp1->next = temp2;
        temp2->prev = temp1;
        free(temp);
    }
}
void menu()
{
    int choice;

    do
    {
        printf("\nDoubly Linked List\n");
        printf("1.Create DLL:\n");
        printf("2.Display DLL:\n");
        printf("3.Insertion at Begining:\n");
        printf("4.Insertion at End:\n");
        printf("5.Insertion at Position:\n");
        printf("6.Deletion from Begining:\n");
        printf("7.Deletion from End:\n");
        printf("8.Deletion from position:\n");
        printf("9.Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            create_DLL();
            break;

        case 2:
            display();
            break;

        case 3:
            insertion_DLL_beg();
            break;

        case 4:
            insertion_DLL_end();
            break;

        case 5:
            insertion_DLL_position();
            break;

        case 6:
            deletion_DLL_beg();
            break;

        case 7:
            deletion_DLL_end();
            break;

        case 8:
            insertion_DLL_position();
            break;

        case 9:
            printf("Progam terminated\n");
            break;

            default:
            printf("Invalid choice\n");

        }
    }while(choice!=7);
}
int  main()
{
    menu();
    return 0;
}

