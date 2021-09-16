# list/Makefile
#
# Makefile for list implementation and test file.
#
# Alyssa Sullins
# alyssa.sullins@bison.howard.edu

list: list.c main.c
	gcc -o list main.c list.c -I.

