/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:36:44 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/22 14:26:03 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if (ac <= 1)
    {
        printf("Usage: ./push_swap <arg>\n");
        return (1);
    }
    if (ft_check(ac, av, &stack_a) == 0)
    {
        sort(&stack_a);
        while(stack_a != NULL)
        {
            while (stack_b != NULL)
            {
                ft_printf("%d\n", stack_b->content);
                stack_b = stack_b->next;
            }
            ft_printf("   ");
            ft_printf("%d\n", stack_a->content);
            stack_a = stack_a->next;
        }
        ft_printf("_  _\n");
        ft_printf("b  a\n");
      
    }
}