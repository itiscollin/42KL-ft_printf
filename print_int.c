/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:23 by cdawai            #+#    #+#             */
/*   Updated: 2024/11/07 14:18:45 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int d)
{
	int	length;

	length = 0;
	if (d == -2147483648)
	{
		length += print_str("-2147483648");
		return (length);
	}
	if (d < 0)
	{
		length += print_char('-');
		d = -d;
	}
	ft_putnbr_fd(d, 1);
	length++;
	while (d >= 10)
	{
		d = d / 10;
		length++;
	}
	return (length);
}
