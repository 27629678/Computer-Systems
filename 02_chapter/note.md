### chapter2 Representing and Manipulating infomation

####2.1 infomation storage

#####2.1.5 representing strings

A string in C is encoded by an array of characters terminated by the null(having value 0)character.

> Note:You can display a table showing ascii character code by excuting the command `man ascii`

#####2.1.6 boolean algebra

operations as below:

- not(~)
- and(&)
- or(|)
- xor(exclusive or)(^)

####2.2 integer representation

> Note:Both C and C++ support signed and unsigned numbers. Java supports only signed numbers.

> **Aside** Exact-size integer type
> The ISO C99 standard introduces another class of integer types in the file stdint.h. This file defines a set of data types with declarations of the form int*N*_t, specifing *N*-bit signed and unsigned integers, for diffrent value of *N*. 
> The exact values of *N* are implementaion depent, but most compilers allow values of 8, 16, 32 or 64. Thus, we can unambiguously declare an unsigned, 16-bit variable by giving it type uint16_t, and a signed variable of 32 bits as int32_t.
> Along with these data types are a set of macros defining the minimum and maximum values for each value of *N*. These have names of the form INT*N*_MIN, INT*N*_MAX, and UINT*N*_MAX.


