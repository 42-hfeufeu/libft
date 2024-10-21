/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:13:22 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 20:02:31 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*def;
	int		i;

	if (!s)
		return (NULL);
	def = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (def == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		def[i] = f(i, s[i]);
		i++;
	}
	return (def);
}
