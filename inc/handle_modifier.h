/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_modifier.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:29:33 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:49 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_MODIFIER_H
# define HANDLE_MODIFIER_H
# include <stdarg.h>
# include <inc/t_flag.h>

void	handle_modifier(const char **format, va_list args, t_flag *cur_flag);

#endif
