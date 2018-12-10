#include <Wire.h>
#define BLE_DEBUG 1
#include "SPI.h"
#include "lib_aci.h"
#include "aci_setup.h"
#include "uart_over_ble.h"
#include "services.h"


uint8_t ble_rx_buffer[21];
uint8_t ble_rx_buffer_len = 0;

#include "UART.h"

void setup(void)
{
  // set data speed
  Serial.begin(9600);
  // hook the device together
  Wire.begin();
  // setup the bluetooth broadcast UART
  BLEsetup();
}

void loop() {

  // loop needed to keep a signal on request
  aci_loop();
}
