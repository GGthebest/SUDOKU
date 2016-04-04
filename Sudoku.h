#include <iostream.h>
#include <cstdlib>

using namespace std;

class sudoku
{
	public:
		void giveQuestion();
		void readIn();
		void solve();
		void changeNum(int a ,int b);
		void changeRow(int a ,int b);
		void changeCol(int a ,int b);
		void rotate(int n);
		void flip(int n);
		void transform();
		void change();
		void printout();(bool isAns)
	private:
};
