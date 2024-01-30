/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:22:31 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/12 13:24:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	f_count;
	int	l_count;
	int	tmp;

	f_count = 0;
	l_count = size - 1;
	while (f_count < (size / 2))
	{
		tmp = tab[f_count];
		tab[f_count] = tab[l_count];
		tab[l_count] = tmp;
		f_count++;
		l_count--;
	}
}
