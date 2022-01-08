#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *show(struct ListNode *top)
{
    if (top == NULL)
    {
        printf("stack under flow\n");
        return top;
    }
    else
    {
        ListNode *ptr = top;
        while (ptr != NULL)
        {
            if (ptr->next != nullptr)
                cout << ptr->val << "-> ";
            else
                cout << ptr->val;
            ptr = ptr->next;
        }
    }
    printf("\n");
    return top;
}

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode(0);
        ListNode *ptr = l3;
        int a = 0;
        int rem = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            ListNode *node = new ListNode(0);
            a = l1->val + l2->val + rem;
            rem = a / 10;
            node->val = a % 10;
            ptr->next = node;
            ptr = ptr->next;
            if (l2->next == nullptr && l1->next != nullptr)
            {
                ListNode *temp2 = new ListNode(0);
                l2->next = temp2;
            }
            if (l1->next == nullptr && l2->next != nullptr)
            {
                ListNode *temp3 = new ListNode(0);
                l1->next = temp3;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == nullptr && rem == 1)
        {
            ListNode *node = new ListNode(0);
            node->val = 1;
            ptr->next = node;
            ptr = ptr->next;
        }
        else if (l2 == nullptr && rem == 1)
        {
            ListNode *node = new ListNode(0);
            node->val = 1;
            ptr->next = node;
            ptr = ptr->next;
        }
        l3 = l3->next;
        return l3;
    }
};

int main()
{
    ListNode *l1 = new ListNode(0);
    l1->val = 3;
    ListNode *ptr = l1;
    int a = 5;
    for (int i = 0; i < 3; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr->next = temp;
        ptr = ptr->next;
        a++;
    }
    ListNode *l2 = new ListNode(0);
    l2->val = 2;
    ListNode *ptr2 = l2;
    a = 7;
    for (int i = 0; i < 3; i++)
    {
        ListNode *temp = new ListNode(0);
        temp->val = a;
        ptr2->next = temp;
        ptr2 = ptr2->next;
        a++;
    }
    Solution s;
    ListNode *res;
    show(l1);
    show(l2);
    res = s.addTwoNumbers(l1, l2);
    show(res);

    return 0;
}