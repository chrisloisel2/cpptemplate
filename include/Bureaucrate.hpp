/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <lchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:25:43 by lchristo          #+#    #+#             */
/*   Updated: 2022/02/08 00:44:12 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-format off
#ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP
# include <iostream>
// clang-format on

class Bureaucrate
{
  private:

  public:
	// CONSTRUCTOR
	Bureaucrate(void);
	Bureaucrate(const Bureaucrate &);

	// Assignation overload
	Bureaucrate &operator=(const Bureaucrate &);

	// SETTERS

	// GETTERS

	// OTHERS

	// DESTRUCTOR
	~ Bureaucrate(void);
};

#endif
