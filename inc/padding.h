/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   padding.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 19:47:46 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:05:14 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PADDING_H
# define PADDING_H
# include <inc/t_flag.h>

void	insert_left_padding(t_flag *cur_flag, int len, const char *src);
void	insert_right_padding(t_flag *cur_flag, int len, const char *src);
void	insert_padding (char c, int n);

#endif
