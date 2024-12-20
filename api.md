# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`DateEntryState`](#a00083) | 
`class `[`EntryState`](#a00087) | 
`class `[`TastyMenu`](#a00123) | 
`class `[`TastyState`](#a00127) | Represents a state in a Tasty menu system.
`class `[`TastyStateManager`](#a00135) | Manages the states of a Tasty application, including state transitions, timeouts, and LED control.
`class `[`TextEntryState`](#a00091) | 
`class `[`TimeEntryState`](#a00095) | 
`struct `[`ActionFunctions`](#a00111) | 
`struct `[`BlinkState`](#a00119) | 
`struct `[`DateTimeObj`](#a00099) | 
`struct `[`eventHandler`](#a00115) | 
`struct `[`LedColor`](#a00103) | 
`struct `[`RGBLed`](#a00107) | 
`struct `[`Timeout`](#a00131) | 

# class `DateEntryState` {#a00083}

```
class DateEntryState
  : public EntryState< DateTimeObj, DateEntryState >
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public uint8_t `[`editIndex`](#a00083_1ab78771c8e67355e084530606d0fa39b5) | 
`public  `[`DateEntryState`](#a00083_1a392a4fc68dd6370fea14e9df185f3a47)`(String name,`[`DateTimeObj`](#a00099)` data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState)` | 
`public void `[`increase`](#a00083_1ac0b1cd5e28c0d9c9229be80af390713c)`()` | 
`public void `[`decrease`](#a00083_1a135b5a88b110cac5bdf3917abaf1f6af)`()` | 
`public void `[`adjustIndexUp`](#a00083_1a2e506a99f316481cfb4cc82ebf8c7dd9)`()` | 
`public void `[`adjustIndexDown`](#a00083_1ac299d7c5be3e0dbbe62771d3a8071c2c)`()` | 

## Members

#### `public uint8_t `[`editIndex`](#a00083_1ab78771c8e67355e084530606d0fa39b5) {#a00083_1ab78771c8e67355e084530606d0fa39b5}

#### `public  `[`DateEntryState`](#a00083_1a392a4fc68dd6370fea14e9df185f3a47)`(String name,`[`DateTimeObj`](#a00099)` data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState)` {#a00083_1a392a4fc68dd6370fea14e9df185f3a47}

#### `public void `[`increase`](#a00083_1ac0b1cd5e28c0d9c9229be80af390713c)`()` {#a00083_1ac0b1cd5e28c0d9c9229be80af390713c}

#### `public void `[`decrease`](#a00083_1a135b5a88b110cac5bdf3917abaf1f6af)`()` {#a00083_1a135b5a88b110cac5bdf3917abaf1f6af}

#### `public void `[`adjustIndexUp`](#a00083_1a2e506a99f316481cfb4cc82ebf8c7dd9)`()` {#a00083_1a2e506a99f316481cfb4cc82ebf8c7dd9}

#### `public void `[`adjustIndexDown`](#a00083_1ac299d7c5be3e0dbbe62771d3a8071c2c)`()` {#a00083_1ac299d7c5be3e0dbbe62771d3a8071c2c}

# class `EntryState` {#a00087}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`TastyState`](#a00127)` * `[`state`](#a00087_1a12cbe9558ab5262256df66ac4083b6a1) | 
`public bool `[`inEdit`](#a00087_1a5a0390d30529f33b7192b5d571faf11b) | 
`public uint8_t `[`editIndex`](#a00087_1ade8dfbb4a7dc66557e2e2b2c0651aa2d) | 
`public DataType `[`originalData`](#a00087_1a6abebe19b450f5323555c1fe11e00045) | 
`public DataType `[`data`](#a00087_1ab59b7e059f9f52e972697c61b58c59fb) | 
`public uint8_t `[`length`](#a00087_1a0cc083de69e8442af50240f00338e86d) | 
`public char `[`editVal`](#a00087_1a0cf0d4f4d20446fc394e3e9e8d2793b1) | 
`public `[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` `[`saveFn`](#a00087_1a4c197fca2ff66cd2197410fdf0ba2653) | 
`public `[`TastyState`](#a00127)` * `[`saveState`](#a00087_1ab1e74c4e8e1e0673fa9aba0484ffff30) | 
`public  `[`EntryState`](#a00087_1aa611659439a0b30596553e9cb0ea7230)`(String name,uint8_t length,DataType data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState,D * ref)` | 
`public inline void `[`increase`](#a00087_1aa084c90e0415d3dc7337b4c467084d75)`()` | 
`public inline void `[`decrease`](#a00087_1a5f1ce1a14dabc884a848914dbc31ca57)`()` | 
`public void `[`adjustIndexUp`](#a00087_1afe1ff3d6d1f7232fc9af7c48b08a54fe)`()` | 
`public void `[`adjustIndexDown`](#a00087_1a30fa330eda96cbcd2c6a2c7d76bc6286)`()` | 

## Members

#### `public `[`TastyState`](#a00127)` * `[`state`](#a00087_1a12cbe9558ab5262256df66ac4083b6a1) {#a00087_1a12cbe9558ab5262256df66ac4083b6a1}

#### `public bool `[`inEdit`](#a00087_1a5a0390d30529f33b7192b5d571faf11b) {#a00087_1a5a0390d30529f33b7192b5d571faf11b}

#### `public uint8_t `[`editIndex`](#a00087_1ade8dfbb4a7dc66557e2e2b2c0651aa2d) {#a00087_1ade8dfbb4a7dc66557e2e2b2c0651aa2d}

#### `public DataType `[`originalData`](#a00087_1a6abebe19b450f5323555c1fe11e00045) {#a00087_1a6abebe19b450f5323555c1fe11e00045}

#### `public DataType `[`data`](#a00087_1ab59b7e059f9f52e972697c61b58c59fb) {#a00087_1ab59b7e059f9f52e972697c61b58c59fb}

#### `public uint8_t `[`length`](#a00087_1a0cc083de69e8442af50240f00338e86d) {#a00087_1a0cc083de69e8442af50240f00338e86d}

#### `public char `[`editVal`](#a00087_1a0cf0d4f4d20446fc394e3e9e8d2793b1) {#a00087_1a0cf0d4f4d20446fc394e3e9e8d2793b1}

#### `public `[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` `[`saveFn`](#a00087_1a4c197fca2ff66cd2197410fdf0ba2653) {#a00087_1a4c197fca2ff66cd2197410fdf0ba2653}

#### `public `[`TastyState`](#a00127)` * `[`saveState`](#a00087_1ab1e74c4e8e1e0673fa9aba0484ffff30) {#a00087_1ab1e74c4e8e1e0673fa9aba0484ffff30}

#### `public  `[`EntryState`](#a00087_1aa611659439a0b30596553e9cb0ea7230)`(String name,uint8_t length,DataType data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState,D * ref)` {#a00087_1aa611659439a0b30596553e9cb0ea7230}

#### `public inline void `[`increase`](#a00087_1aa084c90e0415d3dc7337b4c467084d75)`()` {#a00087_1aa084c90e0415d3dc7337b4c467084d75}

#### `public inline void `[`decrease`](#a00087_1a5f1ce1a14dabc884a848914dbc31ca57)`()` {#a00087_1a5f1ce1a14dabc884a848914dbc31ca57}

#### `public void `[`adjustIndexUp`](#a00087_1afe1ff3d6d1f7232fc9af7c48b08a54fe)`()` {#a00087_1afe1ff3d6d1f7232fc9af7c48b08a54fe}

#### `public void `[`adjustIndexDown`](#a00087_1a30fa330eda96cbcd2c6a2c7d76bc6286)`()` {#a00087_1a30fa330eda96cbcd2c6a2c7d76bc6286}

# class `TastyMenu` {#a00123}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`TastyState`](#a00127)` * `[`head`](#a00123_1ac5346c062cf47b41c6c954990df0bdbf) | Pointer to the head state of the menu.
`public `[`TastyMenu`](#a00123)` * `[`backMenu`](#a00123_1af44feb296262ad6a5cebc15be559e3ec) | Pointer to the previous menu.
`public uint8_t `[`length`](#a00123_1ad6b745dde37c335bdf5aa444e46a3ffb) | Number of states in the menu.
`public  `[`TastyMenu`](#a00123_1af1a927f798afc5720544cf954687e52d)`(uint8_t len,...)` | 
`public void `[`addTimeoutToState`](#a00123_1af61be78dc4428db44c3bd2f56bba8102)`(`[`TastyState`](#a00127)` * state)` | Adds a timeout to a specific state.
`public void `[`addNextMenuState`](#a00123_1a1cf18ee0770c2e0705f773d44bc65a00)`(`[`TastyState`](#a00127)` * existingState,`[`TastyState`](#a00127)` * newState)` | Adds a new state after an existing state.
`public void `[`addPreviousMenuState`](#a00123_1a708498fb2e8c47213be38e636e4ba02c)`(`[`TastyState`](#a00127)` * existingState,`[`TastyState`](#a00127)` * newState)` | Adds a new state before an existing state.
`public void `[`addSubmenu`](#a00123_1a98960c9b7cad18f3c52d882c13b5c957)`(`[`TastyState`](#a00127)` * existingState,`[`TastyMenu`](#a00123)` * menu)` | Adds a submenu to an existing state.
`public void `[`addBackMenu`](#a00123_1aafcad30322884ff02eda904fe1b5f3a8)`(`[`TastyState`](#a00127)` * existingState,`[`TastyMenu`](#a00123)` * menu)` | Adds a back menu to an existing state.

## Members

#### `public `[`TastyState`](#a00127)` * `[`head`](#a00123_1ac5346c062cf47b41c6c954990df0bdbf) {#a00123_1ac5346c062cf47b41c6c954990df0bdbf}

Pointer to the head state of the menu.

#### `public `[`TastyMenu`](#a00123)` * `[`backMenu`](#a00123_1af44feb296262ad6a5cebc15be559e3ec) {#a00123_1af44feb296262ad6a5cebc15be559e3ec}

Pointer to the previous menu.

#### `public uint8_t `[`length`](#a00123_1ad6b745dde37c335bdf5aa444e46a3ffb) {#a00123_1ad6b745dde37c335bdf5aa444e46a3ffb}

Number of states in the menu.

#### `public  `[`TastyMenu`](#a00123_1af1a927f798afc5720544cf954687e52d)`(uint8_t len,...)` {#a00123_1af1a927f798afc5720544cf954687e52d}

#### `public void `[`addTimeoutToState`](#a00123_1af61be78dc4428db44c3bd2f56bba8102)`(`[`TastyState`](#a00127)` * state)` {#a00123_1af61be78dc4428db44c3bd2f56bba8102}

Adds a timeout to a specific state.

Adds a timeout to a state if not already set.

This function checks if the state has a timeout set; if not, it assigns the default menu timeout. It also sets the default timeout state if not already assigned.

#### Parameters
* `state` Pointer to the [TastyState](#a00127) to which the timeout will be added.

#### `public void `[`addNextMenuState`](#a00123_1a1cf18ee0770c2e0705f773d44bc65a00)`(`[`TastyState`](#a00127)` * existingState,`[`TastyState`](#a00127)` * newState)` {#a00123_1a1cf18ee0770c2e0705f773d44bc65a00}

Adds a new state after an existing state.

#### `public void `[`addPreviousMenuState`](#a00123_1a708498fb2e8c47213be38e636e4ba02c)`(`[`TastyState`](#a00127)` * existingState,`[`TastyState`](#a00127)` * newState)` {#a00123_1a708498fb2e8c47213be38e636e4ba02c}

Adds a new state before an existing state.

#### `public void `[`addSubmenu`](#a00123_1a98960c9b7cad18f3c52d882c13b5c957)`(`[`TastyState`](#a00127)` * existingState,`[`TastyMenu`](#a00123)` * menu)` {#a00123_1a98960c9b7cad18f3c52d882c13b5c957}

Adds a submenu to an existing state.

#### `public void `[`addBackMenu`](#a00123_1aafcad30322884ff02eda904fe1b5f3a8)`(`[`TastyState`](#a00127)` * existingState,`[`TastyMenu`](#a00123)` * menu)` {#a00123_1aafcad30322884ff02eda904fe1b5f3a8}

Adds a back menu to an existing state.

# class `TastyState` {#a00127}

Represents a state in a Tasty menu system.

The [TastyState](#a00127) class encapsulates the properties and behaviors of a state in a menu system, including event handling, LED settings, and navigation between states.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public String `[`name`](#a00127_1aeae6225a434f42af605990fae77f8624) | Name of the state.
`public int8_t `[`icon`](#a00127_1a8f505de57dc6a17af192fec5070e1958) | Icon associated with the state.
`public `[`LedColor`](#a00103)` `[`ledColor`](#a00127_1adae809684154ef4d9c99b520755e7f90) | LED color for the state.
`public `[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` `[`ledSpeed`](#a00127_1ac73467c46a7e1f8192c72b35b5433a82) | LED blink speed for the state.
`public int32_t `[`timeout`](#a00127_1a058b70cc059b1c6e8b9e2566da830f0e) | [Timeout](#a00131) duration for the state.
`public unsigned long `[`activatedTime`](#a00127_1ae7f2d16bbb0041fccff43822a4583b4c) | Time when the state was activated.
`public `[`TastyState`](#a00127)` * `[`onClickState`](#a00127_1aee8083a0e6ea059aeb3a1527f3d986c1) | State to transition to on click event.
`public `[`TastyState`](#a00127)` * `[`onDoubleClickState`](#a00127_1a23d88336faca6009183fd1671cbaee09) | State to transition to on double click event.
`public `[`TastyState`](#a00127)` * `[`onLongPressState`](#a00127_1aba693fde2c1924d69295b5fd7652dc2e) | State to transition to on long press event.
`public `[`TastyState`](#a00127)` * `[`onMultiClickState`](#a00127_1a9d1b7c4de4d38582d3ce4af9c0910d35) | State to transition to on multi-click event.
`public `[`TastyState`](#a00127)` * `[`onUpClickState`](#a00127_1aa3c065befcba417bb92a9f054c5da305) | State to transition to on up click event.
`public `[`TastyState`](#a00127)` * `[`onDownClickState`](#a00127_1a45d16f05da6a0a11b011c60903032894) | State to transition to on down click event.
`public `[`TastyState`](#a00127)` * `[`onLeftClickState`](#a00127_1acdbda9d91f66c1334862f4891f2421fa) | State to transition to on left click event.
`public `[`TastyState`](#a00127)` * `[`onRightClickState`](#a00127_1ae5dffc901f10445470b094483f966152) | State to transition to on right click event.
`public `[`TastyState`](#a00127)` * `[`onTimeoutState`](#a00127_1a57f8124f783f475cf9c9855358ba3647) | State to transition to on timeout.
`public int8_t `[`index`](#a00127_1a785b5098c7503d32e1778f790b6ecc99) | Index of the state in the menu.
`public `[`TastyMenu`](#a00123)` * `[`backMenu`](#a00127_1a5f5ab69741d09cfad3859079f0ad9804) | Menu to go back to.
`public `[`TastyMenu`](#a00123)` * `[`forwardMenu`](#a00127_1a540bde56a8a1bb809388900dfbc64f2d) | Menu to go forward to.
`public `[`TastyMenu`](#a00123)` * `[`menu`](#a00127_1af72aefe50e11699cd5c77c26fcc657fb) | The menu this state is part of.
`public inline  `[`TastyState`](#a00127_1af4b4821a6d528a0925b98a676d30f9e6)`(String name,int8_t icon,`[`LedColor`](#a00103)` ledColor,`[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` ledSpeed,int32_t timeout,`[`TastyState`](#a00127)` * timeoutState)` | Constructs a [TastyState](#a00127) with specified parameters.
`public inline  `[`TastyState`](#a00127_1a2691970be519cefee4db4310cac26a93)`(`[`TastyState`](#a00127)` * state,`[`TastyState`](#a00127)` * timeoutS)` | Copy constructor for [TastyState](#a00127).
`public void `[`setLEDColor`](#a00127_1a0e1f6d069ab6a585b6c4925e55e7303d)`(int8_t r,int8_t g,int8_t b)` | Sets the LED color for the state.
`public void `[`setLEDColor`](#a00127_1a775e3f96776ab2bbac199db75a81982e)`(`[`LedColor`](#a00103)` color)` | Sets the LED color for the state.
`public void `[`setBlinkSpeed`](#a00127_1a85d4654a58ebaaafcdf99b2eae454c99)`(`[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` ledSpeed)` | Sets the blink speed for the LED.
`public inline int32_t `[`getTimeout`](#a00127_1a04d3cf48ca33fb2067c579725be7d52c)`()` | Gets the timeout duration for the state.
`public inline void `[`setTimeout`](#a00127_1a5324060bec8b475d0255833118fbe4c9)`(int32_t to)` | Sets the timeout duration for the state.
`public void `[`addEvents`](#a00127_1a22a4b8220db87f224593b6087f8b571b)`(`[`TastyState`](#a00127)` * clickState,`[`TastyState`](#a00127)` * doubleClickState,`[`TastyState`](#a00127)` * multiClickState,`[`TastyState`](#a00127)` * longPressState)` | Adds event handlers for various click events.
`public void `[`onEvent`](#a00127_1a0a0e3891989a702991591cc71910db52)`(`[`TastyEventType`](#a00047_1ac0d6bc6594dc87bb21738b8e364a8341)` type,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` fn,void * param)` | Handles an event of a specific type.
`public bool `[`handleEvent`](#a00127_1a47fc66f02437bca2d3e9794f0d34c0b3)`(`[`TastyEventType`](#a00047_1ac0d6bc6594dc87bb21738b8e364a8341)` type)` | Processes an event of a specific type.
`public bool `[`forwardEvents`](#a00127_1a7176abfb3d0a7c6c9191aea28d053df1)`(`[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` fn)` | Forwards events to a specified function.
`public void `[`print`](#a00127_1ae6561dd3755376d3b7092dba92d5848c)`()` | Prints the state information to the console.

## Members

#### `public String `[`name`](#a00127_1aeae6225a434f42af605990fae77f8624) {#a00127_1aeae6225a434f42af605990fae77f8624}

Name of the state.

#### `public int8_t `[`icon`](#a00127_1a8f505de57dc6a17af192fec5070e1958) {#a00127_1a8f505de57dc6a17af192fec5070e1958}

Icon associated with the state.

#### `public `[`LedColor`](#a00103)` `[`ledColor`](#a00127_1adae809684154ef4d9c99b520755e7f90) {#a00127_1adae809684154ef4d9c99b520755e7f90}

LED color for the state.

#### `public `[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` `[`ledSpeed`](#a00127_1ac73467c46a7e1f8192c72b35b5433a82) {#a00127_1ac73467c46a7e1f8192c72b35b5433a82}

LED blink speed for the state.

#### `public int32_t `[`timeout`](#a00127_1a058b70cc059b1c6e8b9e2566da830f0e) {#a00127_1a058b70cc059b1c6e8b9e2566da830f0e}

[Timeout](#a00131) duration for the state.

#### `public unsigned long `[`activatedTime`](#a00127_1ae7f2d16bbb0041fccff43822a4583b4c) {#a00127_1ae7f2d16bbb0041fccff43822a4583b4c}

Time when the state was activated.

#### `public `[`TastyState`](#a00127)` * `[`onClickState`](#a00127_1aee8083a0e6ea059aeb3a1527f3d986c1) {#a00127_1aee8083a0e6ea059aeb3a1527f3d986c1}

State to transition to on click event.

#### `public `[`TastyState`](#a00127)` * `[`onDoubleClickState`](#a00127_1a23d88336faca6009183fd1671cbaee09) {#a00127_1a23d88336faca6009183fd1671cbaee09}

State to transition to on double click event.

#### `public `[`TastyState`](#a00127)` * `[`onLongPressState`](#a00127_1aba693fde2c1924d69295b5fd7652dc2e) {#a00127_1aba693fde2c1924d69295b5fd7652dc2e}

State to transition to on long press event.

#### `public `[`TastyState`](#a00127)` * `[`onMultiClickState`](#a00127_1a9d1b7c4de4d38582d3ce4af9c0910d35) {#a00127_1a9d1b7c4de4d38582d3ce4af9c0910d35}

State to transition to on multi-click event.

#### `public `[`TastyState`](#a00127)` * `[`onUpClickState`](#a00127_1aa3c065befcba417bb92a9f054c5da305) {#a00127_1aa3c065befcba417bb92a9f054c5da305}

State to transition to on up click event.

#### `public `[`TastyState`](#a00127)` * `[`onDownClickState`](#a00127_1a45d16f05da6a0a11b011c60903032894) {#a00127_1a45d16f05da6a0a11b011c60903032894}

State to transition to on down click event.

#### `public `[`TastyState`](#a00127)` * `[`onLeftClickState`](#a00127_1acdbda9d91f66c1334862f4891f2421fa) {#a00127_1acdbda9d91f66c1334862f4891f2421fa}

State to transition to on left click event.

#### `public `[`TastyState`](#a00127)` * `[`onRightClickState`](#a00127_1ae5dffc901f10445470b094483f966152) {#a00127_1ae5dffc901f10445470b094483f966152}

State to transition to on right click event.

#### `public `[`TastyState`](#a00127)` * `[`onTimeoutState`](#a00127_1a57f8124f783f475cf9c9855358ba3647) {#a00127_1a57f8124f783f475cf9c9855358ba3647}

State to transition to on timeout.

#### `public int8_t `[`index`](#a00127_1a785b5098c7503d32e1778f790b6ecc99) {#a00127_1a785b5098c7503d32e1778f790b6ecc99}

Index of the state in the menu.

#### `public `[`TastyMenu`](#a00123)` * `[`backMenu`](#a00127_1a5f5ab69741d09cfad3859079f0ad9804) {#a00127_1a5f5ab69741d09cfad3859079f0ad9804}

Menu to go back to.

#### `public `[`TastyMenu`](#a00123)` * `[`forwardMenu`](#a00127_1a540bde56a8a1bb809388900dfbc64f2d) {#a00127_1a540bde56a8a1bb809388900dfbc64f2d}

Menu to go forward to.

#### `public `[`TastyMenu`](#a00123)` * `[`menu`](#a00127_1af72aefe50e11699cd5c77c26fcc657fb) {#a00127_1af72aefe50e11699cd5c77c26fcc657fb}

The menu this state is part of.

#### `public inline  `[`TastyState`](#a00127_1af4b4821a6d528a0925b98a676d30f9e6)`(String name,int8_t icon,`[`LedColor`](#a00103)` ledColor,`[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` ledSpeed,int32_t timeout,`[`TastyState`](#a00127)` * timeoutState)` {#a00127_1af4b4821a6d528a0925b98a676d30f9e6}

Constructs a [TastyState](#a00127) with specified parameters.

#### Parameters
* `name` The name of the state. 

* `icon` The icon associated with the state (default is -1). 

* `ledColor` The LED color for the state (default is black). 

* `ledSpeed` The LED blink speed for the state (default is off). 

* `timeout` The timeout duration for the state (default is 0). 

* `timeoutState` The state to transition to on timeout (default is nullptr).

#### `public inline  `[`TastyState`](#a00127_1a2691970be519cefee4db4310cac26a93)`(`[`TastyState`](#a00127)` * state,`[`TastyState`](#a00127)` * timeoutS)` {#a00127_1a2691970be519cefee4db4310cac26a93}

Copy constructor for [TastyState](#a00127).

#### Parameters
* `state` The state to copy from. 

* `timeoutS` The state to transition to on timeout (default is nullptr).

#### `public void `[`setLEDColor`](#a00127_1a0e1f6d069ab6a585b6c4925e55e7303d)`(int8_t r,int8_t g,int8_t b)` {#a00127_1a0e1f6d069ab6a585b6c4925e55e7303d}

Sets the LED color for the state.

Sets the LED color.

#### Parameters
* `r` Red component of the color. 

* `g` Green component of the color. 

* `b` Blue component of the color.

* `r` Red component (0-255) 

* `g` Green component (0-255) 

* `b` Blue component (0-255)

#### `public void `[`setLEDColor`](#a00127_1a775e3f96776ab2bbac199db75a81982e)`(`[`LedColor`](#a00103)` color)` {#a00127_1a775e3f96776ab2bbac199db75a81982e}

Sets the LED color for the state.

Sets the LED color.

#### Parameters
* `color` The [LedColor](#a00103) structure containing the RGB values to set the LED.

* `color` [LedColor](#a00103) to set

#### `public void `[`setBlinkSpeed`](#a00127_1a85d4654a58ebaaafcdf99b2eae454c99)`(`[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` ledSpeed)` {#a00127_1a85d4654a58ebaaafcdf99b2eae454c99}

Sets the blink speed for the LED.

#### Parameters
* `ledSpeed` The blink speed to set.

* `ledSpeed` The desired blink speed.

#### `public inline int32_t `[`getTimeout`](#a00127_1a04d3cf48ca33fb2067c579725be7d52c)`()` {#a00127_1a04d3cf48ca33fb2067c579725be7d52c}

Gets the timeout duration for the state.

#### Returns
The timeout duration in milliseconds.

#### `public inline void `[`setTimeout`](#a00127_1a5324060bec8b475d0255833118fbe4c9)`(int32_t to)` {#a00127_1a5324060bec8b475d0255833118fbe4c9}

Sets the timeout duration for the state.

#### Parameters
* `to` The timeout duration in milliseconds.

#### `public void `[`addEvents`](#a00127_1a22a4b8220db87f224593b6087f8b571b)`(`[`TastyState`](#a00127)` * clickState,`[`TastyState`](#a00127)` * doubleClickState,`[`TastyState`](#a00127)` * multiClickState,`[`TastyState`](#a00127)` * longPressState)` {#a00127_1a22a4b8220db87f224593b6087f8b571b}

Adds event handlers for various click events.

Adds event states for various button actions.

#### Parameters
* `clickState` State to transition to on click event. 

* `doubleClickState` State to transition to on double click event (default is nullptr). 

* `multiClickState` State to transition to on multi-click event (default is nullptr). 

* `longPressState` State to transition to on long press event (default is nullptr).

* `clickState` State for single click event. 

* `doubleClickState` State for double click event. 

* `multiClickState` State for multiple clicks event. 

* `longPressState` State for long press event.

#### `public void `[`onEvent`](#a00127_1a0a0e3891989a702991591cc71910db52)`(`[`TastyEventType`](#a00047_1ac0d6bc6594dc87bb21738b8e364a8341)` type,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` fn,void * param)` {#a00127_1a0a0e3891989a702991591cc71910db52}

Handles an event of a specific type.

Registers an event handler for a specific event type.

#### Parameters
* `type` The type of the event to handle. 

* `fn` The handler function to call. 

* `param` Optional parameter to pass to the handler (default is [T()](#a00047_1a4688f2a3a6c8f0508169d10a5d036000)).

* `t` The type of event to handle. 

* `fn` The callback function to execute on the event. 

* `param` Additional parameter to pass to the callback function.

#### `public bool `[`handleEvent`](#a00127_1a47fc66f02437bca2d3e9794f0d34c0b3)`(`[`TastyEventType`](#a00047_1ac0d6bc6594dc87bb21738b8e364a8341)` type)` {#a00127_1a47fc66f02437bca2d3e9794f0d34c0b3}

Processes an event of a specific type.

Handles an event of a specific type.

#### Parameters
* `type` The type of the event to process. 

#### Returns
True if the event was handled, false otherwise.

#### Parameters
* `type` The type of event to handle. 

#### Returns
true if the event was handled successfully, false otherwise.

#### `public bool `[`forwardEvents`](#a00127_1a7176abfb3d0a7c6c9191aea28d053df1)`(`[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` fn)` {#a00127_1a7176abfb3d0a7c6c9191aea28d053df1}

Forwards events to a specified function.

#### Parameters
* `fn` The function to forward events to. 

#### Returns
True if events were successfully forwarded, false otherwise.

#### `public void `[`print`](#a00127_1ae6561dd3755376d3b7092dba92d5848c)`()` {#a00127_1ae6561dd3755376d3b7092dba92d5848c}

Prints the state information to the console.

Prints the current state information to the debug log.

# class `TastyStateManager` {#a00135}

Manages the states of a Tasty application, including state transitions, timeouts, and LED control.

Manages the state of a system with timeout and LED control.

The [TastyStateManager](#a00135) is a singleton class that handles the management of different states in a Tasty application. It allows for setting a default state, managing timeouts, and controlling LED indicators based on the current state. The class provides methods to initialize the state manager, set up states, and handle state transitions.

The state manager can be configured with a default state that the application will revert to after a timeout, as well as an intermediary timeout state that can be used for temporary changes during state transitions. Additionally, it supports both single-color and RGB LED configurations to provide visual feedback based on the current state.

Example usage:

```cpp
#include "[TastyStateManager.h](#a00056)"
#include "[TastyState.h](#a00053)"

void setup() {
    // Initialize the TastyStateManager
    [TastyStateManager](#a00135)& manager = [TastyStateManager::getInstance](#a00135_1a3fe81c644f6597e8ee410a6d99b4e2d8)();

    // Create states
    [TastyState](#a00127) [defaultState](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca);
    [TastyState](#a00127) timeoutState;

    // Setup the manager with default and timeout states
    manager.[setupDefaultStates](#a00135_1abaf7b5b31f6e0d78848f6bc66d01be58)(&[defaultState](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca), &timeoutState);
    manager.[setupLed](#a00135_1aee65ab923df273d420fe2f9f90dc0a1d)(LED_BUILTIN); // Setup a single LED on the built-in pin

    // Begin the state manager
    manager.[begin](#a00135_1a33b3abd2985f71a565e9e8473e4b0988)(&[defaultState](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca), &timeoutState);
}

void loop() {
    // Call the tick function in the main loop
    [TastyStateManager::getInstance](#a00135_1a3fe81c644f6597e8ee410a6d99b4e2d8)().[tick](#a00135_1a30286d39586b39907c8845ed1910d59f)();
}
```

The [TastyStateManager](#a00135) class is responsible for handling different states of a system, managing transitions between states based on events, and controlling an LED based on the current state. It uses a timer to manage state timeouts and LED blinking.

Example usage: 
```cpp
[TastyStateManager](#a00135)& manager = [TastyStateManager::getInstance](#a00135_1a3fe81c644f6597e8ee410a6d99b4e2d8)();
manager.[begin](#a00135_1a33b3abd2985f71a565e9e8473e4b0988)([defaultState](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca), timeoutState, ledPin);

// In the main loop
while (true) {
    manager.[tick](#a00135_1a30286d39586b39907c8845ed1910d59f)();
    // Handle button presses
    if (buttonPressed) {
        manager.[onClick](#a00135_1afb27dfc96a3b47047a7b55af7a98b10d)();
    }
}
```

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`TastyState`](#a00127)` * `[`activeState`](#a00135_1ab160bd8e3a9eab7a49a22abd62a9aa92) | The active state
`public `[`TastyState`](#a00127)` * `[`lastState`](#a00135_1a886583ece83b83af5664175b4b69b467) | The previous state
`public `[`TastyState`](#a00127)` * `[`defaultState`](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca) | The default state, state manager will revert back to this after timeouts
`public `[`TastyState`](#a00127)` * `[`defaultTimeoutState`](#a00135_1a838ab01d3eb7cbd773dd149a04d03bbc) | Intermediary state for making changes during timeouts
`public `[`BlinkState`](#a00119)` `[`ledState`](#a00135_1ae1cc0a1352b4ab3879bb955b193051f7) | State of the RGB LED
`public void `[`setDefaultState`](#a00135_1a3183cd2eb4130d6f6eb1490377d8ab25)`(`[`TastyState`](#a00127)` * state)` | Sets the default state for the state manager.
`public void `[`setTimeoutState`](#a00135_1aa6a988312c124a1a62b60be530bb1ed9)`(`[`TastyState`](#a00127)` * state)` | Sets the timeout state for the state manager.
`public void `[`setupLed`](#a00135_1aee65ab923df273d420fe2f9f90dc0a1d)`(int8_t ledPin)` | Sets up the LED with a single pin.
`public void `[`setupLed`](#a00135_1ab0584f33048b2d3d9329a4b8aad4f740)`(int8_t ledR,int8_t ledG,int8_t ledB)` | Sets up the RGB LED with separate pins for R, G, and B.
`public void `[`setupDefaultStates`](#a00135_1abaf7b5b31f6e0d78848f6bc66d01be58)`(`[`TastyState`](#a00127)` * defaultS,`[`TastyState`](#a00127)` * timeoutS)` | Sets up the default states for the state manager.
`public void `[`begin`](#a00135_1a33b3abd2985f71a565e9e8473e4b0988)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState,int8_t ledPin)` | Initializes the state manager with default and timeout states.
`public void `[`begin`](#a00135_1a80b939cc05e2c0be11378e604ebad9c3)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState,`[`RGBLed`](#a00107)` ledPin)` | Initializes the state manager with RGB LED pins.
`public void `[`begin`](#a00135_1a7487c7ecb35040b534c027b1c7caafa3)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState)` | Initializes the state manager with default states only.
`public void `[`tick`](#a00135_1a30286d39586b39907c8845ed1910d59f)`()` | Updates the state manager and applies LED settings.
`public void `[`setState`](#a00135_1a7244cd5222700b7222f7d3d95813cfd8)`(`[`TastyState`](#a00127)` * nextState)` | Sets the next state for the state manager.
`public void `[`setTimeoutTask`](#a00135_1ab61f008c341fbc52e53584a912e34a57)`()` | Sets the timeout task for the current state.

## Members

#### `public `[`TastyState`](#a00127)` * `[`activeState`](#a00135_1ab160bd8e3a9eab7a49a22abd62a9aa92) {#a00135_1ab160bd8e3a9eab7a49a22abd62a9aa92}

The active state

#### `public `[`TastyState`](#a00127)` * `[`lastState`](#a00135_1a886583ece83b83af5664175b4b69b467) {#a00135_1a886583ece83b83af5664175b4b69b467}

The previous state

#### `public `[`TastyState`](#a00127)` * `[`defaultState`](#a00135_1af91fda0fb60771cedc6bb58b4bede2ca) {#a00135_1af91fda0fb60771cedc6bb58b4bede2ca}

The default state, state manager will revert back to this after timeouts

#### `public `[`TastyState`](#a00127)` * `[`defaultTimeoutState`](#a00135_1a838ab01d3eb7cbd773dd149a04d03bbc) {#a00135_1a838ab01d3eb7cbd773dd149a04d03bbc}

Intermediary state for making changes during timeouts

#### `public `[`BlinkState`](#a00119)` `[`ledState`](#a00135_1ae1cc0a1352b4ab3879bb955b193051f7) {#a00135_1ae1cc0a1352b4ab3879bb955b193051f7}

State of the RGB LED

#### `public void `[`setDefaultState`](#a00135_1a3183cd2eb4130d6f6eb1490377d8ab25)`(`[`TastyState`](#a00127)` * state)` {#a00135_1a3183cd2eb4130d6f6eb1490377d8ab25}

Sets the default state for the state manager.

Set the default state for the manager.

#### Parameters
* `state` Pointer to the [TastyState](#a00127) to set as the default state.

* `state` Pointer to the state to be set as default.

#### `public void `[`setTimeoutState`](#a00135_1aa6a988312c124a1a62b60be530bb1ed9)`(`[`TastyState`](#a00127)` * state)` {#a00135_1aa6a988312c124a1a62b60be530bb1ed9}

Sets the timeout state for the state manager.

Set the state that will be an intermediary between "active state" and "default state" when it times out.

#### Parameters
* `state` Pointer to the [TastyState](#a00127) to set as the timeout state.

* `state` Pointer to the state to be set as timeout.

#### `public void `[`setupLed`](#a00135_1aee65ab923df273d420fe2f9f90dc0a1d)`(int8_t ledPin)` {#a00135_1aee65ab923df273d420fe2f9f90dc0a1d}

Sets up the LED with a single pin.

Setup the LED with a single pin.

#### Parameters
* `ledPin` The pin number for the LED.

* `ledPin` The pin number for the LED.

#### `public void `[`setupLed`](#a00135_1ab0584f33048b2d3d9329a4b8aad4f740)`(int8_t ledR,int8_t ledG,int8_t ledB)` {#a00135_1ab0584f33048b2d3d9329a4b8aad4f740}

Sets up the RGB LED with separate pins for R, G, and B.

Setup the RGB LED with separate pins for red, green, and blue.

#### Parameters
* `ledR` The pin number for the red LED. 

* `ledG` The pin number for the green LED. 

* `ledB` The pin number for the blue LED.

* `ledR` The pin number for the red LED. 

* `ledG` The pin number for the green LED. 

* `ledB` The pin number for the blue LED.

#### `public void `[`setupDefaultStates`](#a00135_1abaf7b5b31f6e0d78848f6bc66d01be58)`(`[`TastyState`](#a00127)` * defaultS,`[`TastyState`](#a00127)` * timeoutS)` {#a00135_1abaf7b5b31f6e0d78848f6bc66d01be58}

Sets up the default states for the state manager.

Setup the default states for the manager.

#### Parameters
* `defaultS` Pointer to the default [TastyState](#a00127). 

* `timeoutS` Pointer to the timeout [TastyState](#a00127).

* `defaultS` Pointer to the default state. 

* `timeoutS` Pointer to the timeout state.

#### `public void `[`begin`](#a00135_1a33b3abd2985f71a565e9e8473e4b0988)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState,int8_t ledPin)` {#a00135_1a33b3abd2985f71a565e9e8473e4b0988}

Initializes the state manager with default and timeout states.

Start the library with optional parameters for default and timeout states and LED configuration.

#### Parameters
* `defaultState` Pointer to the default [TastyState](#a00127). 

* `timeoutState` Pointer to the timeout [TastyState](#a00127). 

* `ledPin` The pin number for the LED (optional).

* `defaultS` Pointer to the default state. 

* `timeoutS` Pointer to the timeout state. 

* `ledPin` The pin number for the LED.

#### `public void `[`begin`](#a00135_1a80b939cc05e2c0be11378e604ebad9c3)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState,`[`RGBLed`](#a00107)` ledPin)` {#a00135_1a80b939cc05e2c0be11378e604ebad9c3}

Initializes the state manager with RGB LED pins.

Start the library with RGB LED configuration.

#### Parameters
* `defaultState` Pointer to the default [TastyState](#a00127). 

* `timeoutState` Pointer to the timeout [TastyState](#a00127). 

* `ledPin` [RGBLed](#a00107) structure for LED configuration.

* `defaultS` Pointer to the default state. 

* `timeoutS` Pointer to the timeout state. 

* `ledPin` [RGBLed](#a00107) structure containing pin numbers for R, G, and B.

#### `public void `[`begin`](#a00135_1a7487c7ecb35040b534c027b1c7caafa3)`(`[`TastyState`](#a00127)` * defaultState,`[`TastyState`](#a00127)` * timeoutState)` {#a00135_1a7487c7ecb35040b534c027b1c7caafa3}

Initializes the state manager with default states only.

Start the library with default states only.

#### Parameters
* `defaultState` Pointer to the default [TastyState](#a00127). 

* `timeoutState` Pointer to the timeout [TastyState](#a00127).

* `defaultS` Pointer to the default state. 

* `timeoutS` Pointer to the timeout state.

#### `public void `[`tick`](#a00135_1a30286d39586b39907c8845ed1910d59f)`()` {#a00135_1a30286d39586b39907c8845ed1910d59f}

Updates the state manager and applies LED settings.

Main loop function to be called repeatedly.

This method should be called periodically to update the state manager and apply any LED changes.

#### `public void `[`setState`](#a00135_1a7244cd5222700b7222f7d3d95813cfd8)`(`[`TastyState`](#a00127)` * nextState)` {#a00135_1a7244cd5222700b7222f7d3d95813cfd8}

Sets the next state for the state manager.

Set the next state for the state manager.

#### Parameters
* `nextState` Pointer to the [TastyState](#a00127) to transition to. Defaults to the current timeout state.

* `nextState` Pointer to the state to transition to.

#### `public void `[`setTimeoutTask`](#a00135_1ab61f008c341fbc52e53584a912e34a57)`()` {#a00135_1ab61f008c341fbc52e53584a912e34a57}

Sets the timeout task for the current state.

Set the timeout task for the state manager.

This method configures the timeout for the current active state.

# class `TextEntryState` {#a00091}

```
class TextEntryState
  : public EntryState< String, TextEntryState >
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`caseSensitive`](#a00091_1af0538f05d59c9aefb2870e54bccfd5c2) | 
`public  `[`TextEntryState`](#a00091_1ab863f8b2aabc0839bd1ef34b63fe7ae5)`(String name,uint8_t length,String data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState,bool caseSensitive)` | 
`public void `[`increase`](#a00091_1a820e5717a8a772737fc33d0ba59c5244)`()` | 
`public void `[`decrease`](#a00091_1a81062a6d23420b68b8d2e1df25a38db8)`()` | 
`public void `[`adjustIndexUp`](#a00091_1ac38ac0d60008993e4852aebc28ef0f8c)`()` | 
`public void `[`adjustIndexDown`](#a00091_1a147cea6ed8fb9087dacb83488b8cb847)`()` | 

## Members

#### `public bool `[`caseSensitive`](#a00091_1af0538f05d59c9aefb2870e54bccfd5c2) {#a00091_1af0538f05d59c9aefb2870e54bccfd5c2}

#### `public  `[`TextEntryState`](#a00091_1ab863f8b2aabc0839bd1ef34b63fe7ae5)`(String name,uint8_t length,String data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState,bool caseSensitive)` {#a00091_1ab863f8b2aabc0839bd1ef34b63fe7ae5}

#### `public void `[`increase`](#a00091_1a820e5717a8a772737fc33d0ba59c5244)`()` {#a00091_1a820e5717a8a772737fc33d0ba59c5244}

#### `public void `[`decrease`](#a00091_1a81062a6d23420b68b8d2e1df25a38db8)`()` {#a00091_1a81062a6d23420b68b8d2e1df25a38db8}

#### `public void `[`adjustIndexUp`](#a00091_1ac38ac0d60008993e4852aebc28ef0f8c)`()` {#a00091_1ac38ac0d60008993e4852aebc28ef0f8c}

#### `public void `[`adjustIndexDown`](#a00091_1a147cea6ed8fb9087dacb83488b8cb847)`()` {#a00091_1a147cea6ed8fb9087dacb83488b8cb847}

# class `TimeEntryState` {#a00095}

```
class TimeEntryState
  : public EntryState< DateTimeObj, TimeEntryState >
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public uint8_t `[`editIndex`](#a00095_1aae3a3fc32564415ded82fd174aedcc72) | 
`public  `[`TimeEntryState`](#a00095_1ad2d44121be48d76272c0e2d0129c9092)`(String name,`[`DateTimeObj`](#a00099)` data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState)` | 
`public void `[`increase`](#a00095_1a319d9a3e6cf14370df7864b8d20504ba)`()` | 
`public void `[`decrease`](#a00095_1a0c6e6e0fc8f9cdf0dd99651d33a95314)`()` | 
`public void `[`adjustIndexUp`](#a00095_1a08e46de9922ebf276fce0a8bd15034a0)`()` | 
`public void `[`adjustIndexDown`](#a00095_1a19250e67381c972e8ebcf39270669513)`()` | 

## Members

#### `public uint8_t `[`editIndex`](#a00095_1aae3a3fc32564415ded82fd174aedcc72) {#a00095_1aae3a3fc32564415ded82fd174aedcc72}

#### `public  `[`TimeEntryState`](#a00095_1ad2d44121be48d76272c0e2d0129c9092)`(String name,`[`DateTimeObj`](#a00099)` data,`[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` saveFn,`[`TastyState`](#a00127)` * returnState)` {#a00095_1ad2d44121be48d76272c0e2d0129c9092}

#### `public void `[`increase`](#a00095_1a319d9a3e6cf14370df7864b8d20504ba)`()` {#a00095_1a319d9a3e6cf14370df7864b8d20504ba}

#### `public void `[`decrease`](#a00095_1a0c6e6e0fc8f9cdf0dd99651d33a95314)`()` {#a00095_1a0c6e6e0fc8f9cdf0dd99651d33a95314}

#### `public void `[`adjustIndexUp`](#a00095_1a08e46de9922ebf276fce0a8bd15034a0)`()` {#a00095_1a08e46de9922ebf276fce0a8bd15034a0}

#### `public void `[`adjustIndexDown`](#a00095_1a19250e67381c972e8ebcf39270669513)`()` {#a00095_1a19250e67381c972e8ebcf39270669513}

# struct `ActionFunctions` {#a00111}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onEnter`](#a00111_1aa1d763455a783f3e8f045bb2d28804a1) | 
`public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onTick`](#a00111_1ab26a16b246f3d63e4a9da72a27df52ac) | 
`public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onLeave`](#a00111_1a2a3bec4b74edb746eec094a1f03797a9) | 

## Members

#### `public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onEnter`](#a00111_1aa1d763455a783f3e8f045bb2d28804a1) {#a00111_1aa1d763455a783f3e8f045bb2d28804a1}

#### `public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onTick`](#a00111_1ab26a16b246f3d63e4a9da72a27df52ac) {#a00111_1ab26a16b246f3d63e4a9da72a27df52ac}

#### `public `[`ActionFunction`](#a00047_1a8bb84b5c51f63deb5eb08ac81e8977ac)` `[`onLeave`](#a00111_1a2a3bec4b74edb746eec094a1f03797a9) {#a00111_1a2a3bec4b74edb746eec094a1f03797a9}

# struct `BlinkState` {#a00119}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public unsigned long `[`onTime`](#a00119_1aa3515ef5cfb4e5facc706f1bbbf4ebeb) | 
`public unsigned long `[`offTime`](#a00119_1a2232dcf65ff7a1e66949fc74912a7944) | 
`public bool `[`on`](#a00119_1a8bcd5077d3f7eaa496182eb28a11de08) | 
`public `[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` `[`speed`](#a00119_1a1cf301b52710db837e5528f95754b87d) | 
`public bool `[`blinking`](#a00119_1a861a0e87655215aac27967229a2b9961) | 
`public `[`LedColor`](#a00103)` `[`color`](#a00119_1a879bd6af1d307b803196281238cf7b99) | 

## Members

#### `public unsigned long `[`onTime`](#a00119_1aa3515ef5cfb4e5facc706f1bbbf4ebeb) {#a00119_1aa3515ef5cfb4e5facc706f1bbbf4ebeb}

#### `public unsigned long `[`offTime`](#a00119_1a2232dcf65ff7a1e66949fc74912a7944) {#a00119_1a2232dcf65ff7a1e66949fc74912a7944}

#### `public bool `[`on`](#a00119_1a8bcd5077d3f7eaa496182eb28a11de08) {#a00119_1a8bcd5077d3f7eaa496182eb28a11de08}

#### `public `[`BlinkSpeed`](#a00047_1aab6b50cd48c7a2b548e5f596b3873edb)` `[`speed`](#a00119_1a1cf301b52710db837e5528f95754b87d) {#a00119_1a1cf301b52710db837e5528f95754b87d}

#### `public bool `[`blinking`](#a00119_1a861a0e87655215aac27967229a2b9961) {#a00119_1a861a0e87655215aac27967229a2b9961}

#### `public `[`LedColor`](#a00103)` `[`color`](#a00119_1a879bd6af1d307b803196281238cf7b99) {#a00119_1a879bd6af1d307b803196281238cf7b99}

# struct `DateTimeObj` {#a00099}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public uint8_t `[`hour`](#a00099_1af6ef99520227bf0e716a75b93fd2d328) | 
`public uint8_t `[`minute`](#a00099_1a9d7086a3414ad482ab902f04daf31caa) | 
`public uint8_t `[`second`](#a00099_1a00cb6264c4122aebc8f46bf314e67f08) | 
`public uint8_t `[`month`](#a00099_1a26f953e8a99b87cadf118cfdc6134243) | 
`public uint8_t `[`day`](#a00099_1ad8c9a4205f95289a7c5839e277da4548) | 
`public uint16_t `[`year`](#a00099_1ad3ab8a90004772ab5e96070166f7fe23) | 

## Members

#### `public uint8_t `[`hour`](#a00099_1af6ef99520227bf0e716a75b93fd2d328) {#a00099_1af6ef99520227bf0e716a75b93fd2d328}

#### `public uint8_t `[`minute`](#a00099_1a9d7086a3414ad482ab902f04daf31caa) {#a00099_1a9d7086a3414ad482ab902f04daf31caa}

#### `public uint8_t `[`second`](#a00099_1a00cb6264c4122aebc8f46bf314e67f08) {#a00099_1a00cb6264c4122aebc8f46bf314e67f08}

#### `public uint8_t `[`month`](#a00099_1a26f953e8a99b87cadf118cfdc6134243) {#a00099_1a26f953e8a99b87cadf118cfdc6134243}

#### `public uint8_t `[`day`](#a00099_1ad8c9a4205f95289a7c5839e277da4548) {#a00099_1ad8c9a4205f95289a7c5839e277da4548}

#### `public uint16_t `[`year`](#a00099_1ad3ab8a90004772ab5e96070166f7fe23) {#a00099_1ad3ab8a90004772ab5e96070166f7fe23}

# struct `eventHandler` {#a00115}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` `[`callback`](#a00115_1a11a606b18789d43647a6ed580de30874) | 
`public void * `[`param`](#a00115_1a4632f18eccf72e49a46cd4da610be413) | 

## Members

#### `public `[`handler_t`](#a00047_1a7d022f28028b1ac9f960f4a7e7386cf8)` `[`callback`](#a00115_1a11a606b18789d43647a6ed580de30874) {#a00115_1a11a606b18789d43647a6ed580de30874}

#### `public void * `[`param`](#a00115_1a4632f18eccf72e49a46cd4da610be413) {#a00115_1a4632f18eccf72e49a46cd4da610be413}

# struct `LedColor` {#a00103}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public uint8_t `[`r`](#a00103_1af7fdc7ce91891f430753a3895c50ea23) | 
`public uint8_t `[`g`](#a00103_1a7865e7ea907b705cc4eff661595e4829) | 
`public uint8_t `[`b`](#a00103_1a3e9a3d5146e0fd245198bbe15736b9c2) | 

## Members

#### `public uint8_t `[`r`](#a00103_1af7fdc7ce91891f430753a3895c50ea23) {#a00103_1af7fdc7ce91891f430753a3895c50ea23}

#### `public uint8_t `[`g`](#a00103_1a7865e7ea907b705cc4eff661595e4829) {#a00103_1a7865e7ea907b705cc4eff661595e4829}

#### `public uint8_t `[`b`](#a00103_1a3e9a3d5146e0fd245198bbe15736b9c2) {#a00103_1a3e9a3d5146e0fd245198bbe15736b9c2}

# struct `RGBLed` {#a00107}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int8_t `[`r`](#a00107_1aba0c21c2204e895c77ad0d195d9a5c4a) | 
`public int8_t `[`g`](#a00107_1a8b6d0161a5ffec187ef373a0119e7b3e) | 
`public int8_t `[`b`](#a00107_1a0aa21ef2b7c693e1760062d3e38313e8) | 

## Members

#### `public int8_t `[`r`](#a00107_1aba0c21c2204e895c77ad0d195d9a5c4a) {#a00107_1aba0c21c2204e895c77ad0d195d9a5c4a}

#### `public int8_t `[`g`](#a00107_1a8b6d0161a5ffec187ef373a0119e7b3e) {#a00107_1a8b6d0161a5ffec187ef373a0119e7b3e}

#### `public int8_t `[`b`](#a00107_1a0aa21ef2b7c693e1760062d3e38313e8) {#a00107_1a0aa21ef2b7c693e1760062d3e38313e8}

# struct `Timeout` {#a00131}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`TastyState`](#a00127)` * `[`state`](#a00131_1a2f550491e1c67bd95dd373585c6707a2) | 
`public uint32_t `[`time`](#a00131_1a9d26aa704f673110774336378b01eaf2) | 

## Members

#### `public `[`TastyState`](#a00127)` * `[`state`](#a00131_1a2f550491e1c67bd95dd373585c6707a2) {#a00131_1a2f550491e1c67bd95dd373585c6707a2}

#### `public uint32_t `[`time`](#a00131_1a9d26aa704f673110774336378b01eaf2) {#a00131_1a9d26aa704f673110774336378b01eaf2}

Generated by [Moxygen](https://sourcey.com/moxygen)