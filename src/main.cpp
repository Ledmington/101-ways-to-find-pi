#include "bayley.hpp"
#include "chebyshev.hpp"
#include "continuous_fraction.hpp"
#include "deterministic_montecarlo.hpp"
#include "gauss_integral.hpp"
#include "leibniz.hpp"
#include "montecarlo_circle.hpp"
#include "montecarlo_sphere.hpp"
#include "newton.hpp"
#include "polygon.hpp"
#include "recursive_4_splitting.hpp"
#include "recursive_binary_search.hpp"
#include "row_binary_search.hpp"
#include "viete.hpp"
#include <iostream>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

#define min(a, b) (a) < (b) ? (a) : (b)
#define max(a, b) (a) > (b) ? (a) : (b)

void cls() {
  // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
  std::cout << "\x1B[2J\x1B[H";
}

int main(void) {

  setvbuf(stdin, NULL, _IONBF, 0);

  Algorithm algos[] = {MontecarloCircle(),
                       MontecarloSphere(),
                       Newton(),
                       Polygon(),
                       Bayley(),
                       Chebyshev(),
                       ContinuousFraction(),
                       DeterministicMontecarlo(),
                       GaussianIntegral(),
                       Leibniz(),
                       Recursive4Splitting(),
                       RecursiveBinarySearch(),
                       RowBinarySearch(),
                       Viete()};
  const unsigned int len = sizeof(algos) / sizeof(algos[0]);

  unsigned int selected = 0;

  int c = 0;
  while (1) {
    c = 0;

    for (unsigned int i = 0; i < len; i++) {
      if (i == selected) {
        std::cout << " -> " << i + 1 << ") " << algos[i].getName() << std::endl;
        std::cout << algos[i].getDescription() << std::endl;
        std::cout << algos[i].getType() << std::endl;
        std::cout << "---" << std::endl;
      } else {
        std::cout << "    " << i + 1 << ") " << algos[i].getName() << std::endl;
      }
    }

    switch ((c = getchar())) {
    case KEY_UP:
      selected = max(0, selected - 1);
      break;
    case KEY_DOWN:
      selected = min(len, selected + 1);
      break;
    default:
      std::cout << std::endl << "null" << std::endl; // not arrow
      break;
    }

    cls();
  }

  return 0;
}