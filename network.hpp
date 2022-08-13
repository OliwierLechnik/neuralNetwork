#pragma once
#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using std::vector, std::string;

class NeuralNetwork {
private:

    vector <vector <vector <float>>> wTensor;
    vector <vector <float>> bMatrix;

public:

    NeuralNetwork ();
/*
    This function will create empty network with 0 layers.
*/

    NeuralNetwork (string Path);
    void loadFromFile (string Path);
/*
    
    This functions will load the network layout and its values from the given file.
    If the file is invalid, an error will be printed to std::cerr and further program execution will be aborted.

    @Param Path; Path to file containing layout and content of neural network.

*/

    NeuralNetwork (vector <int> layerSize);
    void createNew (vector <int> layerSize);
/*
    This functions will create an empty neural network with the given layer structure.
    For example, {8,12,12,4} will create a neural network with 8 neurons in the input layer, 
    4 neurons in the output layer, and 2 12-neuron hidden layers.

    @Param LayerSize; size and amount of layers to create

*/

    NeuralNetwork permutate(int seed, float chance, float power);
/*
    @param seed; 
    @param chance;
    @param power;
    @return
*/


};

#endif /*NEURALNETWORK_H*/