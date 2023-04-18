if (temper > 24)
{
    LED0_ON();
}
else
{
    LED0_OFF();
}
if (KeyNum == 1)
{
    Angle += 1;
    // Buzzer_us(1912,1);
    Buzzer_Turn();
    LED1_Turn();
}
if (KeyNum == 2)
{
    Angle -= 1;
    // Buzzer_us(1500,1);
    Buzzer_Turn();
    LED2_Turn();
}
if (KeyNum == 3)
{
    Angle += 1;
    // Buzzer_us(1912,1);
    Buzzer_Turn();
    LED1_ON();
}
if (KeyNum == 4)
{
    Angle -= 1;
    // Buzzer_us(1500,1);
    Buzzer_Turn();
    LED1_OFF();
}