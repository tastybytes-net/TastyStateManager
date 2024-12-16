<a id="md_api"></a>
# Summary



<a id="md_api_1summary"></a>






Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>class</code>[`DateEntryState`](#md_api_1a00083) | <code>class</code>[`EntryState`](#md_api_1a00087) | <code>class</code>[`TastyMenu`](#md_api_1a00123) | <code>class</code>[`TastyState`](#md_api_1a00127) | Represents a state in a Tasty menu system. <code>class</code>[`TastyStateManager`](#md_api_1a00135) | Manages the states of a Tasty application, including state transitions, timeouts, and LED control. <code>class</code>[`TextEntryState`](#md_api_1a00091) | <code>class</code>[`TimeEntryState`](#md_api_1a00095) | <code>struct</code>[`ActionFunctions`](#md_api_1a00111) | <code>struct</code>[`BlinkState`](#md_api_1a00119) | <code>struct</code>[`DateTimeObj`](#md_api_1a00099) | <code>struct</code>[`eventHandler`](#md_api_1a00115) | <code>struct</code>[`LedColor`](#md_api_1a00103) | <code>struct</code>[`RGBLed`](#md_api_1a00107) | <code>struct</code>[`Timeout`](#md_api_1a00131) |





## class 

```
class DateEntryState
  : public EntryState< DateTimeObj, DateEntryState >
```





### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public uint8_t</code>[`editIndex`](#md_api_1a00083_1ab78771c8e67355e084530606d0fa39b5) | <code>public</code>[`DateEntryState`](#md_api_1a00083_1a392a4fc68dd6370fea14e9df185f3a47)<code>(String name,</code>[`DateTimeObj`](#md_api_1a00099)<code>data,</code>`handler_t`<code>saveFn,</code>[`TastyState`](#md_api_1a00127)<code>* returnState)</code> | <code>public void</code>[`increase`](#md_api_1a00083_1ac0b1cd5e28c0d9c9229be80af390713c)<code>()</code> | <code>public void</code>[`decrease`](#md_api_1a00083_1a135b5a88b110cac5bdf3917abaf1f6af)<code>()</code> | <code>public void</code>[`adjustIndexUp`](#md_api_1a00083_1a2e506a99f316481cfb4cc82ebf8c7dd9)<code>()</code> | <code>public void</code>[`adjustIndexDown`](#md_api_1a00083_1ac299d7c5be3e0dbbe62771d3a8071c2c)<code>()</code> |




### Members

#####




##### `handler_t`




#####




#####




#####




#####




## class 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public</code>[`TastyState`](#md_api_1a00127)<code>*</code>[`state`](#md_api_1a00087_1a12cbe9558ab5262256df66ac4083b6a1) | <code>public bool</code>[`inEdit`](#md_api_1a00087_1a5a0390d30529f33b7192b5d571faf11b) | <code>public uint8_t</code>[`editIndex`](#md_api_1a00087_1ade8dfbb4a7dc66557e2e2b2c0651aa2d) | <code>public DataType</code>[`originalData`](#md_api_1a00087_1a6abebe19b450f5323555c1fe11e00045) | <code>public DataType</code>[`data`](#md_api_1a00087_1ab59b7e059f9f52e972697c61b58c59fb) | <code>public uint8_t</code>[`length`](#md_api_1a00087_1a0cc083de69e8442af50240f00338e86d) | <code>public char</code>[`editVal`](#md_api_1a00087_1a0cf0d4f4d20446fc394e3e9e8d2793b1) | <code>public</code>`handler_t`[`saveFn`](#md_api_1a00087_1a4c197fca2ff66cd2197410fdf0ba2653) | <code>public</code>[`TastyState`](#md_api_1a00127)<code>*</code>[`saveState`](#md_api_1a00087_1ab1e74c4e8e1e0673fa9aba0484ffff30) | <code>public</code>[`EntryState`](#md_api_1a00087_1aa611659439a0b30596553e9cb0ea7230)<code>(String name,uint8_t length,DataType data,</code>`handler_t`<code>saveFn,</code>[`TastyState`](#md_api_1a00127)<code>* returnState,D * ref)</code> | <code>public inline void</code>[`increase`](#md_api_1a00087_1aa084c90e0415d3dc7337b4c467084d75)<code>()</code> | <code>public inline void</code>[`decrease`](#md_api_1a00087_1a5f1ce1a14dabc884a848914dbc31ca57)<code>()</code> | <code>public void</code>[`adjustIndexUp`](#md_api_1a00087_1afe1ff3d6d1f7232fc9af7c48b08a54fe)<code>()</code> | <code>public void</code>[`adjustIndexDown`](#md_api_1a00087_1a30fa330eda96cbcd2c6a2c7d76bc6286)<code>()</code> |




### Members

#####




#####




#####




#####




#####




#####




#####




##### `handler_t`




#####




##### `handler_t`




#####




#####




#####




#####




## class 

### Summary

table {"type":"element","name":"table","attributes":{"cols":"2","rows":"4"},"children":[{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Members   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Descriptions    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123_1ac5346c062cf47b41c6c954990df0bdbf"},"children":[{"type":"text","text":"`head`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Pointer to the head state of the menu.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123"},"children":[{"type":"text","text":"`TastyMenu`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123_1af44feb296262ad6a5cebc15be559e3ec"},"children":[{"type":"text","text":"`backMenu`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Pointer to the previous menu.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public uint8_t"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123_1ad6b745dde37c335bdf5aa444e46a3ffb"},"children":[{"type":"text","text":"`length`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Number of states in the menu.   "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"}]}
<code>public</code>[`TastyMenu`](#md_api_1a00123_1af1a927f798afc5720544cf954687e52d)<code>(uint8_t len,...)</code> | <code>public void</code>[`addTimeoutToState`](#md_api_1a00123_1af61be78dc4428db44c3bd2f56bba8102)<code>(</code>[`TastyState`](#md_api_1a00127)<code>* state)</code> | Adds a timeout to a specific state. <code>public void</code>[`addNextMenuState`](#md_api_1a00123_1a1cf18ee0770c2e0705f773d44bc65a00)<code>(</code>[`TastyState`](#md_api_1a00127)<code>* existingState,</code>[`TastyState`](#md_api_1a00127)<code>* newState)</code> | Adds a new state after an existing state. <code>public void</code>[`addPreviousMenuState`](#md_api_1a00123_1a708498fb2e8c47213be38e636e4ba02c)<code>(</code>[`TastyState`](#md_api_1a00127)<code>* existingState,</code>[`TastyState`](#md_api_1a00127)<code>* newState)</code> | Adds a new state before an existing state. <code>public void</code>[`addSubmenu`](#md_api_1a00123_1a98960c9b7cad18f3c52d882c13b5c957)<code>(</code>[`TastyState`](#md_api_1a00127)<code>* existingState,</code>[`TastyMenu`](#md_api_1a00123)<code>* menu)</code> | Adds a submenu to an existing state. <code>public void</code>[`addBackMenu`](#md_api_1a00123_1aafcad30322884ff02eda904fe1b5f3a8)<code>(</code>[`TastyState`](#md_api_1a00127)<code>* existingState,</code>[`TastyMenu`](#md_api_1a00123)<code>* menu)</code> | Adds a back menu to an existing state.




### Members

##### 

Pointer to the head state of the menu.




##### 

Pointer to the previous menu.




##### 

Number of states in the menu.




#####




##### 

Adds a timeout to a specific state.





Adds a timeout to a state if not already set.





This function checks if the state has a timeout set; if not, it assigns the default menu timeout. It also sets the default timeout state if not already assigned.




##### Parameters


* <code>state</code> Pointer to the [TastyState](#md_api_1a00127) to which the timeout will be added.




##### 

Adds a new state after an existing state.




##### 

Adds a new state before an existing state.




##### 

Adds a submenu to an existing state.




##### 

Adds a back menu to an existing state.




## class 

Represents a state in a Tasty menu system.





The [TastyState](#md_api_1a00127) class encapsulates the properties and behaviors of a state in a menu system, including event handling, LED settings, and navigation between states.





### Summary

table {"type":"element","name":"table","attributes":{"cols":"2","rows":"32"},"children":[{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Members   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Descriptions    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public String"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1aeae6225a434f42af605990fae77f8624"},"children":[{"type":"text","text":"`name`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Name of the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public int8_t"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a8f505de57dc6a17af192fec5070e1958"},"children":[{"type":"text","text":"`icon`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Icon associated with the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00103"},"children":[{"type":"text","text":"`LedColor`"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1adae809684154ef4d9c99b520755e7f90"},"children":[{"type":"text","text":"`ledColor`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"LED color for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"text","text":"`BlinkSpeed`"},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1ac73467c46a7e1f8192c72b35b5433a82"},"children":[{"type":"text","text":"`ledSpeed`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"LED blink speed for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public int32_t"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a058b70cc059b1c6e8b9e2566da830f0e"},"children":[{"type":"text","text":"`timeout`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00131"},"children":[{"type":"text","text":"Timeout"}]},{"type":"text","text":" duration for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public unsigned long"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1ae7f2d16bbb0041fccff43822a4583b4c"},"children":[{"type":"text","text":"`activatedTime`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Time when the state was activated.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1aee8083a0e6ea059aeb3a1527f3d986c1"},"children":[{"type":"text","text":"`onClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a23d88336faca6009183fd1671cbaee09"},"children":[{"type":"text","text":"`onDoubleClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on double click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1aba693fde2c1924d69295b5fd7652dc2e"},"children":[{"type":"text","text":"`onLongPressState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on long press event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a9d1b7c4de4d38582d3ce4af9c0910d35"},"children":[{"type":"text","text":"`onMultiClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on multi-click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1aa3c065befcba417bb92a9f054c5da305"},"children":[{"type":"text","text":"`onUpClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on up click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a45d16f05da6a0a11b011c60903032894"},"children":[{"type":"text","text":"`onDownClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on down click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1acdbda9d91f66c1334862f4891f2421fa"},"children":[{"type":"text","text":"`onLeftClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on left click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1ae5dffc901f10445470b094483f966152"},"children":[{"type":"text","text":"`onRightClickState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on right click event.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a57f8124f783f475cf9c9855358ba3647"},"children":[{"type":"text","text":"`onTimeoutState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State to transition to on timeout.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public int8_t"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a785b5098c7503d32e1778f790b6ecc99"},"children":[{"type":"text","text":"`index`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Index of the state in the menu.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123"},"children":[{"type":"text","text":"`TastyMenu`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a5f5ab69741d09cfad3859079f0ad9804"},"children":[{"type":"text","text":"`backMenu`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Menu to go back to.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123"},"children":[{"type":"text","text":"`TastyMenu`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a540bde56a8a1bb809388900dfbc64f2d"},"children":[{"type":"text","text":"`forwardMenu`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Menu to go forward to.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00123"},"children":[{"type":"text","text":"`TastyMenu`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1af72aefe50e11699cd5c77c26fcc657fb"},"children":[{"type":"text","text":"`menu`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"The menu this state is part of.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public inline"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1af4b4821a6d528a0925b98a676d30f9e6"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"(String name,int8_t icon,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00103"},"children":[{"type":"text","text":"`LedColor`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"ledColor,"}]},{"type":"text","text":"`BlinkSpeed`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"ledSpeed,int32_t timeout,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutState)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Constructs a "},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"TastyState"}]},{"type":"text","text":" with specified parameters.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public inline"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a2691970be519cefee4db4310cac26a93"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* state,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutS)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Copy constructor for "},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"TastyState"}]},{"type":"text","text":".    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a0e1f6d069ab6a585b6c4925e55e7303d"},"children":[{"type":"text","text":"`setLEDColor`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"(int8_t r,int8_t g,int8_t b)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the LED color for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a775e3f96776ab2bbac199db75a81982e"},"children":[{"type":"text","text":"`setLEDColor`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00103"},"children":[{"type":"text","text":"`LedColor`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"color)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the LED color for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a85d4654a58ebaaafcdf99b2eae454c99"},"children":[{"type":"text","text":"`setBlinkSpeed`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"text","text":"`BlinkSpeed`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"ledSpeed)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the blink speed for the LED.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public inline int32_t"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a04d3cf48ca33fb2067c579725be7d52c"},"children":[{"type":"text","text":"`getTimeout`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"()"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Gets the timeout duration for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public inline void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a5324060bec8b475d0255833118fbe4c9"},"children":[{"type":"text","text":"`setTimeout`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"(int32_t to)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the timeout duration for the state.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a22a4b8220db87f224593b6087f8b571b"},"children":[{"type":"text","text":"`addEvents`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* clickState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* doubleClickState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* multiClickState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* longPressState)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Adds event handlers for various click events.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a0a0e3891989a702991591cc71910db52"},"children":[{"type":"text","text":"`onEvent`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"text","text":"`TastyEventType`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"type,"}]},{"type":"text","text":"`handler_t`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"fn,void * param)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Handles an event of a specific type.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public bool"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a47fc66f02437bca2d3e9794f0d34c0b3"},"children":[{"type":"text","text":"`handleEvent`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"text","text":"`TastyEventType`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"type)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Processes an event of a specific type.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public bool"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1a7176abfb3d0a7c6c9191aea28d053df1"},"children":[{"type":"text","text":"`forwardEvents`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"text","text":"`ActionFunction`"},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"fn)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Forwards events to a specified function.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127_1ae6561dd3755376d3b7092dba92d5848c"},"children":[{"type":"text","text":"`print`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"()"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Prints the state information to the console.   "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"}]}




### Members

##### 

Name of the state.




##### 

Icon associated with the state.




##### 

LED color for the state.




##### `BlinkSpeed`

LED blink speed for the state.




##### 

[Timeout](#md_api_1a00131) duration for the state.




##### 

Time when the state was activated.




##### 

State to transition to on click event.




##### 

State to transition to on double click event.




##### 

State to transition to on long press event.




##### 

State to transition to on multi-click event.




##### 

State to transition to on up click event.




##### 

State to transition to on down click event.




##### 

State to transition to on left click event.




##### 

State to transition to on right click event.




##### 

State to transition to on timeout.




##### 

Index of the state in the menu.




##### 

Menu to go back to.




##### 

Menu to go forward to.




##### 

The menu this state is part of.




##### `BlinkSpeed`

Constructs a [TastyState](#md_api_1a00127) with specified parameters.




##### Parameters


* <code>name</code> The name of the state.

* <code>icon</code> The icon associated with the state (default is -1).

* <code>ledColor</code> The LED color for the state (default is black).

* <code>ledSpeed</code> The LED blink speed for the state (default is off).

* <code>timeout</code> The timeout duration for the state (default is 0).

* <code>timeoutState</code> The state to transition to on timeout (default is nullptr).




##### 

Copy constructor for [TastyState](#md_api_1a00127).




##### Parameters


* <code>state</code> The state to copy from.

* <code>timeoutS</code> The state to transition to on timeout (default is nullptr).




##### 

Sets the LED color for the state.





Sets the LED color.




##### Parameters


* <code>r</code> Red component of the color.

* <code>g</code> Green component of the color.

* <code>b</code> Blue component of the color.

* <code>r</code> Red component (0-255)

* <code>g</code> Green component (0-255)

* <code>b</code> Blue component (0-255)




##### 

Sets the LED color for the state.





Sets the LED color.




##### Parameters


* <code>color</code> The [LedColor](#md_api_1a00103) structure containing the RGB values to set the LED.

* <code>color</code> [LedColor](#md_api_1a00103) to set




##### `BlinkSpeed`

Sets the blink speed for the LED.




##### Parameters


* <code>ledSpeed</code> The blink speed to set.

* <code>ledSpeed</code> The desired blink speed.




##### 

Gets the timeout duration for the state.




##### Returns

The timeout duration in milliseconds.




##### 

Sets the timeout duration for the state.




##### Parameters


* <code>to</code> The timeout duration in milliseconds.




##### 

Adds event handlers for various click events.





Adds event states for various button actions.




##### Parameters


* <code>clickState</code> State to transition to on click event.

* <code>doubleClickState</code> State to transition to on double click event (default is nullptr).

* <code>multiClickState</code> State to transition to on multi-click event (default is nullptr).

* <code>longPressState</code> State to transition to on long press event (default is nullptr).

* <code>clickState</code> State for single click event.

* <code>doubleClickState</code> State for double click event.

* <code>multiClickState</code> State for multiple clicks event.

* <code>longPressState</code> State for long press event.




##### `TastyEventType``handler_t`

Handles an event of a specific type.





Registers an event handler for a specific event type.




##### Parameters


* <code>type</code> The type of the event to handle.

* <code>fn</code> The handler function to call.

* <code>param</code> Optional parameter to pass to the handler (default is T()).

* <code>t</code> The type of event to handle.

* <code>fn</code> The callback function to execute on the event.

* <code>param</code> Additional parameter to pass to the callback function.




##### `TastyEventType`

Processes an event of a specific type.





Handles an event of a specific type.




##### Parameters


* <code>type</code> The type of the event to process.




##### Returns

True if the event was handled, false otherwise.




##### Parameters


* <code>type</code> The type of event to handle.




##### Returns

true if the event was handled successfully, false otherwise.




##### `ActionFunction`

Forwards events to a specified function.




##### Parameters


* <code>fn</code> The function to forward events to.




##### Returns

True if events were successfully forwarded, false otherwise.




##### 

Prints the state information to the console.





Prints the current state information to the debug log.




## class 

Manages the states of a Tasty application, including state transitions, timeouts, and LED control.





Manages the state of a system with timeout and LED control.





The [TastyStateManager](#md_api_1a00135) is a singleton class that handles the management of different states in a Tasty application. It allows for setting a default state, managing timeouts, and controlling LED indicators based on the current state. The class provides methods to initialize the state manager, set up states, and handle state transitions.





The state manager can be configured with a default state that the application will revert to after a timeout, as well as an intermediary timeout state that can be used for temporary changes during state transitions. Additionally, it supports both single-color and RGB LED configurations to provide visual feedback based on the current state.





Example usage:





```
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





The [TastyStateManager](#md_api_1a00135) class is responsible for handling different states of a system, managing transitions between states based on events, and controlling an LED based on the current state. It uses a timer to manage state timeouts and LED blinking.





Example usage: ```
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





### Summary

table {"type":"element","name":"table","attributes":{"cols":"2","rows":"17"},"children":[{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Members   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"yes"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Descriptions    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1ab160bd8e3a9eab7a49a22abd62a9aa92"},"children":[{"type":"text","text":"`activeState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"The active state    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a886583ece83b83af5664175b4b69b467"},"children":[{"type":"text","text":"`lastState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"The previous state    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1af91fda0fb60771cedc6bb58b4bede2ca"},"children":[{"type":"text","text":"`defaultState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"The default state, state manager will revert back to this after timeouts    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"*"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a838ab01d3eb7cbd773dd149a04d03bbc"},"children":[{"type":"text","text":"`defaultTimeoutState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Intermediary state for making changes during timeouts    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00119"},"children":[{"type":"text","text":"`BlinkState`"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1ae1cc0a1352b4ab3879bb955b193051f7"},"children":[{"type":"text","text":"`ledState`"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"State of the RGB LED    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a3183cd2eb4130d6f6eb1490377d8ab25"},"children":[{"type":"text","text":"`setDefaultState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* state)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the default state for the state manager.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1aa6a988312c124a1a62b60be530bb1ed9"},"children":[{"type":"text","text":"`setTimeoutState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* state)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the timeout state for the state manager.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1aee65ab923df273d420fe2f9f90dc0a1d"},"children":[{"type":"text","text":"`setupLed`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"(int8_t ledPin)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets up the LED with a single pin.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1ab0584f33048b2d3d9329a4b8aad4f740"},"children":[{"type":"text","text":"`setupLed`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"(int8_t ledR,int8_t ledG,int8_t ledB)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets up the RGB LED with separate pins for R, G, and B.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1abaf7b5b31f6e0d78848f6bc66d01be58"},"children":[{"type":"text","text":"`setupDefaultStates`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* defaultS,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutS)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets up the default states for the state manager.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a33b3abd2985f71a565e9e8473e4b0988"},"children":[{"type":"text","text":"`begin`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* defaultState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutState,int8_t ledPin)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Initializes the state manager with default and timeout states.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a80b939cc05e2c0be11378e604ebad9c3"},"children":[{"type":"text","text":"`begin`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* defaultState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00107"},"children":[{"type":"text","text":"`RGBLed`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"ledPin)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Initializes the state manager with RGB LED pins.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a7487c7ecb35040b534c027b1c7caafa3"},"children":[{"type":"text","text":"`begin`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* defaultState,"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* timeoutState)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Initializes the state manager with default states only.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a30286d39586b39907c8845ed1910d59f"},"children":[{"type":"text","text":"`tick`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"()"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Updates the state manager and applies LED settings.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1a7244cd5222700b7222f7d3d95813cfd8"},"children":[{"type":"text","text":"`setState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"("}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00127"},"children":[{"type":"text","text":"`TastyState`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"* nextState)"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the next state for the state manager.    "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"},{"type":"element","name":"row","attributes":{},"children":[{"type":"text","text":"\n"},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"public void"}]},{"type":"element","name":"ref","attributes":{"kindref":"member","refid":"md_api_1a00135_1ab61f008c341fbc52e53584a912e34a57"},"children":[{"type":"text","text":"`setTimeoutTask`"}]},{"type":"element","name":"computeroutput","attributes":{},"children":[{"type":"text","text":"()"}]},{"type":"text","text":"   "}]},{"type":"text","text":"\n"}]},{"type":"element","name":"entry","attributes":{"thead":"no"},"children":[{"type":"element","name":"para","attributes":{},"children":[{"type":"text","text":"Sets the timeout task for the current state.   "}]},{"type":"text","text":"\n"}]}]},{"type":"text","text":"\n"}]}




### Members

##### 

The active state




##### 

The previous state




##### 

The default state, state manager will revert back to this after timeouts




##### 

Intermediary state for making changes during timeouts




##### 

State of the RGB LED




##### 

Sets the default state for the state manager.





Set the default state for the manager.




##### Parameters


* <code>state</code> Pointer to the [TastyState](#md_api_1a00127) to set as the default state.

* <code>state</code> Pointer to the state to be set as default.




##### 

Sets the timeout state for the state manager.





Set the state that will be an intermediary between "active state" and "default state" when it times out.




##### Parameters


* <code>state</code> Pointer to the [TastyState](#md_api_1a00127) to set as the timeout state.

* <code>state</code> Pointer to the state to be set as timeout.




##### 

Sets up the LED with a single pin.





Setup the LED with a single pin.




##### Parameters


* <code>ledPin</code> The pin number for the LED.

* <code>ledPin</code> The pin number for the LED.




##### 

Sets up the RGB LED with separate pins for R, G, and B.





Setup the RGB LED with separate pins for red, green, and blue.




##### Parameters


* <code>ledR</code> The pin number for the red LED.

* <code>ledG</code> The pin number for the green LED.

* <code>ledB</code> The pin number for the blue LED.

* <code>ledR</code> The pin number for the red LED.

* <code>ledG</code> The pin number for the green LED.

* <code>ledB</code> The pin number for the blue LED.




##### 

Sets up the default states for the state manager.





Setup the default states for the manager.




##### Parameters


* <code>defaultS</code> Pointer to the default [TastyState](#md_api_1a00127).

* <code>timeoutS</code> Pointer to the timeout [TastyState](#md_api_1a00127).

* <code>defaultS</code> Pointer to the default state.

* <code>timeoutS</code> Pointer to the timeout state.




##### 

Initializes the state manager with default and timeout states.





Start the library with optional parameters for default and timeout states and LED configuration.




##### Parameters


* <code>defaultState</code> Pointer to the default [TastyState](#md_api_1a00127).

* <code>timeoutState</code> Pointer to the timeout [TastyState](#md_api_1a00127).

* <code>ledPin</code> The pin number for the LED (optional).

* <code>defaultS</code> Pointer to the default state.

* <code>timeoutS</code> Pointer to the timeout state.

* <code>ledPin</code> The pin number for the LED.




##### 

Initializes the state manager with RGB LED pins.





Start the library with RGB LED configuration.




##### Parameters


* <code>defaultState</code> Pointer to the default [TastyState](#md_api_1a00127).

* <code>timeoutState</code> Pointer to the timeout [TastyState](#md_api_1a00127).

* <code>ledPin</code> [RGBLed](#md_api_1a00107) structure for LED configuration.

* <code>defaultS</code> Pointer to the default state.

* <code>timeoutS</code> Pointer to the timeout state.

* <code>ledPin</code> [RGBLed](#md_api_1a00107) structure containing pin numbers for R, G, and B.




##### 

Initializes the state manager with default states only.





Start the library with default states only.




##### Parameters


* <code>defaultState</code> Pointer to the default [TastyState](#md_api_1a00127).

* <code>timeoutState</code> Pointer to the timeout [TastyState](#md_api_1a00127).

* <code>defaultS</code> Pointer to the default state.

* <code>timeoutS</code> Pointer to the timeout state.




##### 

Updates the state manager and applies LED settings.





Main loop function to be called repeatedly.





This method should be called periodically to update the state manager and apply any LED changes.




##### 

Sets the next state for the state manager.





Set the next state for the state manager.




##### Parameters


* <code>nextState</code> Pointer to the [TastyState](#md_api_1a00127) to transition to. Defaults to the current timeout state.

* <code>nextState</code> Pointer to the state to transition to.




##### 

Sets the timeout task for the current state.





Set the timeout task for the state manager.





This method configures the timeout for the current active state.




## class 

```
class TextEntryState
  : public EntryState< String, TextEntryState >
```





### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public bool</code>[`caseSensitive`](#md_api_1a00091_1af0538f05d59c9aefb2870e54bccfd5c2) | <code>public</code>[`TextEntryState`](#md_api_1a00091_1ab863f8b2aabc0839bd1ef34b63fe7ae5)<code>(String name,uint8_t length,String data,</code>`handler_t`<code>saveFn,</code>[`TastyState`](#md_api_1a00127)<code>* returnState,bool caseSensitive)</code> | <code>public void</code>[`increase`](#md_api_1a00091_1a820e5717a8a772737fc33d0ba59c5244)<code>()</code> | <code>public void</code>[`decrease`](#md_api_1a00091_1a81062a6d23420b68b8d2e1df25a38db8)<code>()</code> | <code>public void</code>[`adjustIndexUp`](#md_api_1a00091_1ac38ac0d60008993e4852aebc28ef0f8c)<code>()</code> | <code>public void</code>[`adjustIndexDown`](#md_api_1a00091_1a147cea6ed8fb9087dacb83488b8cb847)<code>()</code> |




### Members

#####




##### `handler_t`




#####




#####




#####




#####




## class 

```
class TimeEntryState
  : public EntryState< DateTimeObj, TimeEntryState >
```





### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public uint8_t</code>[`editIndex`](#md_api_1a00095_1aae3a3fc32564415ded82fd174aedcc72) | <code>public</code>[`TimeEntryState`](#md_api_1a00095_1ad2d44121be48d76272c0e2d0129c9092)<code>(String name,</code>[`DateTimeObj`](#md_api_1a00099)<code>data,</code>`handler_t`<code>saveFn,</code>[`TastyState`](#md_api_1a00127)<code>* returnState)</code> | <code>public void</code>[`increase`](#md_api_1a00095_1a319d9a3e6cf14370df7864b8d20504ba)<code>()</code> | <code>public void</code>[`decrease`](#md_api_1a00095_1a0c6e6e0fc8f9cdf0dd99651d33a95314)<code>()</code> | <code>public void</code>[`adjustIndexUp`](#md_api_1a00095_1a08e46de9922ebf276fce0a8bd15034a0)<code>()</code> | <code>public void</code>[`adjustIndexDown`](#md_api_1a00095_1a19250e67381c972e8ebcf39270669513)<code>()</code> |




### Members

#####




##### `handler_t`




#####




#####




#####




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public</code>`ActionFunction`[`onEnter`](#md_api_1a00111_1aa1d763455a783f3e8f045bb2d28804a1) | <code>public</code>`ActionFunction`[`onTick`](#md_api_1a00111_1ab26a16b246f3d63e4a9da72a27df52ac) | <code>public</code>`ActionFunction`[`onLeave`](#md_api_1a00111_1a2a3bec4b74edb746eec094a1f03797a9) |




### Members

##### `ActionFunction`




##### `ActionFunction`




##### `ActionFunction`




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public unsigned long</code>[`onTime`](#md_api_1a00119_1aa3515ef5cfb4e5facc706f1bbbf4ebeb) | <code>public unsigned long</code>[`offTime`](#md_api_1a00119_1a2232dcf65ff7a1e66949fc74912a7944) | <code>public bool</code>[`on`](#md_api_1a00119_1a8bcd5077d3f7eaa496182eb28a11de08) | <code>public</code>`BlinkSpeed`[`speed`](#md_api_1a00119_1a1cf301b52710db837e5528f95754b87d) | <code>public bool</code>[`blinking`](#md_api_1a00119_1a861a0e87655215aac27967229a2b9961) | <code>public</code>[`LedColor`](#md_api_1a00103)[`color`](#md_api_1a00119_1a879bd6af1d307b803196281238cf7b99) |




### Members

#####




#####




#####




##### `BlinkSpeed`




#####




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public uint8_t</code>[`hour`](#md_api_1a00099_1af6ef99520227bf0e716a75b93fd2d328) | <code>public uint8_t</code>[`minute`](#md_api_1a00099_1a9d7086a3414ad482ab902f04daf31caa) | <code>public uint8_t</code>[`second`](#md_api_1a00099_1a00cb6264c4122aebc8f46bf314e67f08) | <code>public uint8_t</code>[`month`](#md_api_1a00099_1a26f953e8a99b87cadf118cfdc6134243) | <code>public uint8_t</code>[`day`](#md_api_1a00099_1ad8c9a4205f95289a7c5839e277da4548) | <code>public uint16_t</code>[`year`](#md_api_1a00099_1ad3ab8a90004772ab5e96070166f7fe23) |




### Members

#####




#####




#####




#####




#####




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public</code>`handler_t`[`callback`](#md_api_1a00115_1a11a606b18789d43647a6ed580de30874) | <code>public void *</code>[`param`](#md_api_1a00115_1a4632f18eccf72e49a46cd4da610be413) |




### Members

##### `handler_t`




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public uint8_t</code>[`r`](#md_api_1a00103_1af7fdc7ce91891f430753a3895c50ea23) | <code>public uint8_t</code>[`g`](#md_api_1a00103_1a7865e7ea907b705cc4eff661595e4829) | <code>public uint8_t</code>[`b`](#md_api_1a00103_1a3e9a3d5146e0fd245198bbe15736b9c2) |




### Members

#####




#####




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public int8_t</code>[`r`](#md_api_1a00107_1aba0c21c2204e895c77ad0d195d9a5c4a) | <code>public int8_t</code>[`g`](#md_api_1a00107_1a8b6d0161a5ffec187ef373a0119e7b3e) | <code>public int8_t</code>[`b`](#md_api_1a00107_1a0aa21ef2b7c693e1760062d3e38313e8) |




### Members

#####




#####




#####




## struct 

### Summary

Members | Descriptions <br/>
 -----------------------------&mdash|------------------------------------------&mdash <code>public</code>[`TastyState`](#md_api_1a00127)<code>*</code>[`state`](#md_api_1a00131_1a2f550491e1c67bd95dd373585c6707a2) | <code>public uint32_t</code>[`time`](#md_api_1a00131_1a9d26aa704f673110774336378b01eaf2) |




### Members

#####




##### 

Generated by [Moxygen](https://sourcey.com/moxygen)

**TODO**:

* location {"type":"element","name":"location","attributes":{"file":"api.md"},"children":[]}

[public]: https://img.shields.io/badge/-public-brightgreen (public)
[C++]: https://img.shields.io/badge/language-C%2B%2B-blue (C++)
[static]: https://img.shields.io/badge/-static-lightgrey (static)
[private]: https://img.shields.io/badge/-private-red (private)
[Markdown]: https://img.shields.io/badge/language-Markdown-blue (Markdown)