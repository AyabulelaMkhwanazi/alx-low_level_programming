# Singly Linked Lists

## Tasks

### **0. Print list**<br />
<sub>Write a function that prints all the elements of a `list_t` list.</sub>

* Prototype: `size_t print_list(const list_t *h);`
* Return: the nubmer of nodes
* if `str` is `NULL`, print `[0] (nil)`
* You are allowed to use `printf`


### **1. List length**<br />
<sub>Write a function that returns the nubmer of elements in a linked `list_t` list.</sub>

* Prototype: `size_t list_len(const list_t *h);`


### **2. Add node**<br />
<sub>Write a function that adds a new node at the beginning of a `list_t` list.</sub>

* Prototype: `list_t *add_node(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`


### **3. Add node at the end**<br />
<sub>Write a function that adds a new node at the end of a `list_t` list.</sub>

* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`


### **4. Free list**<br />
<sub>Write a function that frees a `list_t` list.</sub>

* Prototype: `void free_list(list_t *head);`


## __ADVANCED__
### **5. The Hare and Tortoise**<br />
<sub>Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.</sub>

* You are allowed to use the `printf` function


### **6. Real programmers can write assembly code in any language**<br />
<sub>Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.</sub>

* You are only allowed to use the `printf` function
* You are not allowed to use interrupts
* Your program will be compiled using `nasm` and `gcc`:
