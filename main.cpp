#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Rosszul volt írva a NELEMENTS

    std::cout << "1-100 értékek duplázása"; // Hiányzott a pontosvessző

    for (int i = 0; i < N_ELEMENTS; i++) // Hiányzott a pontosvessző, és a ciklus feltételében i<n_elements
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++) // Hiányzott a pontosvessző, és a ciklus feltételében i<n_elements
    {
        std::cout << "Érték: " << b[i] << std::endl; // Hiányzott maga az érték(b[i])
    }    

    std::cout << "Átlag számítása: " << std::endl;

    int atlag = 0; // Hiányzott a változó értékadása

    for (int i = 0; i < N_ELEMENTS; i++) // Hiányzott a pontosvessző, és a ciklus feltételében i<n_elements
    {
        atlag += b[i]; // Hiányzott a ;
    }

    atlag /= N_ELEMENTS; 

    std::cout << "Átlag: " << atlag << std::endl; 

    delete[] b; // Felszabadítjuk a dinamikusan foglalt memóriát, ez is hiányzott ha hibának vehető
    std::cout << "Kiíratok valamit stdouttal mint ismerős" << std::endl;
    return 0;
}
