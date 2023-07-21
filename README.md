# webLed
Web-based WiFi LED controller using an ESP32

Este projeto é um controlador de LED via WiFi baseado em ESP32, permitindo controle remoto do LED por meio de um navegador web.

O ESP32 atua como um servidor web, fornecendo uma página simples que exibe botões para ativar e desativar o LED. Ao clicar nesses botões no navegador, uma solicitação é enviada ao servidor ESP32, que responde controlando o pino de saída conectado ao LED, alternando entre ligado e desligado. 

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/02bc1437-65c0-4ca5-91a5-933ad1611ac6)" alt="webLedOff") width = "400">
  <img src= https://github.com/andresima0/webLed/assets/111400782/2d1c2fc8-a525-4576-96ee-614e633456c6" alt="webLedOn") width = "400">
</p>

Com isso, você pode controlar o LED de qualquer dispositivo conectado à mesma rede WiFi que o ESP32, tornando-o uma solução prática e versátil para automação residencial e projetos IoT simples.

Conecte o LED ao pino D15 (GPIO 15) do ESP32 e, para garantir a segurança do LED e do ESP32, utilize um resistor em série para limitar a corrente. Recomenda-se um resistor de aproximadamente 270 ohms ou mais para essa finalidade.

<p align="center">
  <img src= https://github.com/andresima0/webLed/assets/111400782/c0778b77-f466-437e-8668-90b39fbf81a1" alt="webLedLayout")>
</p>


