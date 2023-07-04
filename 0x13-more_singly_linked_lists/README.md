# Learnig more about singly linked lists

0. Write a function that prints all the elements of a listint list
1. print the number of elements (nodes) a single linked list only contain data and link
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

