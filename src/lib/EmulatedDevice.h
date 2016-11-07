/*
 * EmulatedDevice.h
 *
 *  Created on: 04 nov 2016
 *      Author: skazza
 */

#ifndef USBPROXY_EMULATEDDEVICE_H
#define USBPROXY_EMULATEDDEVICE_H

#include <stdio.h>
#include <sstream>

#include "Device.h"
#include "DeviceProxy.h"
#include "Configuration.h"
#include "Interface.h"
#include "HID.h"
#include "Endpoint.h"
#include "USBString.h"

#include "HexString.h"

class Configuration;
class Interface;
class HID;
class Endpoint;
class USBString;

class EmulatedDevice : public Device {
private:
	usb_string_descriptor * readStringDescriptorFromFile(FILE *);
	void addStringFromFile(FILE *, __u8);

public:
	EmulatedDevice(DeviceProxy *);
};



#endif /* USBPROXY_EMULATEDDEVICE_H */
