/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:30:02 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/18 08:40:49 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	index_d;
	int	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d] != '\0')
	{
		index_d++;
	}
	while (src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_d++;
		index_s++;
	}
	dest[index_d] = '\0';
	return (dest);
}
