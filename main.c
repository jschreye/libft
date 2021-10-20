/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:52:43 by jschreye          #+#    #+#             */
/*   Updated: 2021/10/13 16:36:56 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*int main()
{
 char		dest[4] = "";
 const char	src[40] = "1010023456789";

 printf("avant dest = %s, src = %s\n", dest, src);
 printf("%lu\n", ft_strlcat(dest, src, 3));
 printf("apres dest = %s, src = %s\n", dest, src);
 return (0);
}*/
int main()
{
    char str[50] = "salut les potes";
    printf("\nbeford ft_bzero(): %s\n\n", str);
    ft_bzero(str + 11, 6);
    printf("after ft_bzero(): %s\n\n", str);
    return (0);
}
