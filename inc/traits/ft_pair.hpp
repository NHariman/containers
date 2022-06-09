/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pair.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 16:07:32 by nhariman      #+#    #+#                 */
/*   Updated: 2022/06/09 17:12:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// https://cplusplus.com/reference/utility/pair/?kw=pair

namespace ft
{
	template <class T1, class T2>
	struct pair
	{
		typedef T1	first_type;
		typedef T2	second_type;

		first_type	first;
		second_type	second;
		pair(){};
		template<class U, class V>
			pair() (const pair<U, V>& pr)
			{
				first = pr.first;
				second = pr.second;
			};
		pair(const first_type& a, const second_type& b)
		{
			first = a;
			second = b;
		};
		pair&	operator= (const pair& pr)
		{
			first = pr.first;
			second = pr.second;
		}
	};
	template<class T1, class T2>
		bool operator== (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first == rhs.first && lhs.second == rhs.second)
				return (true);
			else
				return (false);
		};
	template<class T1, class T2>
		bool operator!= (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first != rhs.first && lhs.second != rhs.second)
				return (true);
			else
				return (false);
		};
	template<class T1, class T2>
		bool operator<= (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first <= rhs.first && lhs.second <= rhs.second)
				return (true);
			else
				return (false);
		};
	template<class T1, class T2>
		bool operator>= (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first >= rhs.first && lhs.second >= rhs.second)
				return (true);
			else
				return (false);
		};
	template<class T1, class T2>
		bool operator< (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first < rhs.first && lhs.second < rhs.second)
				return (true);
			else
				return (false);
		};
	template<class T1, class T2>
		bool operator> (const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)
		{
			if (lhs.first > rhs.first && lhs.second > rhs.second)
				return (true);
			else
				return (false);
		};
}