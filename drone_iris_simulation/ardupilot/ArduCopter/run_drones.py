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
    command ="../Tools/autotest/sim_vehicle.py -f gazebo-dron{} -m --mav10 -I{} --custom-location=3.371387,-76.533004,584,122".format(i+1,i)
    print(command)
    process = subprocess.Popen(["gnome-terminal", "--", "bash", "-c", command])
    time.sleep(2)
