/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 14:18:07 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/10 17:28:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// https://cplusplus.com/reference/vector/vector/

#include <ft_iterator.hpp>

namespace ft
{
	template<class T, class Alloc = allocator<T>>
		class vector
		{
			//typedefs
			typedef T	value_type;
			typedef Alloc allocator_type;
			typedef allocator_type::reference reference;
			typedef allocator_type::const_reference const_reference;
			typedef allocator_type::pointer pointer;
			typedef allocator_type::const_pointer const_pointer;
			// iterators here????
			
			
		};
}
