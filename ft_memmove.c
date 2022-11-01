/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:22:58 by rel-fila          #+#    #+#             */
/*   Updated: 2022/10/18 22:01:09 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	ds = (char *) dst;
	sr = (char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (ds < sr)
		return (ft_memcpy(ds, sr, len));
	while (len--)
		ds[len] = sr[len];
	return (ds);
}
