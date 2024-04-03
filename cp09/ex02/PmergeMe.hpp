/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:07:06 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/30 23:30:00 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <iterator>

class PmergeMe{
    private:

	public:
		PmergeMe( void );
		~PmergeMe( void );
		PmergeMe(const PmergeMe& object);
		PmergeMe& operator=( const PmergeMe& object );
};

#endif
