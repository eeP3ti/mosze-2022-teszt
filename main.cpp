#include <iostream>

constexpr int N_ELEMENTS = 100;//nem kell compile alatt ezt csinálni

int main()
{
    int *b = new int[NELEMENTS];// el van irva a név
    std::cout << '1-100 ertekek duplazasa' // nincs ';' a végén és végén legyen uj sor; 
    for (int i = 0;) // hiányoznak for ciklus paraméterei
    {
        b[i] = i * 2;// 0-99 helyett 1- 100 ig számoljon
    }
    for (int i = 0; i; i++) // feltétel miatt nem fog belekerülni a ciklusba egyszer se
    {
        std::cout << "Ertek:"// nem ír ki semit értéknek
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;// alap érték hozzáadása
    for (int i = 0; i < N_ELEMENTS, i++)// for ciklus paramétereit ;-el illik elválasztani
    {
        atlag += b[i]// ; hiányzik a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
