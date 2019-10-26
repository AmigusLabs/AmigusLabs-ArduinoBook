// Declaración de variables

int led = 12;                // Led conectado no pin 12

// Configuración

void setup() {
 pinMode(led, OUTPUT);      // Configuramos o pin como saida

}

// Programa

void loop() {               // O programa se executa repetidamente
  
digitalWrite(led, HIGH);    // Envía 5V ao pin do led (12) (enciende)
delay(500);                 // espera 500ms = 0,5s
digitalWrite(led, LOW);     // Envía 0V (apaga)
delay(100);                 // espera 100ms = 0,1s

}
