/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathispeyre <mathispeyre@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:37 by mathispeyre       #+#    #+#             */
/*   Updated: 2024/11/06 15:22:58 by mathispeyre      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = start;
	j = 0;
	result = (char *)malloc(len + 1);
	if (!result || !s)
		return (0);
	while (i < ft_strlen(s) && j < len)
		result[j++] = s[i++];
	result[j] = 0;
	return (result);
}
