#include <stdio.h>
#include <string.h>
strlcpy(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0 && --n != 0) {
		do {
			if ((*d++ = *s++) == 0)
				break;
		} while (--n != 0);
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++);
	}

	return(s - src - 1);	/* count does not include NUL */
}

int main()
{
   	char dst[10] = "AAAAAAAAA";
   	strlcpy(dst,"abcxxx", -1);
   	size_t wtf = -1;
   	printf("%ud", wtf);
   	puts(dst);

    return(0);
}
