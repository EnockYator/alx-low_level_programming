### 0x12-singly_linked_lists
============================

### Resources

Read or watch:

-Linked Lists
-Google
-Youtube

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

-When and why using linked lists vs arrays
-How to build and use linked lists

### Requirements

### General

-Allowed editors: vi, vim, emacs<b>
-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>-All your files should end with a new line
<br>-A README.md file, at the root of the folder of the project is mandatory
<br>-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>-You are not allowed to use global variables
<br>-No more than 5 functions per file
<br>-The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
<br>-You are allowed to use _putchar
<br>-You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
<br>-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>-The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
<br>-Don’t forget to push your header file
<br>-All your header files should be include guarded

### More Info

Please use this data structure for this project:

````c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
````
