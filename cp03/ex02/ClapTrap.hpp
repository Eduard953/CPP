#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int 		_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap& operator=(const ClapTrap &obj);
		~ClapTrap();

		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
		std::string getName() const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif // CLAPTRAP_HPP
