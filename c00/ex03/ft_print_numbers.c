/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:38:57 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/11 15:10:29 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	number;
	int		count;

	number = '0';
	count = 0;
	{
		while (count < 10)
		{
			write(1, &number, 1);
			count++;
			number++;
		}
	}
}
