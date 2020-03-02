/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:38:08 by bkasandr          #+#    #+#             */
/*   Updated: 2020/03/02 10:38:08 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchri(char *s, int c, int i)
{
    while (s[++i])
        if (s[i] == c)
            return (i);
    return (-1);
}

int		ft_strchri_lu(char *s, int c, int i)
{
    i = -1;
    while (s[++i])
        if (s[i] == c || s[i] == c + 32)
            return (i);
    return (-1);
}