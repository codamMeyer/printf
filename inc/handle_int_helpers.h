/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_int_helpers.h                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 16:56:39 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:04:44 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_INT_HELPERS_H
# define HANDLE_INT_HELPERS_H
# include <inc/t_flag.h>

char			*unsigned_to_string(unsigned int nb);
void			check_if_negative(int *n, t_flag *cur_flag);
int				calculate_num_len(int n, char *num, t_flag *cur_flag);
int				calculate_char_count(int num_len, t_flag *cur_flag);

#endif
