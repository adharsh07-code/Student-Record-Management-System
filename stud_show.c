#include "student.h"

void stud_show()
{
    struct student *temp;

    if (head == NULL)
    {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n\n                          STUDENT RECORDS\n\n");

    printf("          -----------------------------------------------\n");
    printf("          ROLL NO    | NAME                 | PERCENTAGE\n");
    printf("          -----------------------------------------------\n");

    temp = head;

    while (temp != NULL)
    {
        printf("          %-10d | %-20.20s | %10.2f%%\n",
               temp->rollno,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("          -----------------------------------------------\n");
}



