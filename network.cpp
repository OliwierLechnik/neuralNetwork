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
        for(int i = 0; i < layerSize.size(); i++){
            std::cout << i << " ";
        }
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