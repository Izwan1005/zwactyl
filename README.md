# Zwactyl
![IMG_2923](https://github.com/user-attachments/assets/fc44cb94-6e8e-4e30-be46-e219f7612d52)
![IMG_2852](https://github.com/user-attachments/assets/43c950ba-24df-4f4e-8fa5-71e5909c5dd4)

Zwactyl is a custom version of the Dactyl Manuform keyboard. It is a split 4x5 ergonomic keyboard with a 5-key thumb cluster on each side, designed for flexibility and compatibility with various microcontrollers.

## Description

Zwactyl supports both wired and wireless configurations. Each half of the keyboard can house a single 18650 LiPo battery, preferably with an integrated charging controller. The design is optimized for ergonomic comfort and modularity.

## Supported Controllers

- RP2040
- Supermini NRF52840
- Nice!Nano

## Firmware

Two firmware configurations are available for Zwactyl:

- **ZMK**: Compatible with Supermini and Nice!Nano
- **QMK-VIAL**: Designed for RP2040

## 3D Files

The 3D design files are available in both STEP and STL formats. These files are structured to accommodate:
- Wired connections
- Wireless configurations with battery compartments

## Future Improvements

Planned enhancements include modifying the ZMK firmware to support a third, central "master" controller. In this setup:
- Both keyboard halves will act as slaves
- Power consumption will be reduced *significantly*
- Latency can be improved by increasing the voltage on the master MCU

---

For more details, contributions, or issues, feel free to open a discussion or submit a pull request.
