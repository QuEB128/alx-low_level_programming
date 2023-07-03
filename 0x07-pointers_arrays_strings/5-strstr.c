/**
 * _strstr - locates a substring in a string.
 * @haystack: pointer to the string to search.
 * @needle: pointer to the substring to find.
 *
 * Return: a pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
char *p1, *p2;
while (*haystack != '\0')
{
p1 = haystack;
p2 = needle;
while (*p1 == *p2 && *p2 != '\0')
{
p1++;
p2++;
}
if (*p2 == '\0')
return (haystack);
haystack++;
}
return (0);
}
