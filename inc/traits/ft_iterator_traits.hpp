/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_traits.hpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 19:27:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 19:51:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
	iterator tags: 
		- https://www.cplusplus.com/reference/iterator/InputIterator/
		- https://en.cppreference.com/w/cpp/iterator/iterator_tags
		- https://docs.w3cub.com/cpp/iterator/iterator_traits
*/

#include <cstddef>
namespace ft
{
	// iterator tags
	struct	input_iterator_tag {};
	struct	output_iterator_tag {};
	struct	forward_iterator_tag : public input_iterator_tag {};
	struct	bidirectional_iterator_tag : public forward_iterator_tag {};
	struct	random_access_iterator_tag : public	bidirectional_iterator_tag {};

	template<typename _category, typename _value_type, typename _diff_type, 
			typename _pointer = _value_type*, typename _reference = _value_type&>
	struct iterator
	{
		typedef	_category	iterator_category; // one of the iterator_tags tag types
		typedef _value_type	value_type; // the type "pointed to" by the iterator
		typedef _diff_type	difference_type; // the distance between iterators
		typedef _pointer	pointer; // the type of a pointer-to-value_type
		typedef _reference	reference; // the type of a reference-to-value_type
	};
	
	template< class _Iter >
	struct iterator_traits
	{
		typedef typename	_Iter::difference_type		difference_type;
		typedef typename	_Iter::value_type			value_type;
		typedef typename	_Iter::pointer				pointer;
		typedef typename	_Iter::reference			reference;
		typedef typename	_Iter::iterator_category	iterator_category;
	};

	template< class T >
	struct iterator_traits<T*>
	{
		typedef typename	std::ptrdiff_t					difference_type;
		typedef typename	T								value_type;
		typedef typename	T*								pointer;
		typedef typename	T&								reference;
		typedef typename	ft::random_access_iterator_tag	iterator_category;
	};

	template< class T >
	struct iterator_traits<const T*>
	{
		typedef typename	std::ptrdiff_t					difference_type;
		typedef typename	T								value_type;
		typedef typename	const T*						pointer;
		typedef typename	const T&						reference;
		typedef typename	ft::random_access_iterator_tag	iterator_category;
	};
};
