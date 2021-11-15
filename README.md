# esp_ota
Path for ESP32 OTA images.

These are OTA images built for ESP32 Matter OTA examples.
Since as of now we do not have any tool to add the Matter OTA header to the image so, these image has 4 byte image size at the start.

## Which one to choose
- If OTA Requestor example is flashed on ESP32 then use ESP32 hello_world.bin with OTA Provider
- If OTA Requestor examplse is flashed on ESP32C3 then use ESP32C3 hello_world.bin with OTA Provider.

## Images
- ESP32   - [hello_world.bin](esp32/hello_world.bin)
- ESP32C3 - [hello_world.bin](esp32c3/hello_world_c3.bin)
