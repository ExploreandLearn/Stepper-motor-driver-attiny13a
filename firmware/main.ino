// Stepper Motor Code
// ATtiny13A with DRV8825
// STEP = PB4 (Pin 3)
// DIR  = PB3 (Pin 2)
// M0   = PB0 (Pin 5)
// M1   = PB1 (Pin 6)
// M2   = PB2 (Pin 7)

void setup() 
{
  // Set PB0, PB1, PB2, PB3, PB4 as OUTPUT
  DDRB = (1 << PB4) | (1 << PB3) | (1 << PB2) | (1 << PB1) | (1 << PB0);

  // DIR = HIGH (Clockwise)
  PORTB |= (1 << PB3);

  // M0, M1, M2 = LOW (Full Step)
  PORTB &= ~((1 << PB0) | (1 << PB1) | (1 << PB2));
}

void loop() 
{
  PORTB |= (1 << PB4);    // STEP HIGH
  delayMicroseconds(5000);
  // delay(5000);
  PORTB &= ~(1 << PB4);   // STEP LOW
  delayMicroseconds(5000);
  // delay(5000);
}
