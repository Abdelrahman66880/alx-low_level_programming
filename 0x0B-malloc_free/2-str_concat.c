#include "main.h"

/**
 *str_len1 - count arrray
 *@str1: array of elements
 *Return: i
*/

int str_len1(char *str1)
{
int i = 0;
while (str1[i] != '\0')
{
i++;
}
return (i);
}

/**
 *str_len2 - count arrray
 *@str2: array of elements
 *Return: j
*/

int str_len2(char *str2)
{
int j = 0;
while (str2[j] != '\0')
{
j++;
}
return (j);
}

/**
 *str_concat - back a pointer to array
 *@s1: Array one
 *@s2: Array two
 *Return: Always an array dinamic
*/

char *str_concat(char *s1, char *s2)
{
int len1, len2;
len1 = str_len1(s1);
len2 = str_len2(s2);
char *s3;
s3 = malloc((len1 + len2)*sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
int i = 0;
while (s1[i] != '\0')
{
s3[i] = s1[i];
i++;
}
int j = 0;
while (s2[j] != '\0')
{
s3[i] = s2[j];
i++;
j++;
}
return (s3);
}
