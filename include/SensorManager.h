struct DataPacket{
  float temperature;
};

class SensorManager{
private:
  const char * DEBUG_TAG = "SENSOR";
public:
  void begin(Device & device);
  DataPacket read();
};

void SensorManager::begin(Device & device) {

  debug(DEBUG_TAG, " --Sensors ready-- ");
}


DataPacket SensorManager::read(){
  DataPacket readData;
  return readData;
}
