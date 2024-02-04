/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@42.mg>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:24:17 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/04 14:38:52 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		length;
	int		i;

	length = ft_strlen(src);
	dup = (char *)malloc(sizeof(char)  * (length + 1));
	if (!dup)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	src[] = "Bonjour les amis de chez 42";
	char	*dup;
	int	i = 0;

	dup = ft_strdup(src);
	while (i < (ft_strlen(src)))
	{
		if (src[i] =='\0')
			write(1, "0", 1);
		else
			write(1, &dup[i], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
