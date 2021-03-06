/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_helpers.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/29 17:01:01 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:23 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_HELPERS_H
# define FT_PRINTF_HELPERS_H
# include <inc/defs.h>

t_bool	is_valid(const char **format);
int		find_char_index(const char *format);

#endif
