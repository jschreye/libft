/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:33:21 by jschreye          #+#    #+#             */
/*   Updated: 2021/10/20 09:51:10 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nbrmot(char *s, char c)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] == c && s[i + 1] != c))
			i2++;
		i++;
	}
	return (i2);
}
char	ft_taille(char *s, int count)
{
		
}
char	ft_libre(char const **s, char c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(s[i]);
		i++;
	}
	free(s);
}
char	**ft_split(char const *s, char c)
{
	void	*i;

	i = malloc(ft_strlen(s) * sizeof (char));
	if (!s || !c)
		return (NULL);
	if (*s != c)
		return ((char **)s);
	return (0);
}
int main()
{
	char	*s = "a       saalut   les aa  freres   aabc   a";
	char	d = 'a';

	printf("%d", ft_nbrmot(s, d));
}
