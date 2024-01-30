/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:40:12 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/11 15:14:12 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_useful(int n);

void	ft_print_useful(int n)
{
	char	f_char;
	char	s_char;

	if (n < 10)
	{
		write(1, "0", 1);
		s_char = n + '0';
		write(1, &s_char, 1);
	}
	if (n > 10)
	{
		f_char = n / 10 + '0';
		s_char = n % 10 + '0';
		write(1, &f_char, 1);
		write(1, &s_char, 1);
	}
}

void	ft_print_comb2(void)
{
	int	f_num;
	int	s_num;

	f_num = 0;
	while (f_num < 99)
	{
		s_num = f_num + 1;
		while (s_num < 100)
		{
			ft_print_useful(f_num);
			write(1, " ", 1);
			ft_print_useful(s_num);
			if (f_num <= 97 && s_num <= 99)
			{
				write(1, ", ", 2);
			}
			s_num++;
		}
		f_num++;
	}
}
