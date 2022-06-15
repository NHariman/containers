/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reverse_iterator.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 15:26:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/15 17:16:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
	iterator tags: 
		- https://cplusplus.com/reference/iterator/reverse_iterator/?kw=reverse_iterator
		- https://www.internalpointers.com/post/writing-custom-iterators-modern-cpp 
*/

#include <cstddef>
#include <ft_iterator_traits.hpp>

namespace ft
{
	// u gotta put this in the containers lol
	template<class Iterator>
		class reverse_iterator 
	:	public	ft_iterator<class ft::iterator_traits<Iterator>::iterator_category,
				class ft::iterator_traits<Iterator>::value_type,
				class ft::iterator_traits<Iterator>::difference_type,
				class ft::iterator_traits<Iterator>::pointer,
				class ft::iterator_traits<Iterator>::reference>
	{
		public:
			typedef Iterator											iterator_type;
			typedef ft::iterator_traits<Iterator>::iterator_category	iterator_category;
			typedef ft::iterator_traits<Iterator>::value_type			value_type;
			typedef ft::iterator_traits<Iterator>::difference_type		difference_type;
			typedef ft::iterator_traits<Iterator>::pointer				pointer;
			typedef ft::iterator_traits<Iterator>::reference			reference;
			reverse_iterator() {};
			iterator_type	base() const
			{
				//content;
			};
			reference		operator*() const
			{
				return (*pointer);
			};
			reverse_iterator	operator+ (difference_type n) const
			{
				this->difference_type += n;
				return (*this);
			};
			reverse_iterator&	operator+= (difference_type n)
			{
				this->difference_type += n;
				return (*this);
			};
			reverse_iterator&	operator++()
			{
				//
			};
			reverse_iterator	operator++(int)
			{
				//
			};
			reverse_iterator	operator- (difference_type n) const
			{
				//
			};
			reverse_iterator&	operator-= (difference_type n)
			{
				//
			};
			reverse_iterator&	operator--()
			{
				//
			};
			reverse_iterator	operator--(int)
			{
				//
			};
			pointer				operator->() const
			{
				//
			};
			reference			operator[] (difference_type n) const
			{
				//
			};
	};
	template <class Iterator>
 		bool operator== (const reverse_iterator<Iterator>& lhs,
                   const reverse_iterator<Iterator>& rhs)
		{
			//
		};
	template <class Iterator>
 		bool operator!= (const reverse_iterator<Iterator>& lhs,
                   const reverse_iterator<Iterator>& rhs)
		{
			//
		};
	template <class Iterator>
 		bool operator<= (const reverse_iterator<Iterator>& lhs,
                   const reverse_iterator<Iterator>& rhs)
		{
			//
		};
	template <class Iterator>
 		bool operator>= (const reverse_iterator<Iterator>& lhs,
                   const reverse_iterator<Iterator>& rhs)
		{
			//
		};
	template <class Iterator>
  	reverse_iterator<Iterator> operator+ (
             typename reverse_iterator<Iterator>::difference_type n,
             const reverse_iterator<Iterator>& rev_it)
		{
			//
		};
	template <class Iterator>
  	reverse_iterator<Iterator> operator- (
             typename reverse_iterator<Iterator>::difference_type n,
             const reverse_iterator<Iterator>& rev_it)
		{
			//
		};
}
