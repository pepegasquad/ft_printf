/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 09:33:54 by bkasandr          #+#    #+#             */
/*   Updated: 2020/03/02 12:45:47 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int printf( const char *format , ...);

int main(void)
{
	ft_printf("{%f}{%lf}\n", 1., 1.l);
	printf("{%f}{%lf}", 1., 1.l);
	return 0;
}