/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:45:44 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/26 13:22:59 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}
int main() {
	int c = 0;
	ft_ft(&c);
	printf("%d\n", c);
	return 0;
}
