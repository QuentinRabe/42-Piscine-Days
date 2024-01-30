/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:48:46 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/11 15:13:07 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c);

void	ft_incr_char(char a, char b, char c);

void	ft_print(char a, char b, char c);

void	ft_print(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if (a < '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(comma);
		ft_putchar(space);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void	ft_incr_char(char a, char b, char c)
{
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	f_num;
	char	s_num;
	char	t_num;

	f_num = '0';
	s_num = '1';
	t_num = '2';
	ft_incr_char(f_num, s_num, t_num);
}
