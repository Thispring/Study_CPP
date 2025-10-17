// 행맨 구현
// 사용자가 맞춰야할 단어를 지정하고, 사용자는 알파벳을 입력합니다.
// 만약 입력받은 알파벳이 단어에 있다면, 단어의 위치에 해당 알파벳 개수만큼 표시합니다.

// TODO: string 배열과 난수를 사용해서 단어 랜덤 구현해보기
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // 사용자가 맞춰야할 단어
    string hangMan = "apple";
    string board = "_____";
    char user;
    int count = 5;
    
    while (1)
    {
        cout << "Try typing the alphabet and guess what it is" << endl;
        cout << "Your count: " << count << endl;
        cout << board << endl;
        cin >> user;

        for (int i = 0; i < hangMan.length(); i++)
        {
            if (user == hangMan[i])
                board[i] = user;
        }

        count--;

        if (board == hangMan)
        {
            cout << "hangMan live!, word is " << hangMan << endl;
            break;
        }

        if (count <= 0)
        {
            cout << "hangMan death, word is " << hangMan << endl;
            break; 
        }
    }

    return 0;
}
