section "h45_pl_010"{
    int var0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    switch (var0){
        case 0:
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        break ;
        case 1:
        System_Call_GS2("H46", "M1", 0);
        break ;
        case 2:
        System_Call_GS2("H46", "M2", 0);
        break ;
        case 3:
        System_Call_GS2("H46", "M3", 0);
        break ;
        case 4:
        System_Call_GS2("H46", "M4", 0);
        break ;
        case 5:
        System_Call_GS2("H46", "M5", 0);
        break ;
        case 6:
        System_Call_GS2("H46", "M6", 0);
        break ;
        case 7:
        System_Call_GS2("H46", "M7", 0);
        break ;
        case 8:
        System_Call_GS2("H46", "M8", 0);
        break ;
        }
    }
