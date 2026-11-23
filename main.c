#include "student.h"

struct student *head = NULL;

int main()
{
    char ch;

    stud_load();

    while (1)
    {
        printf("\n***** STUDENT RECORD MENU *****\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all records\n");
        printf("r/R : Reverse the list\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &ch);

        switch (ch)
        {
            case 'a':
            case 'A':
                stud_add();
                break;

            case 'd':
            case 'D':
                stud_del();
                break;

            case 's':
            case 'S':
                stud_show();
                break;

            case 'm':
            case 'M':
                stud_mod();
                break;

            case 'v':
            case 'V':
                stud_save();
                break;

            case 't':
            case 'T':
                stud_sort();
                break;

            case 'r':
            case 'R':
                stud_reverse();
                break;

            case 'l':
            case 'L':
                stud_delete_all();
                break;

            case 'e':
            case 'E':
                printf("Save before exiting? (y/n): ");
                scanf(" %c", &ch);

                if (ch == 'y' || ch == 'Y')
                    stud_save();

                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

