/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:28:07 by jschreye          #+#    #+#             */
/*   Updated: 2021/10/21 17:23:50 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		t;

	if (!s1 || !s2)
		return (NULL);
	t = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(t * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, t);
	ft_strlcat(str, s2, t);
	return (str);
}
