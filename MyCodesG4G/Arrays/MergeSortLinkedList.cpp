/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

// function prototypes
struct node* SortedMerge(struct node* a, struct node* b);
void FrontBackSplit(struct node* source,
                    struct node** frontRef, struct node** backRef);

//sorts the linked list by changing next pointers (not data)
void MergeSort(struct node** headRef)
{
    struct node* head = *headRef;
    struct node* a;
    struct node* b;

    //Base case -- length 0 or 1
    if ((head == NULL) || (head->next == NULL))
    {
        return;
    }

    //Split head into 'a' and 'b' sublists
    FrontBackSplit(head, &a, &b);

    //Recursively sort the sublists
    MergeSort(&a);
    MergeSort(&b);

    //answer = merge the two sorted lists together
    *headRef = SortedMerge(a, b);
}

struct node* SortedMerge(struct node* a, struct node* b)
{
    struct node* result = NULL;

    if (a == NULL)
        return(b);
    else if (b==NULL)
        return(a);

    // Pick either a or b, and recur
    if (a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return(result);
}

void FrontBackSplit(struct node* source,
                    struct node** frontRef, struct node** backRef)
{
    struct node* fast;
    struct node* slow;
    if (source==NULL || source->next==NULL)
    {
        *frontRef = source;
        *backRef = NULL;
    }
    else
    {
        slow = source;
        fast = source->next;

        //Advance 'fast' two nodes, and advance 'slow' one node
        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *frontRef = source;
        *backRef = slow->next;
        slow->next = NULL;
    }
}

void printList(struct node *node)
{
    while(node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Function to insert a node at the beginging of the linked list
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main()
{
    struct node* a = NULL;

    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    push(&a, 20);
    push(&a, 3);
    push(&a, 2);

    MergeSort(&a);

    printf("Sorted Linked List is:\n");
    printList(a);

    return 0;
}
*/
