#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int a) {
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = a;
    new->next = NULL;

    if (head == NULL) {
        head = new;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }
}

void display() {
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->next != NULL)
            printf("%d ", temp->data);
        else
            printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, i, val;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        insert_end(val);
    }

    display();

    return 0;
}