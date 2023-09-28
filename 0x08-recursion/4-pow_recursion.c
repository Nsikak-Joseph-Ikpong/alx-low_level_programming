#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of yt
 * @x: valkue to be raised
 * @y: power
 * Returne: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - n1));
}
