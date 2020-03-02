/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:40:22 by bkasandr          #+#    #+#             */
/*   Updated: 2020/03/02 10:40:27 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen(unsigned *s)
{
    size_t	len;

    len = 0;
    while (*s != L'\0')
    {
        len += ft_wcharlen(*s);
        ++s;
    }
    return (len);
}