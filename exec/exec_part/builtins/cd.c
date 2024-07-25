/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahoumou <kahoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:00:54 by kahoumou          #+#    #+#             */
/*   Updated: 2024/07/25 15:28:14 by kahoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "builtins.h"


int cd(t_cmd *cmd, t_adress *env)
{
    t_adress *adress;
        
    if(!cmd->arg)
    {
            preror("No such file or directory\n");
            return(1);
    }
    adress -> adress_for_path = take_adresse_of_path(adress);
    adress -> adress_for_new_path = take_adress_of_path(env);
    
    return(0);
}
