// constant_member_function.cpp
#include <vector>
#include <iostream>

using namespace std;


class Polygon {
private:
    int numSides;
    vector<int> lengths;
public:
    Polygon( int n);
};

//constructor
Polygon::Polygon(int n) {
    numSides = n;
    for(int i = 0; i < n; i++) {
        int side;
        cout << "side " << (i + 1) << ": ";
        cin >> side;
        lengths.push_back(side);
    }
}

int main()
{
    Polygon p = Polygon(3);
}  
