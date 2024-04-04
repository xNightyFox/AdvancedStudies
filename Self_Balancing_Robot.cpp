#define motorPin 9 // Pino PWM conectado ao motor

void setup() {
  pinMode(motorPin, OUTPUT); // Define o pino como saída
}

void loop() {
  // Ajusta a velocidade do motor em uma direção
  analogWrite(motorPin, 150); // Ajusta a velocidade para aproximadamente 50% do máximo
  delay(2000); // Aguarda 2 segundos
  
  // Inverte a direção do motor ajustando a polaridade do PWM
  analogWrite(motorPin, 255); // Ajusta a velocidade máxima do motor
  delay(2000); // Aguarda 2 segundos
  
  // Para o motor
  analogWrite(motorPin, 0); // Define o PWM como zero para parar o motor
  delay(1000); // Aguarda 1 segundo
}
