/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:47:31 by amsryan           #+#    #+#             */
/*   Updated: 2022/04/12 15:40:14 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

int	ft_printf(const char *form, ...);
int	ft_unbr(unsigned int n);
int	lennbr(int n);
int	ft_hex(unsigned int n, int len);
int	ft_uphex(unsigned int n, int len);
int	ft_putstr(char *str, int l);
int	ft_point(unsigned long long n, int len);

#endif
