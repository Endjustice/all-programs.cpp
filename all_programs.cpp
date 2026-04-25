#include <iostream>
using namespace std;

// 1. Bubble Sort
void bubbleSort() {
    int arr[10] = {64, 34, 25, 12, 22, 11, 90, 45, 33, 77};
    cout << "Bubble Sort:\nقبل: ";
    for(int x: arr) cout << x << " ";
    for(int i=0; i<9; i++)
        for(int j=0; j<9-i; j++)
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
    cout << "\nبعد: ";
    for(int x: arr) cout << x << " ";
    cout << "\n\n";
}

// 2. BMI
void BMI() {
    float w, h;
    cout << "BMI:\nوزن(kg): "; cin >> w;
    cout << "قد(cm): "; cin >> h;
    float bmi = w / ((h/100)*(h/100));
    cout << "BMI = " << bmi << " -> ";
    if(bmi<18.5) cout << "کمبود وزن\n";
    else if(bmi<25) cout << "طبیعی\n";
    else if(bmi<30) cout << "اضافه وزن\n";
    else cout << "چاقی\n";
    cout << "\n";
}

// 3. Day of week
void dayOfWeek() {
    int n;
    cout << "روز هفته:\nعدد 1-7: "; cin >> n;
    string days[] = {"شنبه","یکشنبه","دوشنبه","سه‌شنبه","چهارشنبه","پنجشنبه","جمعه"};
    if(n>=1 && n<=7) cout << days[n-1] << "\n\n";
    else cout << "نامعتبر\n\n";
}

// 4. Max of two
void maxOfTwo() {
    float a, b;
    cout << "بزرگترین عدد:\nعدد اول: "; cin >> a;
    cout << "عدد دوم: "; cin >> b;
    if(a>b) cout << a << " بزرگتر از " << b << "\n\n";
    else if(b>a) cout << b << " بزرگتر از " << a << "\n\n";
    else cout << "مساوی\n\n";
}

// 5. Day to month
void dayToMonth() {
    int d;
    cout << "روز چندم ماه:\nشماره روز (1-365): "; cin >> d;
    int months[] = {31,31,31,31,31,31,30,30,30,30,30,29};
    string names[] = {"فروردین","اردیبهشت","خرداد","تیر","مرداد","شهریور","مهر","آبان","آذر","دی","بهمن","اسفند"};
    if(d<1 || d>365) cout << "نامعتبر\n";
    else {
        for(int i=0; i<12; i++) {
            if(d <= months[i]) {
                cout << "روز " << d << " ماه " << names[i] << "\n\n";
                break;
            }
            d -= months[i];
        }
    }
}

int main() {
    bubbleSort();
    BMI();
    dayOfWeek();
    maxOfTwo();
    dayToMonth();
    return 0;
}
