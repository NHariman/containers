/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_allocator.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 14:20:54 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/10 17:10:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// https://cplusplus.com/reference/memory/allocator/
// https://cplusplus.com/forum/beginner/27311/ iterating through memory addresses

#include <cstddef>

namespace ft
{
	template<class T>
		class allocator
		{
			// typedefs
			typedef T	value_type; // element type
			typedef T*	pointer; 
			typedef T&	reference;
			typedef const T*	const_pointer;
			typedef const T&	const_reference;
			typedef size_t		size_type;
			typedef ptrdiff_t	difference_type;
			template <class Type>
			struct rebind
			{
				typedef allocator<Type> other;
			};
			// constructor and destructor
			allocator() throw(){};
			allocator(const allocator& alloc) throw(){};
			template<class U>
				allocator(const allocator<U>& alloc) throw(){};
			~allocator() throw(){};
			// member functions
			pointer	address(reference x) const
			{
				return(&x);
			};
			const_pointer	address(const_reference x) const
			{
				return(&x);
			};
			pointer	allocate(size_type n, allocator<void>::const_pointer hint=0)
			{
				// where do you put the hint???
				pointer elements[reinterpret_cast<int>hint + n];
				for (size_type i = reinterpret_cast<int>(hint); i < reinterpret_cast<int>(hint) + n; i++)
					elements[i] = new value_type();
				return (elements);
				// if failure, throw exception: bad_alloc
			};
			void	deallocate(pointer p, size_type n)
			{
				for (size_type i = 0; i < n; i++)
					delete p[i];
			};
			size_type max_size() const throw()
			{
				return (this->size_type);
			};
			void	construct(pointer p, const_reference val)
			{
				new ((void*)p) value_type(val);
			}
			void	destroy(pointer p)
			{
				p->~value_type();
			}
		};
}