#include <stdio.h>
#include <stdlib.h>
#include "interface.h"


void run_system()
{
    init_data() ;
    welcome_message();
    print_main_menu();
    take_action();
    return_to_main();
}


void welcome_message()
{
    printf("Welcome to student record system \n");
    printf("This system records the students' names ,ids and years \n\n\n");
}


static void add_student()
{
    system("cls");
    printf("---------------Adding a student record--------------\n");
    char *name ;
    int id ;
    int year;
    printf("enter the new student's name : ");
    get_string(name);
    printf("\nenter the new student's id : ");
    id = get_int();
    printf("\nenter the new student's year : ");
    year = get_int();
    add_student_data(name, id, year);
}



static void remove_student()
{
    system("cls");
    printf("---------------Removing a student record--------------\n");
    int id ;
    printf("\nEnter the student's id : ");
    id = get_int();
    remove_student_data(id);
}



static void edit_record()
{
    system("cls");
    printf("---------------Editing student record----------------\n");
    int id ;
    char *name ;
    int newId ;
    int year;
    printf("\nEnter the student's id : ");
    id = get_int();
    printf("enter the new student's name : ");
    get_string(name);
    printf("\nenter the new student's id : ");
    newId = get_int();
    printf("\nenter the new student's year : ");
    year = get_int();
    edit_student_data(id, name, newId, year );

}

static void view_record()
{
    system("cls");
    printf("---------------Viewing a student record----------------\n");
    int id ;
    printf("\nEnter the student's id : ");
    id = get_int();
    view_student_data(id);
}


static void view_all()
{
    system("cls");
    printf("---------------Viewing all students' records-----------------\n");
    view_all_data();


}

static void return_to_main()
{
    int userInput ;
    printf("Enter 1 to return to main or 0 to exit ");
    userInput = get_int() ;
    if (userInput == 1 )
    {
        system("cls");
        run_system();
    }
    else if (userInput == 0)
    {
        exit(0);
    }
    else
    {
        printf("Wrong entry \n");
        return_to_main();
    }
}

static void print_main_menu()
{
    printf("------------Main menu---------------\n");
    printf("choose an operation to do \n");
    printf("1 - add new student \n");
    printf("2 - remove a student \n");
    printf("3 - edit a record \n");
    printf("4 - view a record \n");
    printf("5 - view all records \n");

}

static void take_action()
{
    int userInput ;
    scanf("%d",&userInput);
    switch (userInput)
    {
    case 1 :
        add_student();
        break ;
    case 2 :
        remove_student();
        break ;
    case 3 :
        edit_record();
        break ;
    case 4 :
        view_record();
        break ;
    case 5 :
        view_all();
        break ;
    }

}

