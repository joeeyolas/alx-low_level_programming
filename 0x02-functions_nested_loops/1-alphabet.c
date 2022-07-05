joseph oladoye <joeeyolas@gmail.com>
	
Jul 5, 2022, 3:22 PM (9 hours ago)
	
to jooeeytemi
0x02-functions_nested_loops Tasks

int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);
void num(int r, int n);

task 0
vi 0-putchar.c 
then copy and paste the code below and dump der

#include "main.h"

/**
 *  * main - function to print
 *   *
 *    * Return: 0
 *     */
int main(void)
{

		_putchar('_');
			_putchar('p');
				_putchar('u');
					_putchar('t');
						_putchar('c');
							_putchar('h');
								_putchar('a');
									_putchar('r');
										_putchar('\n');

											return (0);
}

task 1
1-alphabet.c
then copy and paste the code below and dump der

#include "main.h"
/**
 *  * print_alphabet - function to print abc
 *   *
 *    * Return: 0
 *     */
void print_alphabet(void)
{
	        char c;

		        for (c = 'a'; c <= 'z'; c++)
				        {
						                _putchar(c);
								        }
			_putchar('\n');
}
