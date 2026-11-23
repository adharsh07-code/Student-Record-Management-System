#include "student.h"

void stud_mod()
{
    struct student *temp;
    int roll;
    char ch;

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    temp = head;

    while (temp != NULL)
    {
        if (temp->rollno == roll)
            break;

        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Record not found!\n");
        return;
    }

    printf("N : Modify name\n");
    printf("P : Modify percentage\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if (ch == 'n' || ch == 'N')
    {
        printf("Enter new name: ");
        scanf(" %49[^\n]", temp->name);
    }
    else if (ch == 'p' || ch == 'P')
    {
        printf("Enter new percentage: ");
        scanf("%f", &temp->percentage);
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("Record modified successfully!\n");
}

