//
//  main.cpp
//  BMOAulasCpp03VariablesInCpp
//
//  Created by Breno Medeiros on 23/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //unsigned      1 bit       - libera o bit de sinal para extender o limete do numero armazenado
    //char          1 Byte      - Usado tb para numeros. Por ex: 'A' = 65
    //short         2 Bytes
    //int           4 Bytes
    //long          4 Bytes
    //long long     8 Bytes
    //float         4 Bytes     - Aceita decimais
    //double        8 Bytes     - Aceita decimais
    //bool          1 Byte      - Isso pq, msm que baste 1 bit para representar, enderecos sao em Byte
    
    int variavel = 2; //int assinado(4 Bytes = 32 bits - 1 bit de sinal) = [-2bilhoes a +2bilhoes]
    std::cout << variavel << " de tamanho(Bytes):" << sizeof(int) << std::endl;
    variavel = 20;
    std::cout << variavel << "\n" << std::endl;
    
    unsigned int variavelSemSinal = 40; //int assinado(4 Bytes = 32 bits) = [-4bilhoes a +4bilhoes]
    std::cout << variavelSemSinal << " de tamanho(Bytes):" << sizeof(unsigned int) << "\n" << std::endl;
    
    char a = 65;    // Por instancia como char, o std::cout ira printa a letra e nao o numero
    std::cout << a << " de tamanho(Bytes):" << sizeof(char) << std::endl;
    a = 'A';
    std::cout << a << "\n" << std::endl;
    
    short b = 'B';  // Por instancia como short, o std::cout ira printa a numero e nao letra
    std::cout << b << " de tamanho(Bytes):" << sizeof(short) << std::endl;
    b = 66;
    std::cout << b << "\n" << std::endl;
    
    float variavelComDecimais = 5.5f;   // Msm declarando float, se não escrever 'f' ele sera double
    std::cout << variavelComDecimais << " de tamanho(Bytes):" << sizeof(float) << std::endl;
    float doublePorRecebimento = 5.5;   // Msm declarando float ficou double por não escrever 'f'
    std::cout << doublePorRecebimento << std::endl;
    double doublePorDeclaracao = 5.5;   // Msm declarando float ficou double por não escrever 'f'
    std::cout << doublePorDeclaracao << " de tamanho(Bytes):" << sizeof(double) << "\n" << std::endl;
    
    bool boleano = true;    //0(false) ou qualquer outra coisa 1(true)
    std::cout << boleano << " de tamanho(Bytes):" << sizeof(bool) << std::endl;
    boleano = 0;
    std::cout << boleano << std::endl;
    boleano = 1;
    std::cout << boleano << std::endl;
    boleano = 45343;
    std::cout << boleano << std::endl;
    boleano = "Ola mundo";
    std::cout << boleano << "\n" << std::endl;
    
    //bool* ponteiro;    //Por um '*' define isso como ponteiro em vez de variavel
    //bool& referencia;  //Por um '*' define isso como referencia em vez de variavel
    
    return 0;
}
