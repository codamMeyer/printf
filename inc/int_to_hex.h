/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   int_to_hex.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:30:21 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/13 17:33:09 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_TO_HEX_H
# define INT_TO_HEX_H

char	*ulong_int_to_hex(unsigned long int nbr, int to_upper);
char	*int_to_hex(int nbr, int to_upper);

#endif
