# Emb-C

# Car Heater Monitoring Embedded System

## In Action

### LED Actuator that indicates the status of the heater and presence of the driver

### CIRCUIT DIAGRAM

![Ckt](https://user-images.githubusercontent.com/86143586/127280252-4c61e273-39f5-4e26-b587-3658dc9257cd.JPG)

### LED does not glow when both heater and seater is off

![heater and seater is off](https://user-images.githubusercontent.com/86143586/127280411-f7c368e0-3d4b-4cc2-a36a-61b3e3a72d80.JPG)

### LED glows when both heater and seater is on

![heater and seater is on](https://user-images.githubusercontent.com/86143586/127280424-09aee73e-b0ae-4ee7-99c4-d809cb590f0b.JPG)

### Either the heater is not ON or the Seater is not present

![big 2](https://user-images.githubusercontent.com/86143586/127280774-a90f1462-9518-4d51-984d-612e7698a096.JPG)

![either the heater is not on or seater is not present](https://user-images.githubusercontent.com/86143586/127280782-182cd0c7-157f-4548-9c55-fecc8c7a739b.JPG)

### Driver is sitting Heater is Off

![condition output](https://user-images.githubusercontent.com/86143586/127442485-0ae1010e-9cbd-4c4a-b019-c92385afb819.JPG)

## The Different range of temperatures 
|Conditions| Simulation |
|----------|------------|
|ADC value 0-200|![0-200](https://user-images.githubusercontent.com/86143586/127443665-59fcea33-53e5-4c3f-a4f7-17af71338ff3.JPG)|
|ADC value 201-500|![201-500](https://user-images.githubusercontent.com/86143586/127443671-5692e4e3-2e09-4e5b-a603-e7788952579b.JPG)|
|ADC value 501-700|![700](https://user-images.githubusercontent.com/86143586/127443673-10d8a886-b882-40b9-b2b1-9b367fbf3f40.JPG)|
|ADC value 700-1024|![1024](https://user-images.githubusercontent.com/86143586/127443677-22e6954d-7beb-409c-8b14-22c1a509185a.JPG)|

| Compile| cppcheck|
|--------|---------|
|[![Compile-Linux](https://github.com/karthi1155/Emb-C/actions/workflows/Compile.yml/badge.svg)](https://github.com/karthi1155/Emb-C/actions/workflows/Compile.yml) | [![Cppcheck](https://github.com/karthi1155/Emb-C/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/karthi1155/Emb-C/actions/workflows/cppcheck.yml)|
