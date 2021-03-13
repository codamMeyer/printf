/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_char.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:29:00 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:32 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_CHAR_H
# define HANDLE_CHAR_H
# include <stdarg.h>
# include <inc/t_flag.h>

int handle_char(const char **format, va_list args, t_flag *cur_flag);

#endif
