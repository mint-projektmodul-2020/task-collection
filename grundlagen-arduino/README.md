
# Basic Arduino Examples

#### 1 - Internal LED
Make the internal LED (`LED_BUILTIN`) of the Arduino blink

New Commands: `//`, `pinMode`, `digitalWrite`, `delay`
<br/><br/>

#### 2 - External LED
Make an external LED of the Arduino blink

New Commands: `#define`
<br/><br/>

#### 3 - Serial Monitor
Print something on the serial monitor.
Example: A counter that counts upwards.

New Commands: `Serial.begin`, `Serial.print`, `Serial.println`
<br/><br/>

#### 4 - Read a Potentiometer
Read the value of a potentiometer with `analogRead` and print that value to the serial monitor

New Commands: `int <name>`, `<name> = <value>`, `analogRead`
<br/><br/>

#### 5 - Read a Potentiometer - Enhancement 1
Get rid of all the values printed out duplicately.

New Commands: `if`, `!=`, `==`, `<`, `>`, `<=`, `>=`
<br/><br/>

#### 6 - Read a Potentiometer - Enhancement 2
Do not print out values that only change slightly. Since most potentiometers are not very percise the measured value can vary by up to +- 1% without actual touching the potentiometer

New Commands: `||`, `&&`, `(`, `)`
<br/><br/>

#### 7 - LED Frequency
Vary the frequency of the LED blinking depending on the potentiometer measure.
<br/><br/>

#### 8 - PWM/PDM Visualization
Visualize PWM/PDM by setting the LED duty cycle to the measured value. BUT: For visualization, use a very slow frequency.

One can see that the frequency stays constant but the LED on/off ratio varies -> the so called duty cycle.

New Commands: `/`, `*`
<br/><br/>

#### 9 - LED Brightness
Use PWM/PDM to vary the brightness of the LED. Hint: Same as task 8 but with a much higher frequency.
<br/><br/>
