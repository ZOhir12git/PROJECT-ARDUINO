#include <ESP8266WiFi.h>
#include <IRrecv.h>
#include <IRremote.h>

const int RECV_PIN = D8;      // Broche de réception infrarouge
const int LED_PIN1 = D9;      // Broche de la LED externe
const int LED_PIN2 = D10;     // Broche de la LED externe
const int BUZZER_PIN = D11;   // Broche du buzzer

char ssid[] = "esp8266";           // Nom du réseau WiFi
char pass[] = "9987654321";        // Mot de passe du réseau WiFi

IPAddress server(192, 168, 137, 111);  // Adresse IP du serveur (récepteur)
WiFiClient client;

IRrecv irrecv(RECV_PIN);         // Initialisation du récepteur IR
decode_results results;          // Variable pour stocker les résultats IR

void setup() {
  Serial.begin(115200);
  
  irrecv.enableIRIn();           // Active le récepteur IR

  pinMode(LED_PIN1, OUTPUT);     // Configuration des broches en sortie
  pinMode(LED_PIN2, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  WiFi.begin(ssid, pass);        // Connexion au réseau WiFi

  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print("Connexion au réseau WiFi en cours...");
    delay(1000);
  }

  Serial.println("Connecté au réseau WiFi");
}
