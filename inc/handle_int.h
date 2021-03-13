/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_int.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:29:28 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:46 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_INT_H
# define HANDLE_INT_H
# include <stdarg.h>
# include <inc/t_flag.h>

int handle_int(const char **format, va_list args, t_flag *cur_flag);
int handle_unsigned(const char **format, va_list args, t_flag *cur_flag);

#endif
