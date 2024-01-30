/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:24:58 by arabefam          #+#    #+#             */
/*   Updated: 2024/01/12 13:26:07 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	current;
	int	next;
	int	tmp;

	current = 0;
	while (current < size)
	{
		next = current + 1;
		while (next < size)
		{
			if (tab[current] > tab[next])
			{
				tmp = tab[current];
				tab[current] = tab[next];
				tab[next] = tmp;
			}
			next++;
		}
		current++;
	}
}
