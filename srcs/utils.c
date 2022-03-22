/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:11:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/22 14:33:30 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_last(t_stack **alst, t_stack *new)
{
	t_stack	*ptr;

	if (*alst == NULL)
		*alst = new;
	else
	{
		ptr = *alst;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new;
	}
}

t_stack	*ft_stack_new(int content)
{
	t_stack	*p;

	p = malloc(sizeof(t_stack));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

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