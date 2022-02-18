#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

template<typename F, typename G>
constexpr auto compose(F f, G g)
{
	return[f, g](auto x){ return f(g(x)); };
}

const auto sqr_sin = compose([](auto x){return powf(x, 2); }, sinf);

int main(void)
{
	const auto x = sqr_sin(1.758f);
	cout << setprecision(3) << x << endl;
}
