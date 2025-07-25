@defgroup    boards_particle-argon Particle Argon
@ingroup     boards
@brief       Support for the Particle Argon

### General information

[Particle Argon](https://docs.particle.io/argon/) is a mesh-ready development kit
that provides access to multiple communication protocols: BLE, 802.15.4 and WiFi.

<img src="https://docs.particle.io/assets/images/argon/argon-top.png"
     alt="pinout" style="height:300px;"/>

### Block diagrams and datasheets

<img src="https://docs.particle.io/assets/images/argon/argon-block-diagram.png"
     alt="pinout" style="height:800px;"/>

The board datasheet is available [here](https://docs.particle.io/assets/pdfs/datasheets/argon-datasheet.pdf)

@experimental Support to measure the voltage via ADC using the
`board_bat_voltage` feature (see [Feature List](@ref feature-list)) is provided
for this board. However, it was only ever tested for the very similar
@ref boards_particle-xenon. If you encounter any errors when measuring the
voltage for the Particle Argon, please report this!

### Flash the board

See the `Flashing` section in @ref boards_common_particle-mesh.
