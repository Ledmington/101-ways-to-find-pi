#ifndef EPS_BASED_HPP_INCLUDED
#define EPS_BASED_HPP_INCLUDED

#include "algorithm.hpp"

class EPSBasedAlgorithm : public Algorithm {
public:
  EPSBasedAlgorithm(std::string name, std::string description)
      : Algorithm(name, description, EPS_BASED) {}

  virtual double run(const double eps) = 0;
};

#endif // EPS_BASED_HPP_INCLUDED