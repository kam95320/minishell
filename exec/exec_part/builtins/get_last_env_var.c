/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_last_env_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:51:14 by kahoumou          #+#    #+#             */
/*   Updated: 2024/07/24 14:51:29 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

t_variables *get_last_env_var(t_adress  *env)
{
    t_variables *var =   env ->variable;
    
    if(!var)
            return NULL;
            while(var -> next);
    reurn(var);
}