#include <iostream>
#include <random>

#include "Slowdashify.h"


int main(int argc, char *argv[])
{
	int nentry = 100;
	for (int i = 1 ; i < argc ; i++) {
		std::istringstream iss(argv[i]);
		iss >> nentry;
	}

	UH1Book h1("Hello", 30, 0.0, 200.0);
	
	std::random_device rnd;
	std::mt19937 engine(rnd());
	std::normal_distribution<> dist(100.0, 20.0);
	for (int i = 0 ; i < nentry ; i++) {
		double val = dist(engine);
		h1.Fill(val);
	}

	h1.Print();
	std::cout << Slowdashify(h1) << std::endl;

	std::vector<double>& hcont = h1.GetBinContents();

	std::cout << "Nbins: " << h1.GetNBins() << std::endl;
	std::cout << "Contents:";
	for (auto &i : hcont) std::cout << " " << i;
	std::cout << std::endl;
	std::cout << "Contents:";
	for (int i = 0 ; i < h1.GetNBins() + 2 ; i++) std::cout << " " << i << ":" << h1.GetBinContent(i);
	std::cout << std::endl;


	UH2Book h2("Hello 2D", 40, 0.0, 200.0, 40, 0.0, 200.0);
	for (int i = 0 ; i < nentry * nentry ; i++) {
		double xval = dist(engine);
		double yval = dist(engine);
		h2.Fill(xval, yval);
	}
	h2.Print();
	h2.Draw();

	std::cout << Slowdashify(h2) << std::endl;


	return 0;
}