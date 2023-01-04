/* Sort the given linked list in O(nlogn) time complexity and O(1) space complexity*/

//Strategy used
//Divide and Conquer

//Time and Space Complexity
//Time  - O(nlogn)
//space - O(1)

//Approach name - Merge Sort

ListNode* Sortlist(ListNode* head){
    ListNode* a;
    ListNode* b;

    if(head==nullptr||head->next==nullptr){
        return head;
    }


    //Find the middle node of the linked list so to break it into two parts
    ListNode* fast = head->next;
    ListNode* slow = head;
    while(fast!=nullptr&&fast->next!=nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    a = head;
    b = slow->next;
    slow->next = nullptr;


    //Recursively call the sort list function to split the linked list into the two parts
    Sortlist(a);
    Sortlist(b);

    //Merge the sorted linked li8st on the basis of its value
    head = SortedMerge(a,b);
    return head;


}


ListNode* SortedMerge(ListNode* a,ListNode* b){
    ListNode* result = nullptr;

    //Check if the any of the node is null or not
    if(a==nullptr){
        return b;
    }
    if(b==nullptr){
        return a;
    }


    //Check if the value of first node is less than that of the second node and then sort accordingly
    if(a->val<=b->val){
        result = a;
        result->next = SortedMerge(a->next,b);
    }
    else{
        result= b;
        result->next = SortedMerge(a,b->next);
    }

    //Return the result
    return result;
}