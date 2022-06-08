/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reverse_iterator.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 15:26:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/08 18:15:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
	iterator tags: 
		- https://cplusplus.com/reference/iterator/reverse_iterator/?kw=reverse_iterator
*/

#include <cstddef>
#include <ft_iterator_traits.hpp>

namespace ft
{
	template<class Iterator>
	class reverse_iterator 
	:	public	iterator<class iterator_traits<Iterator>::iterator_category,
				class ft::iterator_traits<Iterator>::value_type,
				class ft::iterator_traits<Iterator>::difference_type,
				class ft::iterator_traits<Iterator>::pointer,
				class ft::iterator_traits<Iterator>::reference>
	{
		public:
			Iterator											iterator_type;
			ft::iterator_traits<Iterator>::iterator_category	iterator_category;
			ft::iterator_traits<Iterator>::value_type			value_type;
			ft::iterator_traits<Iterator>::difference_type		difference_type;
			ft::iterator_traits<Iterator>::pointer				pointer;
			ft::iterator_traits<Iterator>::reference			reference;
			reverse_iterator() {};
			iterator_type	base() const
			{
				//content;
			};
			reference		operator*() const
			{
				// content;
			};


	};
}
