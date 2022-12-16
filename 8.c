#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *llink;
    struct node *rlink;
} * HEAD;
typedef struct node list;
void insert(int choice)
{
    char name[50], location[50];
    list *n;
    n = ((list *)malloc(sizeof(list)));
    if (n == NULL)
    {
        printf("Overflow!\n");
        return;
    }
    printf("Enter number: ");
    scanf("%d", &(n->num));
    if (choice == 1)
    {
        n->llink = HEAD;
        n->rlink = HEAD->rlink;
        (n->rlink)->llink = n;
        HEAD->rlink = n;
    }
    else if (choice == 2)
    {
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        list *temp = HEAD->rlink;
        while (temp->num != value && temp != HEAD)
            temp = temp->rlink;
        if (temp == HEAD)
        {
            printf("Value not found!\n");
            return;
        }
        n->rlink = temp->rlink;
        n->llink = temp;
        (temp->rlink)->llink = n;
        temp->rlink = n;
    }
    else if (choice == 3)
    {
        n->rlink = HEAD;
        n->llink = HEAD->llink;
        (HEAD->llink)->rlink = n;
        HEAD->llink = n;
    }
}

void delete (int choice)
{
    if (HEAD->rlink == HEAD)
    {
        printf("Underflow!\n");
        return;
    }
    list *temp;
    if (choice == 1)
    {
        temp = HEAD->rlink;
        HEAD->rlink = temp->rlink;
        (temp->rlink)->llink = HEAD;
    }
    else if (choice == 2)
    {
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        temp = HEAD->rlink;
        while (temp->num != value && temp != HEAD)
            temp = temp->rlink;
        if (temp == HEAD)
        {
            printf("Value not found!\n");
            return;
        }
        (temp->rlink)->llink = temp->llink;
        (temp->llink)->rlink = temp->rlink;
    }
    else if (choice == 3)
    {
        temp = HEAD->llink;
        HEAD->llink = temp->llink;
        (temp->llink)->rlink = HEAD;
    }
    free(temp);
}
void traverse()
{
    list *temp = HEAD;
    while (temp->rlink != HEAD)
    {
        temp = temp->rlink;
        printf("%d\t", temp->num);
    }
}
void main()
{
    HEAD = ((list *)malloc(sizeof(list)));
    HEAD->llink = HEAD;
    HEAD->rlink = HEAD;
    float choice;
    printf("1. Insert at front\n2. Insert at specified position\n3. Insert at end\n4. Delete at first\n5. Delete at specified position\n6. Delete at end\n7. Traverse\n8. Exit\n");
    do
    {
        printf("Enter choice: ");
        scanf("%f", &choice);
        if (choice / 3 <= 1)
            insert(choice);
        else if (choice / 3 <= 2)
            delete (choice - 3);
        else if (choice == 7)
            traverse();
        printf("\n");
    } while (choice != 8);
}
