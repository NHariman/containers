/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_integral.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 16:39:49 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 17:11:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*

	- https://cplusplus.com/reference/type_traits/is_integral/?kw=is_integral
	- https://cplusplus.com/reference/type_traits/integral_constant/operator%20value_type/


*/

namespace ft
{
	template <class T, T v>
		struct integral_constant
		{
			static constexpr T value = v;
			typedef T	value_type;
			typedef integral_constant<T,v>	type;
			constexpr	operator value_type()
			{
				return (v);
			};
		};

		typedef integral_constant<bool,true> true_type; //true
		typedef integral_constant<bool,false> false_type; // false
		typedef integral_constant<bool,v> misc_type;

	template<class T>
		struct is_integral : public integral_constant
		{};
}
