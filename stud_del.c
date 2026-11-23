#include "student.h"

void stud_del()
{
    struct student *temp, *prev;
    int roll, found = 0;
    char ch, name[50];

    printf("R : Delete based on roll number\n");
    printf("N : Delete based on name\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if (ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if (ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %49[^\n]", name);

        temp = head;

        while (temp != NULL)
        {
            if (strcmp(temp->name, name) == 0)
            {
                printf("Roll: %d  Name: %s\n",
                       temp->rollno, temp->name);
                found++;
            }

            temp = temp->next;
        }

        if (found == 0)
        {
            printf("Record not found!\n");
            return;
        }

        printf("Enter roll number to delete: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    temp = head;
    prev = NULL;

    while (temp != NULL)
    {
        if (temp->rollno == roll)
        {
            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);

            printf("Record deleted successfully!\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Record not found!\n");
}

