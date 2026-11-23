#include "student.h"

void stud_sort()
{
    struct student *temp, *p;
    int choice;
    int r;
    float per;
    char name[50];

    printf("1. Sort by name\n");
    printf("2. Sort by percentage\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    for (temp = head; temp != NULL; temp = temp->next)
    {
        for (p = temp->next; p != NULL; p = p->next)
        {
            if ((choice == 1 && strcmp(temp->name, p->name) > 0) ||
                (choice == 2 && temp->percentage < p->percentage))
            {
                r = temp->rollno;
                temp->rollno = p->rollno;
                p->rollno = r;

                strcpy(name, temp->name);
                strcpy(temp->name, p->name);
                strcpy(p->name, name);

                per = temp->percentage;
                temp->percentage = p->percentage;
                p->percentage = per;
            }
        }
    }

    printf("Sorting completed!\n");
}

void stud_reverse()
{
    struct student *prev, *current, *nextnode;

    prev = NULL;
    current = head;

    while (current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }

    head = prev;

    printf("List reversed!\n");
}

void stud_delete_all()
{
    struct student *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    printf("All records deleted!\n");
}

