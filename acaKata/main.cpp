#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string kata1 = "";
    int acak, jml;
    string kata2 = "";
    vector<int> tempo;
    vector<int>::iterator i;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Input Kata : "; cin >> kata1;
    jml = kata1.size();

    cout << "Jumlah Huruf : " << jml << endl;

    for(int x = 0; x < jml; x++){
        tempo.push_back(x);
    }
    random_shuffle(tempo.begin(), tempo.end());

    for(i = tempo.begin(); i != tempo.end(); i++){
        cout << kata1[*i];
    }

    return 0;
}
