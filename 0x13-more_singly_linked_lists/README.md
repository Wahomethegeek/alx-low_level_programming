# Learnig more about singly linked lists

0. Write a function that prints all the elements of a listint list
1. print the number of elements (nodes) a single linked list only contain data and link
  
   ```c
    int countNodes(struct node *head)
{
        int count = 0;
        struct node *current = head;

        while (current != NULL)
        {
                count ++;
                current = current->link;
        }

        return count;
}
   ```
2. Adding a node
  ```c
void addAtEnd(struct node *head, int data)
{
        struct node *ptr, *temp;
        ptr = head;
        temp = (struct node*)malloc(sizeof(struct node));

        temp->data = data;
        temp->link = NULL;

        while(ptr->link != NULL)
        {
                ptr = ptr->link;
        }
        ptr->link = temp;
}
```
