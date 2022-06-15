/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 14:18:07 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/15 18:33:53 by nhariman      ########   odam.nl         */
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
			struct iterator
			{
				struct	input_iterator_tag {};
				struct	output_iterator_tag {};
				struct	forward_iterator_tag : public input_iterator_tag {};
				struct	bidirectional_iterator_tag : public forward_iterator_tag {};
				struct	random_access_iterator_tag : public	bidirectional_iterator_tag {};
				// constructor
				Iterator(pointer ptr) : m_ptr(ptr) {};
				reference operator*() const
				{
					return *m_ptr;
				}
				pointer
				private:
					pointer m_ptr;
			};
			
		};
}
