#include <cstring>
#include <cstdlib>


class N
{
private:
    char    annotation[100];
    int     number;
public:
    N(int n): number(n) {}
	void    setAnnotation(const char *str) {
	    memcpy(this->annotation, str, strlen(str));
	}
	int     operator+(N& rhs) {
		return (this->number + rhs.number);
	}
	int     operator-(N& rhs) {
		return (this->number - rhs.number);
	}
};


int main(int argc, char **argv)
{
	if (argc != 2)
		std::exit(1);
    N *n1 = new N(5);
    N *n2 = new N(6);
	n1->setAnnotation(argv[1]);
	return (*n1 + *n2);
}
