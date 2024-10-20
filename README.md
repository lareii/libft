<div align="center">
    <img src=".github/assets/libftm.png" alt="libft badge">
    <h1>libft</h1>
</div>

![norminette](https://github.com/lareii/libft/actions/workflows/norminette.yml/badge.svg)

📚 My very first own library.

## About
This repository contains my solutions for the **libft** project in 42.

The **libft** project is the very first project in the 42 curriculum. The goal of this project is to create a library of useful functions that will be used in future projects.

## Installation & Usage
### Installation
```bash
git clone https://github.com/lareii/libft.git
cd libft
make
```

### Usage
To use the library in your project, include the header file `libft.h` in your source files and compile your project with the library `libft.a`.

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, World!\n", 1);
    return (0);
}
```

```bash
gcc -Wall -Wextra -Werror -I. -L. -lft your_file.c -o your_program
```

## Contributing
Contributions are welcome! If you would like to contribute to this project, please open a pull request.