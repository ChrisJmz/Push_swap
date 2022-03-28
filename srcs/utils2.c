/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:17:14 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/28 15:17:19 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_stack(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	ft_lstsize2(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	ft_fill_index(t_stack *stack_a)
{
	int	i;

	i = -1;
	while (stack_a)
	{
		stack_a->index = i;
		stack_a = stack_a->next;
	}
}

void	ft_fill_index_2(t_stack *stack_a, int i)
{
	t_stack	*minimum;
	t_stack	*tmp;

	minimum = stack_a;
	while (minimum->index != -1)
		minimum = minimum->next;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index == -1 && minimum->content > tmp->content)
			minimum = tmp;
		tmp = tmp->next;
	}
	minimum->index = i;
}

void	index_stack(t_stack **stack_a)
{
	t_stack	*temp;
	int		i;
	int		size;

	i = 0;
	temp = *stack_a;
	size = ft_lstsize2(temp);
	while (i < size)
		ft_fill_index_2(temp, i++);
}
