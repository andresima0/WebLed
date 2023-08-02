# WebLed
### Web-based WiFi LED controller using an ESP32

This project is a web-based LED controller that communicates via WiFi with an ESP32, using an HTTP connection.

The ESP32 acts as a web server, providing a simple webpage with buttons to turn the LED on and off. When clicking these buttons in the web browser, a request is sent to the ESP32 server, which responds by controlling the output pin connected to the LED, toggling it between ON and OFF.

With this setup, you can control the LED from any device connected to the same WiFi network as the ESP32, making it a practical and versatile solution for home automation and simple IoT projects.

Procedures:

1. Set up the Arduino IDE environment for ESP32 board connection, installing the necessary packages and libraries.

2. Implement and run the provided code from this repository, in https://github.com/andresima0/WebLed/blob/main/webLed/webLed.ino. Don't forget to change lines 6 and 7 by replacing them with your Wi-Fi network name (SSID) and your Wi-Fi network password. 

<p align="center">
  <img src= https://github.com/andresima0/Help-ESP32/assets/111400782/18059e0c-c769-4a25-9f97-217408705f22) alt="webLedSsidPassword" width = "400">
</p>

3. Open the IDE's serial monitor and press the physical EN (reset) button on the ESP32. Some data will appear, including the local IP address.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/5e61f63b-0e3c-46d2-9acd-a3b7742ae08f) alt="webLedSerialMonitor" width = "400">
</p>

4. In the web browser's address input box, type the provided IP address followed by the command to be executed by the ESP, for example, "192.168.0.15/Led_Off".

5. Click the button created in the web browser. Clicking "Turn LED ON" will turn on the LED, and the button will change to "Turn LED OFF". Clicking the new button will turn off the LED.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/02bc1437-65c0-4ca5-91a5-933ad1611ac6)" alt="webLedOff") width = "400">
  <img src= https://github.com/andresima0/webLed/assets/111400782/2d1c2fc8-a525-4576-96ee-614e633456c6" alt="webLedOn") width = "400">
</p>

For the hardware, connect the LED to pin D15 (GPIO 15) of the ESP32, and to ensure the safety of both the LED and the ESP32, use a series resistor to limit the current. It is recommended to use a resistor of approximately 270 ohms or higher.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/c0778b77-f466-437e-8668-90b39fbf81a1" alt="webLedLayout")>
</p>

##

### Portuguese version:

Este projeto é um controlador de LED via navegador web que se comunica via WiFi com um ESP32, utilizando uma conexão HTTP.

O ESP32 desempenha o papel de servidor web, disponibilizando uma página simples com botões para ativar e desativar o LED. Ao clicar nesses botões no navegador, é enviada uma solicitação ao servidor ESP32, que responde controlando o pino de saída conectado ao LED, alternando-o entre ligado e desligado.

Dessa forma, é possível controlar o LED de qualquer dispositivo conectado à mesma rede WiFi que o ESP32, tornando-o uma solução prática e versátil para automação residencial e projetos IoT simples.

Procedimentos:

1. Configure o ambiente Arduino IDE para a conexão com uma placa ESP32, instalando os pacotes e bibliotecas necessárias.

2. Implemente e execute o código fornecido neste repositório, em https://github.com/andresima0/WebLed/blob/main/webLed/webLed.ino. Não se esqueça de alterar as linhas 6 e 7, substituindo-as pelo nome da sua rede Wi-Fi (SSID) e pela senha da sua rede Wi-Fi.

<p align="center">
  <img src= https://github.com/andresima0/Help-ESP32/assets/111400782/18059e0c-c769-4a25-9f97-217408705f22) alt="webLedSsidPassword" width = "400">
</p>

3. Abra o monitor serial da IDE e clique no botão físico EN (reset) do ESP32. Aparecerão alguns dados, incluindo o endereço de IP local.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/5e61f63b-0e3c-46d2-9acd-a3b7742ae08f) alt="webLedSerialMonitor" width = "400">
</p>

4. Na caixa de entrada do navegador web, digite o endereço de IP fornecido e, em seguida, escreva o comando a ser executado pelo ESP, por exemplo, "192.168.0.15/Led_Off".

5. Clique no botão criado no navegador. Ao clicar em "Turn LED ON", o LED acenderá e o botão mudará para "Turn LED OFF". Ao clicar no novo botão, o LED apagará.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/02bc1437-65c0-4ca5-91a5-933ad1611ac6)" alt="webLedOff") width = "400">
  <img src= https://github.com/andresima0/webLed/assets/111400782/2d1c2fc8-a525-4576-96ee-614e633456c6" alt="webLedOn") width = "400">
</p>

Quanto ao hardware, conecte o LED ao pino D15 (GPIO 15) do ESP32 e, para garantir a segurança do LED e do ESP32, utilize um resistor em série para limitar a corrente. Recomenda-se um resistor de aproximadamente 270 ohms ou mais.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/c0778b77-f466-437e-8668-90b39fbf81a1" alt="webLedLayout")>
</p>
