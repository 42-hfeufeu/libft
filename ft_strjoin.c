/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:29:33 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 10:35:15 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*prod;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	prod = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (prod == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		prod[j] = s1[i++];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		prod[j] = s2[i++];
		j++;
	}
	prod[j] = '\0';
	return (prod);
}
