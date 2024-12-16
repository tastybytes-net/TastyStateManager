<a id="struct_blink_state"></a>
# Structure BlinkState

![][C++]
![][public]

**Definition**: `include/TastyDefs.h` (line 70)





## Members

* [blinking](struct_blink_state.md#struct_blink_state_1a861a0e87655215aac27967229a2b9961)
* [color](struct_blink_state.md#struct_blink_state_1a879bd6af1d307b803196281238cf7b99)
* [offTime](struct_blink_state.md#struct_blink_state_1a2232dcf65ff7a1e66949fc74912a7944)
* [on](struct_blink_state.md#struct_blink_state_1a8bcd5077d3f7eaa496182eb28a11de08)
* [onTime](struct_blink_state.md#struct_blink_state_1aa3515ef5cfb4e5facc706f1bbbf4ebeb)
* [speed](struct_blink_state.md#struct_blink_state_1a1cf301b52710db837e5528f95754b87d)

## Public attributes

<a id="struct_blink_state_1aa3515ef5cfb4e5facc706f1bbbf4ebeb"></a>
### Variable onTime

![][public]

**Definition**: `include/TastyDefs.h` (line 71)

```cpp
unsigned long BlinkState::onTime = 0
```







**Type**: unsigned long

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::onTime"}]}

<a id="struct_blink_state_1a2232dcf65ff7a1e66949fc74912a7944"></a>
### Variable offTime

![][public]

**Definition**: `include/TastyDefs.h` (line 72)

```cpp
unsigned long BlinkState::offTime = 0
```







**Type**: unsigned long

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::offTime"}]}

<a id="struct_blink_state_1a8bcd5077d3f7eaa496182eb28a11de08"></a>
### Variable on

![][public]

**Definition**: `include/TastyDefs.h` (line 73)

```cpp
bool BlinkState::on = false
```







**Type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::on"}]}

<a id="struct_blink_state_1a1cf301b52710db837e5528f95754b87d"></a>
### Variable speed

![][public]

**Definition**: `include/TastyDefs.h` (line 74)

```cpp
BlinkSpeed BlinkState::speed = LED_OFF
```







**Type**: BlinkSpeed

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::speed"}]}

<a id="struct_blink_state_1a861a0e87655215aac27967229a2b9961"></a>
### Variable blinking

![][public]

**Definition**: `include/TastyDefs.h` (line 75)

```cpp
bool BlinkState::blinking = false
```







**Type**: bool

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::blinking"}]}

<a id="struct_blink_state_1a879bd6af1d307b803196281238cf7b99"></a>
### Variable color

![][public]

**Definition**: `include/TastyDefs.h` (line 76)

```cpp
LedColor BlinkState::color = { 0, 0, 1 }
```







**Type**: [LedColor](struct_led_color.md#struct_led_color)

**TODO**:

* qualifiedname {"type":"element","name":"qualifiedname","attributes":{},"children":[{"type":"text","text":"BlinkState::color"}]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)