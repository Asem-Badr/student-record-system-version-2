#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include "data_handelling.h"



void run_system();


void welcome_message();
static void add_student();
static void remove_student();
static void edit_record();
static void view_record();
static void view_all();
static void return_to_main();
/*displays the main menu
* (calls run system or terminate the program)
*/
static void print_main_menu();
static void take_action();
#endif // INTERFACE_H_INCLUDED
