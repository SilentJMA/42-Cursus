/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_comment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:20:46 by mjabane           #+#    #+#             */
/*   Updated: 2022/03/06 13:39:09 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The atoi function skips all white-space characters at the beginning of the string,
 converts the subsequent characters as part of the number,
 and then stops when it encounters the first character that isn't a number.
*/
int	ft_atoi(const char *str)
{
	int	i; //index for our string
	int	negative; // the sign for our number so we could handle if it was positive or negative.
	int	result; // the result we will get after all in the ft_atoi

	i = 0;
	negative = 1;
	result = 0;
	// here while we are going inside our string let us skip each white-space charcters we could find in the begining of the string.
	// in the ascii table are : space ' ' , new line '\n',form feed '\f', vertical tab '\v',carriage return '\r', horizontal tab '\t'
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\t' )
		i++;
	//here we need to check the nature of our number if its positive/negative
	//if positive that's cool lets proceed
	//if negative we need '-' next our number
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	// due to our number in the decimal base so '0123456789'
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		// why result * 10 because we need it as a part of the equation
		//let's say str is represented by char 4 which is in the ASCII table is 52
		//and we have the value of 0 in the ASCII table is 48
		// so 52 - 48 = 4 ;)
		// then we will have 10 * 10 + 4 = 104 so the 0 in the middle only place holder to make the int value big enough to add
		//the 4 to it, and it will keep repeating until we reach a part in the string where it's not digit.
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (negative * result);
}
