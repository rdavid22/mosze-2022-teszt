#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                                  // 1. hiba: szintaktikai, N_ELEMENTS helyett NELEMENTS van írva
    std::cout << '1-100 ertekek duplazasa'                        // 2-3. hiba: szintaktikai, aposztrófot használnak idézőjelek helyett, sor vége nincs lezárva ;-vel
    for (int i = 0;)                                              // 4. hiba: szintaktikai, for ciklus nincs megfelelően kifejtve (inkrementálás & feltétel)
    {                                                             // 5-6. hiba: szintaktikai, hibás hivatkozás a dinamikus tömbre, értékadás i-től indul (0), a követelmény pedig 1 
        b[i] = i * 2;                                             
    }
    for (int i = 0; i; i++)                                       // 7. hiba: szintaktikai, nincs kifejtve meddig menjen a ciklus
    {
        std::cout << "Ertek:"                                     // 8-9. hiba: szintaktikai & szemantikai, nincs lezárva a cout, nincs meghatározva, hogy mit szeretnénk kiírtani
    }    
    std::cout << "Atlag szamitasa: " << std::endl;              
    int atlag;                                                    // 10. hiba: szemantikai, nincs inicializálva az átlag változó
    for (int i = 0; i < N_ELEMENTS, i++)                          // 11. hiba: szintaktikai, hibás ciklusfeltétel elválasztó karakter (,)
    {
        atlag += b[i]                                             // 12-13. hiba: hibás hivatkozás a memóriacímre, sor vége nincs lezárva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
