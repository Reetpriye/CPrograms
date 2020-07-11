// Dynamic Memory Allocation in C
// Author: REET

/*
A staticlly allocated variable or array 
has a fixed size in memory.
DMA is the way to allocate memory during
the runtime, it can change accordingly 
to the size required.
In SMA(Static Memory Allocation) 
allocation is done before the program's 
execution.
In DMA allocation is done during the 
program's execution.
In SMA memory can't be reused or freed.
In DMA memory can be reused and freed 
when required.
DMA is more efficient as compared to SMA.
Memory assigned to a program in a typical
architecture can be broken down into four
segments.
1. HEAP - Dynamic Memory Allocation.
2. STACK - Keeps Increasing & Decreasing
   as per program requirement.
   Based on LIFO(Last In First Out)
   principle.
3. STATIC/GLOBAL VARIABLE - Data Segment
   (Initialized Segment) && BSS
   [Block Started by Symbol] Segment
   (Uninitialized Segment).
4. CODE - Text Segment.
Compiler allocates some space for the 
stack part of the memory.
Stack & Heap grows in opposite direction.
In case of excess data, there is flow of
data known as StackOverflow. e.g.recursion
with wrong/no
base condition.
With great power comes great resposibility
Use heap with caution as it can
be scaled upto infinite capacity.
We can create a pointer in the main
function and point to a memory block
in the heap.
The address is stored by the local 
variable in the main function.
The memory consumed will not get freed
automatically in case we overwrite the 
pointer.
Command to get the size of the object file
gcc ./Test.c -o test ; size test
Shows the size in bytes.
*/