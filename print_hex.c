/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:18 by cdawai            #+#    #+#             */
/*   Updated: 2024/11/20 14:56:21 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbrbase(unsigned int x, char input)
{
	char	*baselow;
	char	*baseupper;

	baselow = "0123456789abcdef";
	baseupper = "0123456789ABCDEF";
	if (input == 'x')
		return (print_char(baselow[x]));
	else if (input == 'X')
		return (print_char(baseupper[x]));
	return (0);
}

int	print_hex(unsigned long x, char input)
{
	int	length;

	length = 0;
	if (x >= 16)
	{
		length += print_hex(x / 16, input);
	}
	length += ft_putnbrbase(x % 16, input);
	return (length);
}

int	print_ptr(void *ptr)
{
	int	lenght;

	lenght = 0;
	lenght += print_str("0x");
	lenght += print_hex((unsigned long) ptr, 'x');
	return (lenght);
}
// int	print_ptrhex(int x, char input)
// {
// 	int	length;

// 	length = 0;
// 	length += ft_putstr("0x");
// 	length = print_hex(x, x);
// }
