#include "main.h"
/**
 * cap_string - capitalizes every word of a string
 * @s:string to modify
 *
 * Return:the resulting string
 */
char *cap_string(char *s)
{
	int j, i;
	char spe[13] = { ' ', '\t', '\n', ',',';','.','!','?','"','(', ')','{', '}'};
	for(i = 0;s[i] != '\0';i++)
	{
		if(i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for(j = o; j < 13; j++)
		{
			if(s[i] == sppe[j])
			{
				of(s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return(s);
}
