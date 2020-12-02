#ifndef _ALGORITHM_HPP
#define _ALGORITHM_HPP
// bledy kompilatora
#include <vector>
#include <iostream>
#include "Individual.hpp"
//
class Algorithm {
public:
	Algorithm (int const dim, int const dumOfIndi, const int numOfGenerations, const int selOpt);
	std::vector<Individual> runAlgorithm();

private:
	std::vector<Individual> initPopulation(int size, unsigned dimension);
	void mutate(double& x);
	void cross(Individual& first, Individual& second);
	std::vector<Individual> initTournament(const unsigned tourSize, const std::vector<Individual>& Population);
	Individual chooseWinner(const unsigned tourSize, std::vector<Individual>& tournament);
	std::vector<Individual> tournamentSel(const unsigned tournamentSize, std::vector<Individual>& Population);
	std::vector<Individual> rouletteSelection(std::vector<Individual>& Population);
	std::vector<Individual> bestFractionSel(std::vector<Individual>& Population, int breaks);
	void mutation(std::vector<Individual>& Population);
	void crossover(std::vector<Individual>& Population);

	int _dim;
	int _numOfIndi;
	int _numOfGenerations;
	int _selOption;
};

#endif // _ALGORITHM_HPP
