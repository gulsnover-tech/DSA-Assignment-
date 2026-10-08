# DSA Assignment

Name: YOUR NAME
Student ID: YOUR STUDENT ID
Subject: Data Structures and Algorithms

## Q1. Stack Using Array

A stack is a linear data structure that follows the LIFO
(Last In, First Out) principle. In this question, a stack is
implemented using an array without using any built-in stack library.

### Operations

- PUSH() - Adds an element to the top of the stack.
- POP() - Removes the top element from the stack.
- PEEK() - Displays the top element without removing it.
- DISPLAY() - Displays all elements of the stack.

### Overflow and Underflow

Stack Overflow occurs when we try to insert an element into
a full stack.

Stack Underflow occurs when we try to remove an element from
an empty stack.

### Complexity

- PUSH: O(1)
- POP: O(1)
- PEEK: O(1)
- DISPLAY: O(n)
- Space Complexity: O(n)

## Q2. Circular Queue Using Array

A circular queue is a linear data structure in which the last
position is connected back to the first position. It follows
the FIFO (First In, First Out) principle.

In this question, a circular queue is implemented using an array.

### Operations

- ENQUEUE() - Adds an element to the rear of the queue.
- DEQUEUE() - Removes an element from the front of the queue.
- FRONT() - Displays the front element.
- DISPLAY() - Displays all elements of the queue.

### Full and Empty Queue

The queue is full when there is no available position for a
new element.

The queue is empty when there are no elements in the queue.

### Circular Queue vs Linear Queue

A circular queue makes better use of available memory because
the unused positions at the beginning can be reused.

In a linear queue, when the rear reaches the last position,
unused spaces at the beginning may remain unavailable.

### Complexity

- ENQUEUE: O(1)
- DEQUEUE: O(1)
- FRONT: O(1)
- DISPLAY: O(n)
- Space Complexity: O(n)