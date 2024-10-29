/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:43 by cdawai            #+#    #+#             */
/*   Updated: 2024/10/28 21:56:29 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_unsignedint(int u)
{
	int	length;

	length = 0;
	if (u < 0)
		u = -u;
	ft_putnbr_fd(u, 1);
	length++;
	while (u > 10)
	{
		u = u / 10;
		length++;
	}
	printf("; Lenght is: %d; U is %u;", length, u);
	return (length);
}
