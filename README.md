
### What is libft?
Libft is an individual project at WeThinkCode that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

### What's in it?

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions WeThinkCode deems will be useful for later projects
3.  **Bonus Functions:** Functions WeThinkCode deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		|ft_isupper.c
bzero		| ft_memdel		| ft_lstdelone	|ft_isspace.c
memcpy		| ft_strnew		| ft_lstdel		|ft_llintlen.c  
memccpy		| ft_strdel		| ft_lstadd		|ft_itoa.c 
memmove		| ft_strclr		| ft_lstiter	|    
memchr		| ft_striter	| ft_lstmap		|
memcmp		| ft_striteri	|				|
strlen		| ft_strmap		|				|
strdup		| ft_strmapi	|				|
strcpy		| ft_strequ		|				|
strncpy		| ft_strnequ	|			|
strcat		| ft_strsub		|
strlcat		| ft_strjoin	|
strchr		| ft_strtrim	|
strrchr		| ft_strsplit	|
strstr		| ft_itoa		| |
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|| |
toupper		| | |
tolower		| | |




### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library for other projects at WeThinkCode.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/antonga23/libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).

Now to clean up (removing the .o files and the .c files from the root), call `make clean`

### How do I use the library?

`gcc example.c -Wall -Werror -Wextra. -libft.a`

-libft.a takes the path to your library. `.` in this case<br>

That's it. Now run it using `./a.out`
