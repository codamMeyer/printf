/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   math.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmeyer <mmeyer@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 19:17:46 by mmeyer        #+#    #+#                 */
/*   Updated: 2021/01/30 16:09:33 by mmeyer        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <inc/math.h>

int		max(int a, int b)
{
	return (a > b ? a : b);
}

int		min(int a, int b)
{
	return (a < b ? a : b);
}
