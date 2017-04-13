#ifndef KNN_H
#define KNN_H
#include <string>
#include <vector>
using namespace std;

class Knn {
	public:
		Knn();
		~Knn();
		void readFile(string file);
		
	private:
		vector< vector<string> > trainingDataset;
		vector< vector<string> > testingDataset;
		vector<string> testData;
		vector<string> split(string s, char c);
		void writeToFile(string file);
		double dotProductSimilarity(vector<string> v1, vector<string> v2);
		vector< vector<string> > neighbors(vector< vector<string> > trainSet, vector<string> testInstance, int numOfNeighbors);
		int classify(vector< vector<string> > n);
};

#endif