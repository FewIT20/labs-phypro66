#include <stdio.h>
#include <stdlib.h>
 
struct node {
  int data;
  struct node *next;
};
 
struct node *create_node(int data) {
  struct node *new_node = malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}
 
void insert_node(struct node **head, int pos, int data) {
  struct node *new_node = create_node(data);
 
  if (pos == 0) {
    new_node->next = *head;
    *head = new_node;
    return;
  }
 
  struct node *prev = *head;
  for (int i = 0; i < pos - 1; i++) {
    if (prev->next != NULL) {
        prev = prev->next;
    }
  }
 
  new_node->next = prev->next;
  prev->next = new_node;
}
 
void display_list(struct node *head) {
  struct node *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
}
 
int main() {
  int n, pos, data;
 
  scanf("%d", &n);
 
  struct node *head = NULL;
  for (int i = 0; i < n; i++) {
    scanf("%d", &data);
    insert_node(&head, i, data);
  }
 
  scanf("%d", &pos);
  scanf("%d", &data);
  insert_node(&head, pos, data);
 
  display_list(head);
 
  return 0;
}