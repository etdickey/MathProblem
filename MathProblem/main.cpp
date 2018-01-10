/* 
 * File:   main.cpp
 * Author: Josh and Ethan
 *
 * Created on September 21, 2017, 4:00 PM
 */

//============================================================================
// Name        : NineDifferentNumbers.cpp
// Author      : Josh Holland and Ethan Dickey
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 *  ** This program goes through the 1,2,3,4,5,6,7,8,9 number
 *  		sequence and makes all the possible combinations
 *  		of these numbers without using one number twice
 *
 * This program attempts to find ALL (so no random guessing)
 * solutions to this problem in a more efficient manner than simply going
 * through all possible numbers between 0 and 1 billion:::
 * Rule: the 9 numbers (n1-n9) cannot repeat each other.
 * Find the solutions to this equation: (n1/n2*n3+n4*n5*n6/n7+n8*n9)=100
 * 
 * 1. There will be 9! (362880) different numbers tested
 * 2.
 *
 *
 */

#include "Prototypes.h"

int main() {
/**
 * idea:: create a bunch of functions that do individual work and call upon each other going down and simply rotates at that level
 * @return 
 */
    out.open("Solutions.txt");
    
    int workingArray[NUMBER_OF_NUMBERS];
    for(int z = 0;z<NUMBER_OF_NUMBERS;z++){
        workingArray[z] = masterArray[z];
    }
    
    printNums(workingArray,out);
    swapGT3(NUMBER_OF_NUMBERS,workingArray);
    
    out.close();
    
    cout << "The number of iterations should be 9! or 362880" <<  endl;
    cout << "Iterations: " << iterations << endl;
    
    ifstream in;
    in.open("Solutions.txt");
    if(checkSolutions(in)){
        cout << "Solutions are correct" << endl;
    } else {
        cout << "Solutions are incorrect" << endl;
    }
    
    in.close();
    
    return 0;
}

void swapGT3(int n,int workingArray[]){//, int inArray[]
    if(n==3){//If the size passed in is 3 then the function should go through the swap process.
        swap3(workingArray);
    } else{
        swapGT3(n-1,workingArray);
        for(int rotations=0;rotations<n-1;rotations++){
            rotateMasterArray(n);
            for(int z = 0;z<NUMBER_OF_NUMBERS;z++){
                workingArray[z] = masterArray[z];
            }
            printNums(workingArray,out);
            
            swapGT3(n-1,workingArray);
        }
    }
}

void rotateMasterArray(int n){
    int temp = masterArray[0];
    for(int i=0;i<n-1;i++){
        masterArray[i] = masterArray[i+1];
    }
    masterArray[n-1] = temp;
}

void swap3(int workingArray[]){
    swap(workingArray[0],workingArray[1]);
    printNums(workingArray,out);
    
    swap(workingArray[1],workingArray[2]);
    printNums(workingArray,out);
    
    swap(workingArray[0],workingArray[1]);
    printNums(workingArray,out);
    
    swap(workingArray[1],workingArray[2]);
    printNums(workingArray,out);
    
    swap(workingArray[0],workingArray[1]);
    printNums(workingArray,out);
}


void printNums(int numbers[],ostream& out){
    for(unsigned int j=0;j<NUMBER_OF_NUMBERS;j++){
            out << numbers[j];
    }
    out << endl;
    iterations++;
}

//===========================
//TESTING FUNCTIONS::
//===========================

bool checkSolutions(ifstream& in){
    int toTest;
    string into;
    stringstream toString;
    int used[NUMBER_OF_NUMBERS];
    int iter=0;//per each character
    bool worked = true;
    
    while(in >> toTest){//For each line
        toString.clear();
        toString.str(to_string(toTest));//put the string containing the line into the stringstream
        char character;//character to import
        while(toString >> character && iter < NUMBER_OF_NUMBERS){//While the line still has characters and less than 9 characters have been taken in and checked.
            used[iter] = static_cast<int>(character);//import the next character and translate it to an integer value
            for(int space = 0; space < iter; space++){//for each previous character, check if it is the same as the character just taken. 
                if(used[iter] == used[space]){//if the character has already been found in the line (which makes the answer invalid)
                    worked=false;
                }
            }
            iter++;
        }
        iter=0;
    }
    
    return worked;
}

