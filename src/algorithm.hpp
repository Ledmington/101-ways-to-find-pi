#ifndef ALGORITHM_HPP_INCLUDED
#define ALGORITHM_HPP_INCLUDED

#include <string>

typedef enum { ITERATION_BASED, EPS_BASED, POINT_BASED } AlgorithmType;

class Algorithm {
private:
  std::string name;
  std::string description;
  AlgorithmType type;

public:
  Algorithm(std::string _name, std::string _description, AlgorithmType _type) {
    this->name = _name;
    this->description = _description;
    this->type = _type;
  }

  std::string getName() { return this->name; }

  std::string getDescription() { return this->description; }

  std::string getType() {
    switch (this->type) {
    case ITERATION_BASED:
      return "iteration-based";
      break;
    case EPS_BASED:
      return "eps-based";
      break;
    case POINT_BASED:
      return "point-based";
      break;
    default:
      return "unknown";
      break;
    }
  }
};

#endif // ALGORITHM_HPP_INCLUDED