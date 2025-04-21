#include <bits/stdc++.h>

using namespace std;

//OBSERVAcaoO: todas as questoes devem ser resolvidas com recursao, sem utilizar nenhum for/while

//retorna a soma dos elementos entre os indices a e b do vetor v
//por exemplo, sendo v = {4, 5, 2, 1, 3}, somaElementos(v, 0, 2) deve retornar 11
int somaElementos(vector<int> v, int a, int b) {
	if(a == b) return v[a];
	else{
		int soma = v[a] + somaElementos(v, a+1, b);
		return soma; 
	}
}


//retorna se a substring s entre os indices a e b eh um palindromo
//por exemplo, ehPalindromo("fbabg", 1, 3) deve retornar true pois a substring "bab" eh um palindromo
bool ehPalindromo(string s, int a, int b) {

	if(a >= b) return true; 
	if(s[a] == s[b] ){
		return  ehPalindromo(s, a + 1, b - 1);
	}else return false;
	
}

//retorna a quantidade de elementos gerados a partir de n seguindo as regras do problema 3n+1
//se n for impar, multiple por 3 e some 1; se for par, divida por 2; repita ate chegar em 1
//por exemplo, qtdElementos3n1(5) deve retornar 6, pois a sequencia gerada (5 16 8 4 2 1) possui 6 elementos
int qtdElementos3n1(int n) {
	int cont; 

    if(n == 1) return 1; 

    if(n%2 != 0 ){
        cont = 1 + qtdElementos3n1(3*n + 1);
    }else{
        cont = 1 + qtdElementos3n1(n/2);
    }

    return cont;   
}

//retorna a soma dos digitos de um numero n. O numero pode ser negativo.
int somaDigitos(int n) {
	int soma;
	if(n < 10 && n >= 0) return n; 

	if(n < 0){
		n = -n; 
	}
	soma = n%10 + somaDigitos(n/10); 
	return soma; 
	
}

//retorna a string palindromo k(k-1)(k-2)...a...(k-2)(k-1)k, onde k eh um caractere, k-1 eh o caractere anterior, etc
//por exemplo, gerarPalindromo('d') deve retornar dcbabcd
//gerarPalindromo('e') deve retornar edcbabcde
//lembre-se de que voce pode concatenar strings com o operador +
string gerarPalindromo(char k) {
	if(k == 'a') return "a"; 
	return k + gerarPalindromo(k-1) + k; 
	
}

//retorna o resultado da exponenciacao base^expoente
//considere que o expoente eh sempre nao negativo
//por exemplo, potencia(2, 3) deve retornar 8
int potencia(int base, int expoente) {
	if(expoente == 0) return 1; 

	return base*potencia(base, expoente - 1); 
}

//retorna se eh possivel compor (sem resto) n reais com x notas de a reais e y notas de b reais
//nao precisa necessariamente utilizar todas as notas
//por exemplo, saquePossivel(10, 1, 5, 1, 10) retorna true, pois da para compor 10 reais com 1 nota de 10 reais
//saquePossivel(13, 4, 1, 3, 5) retorna true, pois da para compor 13 reais com 3 notas de 1 real e 2 notas de 5 reais
//saquePossivel(13, 2, 1, 3, 5) retorna false, pois nao da para compor 13 reais tendo 2 notas disponiveis de 1 e 3 notas disponiveis de 5
bool saquePossivel(int n, int x, int a, int y, int b) {
	if(n == 0) return true; 

	if(n>0 && x == 0 && y == 0) return false; 

	bool notaA{false}; 
	if (a > 0 && n >= a && x > 0){
		notaA = saquePossivel(n - a, x - 1, a, y , b); 
	}

	bool notaB{false}; 
	if(b > 0 && n >= b && y > 0){
		notaB = saquePossivel(n -b, x, a, y - 1, b); 
	}

	return notaA || notaB; 



}

