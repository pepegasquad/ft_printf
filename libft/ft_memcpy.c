/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:34:54 by bkasandr          #+#    #+#             */
/*   Updated: 2020/03/02 10:34:54 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
  char *s;
  char *d;

  s = (char *)src;
  d = (char *)dest;
  while (n--)
    d[n] = s[n];
  return (dest);
}