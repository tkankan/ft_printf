/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:39:04 by tkankan           #+#    #+#             */
/*   Updated: 2022/04/21 13:20:11 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	long long int	n;
	int				len;

	n = nbr;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += ft_putchar('-');
	}
	if (!(n >= 0 && n <= 9))
	{
		len += ft_putnbr(n / 10);
	}
	len += ft_putchar((n % 10) + 48);
	return (len);
}

int	ft_printnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	len += ft_putnbr(nbr);
	return (len);
}

int	ft_print_unsigned(unsigned int unbr)
{
	int	len;

	len = 0;
	if (unbr == 0)
		return (write(1, "0", 1));
	len += ft_putnbr(unbr);
	return (len);
}
