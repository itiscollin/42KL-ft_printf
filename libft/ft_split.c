/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:36:04 by cdawai            #+#    #+#             */
/*   Updated: 2024/09/13 16:53:09 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	ft_delimstrl(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

void	putstr(char *dest, char const *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	count;

	if (!s)
		return (NULL);
	count = count_substr(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		str[j] = malloc(sizeof(char) * (ft_delimstrl(s + i, c) + 1));
		if (!str[j])
			free(str);
		putstr(str[j++], s + i, ft_delimstrl(s + i, c));
		i += ft_delimstrl(s + i, c);
	}
	str[j] = NULL;
	return (str);
}
