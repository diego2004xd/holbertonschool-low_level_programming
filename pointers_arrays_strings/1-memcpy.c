#include "main.h"
/**
 * _memmemcpy - cpies memory area.
 * @dest: original destinacion
 * @src: area memory
 *
 * return: copy memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char copyMemory=*dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
       	}
	        return(*copyMemory);
}
