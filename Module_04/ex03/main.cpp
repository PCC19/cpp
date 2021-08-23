#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main( void )
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "cria MateriaSource: \n";
	IMateriaSource* src = new MateriaSource();

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "LearnMateria: \n";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria novo Character: \n";
	ICharacter* me = new Character("Paulo");
	AMateria* tmp;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria e equipa materia: \n";
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria e equipa materia: \n";
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria e equipa materia: \n";
	tmp = src->createMateria("Other");
	me->equip(tmp);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria e equipa materia: \n";
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Cria novo Character: \n";
	ICharacter* bob = new Character("bob");

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Character executa acoes: \n";
	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Character unequip: \n";
	me->unequip(0);

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Destroi Characters: \n";
	delete bob;
	delete me;
	delete src;

	std::cout << "----------------- FIM -------------------------" << std::endl;
	return 0;
}
