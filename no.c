
#include <stdio.h>
#include "yes.h"

void print_list(struct node * n){
    
    while(n){
        printf("%d\t",n->i);
        n = n->next;
    }
    printf("\n");
    
}

struct node * insert_front(struct node * n, int value){
    
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->i = value;
    tmp->next = n;
    
    return tmp;

}

struct node * free_list(struct node * n){
    struct node *tmp = n;
    struct node *prev = n;
    while(tmp){
        tmp = prev->next;
        free(prev);
        prev = tmp;
    }
    
    return n;
}
