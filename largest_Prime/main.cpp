#include <iostream>

using namespace std;


int main()
{
    int number, nFactor;
    cin >> number;
    int h = 0;
    int max = 0;
    while (h <= number){
        nFactor = 0;
        for (int i = 1;i <= h;i++){
            if (h % i == 0){
                nFactor = nFactor + 1;
            }
        }
        if (nFactor == 2 && max < h && number % h == 0){
                max = h;
                number = number / h;
        }
        h++;
    }
    cout<< "faktor prima terbesar adalah: "<< max <<endl;
}

