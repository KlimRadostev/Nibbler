// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mylib.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/03/06 19:00:32 by kradoste          #+#    #+#             //
//   Updated: 2020/03/06 21:58:19 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "mylib.hpp"

//#include "Parent.hpp"

void	Child::execute()
{
	std::cout << "execution" << std::endl;
}

extern "C" Child	*create_object()
{
	return new Child;
}

extern "C" void		destroy_object( Child *object )
{
	delete object;
}
