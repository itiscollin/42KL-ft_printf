/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:33 by cdawai            #+#    #+#             */
/*   Updated: 2024/10/28 23:48:06 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_ptr(int *ptr)
{
	int		len;

	len = 0;
	if (ptr == NULL)
	{
		len += print_str("0x0");
	}
	len += print_str("0x1");
	len += print_ptrhex((*(int *)&ptr), 'p');
	return (len);
}
