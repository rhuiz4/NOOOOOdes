
#include <stdio.h>
#include "yes.h"

int main() {
    
    struct node *p = 0;

    printf("\np contains: []\np: ");
    print_list(p);
    p = insert_front(p,5);
    printf("\np contains: [5]\np: ");
    print_list(p);
    p = insert_front(p,4);
    p = insert_front(p,3);
    p = insert_front(p,2);
    p = insert_front(p,1);
    p = insert_front(p,0);
    printf("\np contains: [0,1,2,3,4,5]\np: ");
    print_list(p);
    
    free_list(p);
    
    printf("\nShould have an error here:\n");
    print_list(p);
}
