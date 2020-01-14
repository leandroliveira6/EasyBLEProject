#include <PhotoService.hpp>
#include <PotentiometerService.hpp>
#include <LedService.hpp>
#include <ReleService.hpp>
#include <ThermistorService.hpp>
// #include <ServoService.hpp>
// #include <ButtonService.hpp>
// #include <OledService.hpp>

PhotoService photo(35, "LUMINOSIDADE", "Pino 35");
PotentiometerService pot(36, "POTENCIOMETRO", "Pino 36");
LedService ledAmarelo(25, "LED Amarelo", "Pino 25");
LedService ledVermelho(26, "LED Vermelho", "Pino 26");
ReleService rele(12, "RELÉ", "Pino 12");
ThermistorService therm(34, 400, "TEMPERATURA", "Pino 34");
// ServoService servo(4, "SERVOMOTOR", "Pino 4");
// ButtonService button(16, "BUTTON", "Pino 16");
// OledService oled(10000, "DISPLAY OLED", "Portas SDA e SCL");
 
void setup()
{
  Serial.begin(9600);
  photo.init();
  pot.init();
  ledAmarelo.init();
  ledVermelho.init();
  rele.init();
  therm.init();
  therm.setOptionals(3950, 4860);
  // servo.init();
  // button.init();
  // oled.init();
}
 
void loop()
{
  photo.update();
  pot.update();
  ledAmarelo.update();
  ledVermelho.update();
  rele.update();
  therm.update();
  // servo.init();
  // button.init();
  // oled.update();
}
