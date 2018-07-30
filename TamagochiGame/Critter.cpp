#include "Header.h"

Critter::Critter(int hunger, int boredom):
m_Hunger(hunger), m_Boredom(boredom)
{

}

int Critter::GetMood() const
{
	return(m_Boredom + m_Hunger);
}

void Critter::PassTime(int time)
{
	m_Boredom += time;
	m_Hunger += time;
}

void Critter::Talk()
{
	cout << "I`m a critter and I feel ";
	int mood = GetMood();
	if (mood > 15)
	{
		cout << "mad" << endl;
	}
	else if (mood > 10)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 5)
	{
		cout << "okay" << endl;
	}
	else
		cout << "happy" << endl;
	PassTime();
}
void Critter::Eat(int food)
{
	cout << "Hrhhrhrbr" << endl;
	m_Hunger -= food;
	if (m_Hunger < 0)
	{
		m_Hunger = 0;
	}
	PassTime();
}
void Critter::Play(int fun)
{
	cout << "Wheee!" << endl;
	m_Boredom -= fun;
	if (m_Boredom < 0)
	{
		m_Boredom = 0;
	}
	PassTime();
}