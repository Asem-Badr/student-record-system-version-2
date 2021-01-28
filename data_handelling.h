#ifndef DATA_HANDELLING_H_INCLUDED
#define DATA_HANDELLING_H_INCLUDED
#include "list.h"


void init_data();
void add_student_data(char*name , int id , int year);
void remove_student_data(int id);
void edit_student_data(int id,char*name , int newId, int year );
void view_student_data(int id);
int cheack_available_id(int id);


int get_int();
/*get string from user */
void get_string(char *string);
/*get string from user */
static void print_data(Student s);
//int student_num();
void view_all_data();
#endif // DATA_HANDELLING_H_INCLUDED
