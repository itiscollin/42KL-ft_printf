/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 05:07:26 by cdawai            #+#    #+#             */
/*   Updated: 2024/09/13 12:19:44 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(1));
	total_size = count * size;
	if (total_size == 0 || total_size / count != size)
		return (NULL);
	pointer = malloc(total_size);
	if (!pointer)
	{
		free(pointer);
		return (NULL);
	}
	ft_memset(pointer, 0, total_size);
	return (pointer);
}
