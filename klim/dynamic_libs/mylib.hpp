// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   child.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/02/28 01:08:39 by kradoste          #+#    #+#             //
//   Updated: 2020/03/06 22:04:28 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHILD_HPP
# define CHILD_HPP

#include "Parent.hpp"

class Child : public Parent
{
public:
	void	execute();
};

extern "C" Child	*create_object();
extern "C" void		destroy_object( Child *object );

#endif
