/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <lchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:22:53 by lchristo          #+#    #+#             */
/*   Updated: 2022/02/08 00:48:52 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrate.hpp"

//CONSTRUCTOR

Bureaucrate::Bureaucrate(void)
{

}

//Copy constructor

Bureaucrate::Bureaucrate(Bureaucrate const & src)
{
	*this = src;
}



//Assignation overload

Bureaucrate & Bureaucrate::operator=(Bureaucrate const & src)
{
	*this = src;
}


//GETTER

//SETTER

//DESTRUCTOR

Bureaucrate::~Bureaucrate(void)
{

}
