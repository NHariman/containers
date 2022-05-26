/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_traits.hpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/26 19:27:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/26 20:07:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
	iterator tags: 
		- https://www.cplusplus.com/reference/iterator/InputIterator/
		- https://en.cppreference.com/w/cpp/iterator/iterator_tags
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

	template< class Iter >
	struct iterator_traits
	{
		typedef typename	Iter::difference_type	difference_type;
		typedef typename	Iter::value_type		value_type;
		typedef typename	Iter::pointer			pointer;
		typedef typename	Iter::reference			reference;
		typedef typename	Iter::iterator_category	iterator_category;
	};

	template< class T >
	struct iterator_traits<T*>
	{
		typedef typename	std::ptrdiff_t	difference_type;
		typedef typename	T				value_type;
		typedef typename	T*				pointer;
		typedef typename	T&				reference;
		typedef typename	ft::random_access_iterator_tag	iterator_category;
	};

	template< class T >
	struct iterator_traits<const T*>
	{
		typedef typename	std::ptrdiff_t	difference_type;
		typedef typename	T				value_type;
		typedef typename	const T*		pointer;
		typedef typename	const T&		reference;
		typedef typename	ft::random_access_iterator_tag	iterator_category;
	};
}
