#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
    char    str1[] = "this will be overwritten.";
    char    str2[] = "this is the original text, constant";
	unsigned int	n;

	n = sizeof(str2);
    printf("To Overwrite: %s\n", str1);
    printf("To Copy: %s\n", str2);
    ft_strncpy(str1, str2, n);
    printf("Destination Overwritten: %s", str1);
}
