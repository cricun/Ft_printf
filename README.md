# Ft_printf
Representation of original printf function with handling undefined behaviour.
Only stdarg.h and own libft libraries were used to implement all feautures.

## Features implemented
* Width management
* Precision management
* Flags %
  - `iIdD`  - integers
  - `uU`    - unsigned integers
  - `oO`    - unsigned octal
  - `xX`    - unsigned hex
  - `fF`    - float
  - `p`     - pointer
  - `b`     - unsigned binary
* Options
  - `#`     - additional options in different flags (man 3 printf)
  - `-`     - align to left
  - `+`     - add sign if positive
  - ` `     - add space if there is no other sign
  - `0`     - fill padding with zeros instead of spaces
* Modifiers
  - `hh`    - modify to char size
  - `h`     - modify to short size
  - `l`     - modify to long size
  - `ll`    - modify to long long size
  - `L`     - modify to long double size
  - `j`     - modify to intmax_t size
  - `t`     - modify to ptrdiff_t size
  - `z`     - modify to size_t size
  - `q`     - modify to quad_t size
* Bonus management
  - `$`     - take custom argument as value
  - `*`     - take custom argument as precision or width
  - `{BLUE}` - paints output if COLOR flag in header set to 1. Supported colors: BLUE, YELLOW, RED, GREEN, GREY
  
  ## Instructions
  - Run `make` to compile or `make re` to recompile printf library.
  - Link `libftprintf.a` library.
  - Add function prototype to your header.
