👾 <b> Data Structures: </b> It is how you organize the data in the main memory during the execution time of a program.

<h3> Stack Memory </h3>
- In programming, whenever a function is called, the program generates a new stack memory block for the function to utilize. This type of memory is located in the stack section of a program’s memory space, which is a reserved restricted memory area. This section is usually located at the top of the memory space and grows downward as more data is added.
- Stack memory employs an automatic allocation and deallocation of memory that stores temporary data created by functions or procedures. Stack memory uses a “Last In, First Out” (LIFO) data structure, meaning that the most recently added item is the first to be removed. When the function or procedure is finished executing, the stack memory block is released automatically, and the program returns to the previous point of execution.
- Stack memory is useful in managing memory usage as it avoids memory leaks due to its architecture. Moreover, the stack may overflow and crash in the case of many nested function calls.

<h3> Heap Memory </h3>
- Compared to stack memory, heap memory operates dynamically, which basically means that the program can allocate and deallocate memory areas of different sizes when necessary. This allocation/deallocation of memory depends on the requirements that arise during runtime.
- In addition, heap memory is not associated with a specific function or process. The data in heap memory is not arranged in any specific pattern and can be reached in any order. Throughout a program’s runtime, only useful areas of memory are retained in heap memory.
<br><br>

<img width="652" alt="Screenshot 2024-06-06 at 11 37 21 PM" src="https://github.com/Swap-Nova/Essential-DS/assets/92979885/730d26d0-21a6-45ad-98fc-f6dac2c0d6ce">

<h3> Dynamic Object created in heap </h3>

```c++
  struct rect{
      int length;
      int breadth;
  };
  
  int main(){
      struct rect *p;
  
      // object inside a heap
      p=(struct rect*)malloc(sizeof(struct rect));
  
      // In c++ we can directly write this instead of using malloc
      // p= new rect;
  
      p->length=20;
      p->breadth=40;
  
      cout<<"Area of rectangle is: "<<p->length*p->breadth<<endl;
      cout<<"Address of pointer: "<<p<<endl;
      delete [ ] p; // freeing up the allocation after use
      return 0;
  }
```
