#include <string>
using namespace std;
class Stock
{
private :
	string company;
	long shares;
	double share_val;
	double total_val;
	void getSum()
	{
		total_val = share_val*shares;
	}
public:
	void acquire(const string &comp,long n,double price);
	void buy(long num,double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
