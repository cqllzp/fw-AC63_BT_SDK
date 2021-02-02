//
// gatt profile include file, generated by jieli gatt_inc_generator.exe
//

const uint8_t profile_data[] = 
{
    //////////////////////////////////////////////////////
    //
    // 0x0001 PRIMARY_SERVICE  0x1800
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18,

     /* CHARACTERISTIC,  2A00, READ | DYNAMIC, */
    // 0x0002 CHARACTERISTIC 2A00 READ | DYNAMIC 
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a,
    // 0x0003 VALUE 2A00 READ | DYNAMIC  
    0x08, 0x00, 0x02, 0x01, 0x03, 0x00, 0x00, 0x2a,

    //////////////////////////////////////////////////////
    //
    // 0x0004 PRIMARY_SERVICE  FF00
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x00, 0xff,

     /* CHARACTERISTIC,  FF01, READ | DYNAMIC, */
    // 0x0005 CHARACTERISTIC FF01 READ | DYNAMIC 
    0x0d, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x02, 0x06, 0x00, 0x01, 0xff,
    // 0x0006 VALUE FF01 READ | DYNAMIC  
    0x08, 0x00, 0x02, 0x01, 0x06, 0x00, 0x01, 0xff,

     /* CHARACTERISTIC,  FF02, READ | WRITE | DYNAMIC, */
    // 0x0007 CHARACTERISTIC FF02 READ | WRITE | DYNAMIC 
    0x0d, 0x00, 0x02, 0x00, 0x07, 0x00, 0x03, 0x28, 0x0a, 0x08, 0x00, 0x02, 0xff,
    // 0x0008 VALUE FF02 READ | WRITE | DYNAMIC  
    0x08, 0x00, 0x0a, 0x01, 0x08, 0x00, 0x02, 0xff,

     /* CHARACTERISTIC,  FF03, NOTIFY, */
    // 0x0009 CHARACTERISTIC FF03 NOTIFY 
    0x0d, 0x00, 0x02, 0x00, 0x09, 0x00, 0x03, 0x28, 0x10, 0x0a, 0x00, 0x03, 0xff,
    // 0x000a VALUE FF03 NOTIFY  
    0x08, 0x00, 0x10, 0x00, 0x0a, 0x00, 0x03, 0xff,
    // 0x000b CLIENT_CHARACTERISTIC_CONFIGURATION 
    0x0a, 0x00, 0x0a, 0x01, 0x0b, 0x00, 0x02, 0x29, 0x00, 0x00,

    // END
    0x00, 0x00, 
}; 
//
// characteristics <--> handles
//
#define ATT_CHARACTERISTIC_2A00_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_FF01_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_FF02_01_VALUE_HANDLE 0x0008
#define ATT_CHARACTERISTIC_FF03_01_VALUE_HANDLE 0x000a
#define ATT_CHARACTERISTIC_FF03_01_CLIENT_CONFIGURATION_HANDLE 0x000b
