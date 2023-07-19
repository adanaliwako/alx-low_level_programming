#include <unistd.h>
/**should create the .c 
 * take caution of betty
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
