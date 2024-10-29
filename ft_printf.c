/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdawai <cdawai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:29:50 by cdawai            #+#    #+#             */
/*   Updated: 2024/10/29 15:54:34 by cdawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	print_type(const char *input, va_list *args)
{
	int	length;

	length = 0;
	if (*input == 'c')
		length += print_char(va_arg(*args, int));
	else if (*input == 's')
		length += print_str(va_arg(*args, char *));
	else if (*input == 'p')
		length += print_ptr(va_arg(*args, void *));
	else if (*input == 'd' || *input == 'i')
	{
		length += print_int(va_arg(*args, int));
	}
	else if (*input == 'u')
		length += print_unsignedint(va_arg(*args, int));
	else if (*input == 'x' || *input == 'X' )
		length += print_hex((va_arg(*args, int)), *input);
	else if (*input == '%')
		length += print_char('%');
	return (length);
}

int	ft_printf(const char *input, ...)
{
	va_list		args;
	int			length;

	va_start(args, input);
	length = 0;
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX%", *input))
			{
				length += print_type(input, &args);
				input++;
				continue ;
			}
		}
		length += print_char(*input);
		input++;
	}
	va_end(args);
	return (length);
}

int	main(void)
{
	char *str = "apple";
	// printf("==Ptr is: %p==\n", str);
	// ft_printf("Decimal is %d\n", 35631);
	// ft_printf("Int is %i\n", 35631);
	// ft_printf("Ptrf is: %p\n", str);
	// ft_printf("hex is %x\n", 35631);
	// ft_printf("Hex is %X\n", 35631);
	// ft_printf("Just print %%\n");
	// printf("Test for p: %p", "apple");
	printf("test %i");
	return (0);
}

// Handle the Conversions:

// %c: Print a single character.
// %s: Print a string.
// %p: Print a void pointer in hexadecimal.
// %d / %i: Print a signed integer (base 10).
// %u: Print an unsigned integer (base 10).
// %x / %X: Print an unsigned integer in hexadecimal (lowercase/uppercase).
// %%: Print a literal percent sign.
