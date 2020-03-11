// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/03/10 12:12:01 by kradoste          #+#    #+#             //
//   Updated: 2020/03/10 17:03:22 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <curses.h>

//compile ncurses with -lncurses tag

void	init(int h, int w)
{
	initscr();
	noecho();

	curs_set(FALSE);
	keypad(stdscr, TRUE);
	cbreak();

	clear();

/*	mvhline(0, 0, 'X', w + 1);
	mvhline(h + 1, 0, 'X', w + 1);
	mvvline(1, 0, 'X', h);
	mvvline(1, w, 'X', h);*/
}

//////////////////////////
/* Some sort of struct that holds the position of every snake part of body
   Snake will be made of * character
   Apple will be made of Q character
*/
/////////////////////////


void	run(int x, int y, char c)
{
	mvaddch(y, x, c);
}

void	done()
{
	endwin();
}

int main()
{
	init(10, 25);


	int ch;
	do {
		ch = getch();
		clear();
		run(5, 5, '*');
	} while ((ch != 'q') && (ch != 'Q'));
	
	done();
	return (0);
}
