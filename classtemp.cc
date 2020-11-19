#include <iostream>
#include <string>

using namespace std;

template<class T>
class Bucky{
    T first, second;
    public:
        Bucky(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

template <class T>
T Bucky<T>::bigger(){
    return (first>second?first:second);
}

int main(){

    Bucky <int> bo(69, 106);
    cout << bo.bigger();
}