int main() {

	int op;
	cout << "Escolha a funcao a ser testada: " << endl;
	cout << "1: somaElementos" << endl;
	cout << "2: ehPalindromo" << endl;
	cout << "3: qtdElementos3n1" << endl;
	cout << "4: somaDigitos" << endl;
	cout << "5: gerarPalindromo" << endl;
	cout << "6: potencia" << endl;
	cout << "7: saquePossivel" << endl;
	cout << "0: todas as funcoes" << endl;

	cin >> op;

	if(op == 0 || op == 1) {
		vector<int> v = {4, 5, 2, 1, 3};
		assert(somaElementos(v, 0, 2) == 11);
		assert(somaElementos(v, 2, 4) == 6);
	}

	if(op == 0 || op == 2) {
		assert(ehPalindromo("", 0, 0) == 1);
		assert(ehPalindromo("a", 0, 0) == 1);
		assert(ehPalindromo("aba", 0, 2) == 1);
		assert(ehPalindromo("abba", 0, 3) == 1);
		assert(ehPalindromo("abcba", 0, 4) == 1);
		assert(ehPalindromo("abccba", 0, 5) == 1);
		assert(ehPalindromo("abcd", 0, 3) == 0);
		assert(ehPalindromo("abccbx", 0, 5) == 0);
		assert(ehPalindromo("araara", 0, 5) == 1);
		assert(ehPalindromo("fbabg", 1, 3) == 1);
		assert(ehPalindromo("fbabg", 0, 4) == 0);
		assert(ehPalindromo("arara", 0, 4) == 1);
		assert(ehPalindromo("asa", 0, 2) == 1);
		assert(ehPalindromo("osso", 0, 3) == 1);
		assert(ehPalindromo("ovo", 0, 2) == 1);
		assert(ehPalindromo("radar", 0, 4) == 1);
		assert(ehPalindromo("reviver", 0, 6) == 1);
		assert(ehPalindromo("salas", 0, 4) == 1);
		assert(ehPalindromo("anilina", 0, 6) == 1);
		assert(ehPalindromo("mirim", 0, 4) == 1);
		assert(ehPalindromo("socos", 0, 4) == 1);
		assert(ehPalindromo("amor a roma", 0, 10) == 1);
		assert(ehPalindromo("1234321", 0, 6) == 1);
		assert(ehPalindromo("1234322", 0, 6) == 0);
		assert(ehPalindromo("anotaram a data da maratona", 0, 26) == 0);
	}


	if(op == 0 || op == 3) {

		assert(qtdElementos3n1(5) == 6);
		assert(qtdElementos3n1(6) == 9);
	}

	if(op == 0 || op == 4) {
		assert(somaDigitos(810027) == 18);
		assert(somaDigitos(-1823) == 14);
	}

	if(op == 0 || op == 5) {
		assert(gerarPalindromo('a') == "a");
		assert(gerarPalindromo('c') == "cbabc");
		assert(gerarPalindromo('e') == "edcbabcde");
		assert(gerarPalindromo('z') == "zyxwvutsrqponmlkjihgfedcbabcdefghijklmnopqrstuvwxyz");
	}

	if(op == 0 || op == 6) {
		assert(potencia(2, 3) == 8);
		assert(potencia(2, 5) == 32);
		assert(potencia(3, 5) == 243);
		assert(potencia(7, 2) == 49);
		assert(potencia(5, 0) == 1);
	}

	if(op == 0 || op == 7) {
		assert(saquePossivel(56, 9, 6, 8, 2) == 1);
		assert(saquePossivel(50, 10, 8, 9, 5) == 1);
		assert(saquePossivel(21, 4, 7, 3, 3) == 1);
		assert(saquePossivel(56, 6, 7, 9, 2) == 1);
		assert(saquePossivel(85, 6, 3, 10, 7) == 1);
		assert(saquePossivel(96, 8, 9, 9, 8) == 1);
		assert(saquePossivel(9, 0, 9, 6, 3) == 1);
		assert(saquePossivel(9, 0, 5, 3, 3) == 1);
		assert(saquePossivel(27, 7, 7, 5, 9) == 1);
		assert(saquePossivel(20, 6, 3, 8, 7) == 1);
		assert(saquePossivel(31, 6, 6, 4, 7) == 1);
		assert(saquePossivel(14, 6, 3, 1, 2) == 1);
		assert(saquePossivel(60, 8, 6, 10, 6) == 1);
		assert(saquePossivel(18, 4, 4, 2, 7) == 1);
		assert(saquePossivel(36, 8, 3, 5, 7) == 1);
		assert(saquePossivel(29, 5, 7, 8, 2) == 1);
		assert(saquePossivel(98, 7, 9, 8, 7) == 1);
		assert(saquePossivel(80, 5, 4, 10, 9) == 1);
		assert(saquePossivel(69, 10, 7, 6, 6) == 1);
		assert(saquePossivel(14, 5, 4, 6, 5) == 1);
		assert(saquePossivel(83, 1, 9, 9, 10) == 0);
		assert(saquePossivel(84, 8, 9, 6, 1) == 0);
		assert(saquePossivel(84, 4, 2, 9, 7) == 0);
		assert(saquePossivel(37, 6, 3, 8, 9) == 0);
		assert(saquePossivel(58, 9, 10, 1, 5) == 0);
		assert(saquePossivel(4, 9, 3, 5, 3) == 0);
		assert(saquePossivel(81, 10, 5, 3, 1) == 0);
		assert(saquePossivel(99, 3, 5, 1, 6) == 0);
		assert(saquePossivel(66, 7, 6, 3, 5) == 0);
		assert(saquePossivel(11, 2, 9, 1, 8) == 0);
		assert(saquePossivel(14, 10, 6, 5, 10) == 0);
		assert(saquePossivel(8, 2, 1, 7, 9) == 0);
		assert(saquePossivel(15, 4, 2, 0, 3) == 0);
		assert(saquePossivel(30, 2, 8, 0, 8) == 0);
		assert(saquePossivel(14, 6, 10, 3, 3) == 0);
		assert(saquePossivel(88, 9, 3, 2, 5) == 0);
		assert(saquePossivel(27, 1, 1, 4, 7) == 0);
		assert(saquePossivel(73, 2, 10, 5, 7) == 0);
		assert(saquePossivel(83, 2, 7, 0, 1) == 0);
		assert(saquePossivel(84, 0, 1, 8, 7) == 0);
	}

	return 0;

}
