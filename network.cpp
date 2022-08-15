#include "network.hpp"

NeuralNetwork::NeuralNetwork () {

}

NeuralNetwork::NeuralNetwork (
        string path
    ) {
    loadFromFile (path);
}

NeuralNetwork::NeuralNetwork (
        vector <int> layerSize
    ) {
    createNew (layerSize);
}

void NeuralNetwork::createNew (
        vector <int> layerSize
    ) {
        this->layers = layerSize;
        for(int i = 0; i < layerSize.size()-1; i++){
            vector <float> v(layers[i],0);
            vector <vector <float>> temp(layers[i+1],v);
            wTensor.push_back(temp);
        }

}

vector <float> NeuralNetwork::eval(vector <float> input){
    
    return {};
}

void NeuralNetwork::loadFromFile (
        string path
    ) {

}

void NeuralNetwork::saveToFile (
        string path
    ) {

}

NeuralNetwork NeuralNetwork::permutate (
        int seed,
        float chance,
        float power
    ) {
    return *this;
}