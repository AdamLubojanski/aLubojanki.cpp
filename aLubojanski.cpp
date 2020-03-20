#include <string>
#include <iostream>

using namespace std;

class zamiana{
       ifstream plik1;
       ofstream plik2;
public:
        zamiana();
        ~zamiana();
        bool isPalindrome(string s)
zamiana::zamiana(){ //konstruktor otwiera pliki
    plik1.open("c:\\od.txt");
    plik2.open("c:\\do.txt");
}

bool zamiana::isPalindrome(string s){


        int back = s.length()-1; //ostatnia litera s
        bool palindrome = true; //zakładamy że jest
        for (int i=0; i<s.length()/2 && palindrome; i++)//tylko do połowy stringu
                if (s[i] != s[back--])
                plik << "[ \n {\"string\": ..."; //zapis do JSON
                        palindrome = false;
        return palindrome;

}
zamiana::~zamiana(){ //destruktor - niejawnie wywołany przy zamknięciu main(), zamyka pliki
    plik1.close();
    plik2.close();
}
}
int main()
{
        cout << isPalindrome("kobylamamalybok");
    		zamiana z1; //tworzymy obiekt klasy zamiana - tu uruchamia się konstruktor
   			z1.isPalindrome(string s); //wywołujemy metodę, główną pętlę
    		return 0;
} //tu uruchamia się niejawnie destruktor
