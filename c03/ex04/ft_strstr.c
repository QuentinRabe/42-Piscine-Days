/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:43:33 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/29 14:12:06 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	test;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			test = 1;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					test = 0;
				i++;
			}
			if (test)
				return (str);
		}
		str++;
	}
	return (0);
}
