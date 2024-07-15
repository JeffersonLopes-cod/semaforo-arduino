/*******************************************************************************
* Projeto de um semáforo de carros.
*******************************************************************************/

const int frequencia = 100;
const int LED_VERDE = 11;
const int LED_AMARELO = 12;
const int LED_VERMELHO = 13;

const int TEMPO_VERDE = 3000;  // Tempo em milissegundos para o sinal verde
const int TEMPO_AMARELO = 2000;  // Tempo em milissegundos para o sinal amarelo
const int TEMPO_VERMELHO = 5000;  // Tempo em milissegundos para o sinal vermelho

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(10, OUTPUT);
}

// Sequencia que acontece

void loop() {
  // Sinal aberto: apaga LED vermelho, acende LED verde
  sinalVerde();
  
  // Sinal de atenção: apaga LED verde, acende LED amarelo
  sinalAmarelo();

  sonoro();
  
  // Sinal fechado: apaga LED amarelo, acende LED vermelho
  sinalVermelho();
}

void sonoro(){
  tone(10, frequencia); // gera frequencia de 2000Hz no buzzer
  delay(1000);
  noTone(10); // para frequencia no buzzer
  delay(1000);
}


// Função para o sinal verde
void sinalVerde() {
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  delay(TEMPO_VERDE);
}

// Função para o sinal amarelo
void sinalAmarelo() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
  delay(TEMPO_AMARELO);
}

// Função para o sinal vermelho
void sinalVermelho() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(TEMPO_VERMELHO);
}
