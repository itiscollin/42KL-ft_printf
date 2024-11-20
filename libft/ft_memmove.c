/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 03:38:10 by cdawai            #+#    #+#             */
/*   Updated: 2024/09/08 16:50:51 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*strdest;
	char	*strsrc;

	strsrc = (char *)src;
	strdest = (char *)dest;
	if (strsrc == (NULL) && strdest == (NULL))
		return (dest);
	if (strdest > strsrc)
	{
		strdest += len;
		strsrc += len;
		while (len-- > 0)
			*--strdest = *--strsrc;
	}
	else
	{
		while (len-- > 0)
			*strdest++ = *strsrc++;
	}
	return (dest);
}
