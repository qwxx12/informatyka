#include<iostream>
using namespace std;

bool isAnagram(char* word1, char* word2)
{
    int dl1 = strlen(word1);
    int dl2 = strlen(word2);
    if (dl1 != dl2) {
        return false;
    }

    int licz[127] = {};
    for (int i = 0; i < dl1; i++) {
        licz[word1[i]]++;
    }
    for (int i = 0; i < dl1; i++) {
        licz[word2[i]]--;
    }

    for (int i = 0; i < 127; i++) {
        if (licz[i] != 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    char word1[101], word2[101];
    cout << "Podaj pierwszy wyraz: ";
    cin >> word1;
    cout << "Podaj drugi wyraz: ";
    cin >> word2;

    if (isAnagram(word1, word2)) {
        cout << "Te wyrazy sa anagramami\n";
    }
    else {
        cout << "Te wyrazy nie sa anagramami\n";
    }
}