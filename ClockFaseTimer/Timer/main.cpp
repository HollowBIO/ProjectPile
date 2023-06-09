#include<iostream>
#include<Windows.h>
#include<string>
#include<chrono>

using namespace std;

string GetNumPiece(int row, int num);

int main() {
    int min= -1, sec = -1,m1 = -1,m2 = -1,s1 = -1,s2 = -1;
    cout << "Enter a time you wish to set timer.First minutes:";
        cin >> min;
    cout << "Now seconds:";
        cin >> sec;
    //auto start = chrono::steady_clock::now();
    while (true) {
        system("cls");
        
        if (min == 0 && sec == 0)
        {
            break;
        }
        if (sec == 0)
        {
            sec = 59;
            min--;
        }
        int row = 0;
        m1 = min / 10;
        m2 = min % 10;
        s1 = sec / 10;
        s2 = sec % 10;
       
        cout << "\n\n";
        for (int i = 0; i < 9; i++) {
            
            if (row == 2 || row == 3 || row == 7 || row == 6) {
                cout <<"\t\t\t"<< GetNumPiece(row, m1) << "  " << GetNumPiece(row, m2) << " ## " << GetNumPiece(row, s1) << "  " << GetNumPiece(row, s2) << '\n';
            }
            else {
                cout << "\t\t\t" << GetNumPiece(row, m1) << "  " << GetNumPiece(row, m2) << "    " << GetNumPiece(row, s1) << "  " << GetNumPiece(row, s2) << '\n';
            }
            row++;
        }
        sec--;
        Sleep(915);   
    }

    //auto end  = chrono::steady_clock::now();
    //double time = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count());
    //cout << "Time:" << time / 1e9 << '\n';
    return 0;
}
    string GetNumPiece(int row, int num) {
        string bigNums[9][10] = { {"#########", "      ###", "#########", "#########", "###   ###", "#########", "#########", "#########", "#########", "#########"},
                                  {"###   ###", "      ###", "###   ###", "###   ###", "###   ###", "###   ###", "###   ###", "      ###", "###   ###", "###   ###" },
                                  {"###   ###", "      ###", "      ###", "      ###", "###   ###", "###      ", "###      ", "      ###", "###   ###", "###   ###"},
                                  {"###   ###", "      ###", "      ###", "      ###", "###   ###", "###      ", "###      ", "      ###", "###   ###", "###   ###"},
                                  {"###   ###", "      ###", "#########", "    #####", "#########", "#########", "#########", "      ###", "#########", "#########"},
                                  {"###   ###", "      ###", "###      ", "      ###", "      ###", "      ###", "###   ###", "      ###", "###   ###", "      ###"},
                                  {"###   ###", "      ###", "###      ", "      ###", "      ###", "      ###", "###   ###", "      ###", "###   ###", "      ###"},
                                  {"###   ###", "      ###", "###   ###", "###   ###", "      ###", "###   ###", "###   ###", "      ###", "###   ###", "###   ###"},
                                  {"#########", "      ###", "#########", "#########", "      ###", "#########", "#########", "      ###", "#########", "#########"} };

        return bigNums[row][num];
    }