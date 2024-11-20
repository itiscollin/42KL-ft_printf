/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:48:28 by cdawai            #+#    #+#             */
/*   Updated: 2024/08/16 19:01:14 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	size_t	finish;
	char	*dest;

	if (!s)
		return (0);
	substr_len = ft_strlen(s);
	finish = 0;
	if (start < substr_len)
		finish = substr_len - start;
	if (finish > len)
		finish = len;
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (0);
	ft_strlcpy (dest, s + start, finish + 1);
	return (dest);
}
