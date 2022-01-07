#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

struct node *push(struct node *top, int value)
{
    node *n;
    n = (node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("stack overfull\n");
    }
    //    else if(top==NULL){
    //        top->next=NULL;
    //    }
    else
    {
        n->data = value;
        n->next = top;
        top = n;
    }
    return top;
}

struct node *pop(node *top)
{
    if (top == NULL)
    {
        printf("stack is under flow\n");
        return top;
    }
    else
    {
        node *p = top;
        top = top->next;
        free(p);
        return top;
    }
}

void is_empty(struct node *top)
{
    if (top == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        printf("NOT EMPTY\n");
    }
}

void peek(node *top, int i)
{

    int a = 0;
    node *q = top;
    struct node *ptr = top;
    while (q != NULL)
    {
        a++;
        q = q->next;
    }
    if (i > a + 2)
    {
        printf("Enter a valid position\n");
    }
    else if (ptr == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        for (int j = 0; j < i - 1; j++)
        {
            ptr = ptr->next;
        }
        printf("element at %d place is: %d\n", i, ptr->data);
    }
}

node *show(struct node *top)
{
    if (top == NULL)
    {
        printf("stack under flow\n");
        return top;
    }
    else
    {
        node *ptr = top;
        cout << "Your stack is: " << endl;
        cout << endl;
        int i = 1;
        while (ptr != NULL)
        {
            if (ptr->data < 10)
            {
                cout << "| " << ptr->data << "  | <-" << i << endl;
                ptr = ptr->next;
                i++;
                continue;
            }
            cout << "| " << ptr->data << " | <-" << i << endl;
            ptr = ptr->next;
            i++;
        }
    }
    cout << "|____|";
    printf("\n");
    return top;
}

void stacktop(node *top)
{
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << top->data << endl;
    }
}

int main()
{
    node *top = NULL;
    //    top=(node* )malloc(sizeof(struct node));
    //    top->data=56;
    //    top->next=NULL;
    top = push(top, 88);
    top = push(top, 45);
    top = push(top, 6);
    top = push(top, 89);
    top = push(top, 12);
    top = push(top, 34);
    top = pop(top);
    //    top=pop(top);
    //    top=pop(top);
    //    top=pop(top);
    //    top=pop(top);
    //    top=pop(top);
    //    top=pop(top);
    // is_empty(top);
    //  top=show(top);
    top = show(top);
    // peek(top, 5);
    // stacktop(top);
    return 0;
}