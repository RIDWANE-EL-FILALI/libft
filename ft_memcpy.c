/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:10:43 by rel-fila          #+#    #+#             */
/*   Updated: 2022/10/18 21:24:56 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	ds = (char *) dst;
	sr = (char *) src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
