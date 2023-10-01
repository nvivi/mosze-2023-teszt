#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rosszul van írva a N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //"" kéne, hogy legyen és nincs ;
    for (int i = 0;) //Hiányzik a feltétel, az i növelése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //Hiányzik a feltétel
    {
        std::cout << "Ertek:" //Hiányzik a ; és a konrkét érték
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag; //Nem adunk neki értéket
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        atlag += b[i] //Nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

