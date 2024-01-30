#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "this 1s a sentence";

	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
