/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:37:18 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main()
{
	Data ptr2;
	ptr2.name = "foo";
	ptr2.age = 42;
	ptr2.next = NULL;

	Data ptr;
	ptr.name = "boo";
	ptr.age = 42;
	ptr.next = &ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << &ptr <<
				"\n\tname: " << ptr.name <<
				"\n\tage: " << ptr.age <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Data *reserialized_struct = Serializer::deserialize(Serializer::serialize(&ptr));

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << reserialized_struct <<
				"\n\tname: " << reserialized_struct->name <<
				"\n\tage: " << reserialized_struct->age <<
				"\n\taddress next: " << reserialized_struct->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	return (0);
}