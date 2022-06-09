/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_equal_lexicographic_compare.hpp                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 17:13:09 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 17:15:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// https://cplusplus.com/reference/algorithm/lexicographical_compare/

namespace ft
{
	template <class InputIterator1, class InputIterator2>
		bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                                InputIterator2 first2, InputIterator2 last2)
	{
		while (first1 != last1)
		{
			if (first2 == last2 || *first2 < *first1)
				return false;
			else if (*first1 < *first2) 
				return true;
			++first1; 
			++first2;
  		}
  		return (first2 != last2);
	};
}
