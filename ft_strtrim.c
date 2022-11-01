/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:40:16 by rel-fila          #+#    #+#             */
/*   Updated: 2022/10/16 15:02:38 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*tab;
	int		lenght;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str) - 1;
	lenght = len;
	start = 0;
	end = 0;
	while (str[start] != '\0' && (checkset(set, str[start]) == 1))
			start++;
	while (str[len] != '\0')
	{
		if (checkset(set, str[len]) == 1)
			end++;
		else
			break ;
		len--;
	}
	tab = ft_substr(str, start, (lenght - start - end + 1));
	return (tab);
}
