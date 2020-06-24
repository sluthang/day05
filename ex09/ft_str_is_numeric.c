/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:03:27 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/24 11:33:40 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
  char str[20]= "111112223250";
  int c;
  c = ft_str_is_numeric(str);
  printf("%d\n", c);
  return 0;

}	


int ft_str_is_numeric(char *str)
{
   int i;
   i = 0;
   char c ;
   while (str[i] != '\0')
   { 
	  c = str[i++]; 
      if(c < '0' || c > '9' )
	  {
	       return 0;
	
	  }	  
	    
    }	return 1;   

}	

