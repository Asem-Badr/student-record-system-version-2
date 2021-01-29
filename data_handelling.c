#include "data_handelling.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


list_t ls ;
list_t *l = &ls ;

void init_data()
{
    init_list(l);
}
void add_student_data(char*name , int id , int year)
{
    int size ;
    Student s ;
    s.name = name ;
    s.id = id;
    s.year = year;
    size = list_size(l);
    insert(l,size,s);
}
void remove_student_data(int id)
{
    int pos = get_index(l,id);
    delete_index(l,pos);
}

void edit_student_data(int id,char*name , int newId, int year )
{
    int pos = get_index(l,id);
    Student s ;
    s.name = name ;
    s.id = newId;
    s.year = year;
    replace(l,s,pos);
}
void view_student_data(int id)
{
    Student s ;
    int pos = get_index(l,id);
    s = element_at(l,pos);
    print_data(s);
}
int cheack_available_id(int id)
{
    int pos = get_index(l,id);
    return pos != -1 ;
}



 int get_int()
 {
    int number;
    scanf("%d",&number);
    return number ;
 }

 void get_string(char *string)
 {
     char buffer[100];
     scanf("%s",buffer);
     string = strdup(buffer);

 }

 static void print_data(Student s)
 {
     printf("name: %s\t\tid : %d\t\tyear :%d\t\t",s.name,s.id,s.year);
 }
void view_all_data()
{
    int size = list_size(l);
    int i ;
    Student s ;
    for (i=0 ;i<size ;i++ )
    {
        s = element_at(l, i);
        print_data(s);
    }
}

 /*int student_num()
 {
    return list_size(l) ;
 }
*/
