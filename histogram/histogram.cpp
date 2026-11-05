#include <algorithm>
#include <cmath>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <utility>
#include <vector>

class Histogram {
public:
    // Bins are [bounds[i], bounds[i+1]). Requires >= 2 strictly increasing, finite bounds.
    Histogram(std::vector<double> bounds)
        
    }

    void clear() {

    }

    void update(double x) {

    }

    void display(std::ostream& out) const {

    }

private:                                                    // (vii)
    std::vector<double> bounds_;
    std::vector<std::size_t> tallies_;
};

int main() {
    Histogram h(std::vector<double>{0.0, 30.0, 60.0, 100.0});
    for (double x : {0, 10, 15, 30, 43, 5, 66, 77, 42, 81, 3, 1, 170})  // handle out of range values
        h.update(x);
    h.display(std::cout);

    Histogram copy(h);                     // copy ctor
    
    h.clear();     
    std::cout << "\nAfter clear:\n";
    h.display(std::cout);
    std::cout << "\nCopy (unchanged):\n";
    copy.display(std::cout);

    // attempt to use a move with std::move()

}