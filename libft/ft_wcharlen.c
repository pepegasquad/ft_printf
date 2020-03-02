/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:39:57 by bkasandr          #+#    #+#             */
/*   Updated: 2020/03/02 10:39:57 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcharlen(unsigned wc)
{
    if (wc < 0x80)
        return (1);
    else if (wc < 0x800)
        return (2);
    else if (wc < 0x10000)
        return (3);
    return (4);
}