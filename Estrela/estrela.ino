// ***** Programa Estrela RGB *****
// Ministério de Tecnologia
// Chico/Guilherme

//Bibliotecas

//Declaraçãoo de variaveis
#define LED_PIN_R_1            4
#define LED_PIN_G_1            16
#define LED_PIN_B_1            17
#define LED_PIN_R_2            5
#define LED_PIN_G_2            18
#define LED_PIN_B_2            19

#define LEDC_CHANNEL_0         0
#define LEDC_CHANNEL_1         1
#define LEDC_CHANNEL_2         2

#define LEDC_TIMER_8_BIT       8
#define LEDC_BASE_FREQ         5000

//#define DELAY_PONTA   3000
//#define DELAY_TRAJETO 20000
//#define DELAY_PISCA   250
//#define DELAY_FACES   100
//#define DELAY_STROBO  100

#define DANCE_COUNT   5
int dance_r[] = {255, 0, 0, 255, 255};
int dance_g[] = {0, 255, 0, 255, 255};
int dance_b[] = {0, 0, 255, 255, 0  };
int oldDance  = -1;

void setup() {                
  // Setup timer and attach timer to a led pin
  ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
  ledcSetup(LEDC_CHANNEL_1, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
  ledcSetup(LEDC_CHANNEL_2, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
  ledcAttachPin(LED_PIN_R_1, LEDC_CHANNEL_0);
  ledcAttachPin(LED_PIN_G_1, LEDC_CHANNEL_1);
  ledcAttachPin(LED_PIN_B_1, LEDC_CHANNEL_2);
  ledcAttachPin(LED_PIN_R_2, LEDC_CHANNEL_1);
  ledcAttachPin(LED_PIN_G_2, LEDC_CHANNEL_0);
  ledcAttachPin(LED_PIN_B_2, LEDC_CHANNEL_2);

  ledcWrite(LEDC_CHANNEL_0, 0);
  ledcWrite(LEDC_CHANNEL_1, 0);
  ledcWrite(LEDC_CHANNEL_2, 0);
    
}

// the loop routine runs over and over again forever:
void loop() {

  ledcWrite(LEDC_CHANNEL_0, 0);
  ledcWrite(LEDC_CHANNEL_1, 0);
  ledcWrite(LEDC_CHANNEL_2, 0);

  delay(5000); // 5 Segundos Anted do FADE

  for (int j = 0; j < 3; j++)
  {
    ledcWrite(LEDC_CHANNEL_0, 0);
    ledcWrite(LEDC_CHANNEL_1, 0);
    ledcWrite(LEDC_CHANNEL_2, 0);

    // Faz efeito fade in. Tempo total = 1,0 segundos
    for (int i = 10; i <= 255; i++)
    {
      
      ledcWrite(LEDC_CHANNEL_0, i);
      ledcWrite(LEDC_CHANNEL_1, i);
      ledcWrite(LEDC_CHANNEL_2, 0);

      delay(5);
    }
    
    delay(300); // Tempo entre Fades
    
    // Faz efeito fade out. Tempo total = 1,0 segundos
    for (int i = 255; i >= 10; i--)
    {
      ledcWrite(LEDC_CHANNEL_0, i);
      ledcWrite(LEDC_CHANNEL_1, i);
      ledcWrite(LEDC_CHANNEL_2, 0);

      delay(5);
    }
    delay(300); // Tempo entre Fades
  }

  // Liga todas as faces (2:54 - 0:20)
  ledcWrite(LEDC_CHANNEL_0, 255);
  ledcWrite(LEDC_CHANNEL_1, 255);
  ledcWrite(LEDC_CHANNEL_2, 255);

  delay(55850);//TEMPO DE BRANCO

  // Faz animação com as faces. Tempo total = imax * 0.2 * 8 = 62 (3:42 - 1:08)
  for (int i = 0 ; i < 92 ; i++)// Antigo contador == 39 (for (int i = 0 ; i < 39 ; i++))
  {
    int val = random(0,DANCE_COUNT);
    while(val == oldDance){
      val = random(0,DANCE_COUNT);
    }
    
    ledcWrite(LEDC_CHANNEL_0, dance_r[val]);
    ledcWrite(LEDC_CHANNEL_1, dance_g[val]);
    ledcWrite(LEDC_CHANNEL_2, dance_b[val]);
    oldDance = val;
    delay(500); // Tempo mudança de cor do dance
  }

  // Mantém todos os LEDs desligados (4:44 - 2:10)
  while(1)
  {
    // Desliga todos os leds
    ledcWrite(LEDC_CHANNEL_0, 0);
    ledcWrite(LEDC_CHANNEL_1, 0);
    ledcWrite(LEDC_CHANNEL_2, 0);
  }
}
