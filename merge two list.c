struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // If one list is empty, return the other
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    
    // Start with the list that has the smaller first element
    if (list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2); // Recursive call
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next); // Recursive call
        return list2;
    }
}
