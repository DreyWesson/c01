/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:02:19 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/27 07:40:09 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = size;
	j = 0;
	while (i > j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i--;
		j++;
	}
}
