/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   t_flag.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:30:59 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/02/04 09:29:41 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FLAG_H
# define T_FLAG_H
# include <inc/defs.h>

# define UNINITIALIZED -1

typedef struct	s_flag
{
	int			width;
	int			precision;
	t_bool		left_align;
	t_bool		is_negative;
	char		padding_char;
	char		type;
}				t_flag;

t_bool			is_right_justified(const t_flag *cur_flag, int size);
t_bool			is_left_justified(const t_flag *cur_flag, int size);
t_bool			needs_to_adjust_precision(const t_flag *cur_flag, int size);
t_flag			create_flag_struct();

#endif
