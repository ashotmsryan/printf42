/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:21:32 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 15:51:02 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hex(unsigned long long n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		n /= 16;
		l++;
	}
	return (l);
}

char	*mwhile(unsigned int j, char *hex, unsigned long long n)
{
	unsigned int	k;

	k = 0;
	while (n != 0)
	{
		j = n % 16;
		if (j <= 9)
		{
			j = j + '0';
			hex[k] = j;
			k++;
		}
		else if (j > 9 && j < 17)
		{
			j = j - 10 + 'a';
			hex[k] = j;
			k++;
		}
		n = n / 16;
	}
	return (hex);
}

int	ft_point(unsigned long long n, int l)
{
	unsigned int	j;
	int				h;
	char			*hex;

	l = len_hex(n);
	h = l;
	j = 0;
	if (n == 0)
		return (write (1, "0x0", 3));
	hex = malloc(sizeof (char) * l);
	if (!hex)
		return (0);
	hex = mwhile(j, hex, n);
	write (1, "0x", 2);
	l += 2;
	while (h--)
		write(1, &hex[h], 1);
	free(hex);
	return (l);
}
