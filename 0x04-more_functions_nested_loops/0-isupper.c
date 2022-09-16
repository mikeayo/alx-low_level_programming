/**
 * _isupper - function that checks for uppercase characters
 *
 * @c: int type number
 *
Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        return (0);
}
