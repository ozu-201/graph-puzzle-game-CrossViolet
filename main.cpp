//
// Created by ag028682 on 12/21/2023.
//

#include "Array/Graph/Graph.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream myfile ("C:\\Users\\TEMP\\Desktop\\text.txt");
    string myline;
    char myChar;
    int length3 = 0;
    int length4 = 0;
    int length5 = 0;
    vector<string> length3Vector;
    vector<string> length4Vector;
    vector<string> length5Vector;

    if ( myfile ) {
        while ( myfile ) {
            getline(myfile,myline);
            if(myline.length()==3){
                length3Vector.push_back(myline);
                length3++;
            }else if(myline.length()==4){
                length4Vector.push_back(myline);
                length4++;
            }else if(myline.length()==5){
                length5Vector.push_back(myline);
                length5++;
            }
        }
    }

    //Do that for all of 3 graph and add these to graphs
    // you can make that a function
    array::Graph* length3Graph  = new array::Graph(length3);
    array::Graph* length4Graph  = new array::Graph(length4);
    array::Graph* length5Graph  = new array::Graph(length5);
    for(int i = 0 ; i < length3Vector.size() ; i++){
        int numberOfDifference = 0;
        for(int k = i+1 ; k<length3Vector.size() ; i++){
            for(int j = 0; j < 3 ; j++){
                if(length3Vector[i].at(j) != length3Vector[k].at(j)){
                    numberOfDifference++;
//                    cout << numberOfDifference;
                }
            }
            if(numberOfDifference == 1){
                length3Graph->addEdge(i,k);
            }
        }
    }
    for(int i = 0 ; i < length4Vector.size() ; i++){
        int numberOfDifference = 0;
        for(int k = i+1 ; k<length4Vector.size() ; i++){
            for(int j = 0; j < 3 ; j++){
                if(length4Vector[i].at(j) != length4Vector[k].at(j)){
                    numberOfDifference++;
                }
            }
            if(numberOfDifference == 1){
                length4Graph->addEdge(i,k);
            }
        }
    }
    for(int i = 0 ; i < length5Vector.size() ; i++){
        int numberOfDifference = 0;
        for(int k = i+1 ; k<length5Vector.size() ; i++){
            for(int j = 0; j < 3 ; j++){
                if(length5Vector[i].at(j) != length5Vector[k].at(j)){
                    numberOfDifference++;
                }
            }
            if(numberOfDifference == 1){
                length5Graph->addEdge(i,k);
            }
        }
    }

}






