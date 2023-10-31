/**
 * _strlen - function that calculates the lenght of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
        int i = 0;

        if (!s)
                return (0);

        while (*s++)
                i++;
        return (i);
}
