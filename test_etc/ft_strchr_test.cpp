#include <stdio.h>
#include <string.h>

 char    *ft_strchr(const char *s, int c)
  {
          unsigned int    i;
  
          i = 0;
          while (s[i] != '\0')
          {
                  if (s[i] == c)
                  {
                          return ((char*)s + i);
                 }
                  i++;
         }
         if (s[i] == c)
         {
                 return ((char*)s + i);
         }
         return (NULL);
 }

int main ()
{
	printf("%s", ft_strchr("sirawit", 'x'));
	printf("%d", NULL == '\0');

}
