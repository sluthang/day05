/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:31:29 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/24 17:53:50 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int ft_str_uppercase(char *str);

int main()
{
  char str[20] = "Sinethemba";
  int test;
  test = ft_str_uppercase(str);
  printf("%d\n",test);
  return 0;

}   	

int ft_str_uppercase(char *str)
{
   char c ;
   int i ;
   i = 0 ;
   while(str[i] != '\0')
   {      
	   c = str[i++];
       if(c <'a' || c <'z')
	   {
	         return 1;
	   }		   
      
   }
   return 0;   
}	

