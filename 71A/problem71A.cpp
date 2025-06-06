#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, size;

    vector<string> words;
    string word, asw;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> word;
        words.push_back(word);
    }

    for(int i = 0; i < n; i++) {

        word = words[i];
        asw.clear();

        int size = word.length();

        if(size <= 10) {
            asw = word;
        }else {
            asw.push_back(word[0]);
            asw.append(to_string(size-2));
            asw.push_back(word[size-1]);
        }
        
        cout << asw << endl;
    }

    return 0;
}