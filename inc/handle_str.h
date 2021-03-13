/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_str.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:30:03 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:51 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_STR_H
# define HANDLE_STR_H
# include <stdarg.h>
# include <inc/t_flag.h>

int handle_string(const char **format, va_list args, t_flag *cur_flag);

#endif
