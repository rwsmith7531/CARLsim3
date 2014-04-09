#include "network_analysis.h"
#include <iostream>

// we aren't using namespace std so pay attention!
// we need to pass a reference for the iterators, not just a value.
network_analysis::network_analysis(const std::vector<AER>& spkVector){
	// point to the beginning and the end of the AER vector
	it_begin_=spkVector.begin();
	it_end_=spkVector.end();
	vectorSize_=spkVector.size();
	return;
}

network_analysis::~network_analysis(){}

float network_analysis::getGrpFiringRate(int timeDuration, int sizeN){
	
	return (float)vectorSize_/((float)timeDuration*(float)sizeN);
}

void network_analysis::printAER(){
	
	std::cout << "Format: Time (ms) : neuron id\n";
	//use an iterator
	std::vector<AER>::const_iterator it;
	for(it=it_begin_;it!=it_end_;it++){
		std::cout << (*it).time << " : "; 
		std::cout << (*it).nid << std::endl;
		std::cout.flush();
	}
	return;
}
