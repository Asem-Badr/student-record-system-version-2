
#include"list.h"
#include<stdlib.h>
#include<stdio.h>

void init_list(list_t* ls)
{
    ls->head = NULL;
    ls->size = 0;

}

void insert(list_t* ls,int pos,data e)
{

    Node* n = (Node*)malloc(sizeof(Node));
    n->element=e;
    n->next = NULL;
    if(pos!= 0)
    {

        Node * pn = ls->head;

        int i;
        for (i=0; i<pos-1; i++)
        {
            pn = pn->next;
        }

        n->next = pn ->next ;
        pn->next = n ;
    }
    else
    {
        n->next = ls->head ;
        ls->head = n ;
    }
    ls->size++;
}

void replace(list_t *ls, data element, int pos)
{
    if(!(ls_empty(ls)))
    {
        Node * pn = ls->head;
        int i;
        for(i=0; i<pos ; i++)
        {
            pn = pn ->next ;
        }
        pn->element = element ;
    }
    else
    {
        printf("Error No elements to replace ");
    }
}

int ls_empty(list_t * ls)
{
    return ls->size == 0;
}

int ls_full(list_t * ls)
{
    return 0;
}

int list_size(list_t *ls)
{
    return ls->size ;
}

int get_index(list_t* ls,int id)
{
    Node* ptr = ls->head;
    int i;
    for(i = 0; i<ls->size; i++)
    {
        ptr = ptr->next;
        if(ptr->element.id == id)
        {
            return i;
        }
    }

    return -1;

}
data element_at(list_t* ls,int pos)
{
    Node* ptr = ls->head;
    int i;
    for(i = 0; i<pos; i++)
    {ptr = ptr->next;}

    return ptr->element;

}


void delete_index(list_t *ls, int p)
{
    int i ;
        Node *pn = ls->head ;
        Node* ptr ;
    if (p!= 0)
    {
        for (i =0; i<p-1 ; i++)
        {
            pn = pn->next ;
        }
        ptr = pn->next;
        free(pn);
        pn = ptr ;

    }
    else if (p==0)
    {
        ptr = pn->next;
        free(pn);
        pn = ptr ;
    }

}


void clear_list(list_t *ls)
{
    Node *pn = ls->head ;
    Node *npn = ls ->head ;
    int i;
    while (pn)
    {
        pn = pn->next ;
        free(npn);
        npn = pn ;
    }
}








