#include <iostream>

using namespace std;

double c_avg(double x) {
    return x / 5;
}

double c_sum(double x[5]) {
    double n_sum = 0;
    for (int i = 0; i < 5; i++) {
        n_sum += x[i];
    }
    return n_sum;
}

void oc(double x[5]) {
    double s;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++) {
            if (x[i] > x[j])
            {
                s = x[i];
                x[i] = x[j];
                x[j] = s;
            }
        }
    }
    cout << "숫자 오름차순:";
    for (int i = 0; i < 5; i++) {
        cout <<  x[i] << " ";
    }
    cout << endl;
}

void nc(double x[5]) {
    double s;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++) {
            if (x[i] < x[j])
            {
                s = x[i];
                x[i] = x[j];
                x[j] = s;
            }
        }
    }
    cout << "숫자 내림차순:";
    for (int i = 0; i < 5; i++) {
        cout <<  x[i] << " ";
    }
    cout << endl;
}

int main()
{
    double n_sum = 0;
    double n_avg = 0;
    double x[5];
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "번째 숫자를 입력하시오:";
        cin >> x[i];
    }
    
    n_sum = c_sum(x);
    n_avg = c_avg(n_sum);

    cout << "숫자의 합:" << n_sum << endl;
    cout << "숫자의 평균:" << n_avg << endl;

    nc(x);
    oc(x);

    return 0;
}
