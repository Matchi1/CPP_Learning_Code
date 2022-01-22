#include <string>
#include <vector>

class Histogram
{
public:
	Histogram();
	Histogram(int size, int default_value);
	Histogram(const Histogram& hist);
  void analyze(const std::string&);       // analyse la string passée en paramètre
  void print() const;                     // affiche l'histogramme

private:
  std::vector<unsigned int> _count;       // tableau contenant le nombre d'occurrences de chaque lettre entre 'a' et 'z'
};
