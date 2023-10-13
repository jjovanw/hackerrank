#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int numArrays, numQueries;
    cin >> numArrays >> numQueries;

    vector<vector<int>> allArrays;
    
    for (int i = 0; i < numArrays; i++) {
        int length;
        cin >> length;
        vector<int> numberArray;
        for (int j = 0; j < length; j++) {
            int number;
            cin >> number;
            numberArray.push_back(number);
        }
        allArrays.push_back(numberArray);
    }

    vector<int> queries;

    for (int i = 0; i < numQueries; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        queries.push_back(allArrays[num1][num2]);
    }

    for (int i = 0; i < queries.size(); i++) {
        cout << queries[i] << " " << endl;
    }
    cout << endl;

    return 0;
}