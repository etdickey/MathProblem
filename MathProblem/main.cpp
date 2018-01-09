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
    
    return 0;
}

void swapGT3(int n,int workingArray[]){//, int inArray[]
    if(n==3){
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

//bool validmathsol(int numberSol,string fileName){
//    ifstream in;
//    in.open(fileName);//the output file for mathsol() is Solutions.txt
//    if(in.fail()){
//        cout << "File open error:: validmathsol() filename:: " << fileName << endl;
//        exit(1);
//    }
//    int line=0;
//    long int num=0;
//    double n1,n2,n3,n4,n5,n6,n7,n8,n9;
//    int count=0;
//    do{
//        if(in.peek()!='\n'){
//            in >> num;
//            n9=num%10;
//            n8=(num/10)%10;
//            n7=(num/100)%10;
//            n6=(num/1000)%10;
//            n5=(num/10000)%10;
//            n4=(num/100000)%10;
//            n3=(num/1000000)%10;
//            n2=(num/10000000)%10;
//            n1=(num/100000000)%10;
//            if((n1/n2*n3+n4*n5*n6/n7+n8*n9)==100){
//                count++;
//            }
//        }
//        line++;
//    }while(line<192);
//    in.close();
//    if(count==numberSol){
//        return true;
//    } else {
//        return false;
//    }
//}

//Josh's first attempt
//void swap(int*first, int*second);
//
//void rotate(int* r[]);
//void swap(int*first, int*second){
//	int temp=*first;
//	*second=*first;
//	*first=temp;
//        return;
//}
//
//void rotate(int* r[]){
//
//}



