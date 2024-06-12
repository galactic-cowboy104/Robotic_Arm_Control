# Repositorio: Control de Brazo Robótico con Potenciómetro utilizando Arduino

Este repositorio contiene un proyecto para controlar un brazo robótico utilizando potenciómetros y programado con Arduino. Además de los detalles sobre los materiales requeridos y las instrucciones de montaje, se proporciona un diagrama de conexiones físicas para facilitar la construcción y programación del brazo robótico.

## Materiales Necesarios
- **4 potenciómetros**: Para controlar cada servomotor del brazo robótico.
- **4 servomotores**: Para mover las diferentes articulaciones del brazo robótico.
- **Arduino (placa de desarrollo)**: Para controlar los servos y leer los potenciómetros.
- **Cableado**
- **Brazo robótico (estructura)**: [Compra aquí la estructura del brazo robótico de acrílico](https://uelectronics.com/producto/brazo-robotico-de-acrilico/)
- **Protoboard (opcional)**
- **Soldador y estaño (si se requiere una conexión más robusta)**

## Contenido del Repositorio
1. **Código Arduino**: Se proporciona el código necesario para programar el Arduino y controlar los servomotores del brazo robótico mediante potenciómetros. El código permite mapear las lecturas de los potenciómetros a los ángulos de los servos.
2. **Diagrama de Conexiones Físicas**: Se incluye un diagrama que muestra cómo conectar los potenciómetros y los servomotores al Arduino. Sigue este diagrama para realizar las conexiones físicas correctamente.

## Instrucciones de Uso

### Conexiones Físicas:
- Sigue el diagrama de conexiones físicas para conectar los potenciómetros y los servomotores al Arduino.
- Asegúrate de conectar los potenciómetros a las entradas analógicas A0, A1, A2 y A3 del Arduino.
- Conecta los servomotores a los pines digitales 2, 3, 4 y 5 del Arduino.

### Cargar el Programa en el Arduino:
- Abre el archivo `.ino` con el IDE de Arduino.
- Conecta tu Arduino a la computadora y selecciona el puerto correcto.
- Carga el programa en el Arduino.

### Control del Brazo Robótico:
- Una vez cargado el programa, gira los potenciómetros y observa cómo los servomotores del brazo robótico se mueven en respuesta.
- Puedes ajustar la sensibilidad y el rango de movimiento modificando el mapeo en el código.

## Consejos Adicionales
- **Personalización**: Ajusta el código para cambiar el rango de movimiento o la sensibilidad de los potenciómetros.
- **Sigue las Instrucciones con Cuidado**: Asegúrate de seguir el diagrama de conexiones y las instrucciones de carga del programa al pie de la letra para evitar problemas.
- **Preguntas y Ayuda**: Si tienes alguna pregunta o necesitas ayuda, no dudes en contactar con los creadores del repositorio.

## Disfruta y Experimenta
Este proyecto es una excelente oportunidad para aprender sobre robótica y control mediante potenciómetros. Disfruta del proceso de construcción y programación de tu brazo robótico, y diviértete creando movimientos personalizados.

¡Buena suerte y diviértete controlando tu brazo robótico con potenciómetros y Arduino!