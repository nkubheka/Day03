/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:21:12 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 09:26:13 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_swap(int *a, int *b);
	int main()
{
	int x, y;
	printf("Enter the value of x ");
	scanf("%d", &x);
	printf("\nEnter the value of y ");
	scanf("%d", &y);

	int temp = x;
	x = y;
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}
