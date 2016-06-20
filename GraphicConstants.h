#ifndef GRAPHICS_CONSTANTS_H

#define GRAPHICS_CONSTANTS_H

/*SYSTEM WIDE GRAPHIC SPECS*/
enum  Universal		{CENTER_SCREEN = 120, PADDING_SPACE = 20, CHARACTER_WIDTH = 6, SMALL_PAD = 5};

/*MAIN MENU SPECS*/
enum  MainMenu
{
    WIDTH = 210,
    HEIGHT =50,
    LEFT = (CENTER_SCREEN - (WIDTH/2)),
    RIGHT = LEFT+WIDTH,
    BUTTON_1_UPPER = PADDING_SPACE

};

enum MessageSizing
{
    TXT_BOX_HEIGHT = 320,
    TXT_BOX_WIDTH = 240
};

enum probeButtons
{
    PROBE_BUTTON_WIDTH = 40,
    PROBE_BUTTON_HEIGHT = 40,
    PROBE_PADDING = 5,
    PROBE_BUTTON_HEIGHT_OFFSET = 35,
    AMBIENT_BUTTON_WIDTH = 100,
    AMBIENT_BUTTON_LEFT = CENTER_SCREEN - (AMBIENT_BUTTON_WIDTH/2),
    AMBIENT_BUTTON_HEIGHT_OFFSET = 80
};

enum doneButton{
    DONE_BUTTON_HEIGHT_OFFSET = 225,
    DONE_BUTTON_HEIGHT = 65,
    DONE_BUTTON_LEFT = SMALL_PAD,
    DONE_BUTTON_WIDTH = 120
};


enum temperatureBox {
    TEMP_BOX_WIDTH = 240,
    TEMP_BOX_HEIGHT = 60,
    TEMP_BOX_VERT_ALIGN = 120


};

enum itemSelection
{
    ITEM_SELECT_NUMBER_SHOWN = 3,
    ITEM_SELECT_BUTTON_HEIGHT = 40,
    ITEM_SELECT_BUTTON_WIDTH = 210,
    ITEM_SELECT_BUTTON_OFFSET = 50,


    OK_CXL_BUTTON_WIDTH = 120,
    OK_BUTTON_LEFT = SMALL_PAD,
    CXL_BUTTON_LEFT = SMALL_PAD,

    OK_BUTTON_HEIGHT = 30,
    OK_BUTTON_HEIGHT_OFFSET = 225,
    CXL_BUTTON_HEIGHT_OFFSET = 260,


    SCROLL_BUTTON_WIDTH = 120,
    SCROLL_UP_LEFT = 130,
    SCROLL_DN_LEFT =130,
    SCROLL_BUTTON_HEIGHT = 30,
    SCROLL_UP_HEIGHT_OFFSET = 225,
    SCROLL_DN_HEIGHT_OFFSET = 260,
};


enum employeeSelect	{
        NUMBER_EMPLOYEE_NAMES_SHOWN = 4,
        EMPLOYEE_LIST_OFFSET = 20,
        EMPLOYEE_BUTTON_HEIGHT = 40,
        EMPLOYEE_BUTTON_WIDTH = 210

                    };

#endif