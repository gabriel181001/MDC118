#include <stdio.h>

const int matricula = 1; 

int main()
{
    int mat;
    int m_e_n[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000}, {4444, 30004000}, {5555, 30005000}, {6666, 30006000}, {7777, 30007000}};
    
    printf("Insira a matricula: ");
    scanf("%i", &mat);

    switch (mat)
    {
    case 1111:
        printf("Seu numero é: %i\n", m_e_n[1][matricula]);
        break;
    case 2222:
        printf("Seu numero é: %i\n", m_e_n[2][matricula]);
        break;
    case 3333:
        printf("Seu numero é: %i\n", m_e_n[3][matricula]);
        break;
    case 4444:
        printf("Seu numero é: %i\n", m_e_n[4][matricula]);
        break;
    case 5555:
        printf("Seu numero é: %i\n", m_e_n[5][matricula]);
        break;
    case 6666:
        printf("Seu numero é: %i\n", m_e_n[6][matricula]);
        break;
    case 7777:
        printf("Seu numero é: %i\n", m_e_n[7][matricula]);
        break;
    default:
        printf("A matricula inserida é invalida!\n");
        
    }

    return 0;
}
