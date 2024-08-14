import time
import numpy

def displayTextAnimate(text, speed=0.0225):
    for char in text:
        print(char, end='', flush=True)
        time.sleep(speed)
    print()  # for newline after text
    
    displayTextAnimate("Hello World")