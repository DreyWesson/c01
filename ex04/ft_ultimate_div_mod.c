/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:00:44 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/26 18:40:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
	write(1,&(*a), 1);
}

int	main(void)
{
	int x, y, *ptr, *ptr2;

	x = 4;
	y = 2;
	ptr = &x;
	ptr2 = &y;

	ft_ultimate_div_mod(ptr,ptr2);
	return (0);
}
