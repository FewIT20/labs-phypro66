#include <stdio.h>
#include <string.h>
int main()
{
    char text[201];
    scanf("%[^\n]s", &text);
    for (int i = 0; i < strlen(text); i++)
    {
        switch (text[i])
        {
        case 'V':
            printf("A");
            break;
        case 'Z':
            printf("B");
            break;
        case 'P':
            printf("C");
            break;
        case 'R':
            printf("D");
            break;
        case 'Q':
            printf("E");
            break;
        case 'O':
            printf("F");
            break;
        case 'T':
            printf("G");
            break;
        case 'K':
            printf("H");
            break;
        case 'F':
            printf("I");
            break;
        case 'C':
            printf("J");
            break;
        case 'M':
            printf("K");
            break;
        case 'N':
            printf("L");
            break;
        case 'X':
            printf("M");
            break;
        case 'Y':
            printf("N");
            break;
        case 'E':
            printf("O");
            break;
        case 'I':
            printf("P");
            break;
        case 'A':
            printf("Q");
            break;
        case 'B':
            printf("R");
            break;
        case 'D':
            printf("S");
            break;
        case 'L':
            printf("T");
            break;
        case 'J':
            printf("U");
            break;
        case 'S':
            printf("V");
            break;
        case 'U':
            printf("W");
            break;
        case 'G':
            printf("X");
            break;
        case 'W':
            printf("Y");
            break;
        case 'H':
            printf("Z");
            break;
        case 'v':
            printf("a");
            break;
        case 'z':
            printf("b");
            break;
        case 'p':
            printf("c");
            break;
        case 'r':
            printf("d");
            break;
        case 'q':
            printf("e");
            break;
        case 'o':
            printf("f");
            break;
        case 't':
            printf("g");
            break;
        case 'k':
            printf("h");
            break;
        case 'f':
            printf("i");
            break;
        case 'c':
            printf("j");
            break;
        case 'm':
            printf("k");
            break;
        case 'n':
            printf("l");
            break;
        case 'x':
            printf("m");
            break;
        case 'y':
            printf("n");
            break;
        case 'e':
            printf("o");
            break;
        case 'i':
            printf("p");
            break;
        case 'a':
            printf("q");
            break;
        case 'b':
            printf("r");
            break;
        case 'd':
            printf("s");
            break;
        case 'l':
            printf("t");
            break;
        case 'j':
            printf("u");
            break;
        case 's':
            printf("v");
            break;
        case 'u':
            printf("w");
            break;
        case 'g':
            printf("x");
            break;
        case 'w':
            printf("y");
            break;
        case 'h':
            printf("z");
            break;
        default:
            printf(" ");
        }
    }
    return 0;
}