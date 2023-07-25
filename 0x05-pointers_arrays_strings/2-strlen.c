#include "main.h"

/**length of a string
 * reurn the lengh of the string
 * main-
 * return
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
