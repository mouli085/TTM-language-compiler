#include "node.c"

int main()
{

    insert("hello");insert("hello2");insert("hello3");

    printList();
    char *s= "hello4";
    struct node *foundLink = find(s);

    if(foundLink != NULL) {
      printf("\nElement found: ");
      printf(foundLink->data);
      printf("\n");
    } else {
        insert(s);
      printf("Element not found.");
    }
     printList();
   return 0;
}
