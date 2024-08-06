#include <unistd.h>

int printboard(int n){
	
	int buffer[20];
	
	int i;

	
	i = 0;
	
	if (n == 0){
	
		write(1, "0", 1);
	
	}
	
	while (n != 0){
	
		buffer[i++] = (n % 10) + '0';
	
		n /= 10;
	
	}
	
	while (i > 0){
	
		write(1, &buffer[--i], 1);
	
	}
	
	return 0;
}


int ft_isvalid(int *board, int column, int row){
	
	int i;
	
	i = 0;
	
	while (i < column){
	
		if (board[i] == row || board[i] - i == row - column || board[i] + i == row + column){
	
			return 0;
	
		}
	
		i++;
	
	}
	
	return 1;

}

int place_queen(int *board, int column, int *solu_counter){
	
	int row;
	
	int i;

	row = 0;
	
	i = 0;
	
	if (column == 10){
		
		(*solu_counter)++;
		
		while (i < column){
			
			printboard(board[i]);
			
			i++;
		
		}
		
		write(1, "\n", 1);
		
		return 0;
	
	}
	
	while (row < 10){
		
		if (ft_isvalid(board, column, row)){
		
			board[column] = row;
		
			place_queen(board, column + 1, solu_counter);
		
			board[column] = -1;
		
		}
		
		row++;
	}
	
	return 0;
}


int ft_ten_queens_puzzle(void)
{
	
	int board[10];
	int solu_counter;
	int column;
	
	column = 0;
	solu_counter = 0;
	
	place_queen(board, column, &solu_counter);

	return solu_counter;

}

int main(void){
	
	ft_ten_queens_puzzle();
}

