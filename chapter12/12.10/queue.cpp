#include "queue.h"
#include <cstdlib> // for rand()

Queue::Queue(int qs) : qsize(qs) {
  front = rear = NULL; // or nullptr
  items = 0;
}

Queue::~Queue() {
  Node * temp;
  while (front != NULL) {
    temp = front;
    front = front->next;
    delete temp;
  }
}

bool Queue::isEmpty() const {
  return items == 0;
}

bool Queue::isFull() const {
  return items == qsize;
}

int Queue::queueCount() const {
  return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item) {
  if (isFull())
    return false;
  Node * add = new Node;
  add->item = item;
  add->next = NULL;
  items++;
  if (front == NULL)
    front = add;
  else
    rear->next = add;
  rear = add;
  return true;
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(Item & item) {
  if (front == NULL)
    return false;
  item = front->item;
  items--;
  Node * temp = front;
  front = front->next;
  delete temp;
  if (items == 0)
    rear = NULL;
  return true;
}

void Customer::set(long when) {
  processtime = std::rand() % 3 + 1;
  arrive = when;
}
