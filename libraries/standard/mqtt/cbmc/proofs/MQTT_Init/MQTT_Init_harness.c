/*
 * Insert copyright notice
 */

/**
 * @file MQTT_Init_harness.c
 * @brief Implements the proof harness for MQTT_Init function.
 */

#include "mqtt.h"

void harness()
{

  MQTTContext_t Context;
  MQTTTransportInterface_t TransportInterface;
  MQTTApplicationCallbacks_t Callbacks;
  MQTTFixedBuffer_t NetworkBuffer;

  MQTT_Init(nondet_bool() ? NULL : &Context,
	    nondet_bool() ? NULL : &TransportInterface,
	    nondet_bool() ? NULL : &Callbacks,
	    nondet_bool() ? NULL : &NetworkBuffer);
}
