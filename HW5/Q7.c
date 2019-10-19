#include <msp430.h>
#include <string.h>
#include <ctype.h>

/**
 * main.c
 */
void main(void)
{
    //char str[] = "Go Knights";
    //char str[] = "Attention";
    char str[] = "Hello";
    char morse_code[36][5] = {".-",     // A = 0
            "-...",                 // B = 1
            "-.-.",                 // C = 2
            "-..",                  // D = 3
            ".",                    // E = 4
            "..-.",                 // F = 5
            "--.",                  // G = 6
            "....",                 // H = 7
            "..",                   // I = 8
            ".---",                 // J = 9
            "-.-",                  // K = 10
            ".-..",                 // L = 11
            "--",                   // M = 12
            "-.",                   // N = 13
            "---",                  // O = 14
            ".--.",                 // P = 15
            "--.-",                 // Q = 16
            ".-.",                  // R = 17
            "...",                  // S = 18
            "-",                    // T = 19
            "..-",                  // U = 20
            "...-",                 // V = 21
            ".--",                  // W = 22
            "-..-",                 // X = 23
            "-.--",                 // Y = 24
            "--..",                 // Z = 25
            ".----",                // 1 = 26
            "..---",                // 2 = 27
            "...--",                // 3 = 28
            "....-",                // 4 = 29
            ".....",                // 5 = 30
            "-....",                // 6 = 31
            "--...",                // 7 = 32
            "---..",                // 8 = 33
            "----.",                // 9 = 34
            "-----"};               // 0 = 35
    volatile unsigned int i, j, k;

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog 1000

    P1DIR |= 0x41;              // configure Port 1 bits 0,6 as output
    P1OUT &= 0xBE;              // turn off both LEDs

    for (i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);

    while (1)
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                for (j = 0; j < strlen(morse_code[str[i] - 'A']); j++)
                {
                    if (morse_code[str[i] - 'A'][j] == '.')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }
                    else if (morse_code[str[i] - 'A'][j] == '-')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 3 * 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }

                    for (k = 0; k < 10000; k++)
                    {
                    }
                }
            }
            else if (str[i] >= '1' && str[i] <= '9')
            {
                for (j = 0; j < strlen(morse_code[25 + str[i]]); j++)
                {
                    if (morse_code[25 + str[i]][j] == '.')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }
                    else if (morse_code[25 + str[i]][j] == '-')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 3 * 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }

                    for (k = 0; k < 10000; k++)
                    {
                    }
                }
            }
            else if (str[i] == '0')
            {
                for (j = 0; j < strlen(morse_code[35]); j++)
                {
                    if (morse_code[35][j] == '.')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }
                    else if (morse_code[35][j] == '-')
                    {
                        P1OUT |= 0x40;       // 0x01 on
                        for (k = 0; k < 3 * 10000; k++)
                        {
                        }
                        P1OUT &= ~0x40;      // 0x01 off
                    }

                    for (k = 0; k < 10000; k++)
                    {
                    }
                }
            }
            else if (str[i] == ' ')
            {
                for (k = 0; k < 7 * 10000; k++)
                {
                }
            }

            for (k = 0; k < 3 * 10000; k++)
            {
            }
        }

        P1OUT |= 0x01;                     // 0xBF on
        for (k = 0; k < 2 * 10000; k++)
        {
        }
        P1OUT &= ~0x01;                    // 0xBF off
    }
}
