/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@42.mg>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:42:49 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/05 10:11:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_strs(char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	count_sep(char	*sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int	count_total_length(char **strs, char *sep, int size)
{
	int	length;

	length = count_strs(strs);
	length += count_sep(sep) * (size - 1);
	return (length);
}

void	ft_strcat(int size, char **strs, char *sep, char *str)
{
	int	i;

	i = 0;
	while (i < count_total_length(strs, sep, size))
	{

	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *join;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	join = (char *)malloc(sizeof(char) * (count_total_length(strs, sep, size) + 1));



}

int	main(void)
{
	char	*strs[] = {
		"Andyh",
		"Rabefamantanatsoa",
		"Fahasoavana",
		"Manambina",
		NULL
	};
	char	*sep = "||";

	printf("Il nous faut allouer %d octets.\n", count_strs(strs));
	printf("Au total il nous faut allouer %d octets.\n", count_total_length(strs, sep, 4));
}
