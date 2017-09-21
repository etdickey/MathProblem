/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh and Ethan
 *
 * Created on September 21, 2017, 4:00 PM
 */


//============================================================================
// Name        : NineDifferentNumbers.cpp
// Author      : Josh Holland
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 *  ** This program goes through the 1,2,3,4,5,6,7,8,9 number
 *  		sequence and makes all the possible combinations
 *  		of these numbers without using one number twice
 *
 *
 * 1. There will be 9! (362880) different numbers tested
 * 2.
 *
 *
 */

#include <iostream>
#include <cstdlib>
using namespace std;
const int NUMBER_OF_NUMBERS=9;
const int ORIGIN[] = {1,2,3,4,5,6,7,8,9};

void swap(int*first, int*second);

void rotate(int* r[]);

int main() {

	int currentRotation[NUMBER_OF_NUMBERS];

	for(int i=0;i<NUMBER_OF_NUMBERS;i++){
            currentRotation[i]=ORIGIN[i];
	}

	int currentCombination[NUMBER_OF_NUMBERS];

	enum positions{a,b,c,d,e,f,g,h,i};

	for(a=1;a<=9;a++){//position a will stop

	}










	return 0;
}

void swap(int*first, int*second){
	int temp=*first;
	second=first;
	first=&temp;
}

void rotate(int* r[]){

}



