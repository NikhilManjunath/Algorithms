#include "q.h"

#include <iostream>
#include <vector>
// Implement each function of `q.h` here.

  // Copy constructor.
  Queue::Queue(const Queue& rhs) 
  {
      v_ = rhs.v_;
  }

  // Inserts in the back of the queue.
  bool Queue::Enqueue(int value) 
  {
      v_.push_back(value);
      return true;
  }

  // Removes from the front of the queue. If the queue is empty, return false,
  // otherwise true.
  bool Queue::Dequeue() 
  {
      if(v_.empty())
      {
          return false;
      }
      else
      {
          v_.erase(v_.begin());
      }
  }

  // Returns true if the queue is empty.
  bool Queue::IsEmpty()
  {
      if(v_.empty())
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  // Returns the value in the front of the queue. If the queue is empty, return
  // -1.
  int Queue::Front() 
  {
      if(v_.empty())
      {
          return -1;
      }
      else
      {
          return v_[0];
      }
  }