/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:38:17 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/18 14:45:47 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_check_space(char *str, int *index)
{
	while ((str[*index] >= 9 && str[*index] <= 13)
		|| str[*index] == 32)
		*index = *index + 1;
}

void	ft_check_parity(char *str, short *parity, int *index)
{
	while (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
			*parity = *parity + 1;
		*index = *index + 1;
	}
}

int	ft_atoi(char *str)
{
	short	parity;
	int		nbr;
	int		index;

	parity = 0;
	nbr = 0;
	index = 0;
	ft_check_space(str, &index);
	ft_check_parity(str, &parity, &index);
	while (str[index] >= 48 && str[index] <= 57)
	{
		nbr *= 10;
		nbr += str[index] - 48;
		index++;
	}
	if (!(parity % 2))
	{
		return (nbr);
	}
	else
		return (-nbr);
}
