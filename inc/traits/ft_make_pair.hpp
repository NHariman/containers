/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_make_pair.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 16:37:37 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 17:12:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//https://cplusplus.com/reference/utility/make_pair/?kw=make_pair

namespace ft
{
	template<class T1, class T2>
		pair<T1, T2> make_pair(T1 x, T2 y)
		{
			pair<T1, T2> ret(x, y);
			return(ret);
		};
}