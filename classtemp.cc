#include <iostream>
#include <string>

using namespace std;

template <class myType>
myType GetMax (myType a, myType b){
    return (a>b?a:b);
}

template <class T, class U>
T GetMin (T a, U b){
    return (a<b?a:b);
}

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
class myContainer {
    T element;
    public:
        myContainer (T arg) {element=arg;}
        T increase () {return ++element;}
};

template <>
class myContainer <char> {
    char element;
public:
    myContainer (char arg) {element=arg;}
    char uppercase(){
        if ((element>='a') && (element <= 'z'))
        element += 'A' - 'a';
        return element;
    }
};

template <class T>
T Bucky<T>::bigger(){
    return (first>second?first:second);
}

int main(){
    
    myContainer<int> myint (7);
    myContainer<char> mychar ('k');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;

    int z=9, q=8, r;
    r = GetMin<int, long> (z,q);
    cout << r << endl;

    //cout << myobject.getmax();

    int i=3, j=6, k;
    long l=10, m=5, n;

    k = GetMax<int> (i,j);
    n = GetMax<long> (l,m);

    cout << k << endl;
    cout << n << endl;

    Bucky <int> bo(69, 106);
    cout << bo.bigger();
}