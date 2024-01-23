#include <iostream>
#include <vector>

using namespace std;

vector<int> subset;
int n = 3;

void processSubset() {
    cout << "{";
    for (int i = 0; i < subset.size(); i++) {
        cout << subset[i] << " ";
    }
    cout << "}" << endl;
}

void search(int k) {
    if (k == n) {
        processSubset();
     } else {
        search(k+1);          // Exclude current element k from the subset
        subset.push_back(k);  // Include current element k in the subset
        search(k+1);
        subset.pop_back();    // Backtrack by removing the last element (k)
     }
}

int main() {
    search(0);
    return 0;
}
