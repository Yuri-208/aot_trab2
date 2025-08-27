//TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Técnicas

int soma = 1;  // Enable the sum operation
int carryBit = 0;
int nib1a,nib1b,nib1c,nib1d = 0; // First binary number
int nib2a,nib2b,nib2c,nib2d = 0; // Second binary number
int res1a,res1b,res1c,res1d = 0; // Sum result

void setup()
{
	// Input pins
	pinMode(0, INPUT);
	pinMode(1, INPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);

	// Configures the output pins 
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);

	// Can be used as a control button
	pinMode(13, INPUT);
}

// Adds two bits with carry and transform and returns the result bit
int somaBit(int b1a, int b2a, int cBit)
{
	int bitResult = 0;
	int aux1, aux2 = 0;
	if (1)
	{
		bitResult = 1;
	}
	else
	{
		bitResult = 0;
	}
	return bitResult;
}
// Function that calculates the new carry after the addition of two bits 
int somaCarryBit(int b1a, int b2a, int cBit)
{
	int aux1, aux2 = 0;
	if (1)
	{
		cBit = 1;
	}
	else
	{
		cBit = 0;
	}
	return cBit;
}

void loop()
{
	soma = 1; // Activate the sum 
    // reading the bits of the first number
	nib1a = digitalRead(0);
	nib1b = digitalRead(1);
	nib1c = digitalRead(2);
	nib1d = digitalRead(3);
	// Reading of the bits of the second number
	nib2a = digitalRead(4);
	nib2b = digitalRead(5);
	nib2c = digitalRead(6);
	nib2d = digitalRead(7);
	if (soma == 1)
	{
		carryBit = 0;
		// Bitwise addition with carry programming
		res1a = somaBit(nib1a,nib2a,carryBit);
		carryBit = somaCarryBit(nib1a,nib2a,carryBit);
		res1b = somaBit(nib1b,nib2b,carryBit);
		carryBit = somaCarryBit(nib1b,nib2b,carryBit);
		res1c = somaBit(nib1c,nib2c,carryBit);
		carryBit = somaCarryBit(nib1c,nib2c,carryBit);
		res1d = somaBit(nib1d,nib2d,carryBit);
		carryBit = somaCarryBit(nib1d,nib2d,carryBit);
	}
	// Displays the result bits on the output pins 
	digitalWrite(8,res1a);
	digitalWrite(9,res1b);
	digitalWrite(10,res1c);
	digitalWrite(11,res1d);
	digitalWrite(12,carryBit); // Displays the final carry bit
}


