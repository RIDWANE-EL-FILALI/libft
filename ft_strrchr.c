/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:38:33 by rel-fila          #+#    #+#             */
/*   Updated: 2022/10/18 22:27:13 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*sr;

	sr = (char *)str;
	len = ft_strlen(str);
	if (c == '\0')
		return (sr + len);
	while (len >= 0)
	{
		if (sr[len] == (char)c)
			return (sr + len);
		len--;
	}
	return (0);
}
