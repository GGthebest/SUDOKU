#include <Sudoku.h>
using namespace std;

void sudoku::giveQuestion()
{
	int board[81]=
	{
	0,0,0,0,0,6,0,3,0,
	0,0,3,5,0,4,0,0,0,
	1,0,9,0,7,0,5,0,0,
	0,0,1,0,3,9,0,6,0,
	0,9,0,0,0,0,0,7,0,
	0,2,0,4,8,0,1,0,0,
	0,0,5,0,2,0,3,0,4,
	0,0,0,6,0,3,7,0,0,
	0,3,0,8,0,0,0,0,0,
	};

	for(int i=0; i<81; ++i)
	{	
		if(i%9==8?cout<<" "<<endl:cout<<board[i]);
	}	   		
}
void sudoku::readIn()
{
	int board[i];
	cout<<"Please type in 81 numbers"<<endl;
	
	for(int i=0, i<81, i++)
	{
		cin>>board[i];
	}
}
void sudoku::solve()
{
	int board[81];
	int boardArray[9][9];
	int tempArray[9][9]
	int i;
	int j;
	int r=(i*9+j)/9;
	int c=(i*9+j)%9;
	{
		for(i=0; i<9; i++)
			for(j=0; j<0; j++)
			{
				boardArray[i][j]=board[i*9+j];
			}
		for(i=0; i<9; i++)
			for(j=0; j<9; j++)
			{
				tempArray[i][j]=boardArray[i][j];
			}
		for(j=0; j<9; ++j) //row check
			if(tempArray[r][j]==tempArray[r][c]&&c!=j);
				{
					tempArray[i][j]++;
				}
}
void sudoku::changeNum(int a, int b)
{
	int temp[81];
	int board[81];
	for(int i=0; i<81; i++)
	{
		temp[i]=board[i];
	}	
	for(int i=0; i<81; i++)
	{	
		if(board[i]==a)
		{
			board[i]=b;
		}
	}	
	for(int i=0; i<81; i++)	
	{
		if(temp[i]==b)
		{
			board[i]=a;
		}
	}
}
void sudoku::changeRow(int a, int b)
{
	int rowa[9];
	int rowb[9];
	int board[81];

	for(int i=0; i<9; i++)
	{
		rowa[i]=board[a*9+i];
		rowb[i]=board[b*9+i];
	}
	for(int i=0; i<9; i++)
	{
		board[a*9+i]=rowb[i];
		board[b*9+i]=rowa[i];
	}
}
void sudoku::changeCol(int a, int b)
{
	int cola[9];
	int colb[9];
	int board[81];

	for(int i=0; i<9; i++)
	{
		cola[i]=board[i*9+a];
		colb[i]=board[i*9+b];
	}

	for(int i=0; i<9; i++)
	{
		board[i*9+a]=colb[i];
		board[i*9+b]=cola[i];
	}
}
void sudoku::rotate(int n)
{
	int times=n%4;
	int boardArray[9][9];
	int temp[9][9];
	int board[81];
	int i;
	int j;
	{
		for(i=0; i<9; i++)
			for(j=0; j<9; j++)
			{
				boardArray[i][j]=board[i*9+j];
			}

		if(times==1)
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					temp[i][j]=boardArray[i][j];
				}
				
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					boardArray[i][j]=temp[j][i];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board[i*9+j]=boardArray[i][j];
				}
		}
		if(times==2)
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					temp[i][j]=boardArray[i][j];
				}
			for(i=0; i<0; i++)
				for(j=0; j<0; j++)
				{
					boardArray[i][j]=temp[9-i+1][9-j+1];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board[i*9+j]=boardArray[i][j];
				}
		}
		if(times==3)
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					temp[i][j]=boardArray[i][j];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					boardArray[i][j]=temp[9-j+1][9-i+1];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board[i*9+j]=boardArray[i][j];
				}
		}
		if(times==0)
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					boardArray[i][j]=boardArray[i][j];

				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board[i*9+j]=boardArray[i][j];
				}
		}
	}
void sudoku::flip(int n)
{
	int board[81];
	int boardArray[9][9];
	int tempArray[9][9];
	int i;
	int j;
	{
		for(i=0; i<9; i++)
			for(j=0; j<9; j++)
			{
				boardArray[i][j]=board[i*9+j];
			}

		if(n==0)	//flip vertically
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					tempArray[i][j]=boardArray[i][j];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					boardArray[i][j]=tempArray[10-i][j];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board(i*9+j)=board[i][j];
				}
		}
		if(n==1)	//flip horizontally
		{
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					tempArray[i][j]=boardArray[i][j];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					boardArray[i][j]=tempArray[i][10-j];
				}
			for(i=0; i<9; i++)
				for(j=0; j<9; j++)
				{
					board[i*9+j]=board[i][j];
				}
		}
	}
}
void sudoku::change()
{
	srand(time(NULL));
	changeNum(rand()%sudokuNum+1, rand()%sudokuNum+1);
	changeRow(rand()%3, rand()%3);
	changecol(rand()%3, rand()%3);
	rotate(rand()%101);
	flip(rand()%2);
void sudoku::printout(bool isAns)
{
	int i;

}
void sudoku::transform()
{

}
