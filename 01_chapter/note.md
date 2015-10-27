###Infomation Is Bits+Context

####1.1 origins of the c programming language

**C** was developed from 1969 to 1973 by Dennis Ritchie of Bell Laboratories.

enormous success:

- **C** was closely tied with `Unix` operation system;
- **C** is a small, simple language;
- **C** was designed for a practical purpose.

#####1.7.1 Processes

The operating system keeps track of all the state information that the process needs in order to run. This state, which is known as *context*, includes information such as the current value of the PC, the register file, and the contents of main memory.

#####1.7.2 Threads

Although we normally think of process as having a single control flow, in mordern systems a process can actually consist of multiple excution units, called *threads*, each running in the context of the process and sharing the same code and global data.

#####1.7.3 Virtual Memory

*Virtual memory* is an abstraction that provides each process with the illusion that it has exclusive use of the main memory. Each process has the same uniform view of memory, which is known as its *virtual address space*.

> NOTE: In Linux, the topmost region of the address space is reserved for code and data in the operating system that is common to all processes. The lower region of address space holds the code and data defined by the user's process.

memory address space layout:

- *Program code and data*. Code begins at the same fixed address for all processes, followed by data locations that correspond to global C variables. The code and data areas initialized directly form the contents of an excutable object file, in our case the **hello** excutable.
- *Heap*. The code and data areas are followed immediately by the run-time *heap*. Unlike the code and data areas, which are fixed in size once the process begins running, the heap expands and constracts dynamically at run-time as a result of calls to C standard library routines such as **malloc** and **free**.
- *Shared libraries*. Near the middle of the address space is an area that holds the code and data for shared libraries such as the C standard library and the math library.
- *Stack*. At the top of user's virtual address space is the *user stack* that the compiler uses to implement function calls. Like *Heap*, the user *stack* expands and constracts dymatically during the excution of the program.
- *Kernel virtual mermory*. The *kernel* is the part of the operating system that is always resident in memory. The top region of the address is reserved for the **Kernel**. Application programs are not allowed to read or write the contents of this area or to directly call functions defined in the kernel code.

#####1.7.4 Files

A *file* is a sequence of bytes, nothing more and nothing less. It provides a uniform view of all varied I/O devices.
