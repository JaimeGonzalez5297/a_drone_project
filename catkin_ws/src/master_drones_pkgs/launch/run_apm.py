import os
import subprocess
import argparse
import time

# Crea el analizador de argumentos
parser = argparse.ArgumentParser(description='Lanza un nodo mavros para cada drone.')

# Agrega el argumento 'num_drones'
parser.add_argument('num_drones', type=int, help='El numero de drones.')

# Analiza los argumentos de entrada
args = parser.parse_args()

# Lanza un nodo mavros para cada drone
for i in range(1, args.num_drones+1):
    fcu_port_send = 14541 + i * 10
    fcu_port_receive = 14545 + i * 10
    command = "roslaunch multi_apm.launch dron_id:={} fcu_port_send:={} fcu_port_receive:={}".format(i, fcu_port_send, fcu_port_receive)
    process = subprocess.Popen(command, shell=True)
    time.sleep(1)