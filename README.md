⚡ Data Structures in C
<div align="center">
🧠 Mastering Data Structures — One Algorithm at a Time

A collection of Data Structures & Algorithms implemented in C, built to strengthen problem-solving, logic, and core programming fundamentals.





</div>
📌 About

This repository contains my implementations and practice programs for Data Structures using C.

The goal is simple:

Understand how things work under the hood — not just how to use them.

Every implementation focuses on clean logic, memory management, and understanding the fundamentals behind each data structure.

🗂️ Topics Covered
#	Data Structure	Status
01	📦 Arrays	✅
02	🔗 Linked List	✅
03	📚 Stack	✅
04	🚶 Queue	✅
05	🌳 Trees	🚧
06	🔍 Binary Search Tree	🚧
07	🕸️ Graphs	🚧
08	🔐 Hash Tables	🚧
09	🔄 Recursion	✅
10	🔎 Searching Algorithms	✅
11	📊 Sorting Algorithms	✅

🟢 Completed · 🟡 In Progress · 🔴 Planned

📁 Repository Structure
Data-Structures-in-C/
│
├── Arrays/
│   ├── insertion.c
│   ├── deletion.c
│   └── searching.c
│
├── Linked-List/
│   ├── singly_linked_list.c
│   ├── doubly_linked_list.c
│   └── circular_linked_list.c
│
├── Stack/
│   ├── stack_array.c
│   └── stack_linked_list.c
│
├── Queue/
│   ├── queue_array.c
│   └── circular_queue.c
│
├── Trees/
│   └── binary_tree.c
│
├── Sorting/
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   ├── insertion_sort.c
│   ├── merge_sort.c
│   └── quick_sort.c
│
├── Searching/
│   ├── linear_search.c
│   └── binary_search.c
│
└── README.md

🛠️ Technologies
C Programming
Pointers
Structures
Dynamic Memory Allocation
Recursion
File Handling
Algorithms
Time & Space Complexity
🚀 How to Run

Clone the repository:

git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git


Enter the directory:

cd YOUR-REPOSITORY


Compile any C program using GCC:

gcc filename.c -o program


Run it:

Linux / macOS
./program

Windows
program.exe

🧩 Example
Stack Implementation
#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }

    return stack[top--];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Popped: %d\n", pop());

    return 0;
}

📈 Complexity

Understanding complexity is just as important as writing the code.

Operation	Average	Worst
Array Access	O(1)	O(1)
Linear Search	O(n)	O(n)
Binary Search	O(log n)	O(log n)
Stack Push	O(1)	O(1)
Stack Pop	O(1)	O(1)
Queue Enqueue	O(1)	O(1)
Queue Dequeue	O(1)	O(1)
Linked List Search	O(n)	O(n)
🎯 Learning Goals
 Understand pointers
 Work with structures
 Implement dynamic data structures
 Understand recursion
 Learn searching techniques
 Learn sorting algorithms
 Master trees
 Master graphs
 Implement advanced algorithms
🧠 Why C?

C gives direct control over:

Memory
   ↓
Pointers
   ↓
Data Structures
   ↓
Algorithms
   ↓
Performance


Learning DSA in C makes it easier to understand what actually happens in memory.

💡 Key Concepts
Pointers
   │
   ├── Dynamic Memory
   │
   ├── Linked Lists
   │
   ├── Stacks & Queues
   │
   └── Trees & Graphs
            │
            ↓
      Data Structures
            │
            ↓
       Algorithms
            │
            ↓
     Problem Solving 🚀

🔥 Progress
Arrays          ████████████████████ 100%
Linked Lists    ████████████████████ 100%
Stacks          ████████████████████ 100%
Queues          ███████████████░░░░░  75%
Trees           ████████░░░░░░░░░░░░  40%
Graphs          ████░░░░░░░░░░░░░░░░  20%
Algorithms      ██████████████░░░░░░  70%

🤝 Contributing

Found a bug or have a better implementation?

Feel free to:

Fork the repository
Create a new branch
Make your changes
Commit your changes
Open a Pull Request

Every contribution is appreciated ❤️

⭐ Support

If this repository helped you understand Data Structures in C, consider giving it a ⭐.

It motivates me to keep adding more implementations!

<div align="center">
💻 Code. Learn. Build. Repeat.

Made with ❤️ and C

</div>
