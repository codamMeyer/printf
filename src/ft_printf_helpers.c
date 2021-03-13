/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_helpers.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/29 16:53:06 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:06:03 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <inc/ft_printf_helpers.h>
#include <inc/utils.h>
#include <libft/libft.h>

t_bool	is_valid(const char **format)
{
	const char		cur = *(*format);
	const char		prev = *(*format - 1);
	const t_bool	is_valid_flag = (is_flag(cur) && !is_flag(prev));
	const t_bool	is_valid_modifier = (is_modifier(cur) && !is_flag(prev));

	return (is_valid_flag || is_valid_modifier);
}

int		find_char_index(const char *format)
{
	int index;

	index = 0;
	while (*format != '%' && *format != '\0')
	{
		++format;
		++index;
	}
	return (index);
}
