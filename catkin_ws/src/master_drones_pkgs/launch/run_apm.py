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
for i in range(args.num_drones):
    fcu_port_send = 14551 + i * 10
    fcu_port_receive = 14555 + i * 10
    command = "roslaunch multi_apm.launch dron_id:={} fcu_port_send:={} fcu_port_receive:={}".format(i+1, fcu_port_send, fcu_port_receive)
    print(command)
    process = subprocess.Popen(["gnome-terminal", "--", "bash", "-c", command])
    time.sleep(2)
