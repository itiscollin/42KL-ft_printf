/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:43 by cdawai            #+#    #+#             */
/*   Updated: 2024/11/07 16:35:45 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_unsignedint(unsigned int u)
{
	int	length;

	length = 0;
	if (u == 0)
	{
		print_char('0');
		return (1);
	}
	if (u >= 10)
		length += print_unsignedint(u / 10);
	length += print_char(u % 10 + '0');
	return (length);
}
