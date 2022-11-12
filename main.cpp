#include <iostream>
using namespace std;

int main(){

    int b = 10;
    int* ptr_b = &b;

    std::cout << "b:      " << b << std::endl;
    std::cout << "&b:     " << &b << std::endl;
    std::cout << "ptr_b:  " << ptr_b << std::endl;
    std::cout << "&ptr_b: " << &ptr_b << std::endl;
    std::cout << "*ptr_b: " << *ptr_b << std::endl;

    float c = 123410.1234567890123456789;
    double d = 123420.1234567890123456789012345678901234567890;
    std::cout << "c:      " << c << std::endl;
    std::cout << "d:      " << d << std::endl;
    std::cout << "c/2:      " << c / 2 << std::endl;
    std::cout << "d/2:      " << d / 2 << std::endl;

    char letter = 'L';
    char number8 = '8';
    char number9 = '9';
    std::cout << "num8+9:    " << number8 + number9 << std::endl;
    std::cout << "letter+num8:   " << letter + number8 << std::endl;
    string stringi = "hello world";
    std::cout << "stringi:    " << stringi << std::endl;

    long double e = 0.1234567890123456789012345678901234567890;

    std::cout << "e:      " << e << std::endl;

    std::cout << "e/2:      " << e / 2 << std::endl;

    int i = 0;
    i++;
    ++i;
    cout << i << endl;
    i -= 4;
    cout << i++ << endl;
    cout << i << endl;

    //
    cout << "true/false?: " << (b == c) << endl;
    cout << "true/false?: " << (b != c) << endl;
    cout << "true/false?: " << !(b != c) << endl;
    cout << "true/false?: " << (b <= c) << endl;

    cout << endl;
    cout << "&&true/false?: " << ((4 > 7) && (5 < 9)) << endl;
    /* koniunkcja:
     * 1 0 0
     * 0 1 0
     * 1 1 1
     * 0 0 0
     */
    cout << endl;
    cout << "||true/false?: " << ((4 > 7) || (5 < 9)) << endl;
    /* alternatywa:
        * 1 0 1
        * 0 1 1
        * 1 1 1
        * 0 0 0
        */
    cout << endl;
    cout << "||&&true/false?: " << (((4 > 7) || (5 < 9)) && !((4 > 7) || (5 < 9))) << endl; //false

    cout << endl;
    cout << endl;
    cout << (10 & 2) << endl; //2
    cout << (10 | 2) << endl; //10
    cout << (10 ^ 2) << endl; //8
    cout << (~2) << endl;   //-3 ==> 00000000 00000000 00000000 00000010 ==> 11111111 11111111 11111111 11111101
    short bin = 2;
    cout << (~bin) << endl;
    cout << (10 >> 2) << endl;
    cout << (10 << 2) << endl;

    int xif;
    int yif;
//    cin >> xif;
//    cin >> yif;
    if (xif < yif){
        cout << xif << " jest mniejsze od " << yif << endl;
        cout << "coś" << endl;}
    else if (xif == yif)
        cout << xif << " równe " << yif << endl;
    else
        cout << xif << " jest większe od " << yif << endl;


    char aa = 'k';
    switch(aa)
    {
        case 0:
            cout << "a jest rowne 0" << endl;
            break;
        case 25:
            cout << "a jest rowne 25" << endl;
            break;
        case 107:
            cout << "a jest rowne k" << endl;
            break;
        default:
            cout << "a nie jest rowne ani 0, 25, ani 50" << endl;

    }

    int aaa = 15;
    int bbb = 100;
    string nazwa = aaa > bbb ? " a wieksze od b " : "a mniejsze od b lub rowne";
cout << nazwa << endl;
cout << (aaa > bbb ? aaa : bbb) +10 << endl;

//przyklad:
//
//char znak;
//    cout << "kontynuowac?(t/n)  "<< endl;
//    cin >> znak;
//if (znak == 't' || znak == 'T')
//    goto przyklad;

int tab[2][2] = {0,1,2,3} ;
cout << tab[0][0] << endl;
    cout << tab[1][0] << endl;
    cout << tab[0][1] << endl;
    cout << tab[1][1] << endl;
    cout << &tab[0][0] << endl;
    cout << &tab[1][0] << endl;
    cout << &tab[0][1] << endl;
    cout << &tab[1][1] << endl;



    for (int i = 0; i < 5; i++){
cout << i << endl;

    }

    while (i++ < 10)
        cout << "i wynosi: " << i << endl;

    do {
        i = 0;
        cout << "(do) i wynosi: " << i << endl;
    } while (i != 0);

    int n = 1234;
    int ilCyfr = 1;

    cout << 1234 / 10 << endl;
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    // == - porownanie, = - przypisanie

    int tmp = n;
    while (tmp /= 10) // n = n / 10;
        ilCyfr++;

    cout << "liczba: " << n << " ma " << ilCyfr << " cyfry" << endl;

    cout << "\n\n";

    /*
     1 2 3 4  5  6  7  8 9 10
     2 4 6 8 10 12 14 16 18 20
     3 6 9 12 15 ...
     4 8 12 ...


    */

    for (int i = 1; i <= 10; i++) //i = 1
    {
        if (i == 5)
            continue;
        for (int j = 1; j <= 15; j++)//j = 11
        {
            cout.width(4);
            cout << i * j;
            if (j ==9)
                break;
        }

        cout << endl;
    }

    cout << "\n\n";




    return 0;

system ("pause");

}