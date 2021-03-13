/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   int_to_hex.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 22:16:19 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:09:29 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <inc/int_to_hex.h>
#include <inc/int_to_hex_helpers.h>

char			*ulong_int_to_hex(unsigned long int nbr, int to_upper)
{
	return (put_long_number(nbr, to_upper));
}

char			*int_to_hex(int nbr, int to_upper)
{
	return (put_number(nbr, to_upper));
}
