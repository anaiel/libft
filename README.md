# LIBFT

This project was completed in november 2018 as part of the 42 school cursus. The goal was to create a library containing a number of functions already existing in C libraries as well as additional ones, to be used in future projects.
The detailed instructions can be found in the *resources* folder.

![path to libft](https://i.imgur.com/osfWGCy.png "Cursus start > 42 Commandements > Piscine Reloaded > Libft")

*Basics of C, Libc, Generation of a static library*

## Getting Started

Run the command `make` to create the **libft.a** library file.

In future projects, the libft will be used by placing this libft folder in the projects folder. The libft.a library will be compiled at the same time as the project by adding the following rule to the Makefile :
```
libft:
    make -C libft/
```
As well as the following flags to the compilation of the sources of the project :
```
-I./libft/includes/ -L./libft -lft
```

## Available functions

### :mag: Character recon and transformation
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_iswhitespace` (BONUS)
- `ft_toupper`
- `ft_tolower`

### :fountain_pen: String manipulations
- `ft_strlen`
- `ft_strnew`
- `ft_strdel`
- `ft_strclr`
- `ft_striter`
- `ft_striteri`
- `ft_strcmp`
- `ft_strncmp`
- `ft_strequ`
- `ft_strnequ`
- `ft_strdup`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strstr`
- `ft_strnstr`
- `ft_strsub`
- `ft_strjoin`
- `ft_strtrim`
- `ft_strsplit`

### :floppy_disk: Memory manipulation
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_memalloc`
- `ft_memdel`

### :chains: Chained lists manipulation (BONUS)
- `ft_lstnew`
- `ft_lstdelone`
- `ft_lstdel`
- `ft_lstadd`
- `ft_lstiter`
- `ft_lstmap`
- `ft_strsplitlst`
- `ft_lstcpy`
- `ft_lstappend`

### :money_with_wings: Conversions
- `ft_atoi`
- `ft_itoa`
- `ft_itoa_base` (BONUS)

### :scroll: Printing
- `ft_putchar`
- `ft_putchar_fd`
- `ft_putstr`
- `ft_putstr_fd`
- `ft_putendl`
- `ft_putendl_fd`
- `ft_putnbr`
- `ft_putnbr_fd`
- `ft_putstrarray` (BONUS)
- `ft_putfile` (BONUS)
- `ft_printbits` (BONUS)
- `ft_putwchar` (BONUS)

### :rowing_woman: Stream reading (BONUS)
- `ft_fopen`
- `ft_fclose`
- `ft_fgetc`

### :tornado: Misc (BONUS)
- `ft_filelinecount`
- `ft_double_power`
- `ft_ldouble_power`
- `ft_wchar_to_bytes`
- `ft_array_swap`
- `ft_tabdel`
- `ft_nbdigits`
- `ft_nbdigits_base`

## Updating

The project is updated regularly with new functions that could be useful for other projects, or when I learn something new, or when I realize my code looks awful :wink:

## Authors

* **[anaiel](https://github.com/anaiel)**

<img align="right" src="https://i.imgur.com/FW5Sd6I.png" />
