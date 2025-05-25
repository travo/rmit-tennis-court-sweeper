# RMIT Tennis Court Sweeper

This is an MMY3 Systems Engineering Design project to develop a system / machine that is capable of following the lines on a tennis court and sweeping them clean ready for play.

It's a kind of fancy line follower.

As a result, our project team scanned a bunch of existing code and examples of line followers and found some example Arduino code as an example by [HiBit](https://www.hibit.dev) which was extremely valuable. They showed how the code could be broken out into different domains of concerns, how we could model structs and begin to think about objects in our system. Thank you.


## Our System uses an L298N motor driver module
The L298N Motor Driver is a controller that uses an H-Bridge to easily control motors direction and PWM to control the speed. This module allows you to independently manage two motors of up to 2A each in both directions. Supply range may vary between 5V and 35V, enough for most DC motor projects.   

├ src  
│  └ main  
└ schema  

## HiBit Documentation / Reference
You'll find instructions and full documentation on [HiBit](https://www.hibit.dev/posts/89/how-to-use-the-l298n-motor-driver-module). It includes detailed info on how to wire and use the module.

