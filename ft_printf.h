/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:29:57 by cdawai            #+#    #+#             */
/*   Updated: 2024/11/20 14:56:14 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	print_char(char c);
int	print_str(char *s);
int	print_int(int d);
int	print_unsignedint(unsigned int u);
int	print_hex(unsigned long x, char input);
int	print_ptr(void *ptr);
int	ft_putnbrbase(unsigned int x, char input);
#endif