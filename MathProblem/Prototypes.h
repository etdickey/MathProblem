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
#include <sstream>
#include <string>

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
 * This function checks the validity of the solutions given through the 
 *      ifstream in; the validity is determined by if each of the solutions
 *      has a different number in each spot. 
 * 
 * precondition: in is open and is valid. 
 *               in pulls only integers.
 * 
 * postcondition: The validity has been returned as a boolean value. 
 * 
 * @param in the ifstream instance used to get the input data.
 * @return if the solutions are valid.
 */
bool checkSolutions(ifstream& in);

#endif /* PROTOTYPES_H_ */
