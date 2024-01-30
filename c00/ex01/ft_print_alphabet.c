/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:25:10 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/11 15:07:43 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letter;
	int		counter;

	letter = 'a';
	counter = 0;
	{
		while (counter < 26)
		{
			write(1, &letter, 1);
			counter++;
			letter++;
		}
	}
}
