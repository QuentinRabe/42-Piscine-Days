/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:03:54 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/13 20:41:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	test;
	int	i;

	i = 0;
	test = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0' && test == 1)
		{
			if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
				test = 0;
			i++;
		}
	}
	return (test);
}
