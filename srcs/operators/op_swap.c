/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:43:19 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/28 15:11:40 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*third;

	first = *stack;
	if (first != NULL && first->next != NULL)
	{
		first = *stack;
		third = first->next->next;
		*stack = first->next;
		(*stack)->next = first;
		(*stack)->next->next = third;
		return (0);
	}
	return (1);
}

void	ft_swap_a(t_stack **stack_a)
{
	if (ft_swap(stack_a) == 0)
		ft_printf("sa\n");
}

void	ft_swap_b(t_stack **stack_b)
{
	if (ft_swap(stack_b) == 0)
		ft_printf("sb\n");
}

void	ft_swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_swap(stack_a) == 0 || ft_swap(stack_b) == 0)
		ft_printf("ss\n");
}
