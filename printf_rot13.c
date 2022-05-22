#include "main.h"
/**
 * printf_rot13 - printf the rots13'ed string
 * @R: string to convert
 * Return: size the output text
 *
 */
int printf_rot13(va_list R)
{
	int i, j, counter = 0
	char *r;
	char input[] = {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char output[] = {"nopqrstuvwxyzabcdefghijklm NOPQRSTUVWXYZABCDEFGHIJKLM"};

	  r = va_arg(R, char *);
               if (r == NULL)
		r = "(null)";
	for (j = 0; r[i] != '\0'; j++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (r[j] == input[i])
			{
				_putchar(output[i]);
				counter++;
				break;
			}
		}
		
	}
        return (count);
}
