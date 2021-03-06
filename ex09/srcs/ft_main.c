/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 02:24:13 by seli              #+#    #+#             */
/*   Updated: 2018/10/02 19:32:17 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int argc, char **argv)
{
	long	x;
	long	y;
	t_ops	f;

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	f = ft_str_to_f(argv[2]);
	y = ft_atoi(argv[3]);
	f(x, y);
	ft_putchar('\n');
	return (0);
}
