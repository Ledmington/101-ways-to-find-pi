#ifndef ITERATION_BASED_HPP_INCLUDED
#define ITERATION_BASED_HPP_INCLUDED

#include "algorithm.hpp"

class IterationBasedAlgorithm : public Algorithm {
public:
  IterationBasedAlgorithm(std::string name, std::string description)
      : Algorithm(name, description, ITERATION_BASED) {}

  virtual double run(const unsigned int num_iterations) = 0;
};

#endif // ITERATION_BASED_HPP_INCLUDED