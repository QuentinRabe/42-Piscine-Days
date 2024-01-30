/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:33:58 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/11 15:09:43 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	int		alphabet_counter;

	letter = 'z';
	alphabet_counter = 0;
	{
		while (alphabet_counter < 26)
		{
			write(1, &letter, 1);
			alphabet_counter++;
			letter--;
		}
	}
}
