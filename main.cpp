#include <iostream>
#include <ctime>
using namespace std;


//Problem 18
/*int add(int a, int b) {
    return a + b;
}
int muliply(int a, int b) {
    return a * b;
}
int main() {
    int (*ops[2])(int, int);
    ops[0] = &add, ops[1] = &muliply;
    int a, b; cout << "Input 2 integers: "; cin >> a >> b;
    cout << "Choose operation 0-add,1-multiply: ";
    int n; cin >> n;
    int result = ops[n](a, b);
    cout << result << endl;

    return 0;
}*/

//Problem 17
/*int add(int a, int b) {
    return a + b;
}
int muliply(int a, int b) {
    return a * b;
}
void calculate(int (*op)(int a, int b), int x, int y) {
    int n = op(x, y);
    cout << n << endl;
}
int main() {
    calculate(add, 2, 3);
    calculate(muliply, 2, 3);

    return 0;
}*/

//Problem 16
/*int add(int a, int b) {
    return a + b;
}
int muliply(int a, int b) {
    return a * b;
}
int main() {
    int (*fptr)(int, int);
    fptr = &add;
    cout << fptr(3, 4) << endl;
    fptr = &muliply;
    cout << fptr(3, 4) << endl;

    return 0;
}*/

//Problem 15
/*void greet() {
    cout << "Hello from greet()" << endl;
}
void bye() {
    cout << "Bye from bye()" << endl;
}
int main() {
    void (*fptr)();
    fptr = &greet;fptr();
    fptr = &bye;fptr();

    return 0;
}*/

//Problem 14
/*int main() {
    srand(time(0));
    string suits[4] = {"Hearts", "Diamonds", "Clubs",  "Spades"};
    string faces[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8",
        "9", "10", "Jack", "Queen", "King"
    };
    string decks[4][13];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            decks[i][j] = suits[i] + " of " + faces[j];
        }
    }int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int suits = rand()%4, faces = rand()%13;
        cout << decks[suits][faces] << endl;
    }

    return 0;
}*/

//Problem 13
/*int main() {
    srand(time(0));
    string suits[4] = {"Hearts", "Diamonds", "Clubs",  "Spades"};
    string ranks[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8",
        "9", "10", "Jack", "Queen", "King"
    };
    string decks[4][13];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            decks[i][j] = suits[i] + " of " + ranks[j];
        }
    }for (int i=0; i<6; i++) {
        int suits = rand()%4, ranks = rand()%13;
        cout << decks[suits][ranks] << endl;
    }

    return 0;
}*/

//Problem 12
/*int main() {
    const char *days[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    for (int i=0;i<7;i++) {
        cout << *(days[i]+1) << " ";
    }

    return 0;
}*/

//Problem 11
/*int main() {
    const char *suit[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
    for (int i = 0; i < 4; i++) {
        cout << suit[i] << " ";
    }

    return 0;
}*/

//Problem 10
/*int main() {
    int arr[5] = {4,6,1,3,7};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                int t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }for (int i=0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}*/

//Problem 9
/*int main() {
    int a=1, b=2, c=3;
    int *ptrs[3] = {&a,&b,&c};
    for (int i = 0; i < 3; i++) {
        cout << *(ptrs[i]) << endl;
    }

    return 0;
}*/