/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@42.mg>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:25:01 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/04 13:25:01 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlower(char *str)
{
	while (*str)
	{
		if (*str && (*str >= 'A' && *str <= 'Z'))
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	is_inside;
	int	i;

	ft_strlower(str);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '-' || str[i] == '+'))
			i++;
		is_inside = 0;
		while (str[i] && (str[i] != ' ' && str[i] != '-' && str[i] != '+'))
		{
			if (is_inside == 0)
			{
				is_inside = 1;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "hello wolrd";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }
