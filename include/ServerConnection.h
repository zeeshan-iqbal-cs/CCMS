
class ServerConnection{
private:
  String deviceId;
  const char * DEBUG_TAG = "SERVER_CONNECTION";
public:
  void begin(Device & device){
    this->deviceId = device.getId();
  }
  int sendData(DataPacket & data){
    debug(DEBUG_TAG, "SENDING DATA TO SERVER");

    StaticJsonBuffer<200> jsonBuffer;
    JsonObject& jsonDataPacket  = jsonBuffer.createObject();

    debug(DEBUG_TAG, "PREPAIRING JSON");
    jsonDataPacket["deviceId"]    = deviceId;
    jsonDataPacket["temperature"] = data.temperature;
    String strJsonDataPacket;
    jsonDataPacket.printTo(strJsonDataPacket);

    debug(DEBUG_TAG, "PACKED_DATA_PACKET", strJsonDataPacket);
    return -1;
  }

};
