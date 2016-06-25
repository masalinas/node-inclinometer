# node-inclinometer
IoC proof of concept to demostrate any measure captured from a inclinometer attached to a arduino mega2560 and transport this information throw mqtt protocol to a central server thats centralize this information using a message broker like mosca and node-red to parse and visualize it .

The Node-RED flow Designer

The Node-RED UI

The Arduino mega with the 4-20 ma shield

![image](https://cloud.githubusercontent.com/assets/1216181/16090492/e47d9acc-332f-11e6-980a-dd4e41e892d2.jpg)

![image 1](https://cloud.githubusercontent.com/assets/1216181/16090530/2266442e-3330-11e6-82e9-706f1de85b6d.jpg)

![image 2](https://cloud.githubusercontent.com/assets/1216181/16090544/39042fe8-3330-11e6-8ab6-184cec77e017.jpg)

Serial debug

![image](https://cloud.githubusercontent.com/assets/1216181/16090582/5fef85b2-3330-11e6-802b-3be8c2b2da17.jpeg)

Sensor Type

![sensor_type](https://cloud.githubusercontent.com/assets/1216181/16357399/c9ca1ae8-3af5-11e6-9b4d-c0da1dafd4ca.png)

# Hardware:

- [Arduino mega 2560](https://www.arduino.cc/en/Main/ArduinoBoardMega2560/): The MEGA 2560 is designed for more complex projects. With 54 digital I/O pins, 16 analog inputs and a larger space for your sketch it is the recommended board for 3D printers and robotics projects.
- [4-20 mA (Current Loop) Sensor Board for  Arduino](https://www.cooking-hacks.com/4-20-ma-current-loop-sensor-board-shield-for-arduino-raspberri-pi-intel-galileo): The 4-20 mA Current Loop Board allows the user to send sensor data via current loop over long distances

- [PA204A omron](https://www.mroelectric.com/pdfs/c200hw-pa204.pdf): power supply unit power to CPU rack and the expansion I/O Racks

# Infraestructure Techonologies:

- [Raspbian](https://www.raspberrypi.org/downloads/raspbian/): Last raspbian for raspberry pi. Raspbian is the Foundation’s official supported operating system.
- [NodeJS](https://nodejs.org/): Event-driven I/O server-side JavaScript environment based on V8. Includes API documentation, change-log, examples and announcements.
- [mosca](https://github.com/mcollina/mosca): MQTT broker as a module http://mosca.io.
- [Node-Red](http://nodered.org/): A visual tool for wiring the Internet of Things.

# Frontend Techonologies:

- [node-red-contrib-graphs](https://www.npmjs.com/package/node-red-contrib-graphs): A Node-RED graphing package.
- [node-red-contrib-ui](https://www.npmjs.com/package/node-red-contrib-ui): UI nodes for node-red.

# Installation:

Install python 3 mqtt modeule and microstack shield modules on raspberry-pi 3:
```
  sudo apt-get install python3-pip
  sudo pip3 install paho-mqtt
```

Install mosca mqtt message broker:
```
  npm install mosca bunyan -g
  mosca -v | bunyan
```

Execute npm to install node-red and node-red npm modules:
```
  npm install
```

Start node-red
```
  node node_modules/node-red/red.js
```

Access Node-Red Web designer
```
  http://localhost:1880
```

Copy and import this flow from node-red import clipboard
```

```

Access Node-Red UI Web
```
  http://localhost:1880/ui
```

# Licenses
The source code is released under Apache 2.0.
