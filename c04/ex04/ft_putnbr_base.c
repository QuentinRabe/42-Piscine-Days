/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:34:17 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/23 11:02:38 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < ft_strlen(str))
	{
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
			{
				return (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	ft_verify_base(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
	{
		return (1);
	}
	if (ft_double_char(base))
	{
		return (1);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	convert(long n, char *base)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= ft_strlen(base))
		convert(nbr / ft_strlen(base), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = (long) nbr;
	if (ft_verify_base(base) == 0)
	{
		convert(n, base);
	}
}
