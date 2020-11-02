//
//  main.cpp
//  testproject
//
//  Created by Christopher Clark on 10/4/19.
//  Copyright © 2019 Christopher Clark. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void computeCube(int n, int* ncubed)
{
    *ncubed = n * n * n;
}

bool strequal(const char* str1[], const char* str2[])
{
    while (*str1 != 0  &&  *str2 != 0)
    {
        if (*str1 != *str2)  // compare corresponding characters
            return false;
        str1++;            // advance to the next character
        str2++;
    }
    return *str1 == *str2;   // both ended at same time?
}

int* nochange(int* p)
{
    printarr(p, 100);
    return p;
}

int* getPtrToArray(int& m)
{
    int anArray[100];
    for (int j = 0; j < 100; j++)
        anArray[j] = 100-j;
    m = 100;
    printarr(anArray, 100);
    return nochange(anArray);
}

double mean(const double* scores, int numScores)
{
    const double* ptr = scores;
    double tot = 0;
    while (ptr != scores + numScores)
    {
        tot += *ptr;
        ptr++;
    }
    return tot/numScores;
}

double mean2(const double* scores, int numScores)
{
    const double* ptr = scores;
    double tot = 0;
    int iter = 0;
    while (iter < numScores)
    {
        tot += *(ptr + iter);
        iter++;
    }
    return tot/numScores;
}

const char* findTheChar(const char str[], char chr)
{
    for (int k = 0; str[k] != 0; k++)
        if (str[k] == chr)
            return &str[k];

    return nullptr;
}

const char* findTheChar2(const char* str, char chr)
    {
        for (int k = 0; *(str+k) != 0; k++)
            if (*(str+k) == chr)
                return (str+k);

        return nullptr;
    }


int* maxwell(int* a, int* b)
{
    if (*a > *b)
        return a;
    else
        return b;
}

void swap1(int* a, int* b)
{
    int* temp = a;
    a = b;
    b = temp;
}

void swap2(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void removeS(char* str) {
    char* newstr = str;
    while(*str != 0) {
        if(*str == 'S' || *str == 's') {
            str++;
        } else {
            *newstr = *str;
            newstr++;
            str++;
        }
    }
    *newstr = 0;
}


int main()
{
//    char msg[50] = "She'll be a massless princess";
//    removeS(msg);
//    cout << msg << endl;
    
    const char* str = "C+ B+ B- A C A- A C- B+ D B";
    int count = 0;
    const char* p;
    for (p = str; *p != '\0'  &&  count < 6; p++)
        if (*p == ' ')
            count++;
    for ( ; *p != '\0'  &&  *p != ' '; p++)
        cout << *p;
    cout << '\n';
    
//    int array[6] = { 5, 3, 4, 17, 22, 19 };
//
//    int* ptr1 = array;
//    swap1(ptr1, (ptr1+1));
//    printarr(ptr1, 6);
//    swap2(ptr1, (ptr1+1));
//    printarr(ptr1, 6);
//
//        int* ptr = maxwell(array, &array[2]);
//        *ptr = -1;
//        ptr += 2;
//        ptr[1] = 9;
//        *(array+1) = 79;
//
//        cout << &array[5] - ptr << endl;
//
//    printarr(array, 6);
//
//        swap1(&array[0], &array[1]);
//        swap2(array, &array[2]);
//
//    printarr(array, 6);
//        for (int i = 0; i < 6; i++)
//            cout << array[i] << endl;

    
//    int n;
//    int* ptr = getPtrToArray(n);
//    printarr(ptr, 100);
//    for (int i = 0; i < 3; i++)
//        cout << ptr[i] << ' ';
//    for (int i = n-3; i < n; i++)
//        cout << ptr[i] << ' ';
//    cout << endl;
//
//    int a[3] = {0, 1, 2};
//    int *p = a;
//    cout << p[2] << endl;;
//    *p+=10;
//    cout << *p << endl;;
//
//    cout << a + 2 << endl;
//
//    double dubs[3] = {1.1, 1.3, 2.5};
//    cout << mean(dubs, 3) << endl;
//    cout << mean2(dubs, 3) << endl;
//
//    char hi[3] = "hi";
//    cout << findTheChar(hi, 'i') << endl;
//    cout << findTheChar2(hi, 'i') << endl;
    
//    char something[30];
//
//    something[0] = 'h';
//    something[1] = 'i';
//    something[2] = '\0';
//    cout << something;
    
    
//    int num = 10;
//    int arr[num];
    
//    string test = "test";
//    char testo[test.size()];
//    for(int i = 0; i < test.size(); i++) {
//        testo[i] = test[i];
//    }
//    testo[test.size()] = '\0';
//
//    cout << testo << endl;
//
//    char testo2[test.size()];
//    strcpy(testo2, "test");
//    cout << testo2 << endl;
//
//    char testo3[101];
//    cin.getline(testo3, 101);
//    cout << testo3 << endl;
//    cout << strlen(testo3) << endl;
    
//    int n1 = 3;
//    int n2 = 2;
//    double n3 = (n1 * 1.0)/n2;
//    cout << n3 << endl;
//    string grendel = "endl";
//    cout << "endl";
//    cout << grendel;
//    cout << endl;
//    cout << "grendel";
//    int side;
//
//    cout << "Enter a number: ";
//    cin >> side;

//    for (int i = 0; i < side; i++)
//    {
//    for (int j = i; j >= 0; j--)
//    {
//        cout << "#";
//    }
//    cout << "\n";
//    }
    

//    for (int i = 0; i < side; i++)
//    {
//        int j = i;
//        while (j >= 0)
//        {
//            cout << "#";
//            j--;
//        }
//        cout << "\n";
//    }
    
//    cout << "Number: ";
//    int num1;
//    cin >> num1;
//
//    cout << "Number: ";
//    int num2;
//    cin >> num2;
//
//    cout << "Number: ";
//    int num3;
//    cin >> num3;
//
//    int nums [3] = {num1, num2, num3};
//
//    sort(begin(nums), end(nums));
//
//    cout << "The median is " << nums[1] << endl;
    
//    int i = 0;
//    do {
//        if (side <= 0) {
//            break;
//        }
//        else
//        {
//            int j = i;
//            while (j >= 0)
//            {
//                cout << "#";
//                j--;
//            }
//            cout << "\n";
//            i++;
//        }
//    }
//    while (i < side);
    
//    int codeSection = 12;
//
//    if (codeSection == 281)
//        cout << "bigamy";
//    else if (codeSection == 321  ||  codeSection == 322)
//        cout << "selling illegal lottery tickets";
//    else if (codeSection == 383)
//        cout << "selling rancid butter";
//    else if (codeSection == 598)
//        cout << "injuring a bird in a public cemetery";
//    else
//        cout << "some other crime";
//
//    switch (codeSection) {
//        case 281:
//            cout << "bigamy";
//            break;
//        case 321:
//            cout << "selling illegal lottery tickets";
//            break;
//        case 322:
//            cout << "selling illegal lottery tickets";
//            break;
//        case 383:
//            cout << "selling rancid butter";
//            break;
//        case 598:
//            cout << "injuring a bird in a public cemetery";
//            break;
//        default:
//            cout << "some other crime";
//            break;
//    }
    
//    int num = 1;
//    switch(num) {
//        case 1:
//            cout << "hi" << endl;
//        case 2:
//            cout << "hi2" << endl;
//        default:
//            cout << "hi3" << endl;
//    }
}


