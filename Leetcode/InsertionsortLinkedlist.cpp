/* Sort the given list using the insertion sort method*/

// Time and Space Complexity
// Time - O(N^2)
// Space - O(1)

ListNode *sorted = nullptr;

void Sortedinsert(ListNode *newnode)
{
    if (sorted == nullptr || sorted->val >= newnode->val)
    {
        newnode->next = sorted;
        sorted = newnode;
    }
    else
    {
        ListNode *current = sorted;
        while (current->next != nullptr && current->next->val < newnode->val)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}

ListNode* InsertionSort(ListNode* head){
    ListNode* current = head;
    while(current!=nullptr){
        ListNode* next = current ->next;
        Sortedinsert(current);
        current = next;
    }   
    head = sorted;
    return head;
}