/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djon-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:59:34 by djon-con          #+#    #+#             */
/*   Updated: 2018/11/30 18:12:01 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int i)
{
	if (i >= 0 || i == -2147483648)
		return (i);
	else
		return (-i);
}
