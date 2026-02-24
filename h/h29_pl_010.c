section "h29_pl_010"{
    int var0;
    var0 = System_GlobalWork(2, 1);
    switch (var0){
        case 0:
        break ;
        case 1:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M1", 0);
        break ;
        case 2:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M2", 0);
        break ;
        case 3:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M3", 0);
        break ;
        case 4:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M4", 0);
        break ;
        case 5:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M5", 0);
        break ;
        case 6:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M6", 0);
        break ;
        case 7:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M7", 0);
        break ;
        case 8:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("H2A", "M8", 0);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_GlobalWork(2, 0, 0);
    }
