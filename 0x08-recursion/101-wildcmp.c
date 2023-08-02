#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares 2 strings and retuns 1 else 0 if false
 * @s1: pointer to string
 * @s2: pointer to 2nd string
 * Return: 1 if identiccal else 0
 */
int wildcmp(char *s1, char *s2)
{
	 if (*s1 == '\0' && *s2 == '\0')
		 return (1);
	 if (*s1 == *s2)
		 return (wildcmp(s2 + 1, s2 + 1));
	 if (*s2 == '*')
	 {
		 if (*(s2 +1) != '\0' && *s1 == '\0')
			 return (0);
		 if (wildcmp(s1, s2 + 1))
			 return (1);
		 return (wildcmp(s1 + 1, s2));
	 }
	 return (0);
}
