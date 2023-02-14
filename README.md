# Essence
Ergonomic keyboard with standard ANSI Keycaps

Specifications:
64 Key Ergo-Linear keyboard, with customizable rotary encoder

Designed for/powered by the Elite-C Microcontroller board

Parts List:

1 - PCB (Gerber located within this Repository)

1 - Elite-C Microcontroller board: [Found Here](https://keeb.io/collections/diy-parts/products/elite-c-low-profile-version-usb-c-pro-micro-replacement-atmega32u4)

1 - Push switch Rotary Encoder

1 - Rotary Encoder knob

65 - 1N4148 Diodes (64 for switches, 1 for Encoder switch)

64 - MX style mechanical keyboard switches

64 - MX style keycaps. Specifically:

    48 - 1u keycaps
    
    6 - 1.25u keycaps
    
    5 - 1.5u keycaps
    
    2 - 1.75u keycaps
    
    1 - 2u keycap
    
    2 - 2.25u keycaps
    
3 - 2u MX style key stabilizers

1 - USB-C cable


Also recommended (not technically necessary for keyboard operation):

1 - Switch plate (example provided within this Repository)

1 - Case

Explanation and Inspiration:

Originally just a random past time, this project turned into the Senior Project for my High School graduation, and an exploration
of the concepts of PCB design and ergonomics.

My inspiration for this Keyboard design was largely the Reviung 41, as I daily drove during most of the Covid Lockdown and fell in
love with the general ergonomics of the board. My issues with it, however, became apparent over time:

1.  It doesn't have a number row. Purely for typing and programming, this was a non-issue. I still use the board for both of these
    tasks and love it. But for the games that I do indeed play every now and then, this becomes problematic. A design very similar
    to the Reviung, just with an extra number row, would be great.
   
2.  The keys are all 1 unit, meaning non-standard modifier keys, and difficulty finding keysets. For the Reviung, this was less of
    issue since there were so few modifiers. But with the design I intended to create, this would need to be a consideration, lest
    I spend much more than a kid-with-no-job-at-the-time can afford.

The result, after lots of bumbling around and mistakes, is something I call the Essence.
A unibody, split ergo-linear keyboard powered by an Elite-C Microcontroller board!


![keycap_effective](https://user-images.githubusercontent.com/76798968/199045931-c4cd2cc3-6094-4586-872d-e1540ce1e121.PNG)
The pre-production key layout. Notice the absence of a Rotary Encoder, which was added later and as such caused more headache
than anticipated.

![IMG_20220331_231517](https://user-images.githubusercontent.com/76798968/199046134-b42d9831-4791-47e3-9edb-b1864badcaa2.jpg)
A failed attempt at prototyping the design of the circuit a 3d-printed jig holding wires to create the key matrix. 3d-printing
would return after the PCB was created

![IMG_20220821_130836](https://user-images.githubusercontent.com/76798968/199046863-baadefdc-2ca3-4790-84c3-e1ec1b9e8674.jpg)
The Essence Circuit Board. In hindsight, the choice for design was a little...bizarre, but this can be amended in KiCad if desired.
