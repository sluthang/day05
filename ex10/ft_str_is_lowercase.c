/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:35:16 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/24 17:27:16 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_lowercase(char *str);

int main()
{
  char str[20] = "Thisisabootcamp";
  int c;
  c = ft_str_is_lowercase(str);
  printf("%d\n",c);
  return 0;
}	


int ft_str_is_lowercase(char *str)
{
   int i ;
   i = 0;
   char c ;
   while (str[i] !='\0')
   {
       c = str[i++];
	   if(c < 'A' || c <'Z' )
	   {
	      return 0;
	   
	   }	   
	      
   }	   
   return 1;
}	
