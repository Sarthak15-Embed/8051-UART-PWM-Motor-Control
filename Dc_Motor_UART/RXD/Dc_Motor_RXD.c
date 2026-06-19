#include<reg51.h>
#include<uart.h>

void timer_delay(int);

sbit IN1 = P0^0;
sbit IN2 = P0^1;
sbit En  = P0^2;

char speed = 4;
bit direction = 0;

void main()
{
    char Rx_data;

    TMOD |= 0x01;

    UART_Init();

    while(1)
    {
        // Receive UART Data

        if(RI == 1)//// Check whether new UART data is received
        {
            Rx_data = UART_Rx();

            // Direction Control

            if(Rx_data == 'A')
            {
                direction = 0;
            }

            else if(Rx_data == 'B')
            {
                direction = 1;
            }

            // Speed Control

            else if(Rx_data >= '1' && Rx_data <= '4')
            {
                speed = Rx_data - '0';
            }
        }

        // Apply Direction

        if(direction == 0)
        {
            IN1 = 1;
            IN2 = 0;
        }
        else
        {
            IN1 = 0;
            IN2 = 1;
        }

        // PWM Speed Control

        if(speed == 1)
        {
            En = 1;
            timer_delay(1);

            En = 0;
            timer_delay(3);
        }

        else if(speed == 2)
        {
            En = 1;
            timer_delay(2);

            En = 0;
            timer_delay(2);
        }

        else if(speed == 3)
        {
            En = 1;
            timer_delay(3);

            En = 0;
            timer_delay(1);
        }

        else if(speed == 4)
        {
            En = 1;
        }
    }
}

void timer_delay(int time)
{
    char i;

    for(i = 0; i < time; i++)
    {
        TH0 = 0xEE;
        TL0 = 0x00;

        TR0 = 1;

        while(TF0 == 0);

        TR0 = 0;
        TF0 = 0;
    }
}