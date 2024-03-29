/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:59:38 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/14 15:39:04 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	test;
	int	i;

	test = 1;
	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0' && test == 1)
		{
			if (str[i] < 'A' || str[i] > 'Z')
				test = 0;
			i++;
		}
	}
	return (test);
}
