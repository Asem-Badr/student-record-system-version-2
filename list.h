//
// Created by islam on 1/17/21.
//

#ifndef LIST_H
#define LIST_H
#include "global.h"
#include <stdlib.h>

typedef Student data;

typedef struct node
{
    data element;
    struct node *next;
}Node;

typedef struct list
{
    Node *head;
    int size;
}list_t;

void init_list(list_t *ls);

void insert(list_t *ls, int pos, data e);

void replace(list_t *ls, data element, int pos);

int is_empty(list_t *ls);

int is_full(list_t *ls);

int list_size(list_t *ls);

data element_at(list_t *ls, int pos);

int get_index(list_t *ls, int id);

void delete_index(list_t *ls, int p);

//void traverse_list(list_t *ls, void (*pf)(data element));

void clear_list(list_t *ls);

#endif //LIST_H
