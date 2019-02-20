
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct node {
   char *data;
   double value;
   int flag;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;



void insert(char *data, double value,int flag) {

   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;

   link->value = value;
   link->flag = flag;

   link->next = head;

   head = link;


}

bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}

int find(char *data) {

   struct node* current = head;


   if(head == NULL) {
      return 0;
   }


   while(strcmp(current->data,data)) {


      if(current->next == NULL) {
         return 0;
      } else {

         current = current->next;
      }
   }

   return 1;
}
void change(char *data , double new_value){
     struct node* current = head;


   if(head == NULL) {
      return;
   }

   while(strcmp(current->data,data)) {

      if(current->next == NULL) {

      } else {

         current = current->next;
      }
   }
   current->value = new_value;


}
double getvalue (char *data){
  struct node* current = head;

   while(strcmp(current->data,data)) {


         current = current->next;

   }
   return current->value;

}

int isfunction(char *data){
    struct node* current = head;
    int temp;

   while(strcmp(current->data,data)) {


         current = current->next;

   }
   return current->flag;
}

