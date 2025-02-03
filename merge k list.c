#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    // If there are no lists, return NULL
    if (listsSize == 0) return NULL;
    
    // Create a min-heap to help merge the lists
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = dummy;
    
    // Function to perform heapify
    void heapify(struct ListNode** heap, int heapSize, int idx) {
        int smallest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;
        
        if (left < heapSize && heap[left]->val < heap[smallest]->val) {
            smallest = left;
        }
        if (right < heapSize && heap[right]->val < heap[smallest]->val) {
            smallest = right;
        }
        if (smallest != idx) {
            struct ListNode* temp = heap[idx];
            heap[idx] = heap[smallest];
            heap[smallest] = temp;
            heapify(heap, heapSize, smallest);
        }
    }
    
    // Function to extract the minimum node from the heap
    struct ListNode* popHeap(struct ListNode** heap, int* heapSize) {
        if (*heapSize == 0) return NULL;
        
        struct ListNode* minNode = heap[0];
        heap[0] = heap[--(*heapSize)];
        heapify(heap, *heapSize, 0);
        
        return minNode;
    }
    
    // Build the initial heap
    struct ListNode* heap[listsSize];
    int heapSize = 0;
    
    // Initialize the heap with the heads of the lists
    for (int i = 0; i < listsSize; i++) {
        if (lists[i] != NULL) {
            heap[heapSize++] = lists[i];
        }
    }
    
    // Heapify the heap to maintain the min-heap property
    for (int i = (heapSize / 2) - 1; i >= 0; i--) {
        heapify(heap, heapSize, i);
    }
    
    // Merge the lists using the heap
    while (heapSize > 0) {
        struct ListNode* smallestNode = popHeap(heap, &heapSize);
        current->next = smallestNode;
        current = current->next;
        
        // If the smallest node has a next node, push it to the heap
        if (smallestNode->next != NULL) {
            heap[heapSize++] = smallestNode->next;
            // Reheapify to maintain the heap property
            int idx = heapSize - 1;
            while (idx > 0 && heap[(idx - 1) / 2]->val > heap[idx]->val) {
                struct ListNode* temp = heap[idx];
                heap[idx] = heap[(idx - 1) / 2];
                heap[(idx - 1) / 2] = temp;
                idx = (idx - 1) / 2;
            }
        }
    }
    
    // Return the merged linked list starting from the node after the dummy node
    struct ListNode* mergedHead = dummy->next;
    free(dummy);  // Free the dummy node to avoid memory leak
    return mergedHead;
}
