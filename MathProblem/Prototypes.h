/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prototypes.h
 * Author: Ethan
 *
 * Created on October 12, 2017, 1:04 PM
 */


#ifndef PROTOTYPES_H_
#define PROTOTYPES_H_

//Includes
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
ofstream out;
    
int masterArray[] = {1,2,3,4,5,6,7,8,9};
int iterations=0;
const int NUMBER_OF_NUMBERS=9;

//Functions
/**
 * Efficiently swaps through an array so that all iterations occur
 * @param n
 * @param workingArray
 */
void swapGT3(int n, int workingArray[]);
/**
 * rotates the master array up to the nth element once
 * @param n
 */
void rotateMasterArray(int n);
/**
 * swaps the bottom 3 numbers
 * @param workingArray
 */
void swap3(int workingArray[]);

/**
 * prints the array to the output stream
 * @param numbers
 * @param 
 */
void printNums(int numbers[],ostream&);
/**
 * checks a file to determine if all the solutions in the file are actual solutions to the math equation 
 */
//bool validmathsol(int numberSol,string fileName);


#endif /* PROTOTYPES_H_ */
