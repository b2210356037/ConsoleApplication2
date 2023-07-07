#include <iostream>
// linkedlist introduction playground
struct n {
    int x;
    n* next;
};
typedef n node;

void print(node * r) {
    while (r != NULL)
    {
        printf("%d\n", r->x);
        r = r->next;
    }
}

void add(node* r, int x) {
    while (r->next != NULL) {
        r = r->next;
    }
    r->next = (node*)malloc(sizeof(node));
    r->next->x = x;
    r->next->next = NULL;
}

int main() {
    node* root;
    root = (node*)malloc(sizeof(node));
    root->x = 500;
    root->next = NULL;

    add(root, 5);
    add(root, 10);
    print(root);

 
}