//Biblioteca Estáticas/Dinamicas
// *Fluxo (programas)
// -> escrita arquivos(.h,.c)
// -> compilação (.o,.s)	
// -> ligação/linking (.exe)
// -> loading
// -> execute

// *Bibliotecas 
// -> programas de uso recorrente
// -> incluídos pelo link
// -> documentação

// *Estáticas
// -> aumento do executável
// -> diminuição do tempo execução
// -> dedicada a um executável
// -> várias cópias na memória
// -> recompilação total

// *Dinâmicas
// -> diminuição do executável
// -> aumento do tempo execução
// -> compartilhada entre executáveis
// -> apenas uma cópia na memória
// -> recompilação de biblioteca

//.h -: int add(double, double)
//      int sub(double, double)

//.c -> double add(double a, double b)
//  {
//    return (a + b);
//  }
// double sub (double a, double b);
//  {
//    return (a - b);
//  }


//Estática

//gcc -c file1.c file2.c
// obj
// -> file1.o file2.o
// ar rcs file1.o file2.o

//Dinâmica

//gcc -wall -Fpic -c file1.c file2.c
// ->file1.0 file2.o
//gcc -shared -o libM.so

//install library
//* /nal/lib
//* ldconfig <-

// *teste.h = cria biblioteca

