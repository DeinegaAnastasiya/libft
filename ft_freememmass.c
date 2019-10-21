/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freememmass.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 13:56:39 by poatmeal          #+#    #+#             */
/*   Updated: 2019/09/22 14:00:13 by poatmeal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_freememmass(char **memmass)
{
	while (memmass && *memmass)
		free(*memmass++);
	free(memmass);
	memmass = NULL;
	return (memmass);
}
