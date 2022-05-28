/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:48:36 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 15:32:19 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_ptchar(char c)
{
	write(1, &c, 1);
}

void	ft_put(unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n > 9)
	{
		i = n / 10;
		ft_put(i);
	}
	j = n % 10 + '0';
	ft_ptchar(j);
}

int	ft_unbr(unsigned int n)
{
	int				len;
	unsigned int	nbr;

	nbr = n;
	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	ft_put(nbr);
	return (len);
}
