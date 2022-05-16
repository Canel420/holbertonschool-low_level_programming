/**
 * _abs - Absolute value of an integer.
 * @n: Integer to be checked.
 *
 * Description: this function return the absolute value of a number.
 *
 * Return: If integer is positive or 0, returns integer. If integer is
 * negative, returns positive integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-1 * n);
}
