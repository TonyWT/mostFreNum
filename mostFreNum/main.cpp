//
//  main.cpp
//  mostFreNum
//
//  Created by vivitanjing on 15-1-10.
//  Copyright (c) 2015年 vivitanjing. All rights reserved.
//


#include <iostream>
using namespace std;

// insertion sort
void insertSort(int intArray[], int arraySize)
{
    int start = 0;
    for (int i=start+1; i<arraySize; i++) {
        for (int j=i; j>start&&(intArray[j-1]>intArray[j]); j--) {
            int temp = intArray[j];
            intArray[j] = intArray[j-1];
            intArray[j-1] =temp;
        }
    }
}

void outputArray(int intArray[], int arraySize)
{
    for (int i=0; i<arraySize ; i++) {
        cout << intArray[i] << ",";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    const int ARRAYNUM = 8;
    int intArray[ARRAYNUM] = {3,4,3,7,4,7,7,7};
    insertSort(intArray, ARRAYNUM);
    outputArray(intArray, ARRAYNUM);
    
    int mostFreNum = intArray[0];
    int countFreNum = 0;
    int tmpFreNum = 1;
    for (int i=1; i<ARRAYNUM; i++) {
        if (intArray[i] != intArray[i-1]) {
            tmpFreNum = 1;
        }
        else
            tmpFreNum++;
        if (tmpFreNum > countFreNum) {
            countFreNum = tmpFreNum;
            mostFreNum = intArray[i];
        }
    }
    cout << "the most frequent Num is " << mostFreNum <<endl;
    cout << "the num of frequent is " << countFreNum <<endl;
    return 0;
}
