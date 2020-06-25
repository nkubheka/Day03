/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:40:19 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 09:45:02 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  ft_swap(int *a, int *b);
int main() {
	int x, y;
	printf("Enter value of x ");
	scanf("%d", &x);
	printf("\nEnter value of y ");
	scanf("%d", &y);

	int temp = x;
	x = y;
	y = temp;

	printf("\nAfter swap: x = %d, y = %d", x, y);
	return 0;
}
