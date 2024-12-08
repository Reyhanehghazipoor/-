//Reyhaneh Ghazipoor




1
#include <iostream>
using namespace std;

class Calculator {
public:
    double floor(double num) {
        return ((int)num);
    }
};

int main() 
{
    Calculator calc; 
    cout << calc.floor(3.7); 
    
}




2
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }
};

int main() {
    Calculator x; 
    cout << x.add(2, 3);

}





3
#include <iostream>
using namespace std;

class Calculator {
public:
    double max1(double x, double y) {
        return (x > y) ? x : y; 
    }
};

int main() {
    Calculator x; 
    cout << x.max1(2.0, 3.0);
}




4
#include <iostream>
using namespace std;

class Calculator {
public:
    bool find1(string str, char ch) {
        for (char c : str) {
            if (c == ch) {
                return true; 
            }
        }
        return false; 
    }
};

int main() {
    Calculator x; 
    cout << x.find1("Hello, World!", 'W');
}




5
#include <iostream>
using namespace std;

class Calculator {
public:
    int max2(int arr[], int size) {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    Calculator x; 
    int arr[] = {1, 2, 3, 4, 5};
    cout << x.max2(arr, 5);
}


