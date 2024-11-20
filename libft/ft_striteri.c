/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:12:35 by cdawai            #+#    #+#             */
/*   Updated: 2024/08/16 20:15:23 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*apply_func)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !apply_func)
		return ;
	i = 0;
	while (s[i])
	{
		apply_func(i, &s[i]);
		i++;
	}
}
