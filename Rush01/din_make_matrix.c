/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   din_make_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:54 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/24 18:06:23 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	tab(char *str, int n)
{
	int	i;
	int	k;
	int	mat[n + 2][n + 2];
	int	j;

	i = 0;
	k = 0;
	while (k < n)
	{
		mat[n][k] = str[i];
		mat[n + 1][k] = str[i + n * 2];
		k++;
		i += 2;
	}
	k = 0;
	while (k < n)
	{
		mat[k][n] = str[i];
		mat[k][n + 1] = str[i + n * 2];
		k++;
		i += 2;
	}
}
       
                    
  
                
                   
      
  
                    
  
                
                                 
                    
  
                    
  
                       
                                 
                    
  
                    
  
                
                                 
                    
  
 
        
                        
  
                
                                 
                    
  
                        
  
                
                                 
                    
  
                        
  
                       
                                 
                    
  
                        
  
                
                                 
                    
  
                    
  
                  
  
                    
  
                  
  
                    
  
                  
  
                    
  
                  
  
                        
  
                  
  
                        
  
                  
  
                        
         
                  
  
                        
  
                  
  

                                                                      
                                                                                             
                                                                             
                                                                                             
 

                               
 
                 
            
 
