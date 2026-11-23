#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};

extern struct student *head;


void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_save();
void stud_load();
void stud_sort();
void stud_reverse();
void stud_delete_all();

