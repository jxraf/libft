*This project has been created as part of the 42 curriculum by ajenah.*

# Libft - 42 School Project

---

##  About

`libft` is the first project at 42, where we reimplement a set of standard C library functions from scratch. The goal is to understand how things work under the hood, master C fundamentals, manage memory correctly, avoid segmentation faults, and handle memory leaks.

The project is written in **C**, strictly follows the **42 Norms**, is compiled with `-Wall -Wextra -Werror`, and uses only the functions allowed by the subject.

---

##  Libft Overview

### PART 1 — LIBC Re-implementation
* **Character tests:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Memory & basic string:** `ft_strlen`, `ft_memset`, `ft_bzero`
* **Pointer & byte copying:** `ft_memcpy`, `ft_memmove`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`
* **Conversion & allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`

> **Notes on specific behaviors:**
> * `ft_strlcpy` / `ft_strlcat` follow BSD semantics: they never write more than `size` bytes, always terminate the result when size allows, and return the length of the string they tried to create.
> * `ft_strchr` and `ft_strrchr` convert `c` to `char` and can find the terminating `\0`.
> * `ft_memmove` copies forward or backward depending on the overlap direction.
> * `ft_calloc` checks `nmemb * size` for overflow before allocating and returns `NULL` if it would overflow.
> * `ft_atoi` skips whitespace, accepts one optional sign, and does not report errors. Values that do not fit in a long long give the same result as glibc (`-1` for large positive, `0` for large negative); values between the `int` and `long long` ranges wrap as a plain conversion to `int` would.

### PART 2 — Additional Functions
* `ft_substr`: Allocates a substring; returns an empty string if `start` is past the end.
* `ft_strjoin`: Allocates the concatenation of two strings.
* `ft_strtrim`: Allocates a copy without the leading/trailing characters found in a set.
* `ft_split`: Splits a string on a delimiter into a `NULL`-terminated array; frees everything on failure.
* `ft_itoa`: Converts an `int` (including `INT_MIN`) to an allocated string.
* `ft_strmapi`: Allocates a new string by applying `f(index, char)` to each character.
* `ft_striteri`: Applies `f(index, &char)` to each character in place.
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Write a char, string, string + newline, or number to a file descriptor.

### PART 3 — Linked List (`t_list`)
*(Structure definition: `t_list` has a `void *content` and a `struct s_list *next`)*

* `ft_lstnew`: Allocates memory and returns a new node.
* `ft_lstadd_front`: Adds the node `new` at the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in the list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds the node `new` at the end of the list.
* `ft_lstdelone`: Takes a node as a parameter and frees its content using the function `del`.
* `ft_lstclear`: Deletes and frees the given node and all its successors using `del` and `free`.
* `ft_lstiter`: Iterates through the list `lst` and applies the function `f` to the content of each node.
* `ft_lstmap`: Iterates through the list, applies the function to each node’s content, and creates a new list resulting from the successive applications of the function.

---

##  Instructions

### Requirements
* C compiler (`cc`)
* `make`
* `ar`

### Compilation
```bash
make        # Builds libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # fclean + allLibrary Contents
```

### Resources

* Man pages
* Stack Overflow
* GeeksforGeeks
* Youtube channels: Neso Academy, freeCodeCamp, Low Level

### USE OF AI

AI was used for explaining hard and complex C concepts and helping structure this `README.md`.
