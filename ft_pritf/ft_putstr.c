/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:02:11 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 13:44:23 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putcha(char c)
{
	write (1, &c, 1);
}

int	ft_putstr(char	*str, int l)
{
	int	c;

	c = 0;
	if (str == NULL)
	{
		ft_putstr ("(null)", l);
		return (l + 6);
	}
	while (str && str[c] != '\0')
	{
		ft_putcha(str[c]);
		l++;
		c++;
	}
	return (l);
}
