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
        case 'A':
            printf("V");
            break;
        case 'B':
            printf("Z");
            break;
        case 'C':
            printf("P");
            break;
        case 'D':
            printf("R");
            break;
        case 'E':
            printf("Q");
            break;
        case 'F':
            printf("O");
            break;
        case 'G':
            printf("T");
            break;
        case 'H':
            printf("K");
            break;
        case 'I':
            printf("F");
            break;
        case 'J':
            printf("C");
            break;
        case 'K':
            printf("M");
            break;
        case 'L':
            printf("N");
            break;
        case 'M':
            printf("X");
            break;
        case 'N':
            printf("Y");
            break;
        case 'O':
            printf("E");
            break;
        case 'P':
            printf("I");
            break;
        case 'Q':
            printf("A");
            break;
        case 'R':
            printf("B");
            break;
        case 'S':
            printf("D");
            break;
        case 'T':
            printf("L");
            break;
        case 'U':
            printf("J");
            break;
        case 'V':
            printf("S");
            break;
        case 'W':
            printf("U");
            break;
        case 'X':
            printf("G");
            break;
        case 'Y':
            printf("W");
            break;
        case 'Z':
            printf("H");
            break;
        case 'a':
            printf("v");
            break;
        case 'b':
            printf("z");
            break;
        case 'c':
            printf("p");
            break;
        case 'd':
            printf("r");
            break;
        case 'e':
            printf("q");
            break;
        case 'f':
            printf("o");
            break;
        case 'g':
            printf("t");
            break;
        case 'h':
            printf("k");
            break;
        case 'i':
            printf("f");
            break;
        case 'j':
            printf("c");
            break;
        case 'k':
            printf("m");
            break;
        case 'l':
            printf("n");
            break;
        case 'm':
            printf("x");
            break;
        case 'n':
            printf("y");
            break;
        case 'o':
            printf("e");
            break;
        case 'p':
            printf("i");
            break;
        case 'q':
            printf("a");
            break;
        case 'r':
            printf("b");
            break;
        case 's':
            printf("d");
            break;
        case 't':
            printf("l");
            break;
        case 'u':
            printf("j");
            break;
        case 'v':
            printf("s");
            break;
        case 'w':
            printf("u");
            break;
        case 'x':
            printf("g");
            break;
        case 'y':
            printf("w");
            break;
        case 'z':
            printf("h");
            break;
        default:
            printf(" ");
        }
    }
    return 0;
}