/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:57:59 by rel-fila          #+#    #+#             */
/*   Updated: 2022/10/19 11:00:04 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		length;
	char	*hay;
	char	*nid;

	hay = (char *) haystack;
	nid = (char *) needle;
	if (*nid == '\0')
		return (hay);
	if (len == 0)
		return (0);
	i = 0;
	length = ft_strlen(nid);
	while (hay[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((hay + i), nid, length) == 0)
		{
			return (hay + i);
		}
		i++;
	}
	return (NULL);
}
