/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 07:57:45 by cdawai            #+#    #+#             */
/*   Updated: 2024/08/16 08:35:43 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (srclen < dstsize - 1)
	{
		copylen = srclen;
	}
	else
	{
		copylen = dstsize - 1;
	}
	ft_memcpy(dst, src, copylen);
	dst[copylen] = '\0';
	return (srclen);
}
