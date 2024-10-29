/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:29:57 by cdawai            #+#    #+#             */
/*   Updated: 2024/10/28 23:48:17 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int	print_char(char c);
int	print_str(char *s);
int	print_int(int d);
int	print_unsignedint(int u);
int	print_hex(int x, char input);
int	print_ptr(int *ptr);
int	print_ptrhex(int x, char input);
#endif