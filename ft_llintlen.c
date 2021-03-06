/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llintlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:16:40 by antonga           #+#    #+#             */
/*   Updated: 2018/06/14 05:21:36 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_llintlen(long long int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
