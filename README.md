# ft_printf

A recreation of the standard C library's printf function.

## Function prototypes:

```C
int ft_printf(const char *format, ...)
```

## Usage:

Like libc printf

#### Syntax for format specifiers:
`%[flags][width][.precision][length]type`

This implementation of printf supports the following:
 

| Flags field        | Width field | Precision field | Type field |
| ------------------ | ----------- | --------------- | ---------- |
| `0` &ensp; (zero)  | `<number>`  | `.<number>`     | `d` or `i` |
| `-` &ensp; (minus) | `*`         | `.*`            | `u`        |
|                    |             |                 | `x`        |
|                    |             |                 | `X`        |
|                    |             |                 | `p`        |
|                    |             |                 | `c`        |
|                    |             |                 | `s`        |
|                    |             |                 | `%`        |

### Example:

```C
#include "ft_printf.h"

int    main(void)
{
    int i;

    ft_printf("Hello World!\n");
    ft_printf("%s", "This is ");
    ft_printf("%.*s\n", 9, "ft_printf project");
    ft_printf("%d\n", 123);
    ft_printf("%05d\n", 42);
    ft_printf("%u\n", UINT_MAX);
    ft_printf("%p\n", &i);
    ft_printf("%c %c %c\n", 'a', 'b', 'c');
    return (0);
}
```
Output:
```
Hello World!
This is ft_printf
123
00042
4294967295
0x7fff5c7159e8
a b c
```

[![forthebadge](https://forthebadge.com/images/badges/powered-by-coffee.svg)](https://forthebadge.com)