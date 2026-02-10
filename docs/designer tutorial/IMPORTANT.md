So, you are a so called "designer", lets imagine that you don't know anything about programming, if so, this is for you:
(for programming based themes, there would be a " * " instead of a big explanation)
# CONTRACT
- For everyone's ease of use, there should be a contract, so, this is it.
## PIN CONNECTIONS
- Where (and how) everything should be connected to the main board
- GPIO (Pins) are Pins on your main board, numbers, are their corresponding number. Usually, they are printed next to the pins.
### SD CARD READER (SPI ONLY)
- Applications run from files on an SD-card, we need a way to read those files.
  - 1. Ensure that your card-reader is SPI *, your reader should have theese labels on its connections:
       - SCK \ CLK
       - MISO
       - MOSI
       - CS
  - 2. To make your card-reader work, you should connect it like this:
       - SCK\CLK to GPIO 12
       - MISO to GPIO 13
       - MOSI to GPIO 11
       - CS to GPIO 10
