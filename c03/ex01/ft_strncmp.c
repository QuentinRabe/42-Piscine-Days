/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:05:49 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/18 10:32:17 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				res;

	index = 0;
	res = 0;
	while ((s1[index] != '\0' || s2[index] != '\0')
		&& (index < n) && (res == 0))
	{
		if (s1[index] < s2[index])
			res = -1;
		if (s1[index] > s2[index])
			res = 1;
		index++;
	}
	return (res);
}
