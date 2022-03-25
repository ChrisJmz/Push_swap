/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:36:44 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/25 11:30:32 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if (ac < 3)
    {
        printf(RED "Usage: ./push_swap <arg> ...\n" RESET);
        return (1);
    }
    if (ft_check(ac, av, &stack_a) == 0)
    {
        ft_fill_index(stack_a);
        index_stack(&stack_a);
        sort(&stack_a, &stack_b);
    }
}