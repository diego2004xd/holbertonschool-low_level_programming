#include <FILENAME>
/* *
 *  *  function that searches a string for any of a set of bytes.
 *   * 
 *    *
 *    **/
int _strpbrk(char *s, char *accept)
	int iter1, iter2;
	int number1 = 0;
	int number2 = 0;
	for (iter1 = 0; s[iter1] != '\0'; iter1++)
{
				for (iter2 = 0; accept[iter2] != '\0'; iter2++)
				{
				if (s[iter1] == accept[iter2])
				{
					number1++;
					number2 = 0;

					break;
			   	}
				else
		   		{
					number2++;
					if (accept[number2] == '\0')
					{
						return (number1);
				   	}	
				}
			}
		}
		return (number1);
}
