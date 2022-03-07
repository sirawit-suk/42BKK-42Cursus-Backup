#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	const unsigned char     *str2;
	
	str1 = (unsigned char *)dst;
	str2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}



int main ()
{
//	char *str1 = "abcdefghijklm";
//	char *str2 = "asdasdasdsdasd";
//	printf("input: %s\n",str1);
//	memmove(str2,str1,1);
//	printf("result: %s\n",str2);
//	return 0;

  char str1[] = "12345678";
  char str2[] = "12345678";
  char str3[] = "12345678";

  
  memmove(str1+3,str1,8);
  puts(str1);
  
  memcpy(str2+3, str2,8); // this should be overlap ? 
  puts(str2);
  
  ft_memcpy(str3+3, str3,8); // this should be overlap ? 
  puts(str3);
  
  
}
