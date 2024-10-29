/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:30:18 by cdawai            #+#    #+#             */
/*   Updated: 2024/10/28 23:52:27 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	check_hextype(int num, char input)
{
	if (input == 'x' || input == 'p')
	{
		if (num >= 0 && num <= 9)
			return ('0' + num);
		else if (num >= 10 && num <= 15)
			return ('a' + (num - 10));
		else
			return (0);
	}
	if (input == 'X')
	{
		if (num >= 0 && num <= 9)
			return ('0' + num);
		else if (num >= 10 && num <= 15)
			return ('A' + (num - 10));
		else
			return (0);
	}
	return (0);
}

int	create_string(int x, int **arr)
{
	int	temp;
	int	j;

	j = 0;
	temp = x;
	while (temp > 16)
	{
		j++;
		temp = temp / 16;
	}
	*arr = (int *)malloc((j + 1) * sizeof (int));
	return (**arr);
}

int	print_hex(int x, char input)
{
	int			*arr;
	int			i;
	int			length;

	i = 0;
	create_string(x, &arr);
	while (x > 16)
	{
		arr[i] = x % 16;
		x = x / 16;
		i++;
	}
	arr[i] = x % 16;
	length = i;
	while (i > -1)
	{
		ft_putchar_fd(check_hextype(arr[i], input), 1);
		i--;
	}
	free (arr);
	return (length);
}

int	print_ptrhex(int x, char input)
{
	int			*arr;
	int			i;
	int			length;

	i = 0;
	create_string(x, &arr);
	while (i < 7)
	{
		arr[i] = x % 16;
		x = x / 16;
		i++;
	}
	arr[i] = x % 16;
	length = i;
	while (i > -1)
	{
		ft_putchar_fd(check_hextype(arr[i], input), 1);
		i--;
	}
	free (arr);
	return (length);
}
