#include <iostream>
#include <string>
#include <vector>
//-----------------------------------------------------------------------------
// A node in the linked list. Already implemented. No need to change.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class SinglyLinkedList {
 private:
  ListNode *head_;  // Pointer to the head of the list.
  int size_;        // The current size of the list.

 public:
  // Constructor. Already implemented. No need to change.
  SinglyLinkedList() {
    head_ = nullptr;
    size_ = 0;
  }

  
  SinglyLinkedList(const std::vector<int> &v);       //pending
  SinglyLinkedList(const SinglyLinkedList &rhs);
  bool empty();
  int size();
  ListNode *head();        //pending
  void push_back(int i);
  bool pop_back();
  int back();
  ListNode *GetBackPointer();
  ListNode *GetIthPointer(int i);
  int &operator[](int i);
  void print();
  std::vector<int> convert_to_vector();
  ListNode *erase(int i);
  void remove_duplicates();
};