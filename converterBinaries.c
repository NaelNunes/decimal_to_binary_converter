#include <string.h>
#include <stdio.h>

int main()
{
    
    int num, divResult = 0, resto = 0;
    char numTxtBinario[100] = "";
    char numTxtBinarioInvertido[100] = ""; 
    
    printf("Digite o número real para converter em binário: ");
    scanf("%d", &num);
    
    while ( num >= 2 ) {
        divResult = num / 2;
        resto = num % 2;
        strcat(numTxtBinario, resto ? "1" : "0");
        num = divResult;
    }
    
    strcat(numTxtBinario, num ? "1" : "0");
    
    int length = strlen(numTxtBinario);
    for (int i = 0; i < length; i++) {
        numTxtBinarioInvertido[i] = numTxtBinario[length - i - 1]; 
    }

    printf("O numero binario é: %s", numTxtBinarioInvertido);
    return 0;
}