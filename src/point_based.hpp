#ifndef POINT_BASED_HPP_INCLUDED
#define POINT_BASED_HPP_INCLUDED

#include "algorithm.hpp"

class PointBasedAlgorithm : public Algorithm {
public:
  PointBasedAlgorithm(std::string name, std::string description)
      : Algorithm(name, description, POINT_BASED) {}

  virtual double run(const unsigned int num_points) = 0;
};

#endif // POINT_BASED_HPP_INCLUDED