#include <unistd.h>
/**
 *output one caractere
 */

int _putchar(char c)
{
return write(1, &c, 1);
}
