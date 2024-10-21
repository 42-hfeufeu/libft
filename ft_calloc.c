/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:21:37 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/12 17:37:03 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb && nmemb * size / nmemb != size)
		return (NULL);
	mem = malloc (nmemb * size);
	if (!mem)
		return (NULL);
	mem = ft_memset(mem, 0, (nmemb * size));
	return (mem);
}
