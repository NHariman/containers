/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_enable_if.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 17:16:45 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 17:17:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft
{
	template<bool cond, class T = void>
		struct enable_if
		{
			typedef T type;
		};
}
