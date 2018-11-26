# Disciplina: Objetos Inteligentes Conectados
## Turma 05J11 - 2º semestre de 2018

### Integrantes do grupo:

* Tiago Oliveira Silva      - 4162881-0
* Hugo Melo da Silva        - 4162273-1
* Jose Elder Junior         - 4164709-2
* Thiago Gonçalves da Silva - 4161373-2


## Descrição do projeto Robo IoT com ESP8266 NodeMCU
O projeto consiste em um robô equipado com um módulo ESP8266  e MotorShiled NodeMCU, controlado via Internet por MQTT. Tal robô utilizará duas rodas para locomoção, sendo capaz de se movimentar em quatro direções: para frente, para tras, para esquerda e para a direita. 


##Utilizar MQTT para este controle permitirá:

Controle do robô IoT com ESP8266 NodeMCU a partir de um aplicativo
Controle do robô de qualquer lugar do planeta que possua conexão com a Internet
O diagrama de como o robô IoT com ESP8266 NodeMCU será controlado pode ser visto na figura abaixo:

<img class=" aligncenter wp-image-5141" title="NodeMcu ESP8266 + MotorShield " src="https://uploads.filipeflop.com/2016/08/DiagramaRoboIoT.jpg">
  


# Carro_IoT_Mack

<table class="table table-hover table-striped table-bordered">
  <tr align="center">
   <td> <img class=" aligncenter wp-image-5141" title="NodeMcu ESP8266 + MotorShield " src="https://c.76.my/Malaysia/nodemcu-motor-shield-board-l293d-esp8266-nodemcu-v2-npstore-1706-05-NPSTORE@1.jpg" alt="Pinagem ESP8266 NodeMCU">
    </td>  
   <td>  
  <img class=" aligncenter wp-image-5141" title="Pinagem MotorShield NodeMCU" src="https://i1.wp.com/blog.squix.org/wp-content/uploads/2015/09/NodeMcuMotorshield.jpg?resize=320%2C219&ssl=1" alt="Pinagem ESP8266 NodeMCU">
</td>  
    
 <tr align="center">
    <td>NodeMcu ESP8266 + MotorShield </td>
    <td>Pinagem MotorShield NodeMCU</td>
  </tr>
</tr>

<tr aling="center">
  <td> 
     <img class=" aligncenter wp-image-5141" title="NodeMcu ESP8266 + MotorShield " src="https://images.tcdn.com.br/img/img_prod/557243/kit_chassi_2wd_smart_robo_para_arduino_74_2_20170524163019.png" alt="Pinagem ESP8266 NodeMCU">
    
   </td>
  <td>
    <img class=" alingcenter wp-image-5141" title="Montagem" src="http://www.smartarduino.com/upfiles/card/resize_1431746175.jpg">
  </td>
  
   <tr align="center">
    <td>Kit Chassis 2WD </td>
    <td>Chassis 2WD + ModeMcu MotorShiled </td>
  </tr>
  
</tr>

</table>

# Esquema Eletrico
------------------
<table class="table table-hover table-striped table-bordered" > 
  <tr>
    <td>
       <img class=" alingcenter wp-image-5141" title="Montagem" src="https://raw.githubusercontent.com/Tiagooliveirasilva/Carro_IoT_Mack/master/Esquema_Eletrico/EsquemaEletrico.jpg">
    </td>
  </tr>
  <tr aling="center">
    <td> Esquema Elétrico [Carro_IoT_Mackenzie]  </td>
  </tr>
</table>



Repository Contents
-------------------

* **/Documentation** - Documentation for the library's public API
* **/Hardware** - Eagle PCB layout files
* **/Libraries/Arduino/RedBot** - RedBot support library
* **/Production** - Files to support SparkFun production

Documentation
--------------

* **[Guia de Instalação Biblioteca Arduino](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)** - Basic information on how to install an Arduino library.
* **[Product Repository](https://github.com/sparkfun/RedBot)** - Main repository (including hardware files) for the RedBot.
* **[Library Repository](https://github.com/sparkfun/SparkFun_Redbot_Arduino_Library)** - Arduino library for the RedBot.

License Information
-------------------

Este produto é  _**open source**_! 

