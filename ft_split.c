/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:02:15 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/11 22:28:14 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*freeall(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (NULL);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	verif(const char *s, char c)
{
	size_t	result;

	if (!ft_strchr(s, c))
		result = ft_strlen(s);
	else
		result = ft_strchr(s, c) - s;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = verif(s, c);
			lst[i++] = ft_substr(s, 0, word_len);
			if (lst[i - 1] == NULL)
				return (freeall(lst));
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
