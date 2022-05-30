#include "q.h"

#include <iostream>
#include <vector>
// Implement each function of `q.h` here.

//Linked List from Vector
SinglyLinkedList::SinglyLinkedList(const std::vector<int> &v)
{
    if (v.size() == 0)
    {
        size_ = 0;
        head_ = nullptr;
    }
    if (v.size() > 0)
    {
        int v_size = v.size();
        size_++;
        head_ = new ListNode(v[0]);
        ListNode* p1 = head_;

        for (int i = 0; i < v_size-1; i++)
        {
            ListNode* p2 = new ListNode(v[i+1]);
            p1->next = p2;
            p1 = p1->next;
            size_++;
        }
    }
}

//Copy Constructor
SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList &rhs)
{
    if (rhs.head_ != nullptr)
    {
        ListNode* p1 = rhs.head_;
        ListNode* p2;
        ListNode* node = new ListNode(p1->val);
        head_ = node;
        p2 = head_;

        while (p1->next != nullptr)
        {
            p1 = p1->next;
            ListNode* node = new ListNode(p1->val);
            p2->next = node;
        }
    }
}

//Check if Linked List is empty
bool SinglyLinkedList::empty()
{
    return size_ == 0 ? true : false;
}

//Return Size of the Linked List
int SinglyLinkedList::size() 
{
  return size_;
}

//Pointer to the head of the List
ListNode *SinglyLinkedList::head()
{
    return head_;
}

//Return item from the back of the list
void SinglyLinkedList::push_back(int i)
{
    ListNode* ptr = head();
    ListNode* newnode = new ListNode(i);

    if (head_ == nullptr)
    {
        head_ = newnode;
    }
    else
    {
        while(ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    size_++;
}

//Remove item from the back of the list
bool SinglyLinkedList::pop_back()
{
    ListNode *ptr = head();

    if (head_ == nullptr)
    {
        return false;
    }
    else
    {
        while (ptr->next->next != nullptr)
        {
            ptr = ptr->next;
        }

        ptr->next = nullptr;
        size_--;
        return true;
    }
}

//Return item at the back of the list
int SinglyLinkedList::back()
{
    ListNode *ptr = head();

    if (head_ == nullptr)
    {
        return -1;
    }

    else
    {
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        
        ptr = ptr->next;
        return ptr->val;
    }
}

//Return pointer to the back of the list
ListNode *SinglyLinkedList::GetBackPointer()
{
    ListNode *ptr = head();

    if (head_ == nullptr)
    {
        return nullptr;
    }

    else
    {
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        return ptr;
    }
}

//Return pointer to the ith element in the list
ListNode *SinglyLinkedList::GetIthPointer(int i)
{
    ListNode *ptr = head();

    if (head_ == nullptr)
    {
        return nullptr;
    }

    for (int n = 0; n < i; n++)
    {
        ptr = ptr->next;
    }
    
    return ptr;
}

//Return ith element
int &SinglyLinkedList::operator[](int i)
{
    ListNode *ptr = GetIthPointer(i);
    return ptr->val;
}

//Print Elements
void SinglyLinkedList::print()
{
    if (head_ == nullptr)
    {
        std::cout<<"{ }"<<std::endl;
    }

    else
    {
        ListNode* ptr = head_;
        while (ptr->next != nullptr)
        {
            std::cout<<ptr->val<<", "<<std::endl;
            ptr = ptr->next;
        }
        std::cout<<ptr->val<<", "<<std::endl;
    }
}

//Convert to vector
std::vector<int> SinglyLinkedList::convert_to_vector()
{
    if (size_ == 0)
    {
        return {};
    }

    std::vector<int> vector;
    ListNode *ptr = head_;

    while (ptr->next != nullptr)
    {
        vector.push_back(ptr->val);
        ptr = ptr->next;
    }

    vector.push_back(ptr->val);

    return vector;

}

//Erase element
ListNode* SinglyLinkedList::erase(int i)
{
    ListNode* prev_ptr = GetIthPointer(i-1);
    ListNode* next_ptr = GetIthPointer(i+1);

    prev_ptr->next = next_ptr;
}



