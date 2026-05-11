//Контрольная точка №2
//Задание 1. Вариант 15.
//Имеется массив из ID пользователей. Используя алгоритм смещения на N 
//разрядов влево (<<) зашифровать элементы массива. Выполнить расшифровку 
//элементов массива с помощью операции >>. 


/*
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, shift;
    cout << "Введите количество ID: ";
    cin >> n;
    
 
    const int MAX_SIZE = 100;
    int ids[MAX_SIZE];
    int encrypted[MAX_SIZE];
    int decrypted[MAX_SIZE];
    
    cout << "Введите ID: ";
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }
    
    cout << "Введите количество разрядов для сдвига: ";
    cin >> shift;
    
   
    for (int i = 0; i < n; i++) {
        encrypted[i] = ids[i] << shift;
    }
    
    
    for (int i = 0; i < n; i++) {
        decrypted[i] = encrypted[i] >> shift;
    }
    
   
    cout << "\nИсходные: ";
    for (int i = 0; i < n; i++) {
        cout << ids[i] << " ";
    }
    
    cout << "\nЗашифрованные: ";
    for (int i = 0; i < n; i++) {
        cout << encrypted[i] << " ";
    }
    
    cout << "\nРасшифрованные: ";
    for (int i = 0; i < n; i++) {
        cout << decrypted[i] << " ";
    }
    
    cout << endl;
    return 0;
}
*/



//Задание 2. Вариант 15. Дана строка. Удалить слова со M по N.

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string s, res;
    int M, N;
    
    getline(cin, s);
    cin >> M >> N;
    
    string word;      
    int wordNum = 1;  
   
    for (int i = 0; i <= s.length(); i++) {
        if (i < s.length() && s[i] != ' ') {
            word += s[i];
        }
        else {
            if (!word.empty()) {
                if (wordNum < M || wordNum > N) {
                    if (!res.empty()) res += ' ';
                    res += word;
                }
                wordNum++;        
                word.clear();     
            }
        }
    }
    cout << res << endl;
    return 0;
}
*/
