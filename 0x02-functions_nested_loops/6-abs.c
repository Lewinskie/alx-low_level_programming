#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: int to be checked
 * Return: 1 if positive else 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	return (r);
}
