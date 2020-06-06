#include "linkedList.h"
#include "linkedListFuncs.h"

// Better form because it's tail-recursive which probably doesn't matter for C++ which most-likely doesn't support but it doesn't hurt
int recursiveSumHelper(Node* head, int acc) {
  if (head == NULL) {
    return acc;
  } else {
    return recursiveSumHelper(head->next, acc + head->data);
  }
}
//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  return recursiveSumHelper(head, 0);
}

int recursiveLargestValueHelper(Node* head, int acc) {
  if (head == NULL) {
    return acc;
  } else {
    int val = head->data;
    int next;
    if (val > acc) {
      next = val;
    } else {
      next = acc;
    }

    return recursiveLargestValueHelper(head->next, next);
  }
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  return recursiveLargestValueHelper(head->next, head->data);
}

