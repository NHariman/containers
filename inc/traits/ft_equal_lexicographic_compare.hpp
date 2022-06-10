/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_equal_lexicographic_compare.hpp                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 17:13:09 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/10 14:13:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// https://cplusplus.com/reference/algorithm/lexicographical_compare/
// https://www.javatpoint.com/cpp-algorithm-lexicographical_compare-function

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

	template <class InputIterator1, class InputIterator2, class Compare>
 		bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                                InputIterator2 first2, InputIterator2 last2,
                                Compare comp)
	{
		while (first1 != last1)
		{
			if (first2 == last2 || comp(*first2, *first1))
				return false;
			else if (comp(*first1, *first2)) 
				return true;
			++first1; 
			++first2;
  		}
  		return (first2 != last2);
	};
}
